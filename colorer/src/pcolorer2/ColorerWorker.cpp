#include "ColorerWorker.h"
#include "colorer/common/Logger.h"
#include "pcolorer.h"

ColorerWorker::ColorerWorker()
{
  // создаем поток сразу, но он не обрабатывает ничего, ждет команды
  worker_thread = std::thread(&ColorerWorker::thread_loop, this);
}

ColorerWorker::~ColorerWorker()
{
  {
    std::unique_lock lock(mtx);
    stop_flag = true;
  }
  // Пробуждаем оба типа ожидания
  task_cv.notify_all();
  data_cv.notify_all();
  if (worker_thread.joinable()) {
    worker_thread.join();
  }
}

void ColorerWorker::set_file_options(int screen_start, int screen_size, int line_counts)
{
  std::unique_lock lock(mtx);
  COLORER_LOG_WARN("[ColorerWorker] Получены новые свойства файла: %, %, %", screen_start, screen_size,
                   line_counts);
  this->screen_start = screen_start;
  this->screen_size = screen_size;
  this->line_counts = line_counts;

  // has_new_task = true;
  // task_cv.notify_one();
}

void ColorerWorker::start_validation(int invalid_line)
{
  std::unique_lock lock(mtx);
  COLORER_LOG_WARN("[ColorerWorker] Получена новая задача: начать с %, но валидная строка %", invalid_line, valid_line);
  this->valid_line = std::min(valid_line, invalid_line - 1);

  has_new_task = true;
  // Очищаем старый буфер от предыдущей задачи
  processed_data.resize(valid_line+1);
  internal_buffer.clear();
  buffer_start_line = -1;
  task_cv.notify_one();
}

void ColorerWorker::push_data(std::vector<uUnicodeString>& data, int start_position)
{
  std::unique_lock lock(mtx);
  COLORER_LOG_WARN("[ColorerWorker] Получил % новых строк. С позиции %.", data.size(), start_position);
  this->buffer_start_line = start_position;
  internal_buffer.clear();
  internal_buffer.swap(data);

  data_needed = false;   // Сбрасываем флаг запроса
  data_cv.notify_one();  // Будим поток validate, если он ждал данных
}
std::vector<int> ColorerWorker::get_processed_data()
{
  std::unique_lock lock(mtx);
  std::vector<int> results;
  results.resize(processed_data.size());
  std::copy(processed_data.begin(), processed_data.end() , results.begin());
  return results;
}

void ColorerWorker::thread_loop()
{
  while (true) {
    std::unique_lock lock(mtx);
    // ждем команды на старт работы, либо на отмену
    task_cv.wait(lock, [this] { return stop_flag || has_new_task; });

    if (stop_flag)
      return;

    if (has_new_task) {
      has_new_task = false;

      lock.unlock();
      // запускаем основную операцию
      validate();
    }
  }
}

void ColorerWorker::validate()
{
  COLORER_LOG_WARN("[Thread] Начало валидации строк, начиная с %",valid_line + 1 );
  for (int i = valid_line + 1; i < line_counts; ++i) {
    {
      std::unique_lock lock(mtx);
      if (stop_flag || has_new_task) {
        COLORER_LOG_WARN("[Thread] Валидация прервана новой задачей или остановкой.");
        break;
      }
    }

    auto line = getLine(i);
    //COLORER_LOG_WARN("[Thread] line %: %", i, *line);

    std::this_thread::sleep_for(std::chrono::milliseconds(2));
    {
      std::unique_lock lock(mtx);
      processed_data.push_back(i);
      valid_line++;
    }
  }
  COLORER_LOG_WARN("[Thread] Валидация завершена.");
}

UnicodeString* ColorerWorker::getLine(size_t lno)
{
  std::unique_lock lock(mtx);
  while ((internal_buffer.empty()) || (buffer_start_line + internal_buffer.size() <= lno)) {
    COLORER_LOG_WARN("[Thread] в буфере нет строки %. Запрашиваю данные...", lno);
    data_needed = true;
    Info.AdvControl(Info.ModuleNumber, ACTL_SYNCHRO, &lno, nullptr);

    // Ждем, пока FarEditor не протолкнет данные или не придет команда на остановку
    data_cv.wait(lock, [this] { return !data_needed || stop_flag || has_new_task; });

    // Если проснулись из-за остановки, а не из-за данных
    if (stop_flag || has_new_task) {
      return nullptr;
    }
  }

  auto line = internal_buffer.at(lno - buffer_start_line).get();
  return line;
}
