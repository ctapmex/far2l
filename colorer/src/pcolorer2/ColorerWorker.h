#ifndef FAR2L_COLORERWORKER_H
#define FAR2L_COLORERWORKER_H
#include <condition_variable>
#include <mutex>
#include <thread>
#include <vector>
#include "colorer/Common.h"
#include "colorer/LineSource.h"

class ColorerWorker: public LineSource
{
public:
  ColorerWorker();
  ~ColorerWorker() override;
  void start_validation(int invalid_line);
  void push_data(std::vector<uUnicodeString>& data, int start_position);
  std::vector<int> get_processed_data();
  UnicodeString* getLine(size_t lno) override;

  void set_file_options(int screen_start, int screen_size, int line_counts);
  std::condition_variable& get_data_cv() { return data_cv; }
private:

  void thread_loop();
  void validate();

  std::thread worker_thread;

  // Ресурсы для синхронизации
  std::mutex mtx;
  std::condition_variable task_cv; // для новых задач
  std::condition_variable data_cv; // для запроса/поставки данных

  // Состояние
  bool stop_flag = false;
  bool has_new_task = false;
  bool data_needed = false;

  int buffer_start_line = 0;
  int valid_line = -1;
  int screen_size = 0;
  int screen_start = 0;
  int line_counts = 0;

  std::vector<uUnicodeString> internal_buffer;
  std::vector<int> processed_data;
};

#endif  // FAR2L_COLORERWORKER_H
