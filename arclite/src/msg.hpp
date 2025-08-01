﻿enum
{
	MSG_LANG,
	MSG_PLUGIN_NAME,
	MSG_EXTRACT_DLG_TITLE,
	MSG_EXTRACT_DLG_DST_DIR,
	MSG_EXTRACT_DLG_IGNORE_ERRORS,
	MSG_EXTRACT_DLG_EXTRACT_ACCESS_RIGHTS,
	MSG_EXTRACT_DLG_EXTRACT_OWNER_GROUPS,
	MSG_EXTRACT_DLG_EXTRACT_ATTRIBUTES,
	MSG_EXTRACT_DLG_OA,
	MSG_EXTRACT_DLG_OA_ASK,
	MSG_EXTRACT_DLG_OA_OVERWRITE,
	MSG_EXTRACT_DLG_OA_SKIP,
	MSG_EXTRACT_DLG_OA_RENAME,
	MSG_EXTRACT_DLG_OA_APPEND,
	MSG_EXTRACT_DLG_MOVE_FILES,
	MSG_EXTRACT_DLG_PASSWORD,
	MSG_EXTRACT_DLG_SEPARATE_DIR,
	MSG_EXTRACT_DLG_DELETE_ARCHIVE,
	MSG_EXTRACT_DLG_OPEN_DIR,
	MSG_EXTRACT_DLG_SAVE_PARAMS,
	MSG_EXTRACT_DLG_PARAMS_SAVED,
	MSG_UPDATE_DLG_TITLE,
	MSG_UPDATE_DLG_TITLE_CREATE,
	MSG_UPDATE_DLG_PROFILE,
	MSG_UPDATE_DLG_SAVE_PROFILE,
	MSG_UPDATE_DLG_DELETE_PROFILE,
	MSG_UPDATE_DLG_ARC_PATH,
	MSG_UPDATE_DLG_ARC_PATH_EVAL,
	MSG_UPDATE_DLG_APPEND_EXT,
	MSG_UPDATE_DLG_ARC_TYPE,
	MSG_UPDATE_DLG_ARC_TYPE_OTHER,
	MSG_UPDATE_DLG_LEVEL,
	MSG_UPDATE_DLG_METHOD,
	MSG_UPDATE_DLG_PROCESS_PRIORITY,
	MSG_UPDATE_DLG_PROCESS_PRIORITY_LOW,
	MSG_UPDATE_DLG_PROCESS_PRIORITY_BELOW_NORMAL,
	MSG_UPDATE_DLG_PROCESS_PRIORITY_NORMAL,
	MSG_UPDATE_DLG_PROCESS_PRIORITY_ABOVE_NORMAL,
	MSG_UPDATE_DLG_PROCESS_PRIORITY_HIGH,
	MSG_UPDATE_DLG_MULTITHREADING,
	MSG_UPDATE_DLG_SOLID,
	MSG_UPDATE_DLG_ADVANCED,
	MSG_UPDATE_DLG_ENCRYPT,
	MSG_UPDATE_DLG_SHOW_PASSWORD,
	MSG_UPDATE_DLG_PASSWORD,
	MSG_UPDATE_DLG_PASSWORD2,
	MSG_UPDATE_DLG_ENCRYPT_HEADER,
	MSG_UPDATE_DLG_CREATE_SFX,
	MSG_UPDATE_DLG_SFX_OPTIONS,
	MSG_UPDATE_DLG_ENABLE_VOLUMES,
	MSG_UPDATE_DLG_VOLUME_SIZE,
	MSG_UPDATE_DLG_SYMLINKS,
	MSG_UPDATE_DLG_SYMCOMBO_ARCHIVE_SYMLINKS,
	MSG_UPDATE_DLG_SYMCOMBO_ARCHIVE_FILES,
	MSG_UPDATE_DLG_SYMCOMBO_SKIP_SYMLINKS,
	MSG_UPDATE_DLG_SYMLINK_PATHS,
	MSG_UPDATE_DLG_SYMLINK_PATHS_AS_IS,
	MSG_UPDATE_DLG_SYMLINK_PATHS_ABSOLUTE,
	MSG_UPDATE_DLG_SYMLINK_PATHS_RELATIVE,
	MSG_UPDATE_DLG_MOVE_FILES,
	MSG_UPDATE_DLG_OPEN_SHARED,
	MSG_UPDATE_DLG_IGNORE_ERRORS,
	MSG_UPDATE_DLG_OA,
	MSG_UPDATE_DLG_OA_ASK,
	MSG_UPDATE_DLG_OA_OVERWRITE,
	MSG_UPDATE_DLG_OA_SKIP,
	MSG_UPDATE_DLG_ENABLE_FILTER,
	MSG_UPDATE_DLG_WRONG_ARC_TYPE,
	MSG_UPDATE_DLG_WRONG_LEVEL,
	MSG_UPDATE_DLG_WRONG_METHOD,
	MSG_UPDATE_DLG_PASSWORDS_DONT_MATCH,
	MSG_UPDATE_DLG_PASSWORD_IS_EMPTY,
	MSG_UPDATE_DLG_WRONG_VOLUME_SIZE,
	MSG_UPDATE_DLG_CONFIRM_OVERWRITE,
	MSG_UPDATE_DLG_INPUT_PROFILE_NAME,
	MSG_UPDATE_DLG_CONFIRM_PROFILE_DELETE,
	MSG_UPDATE_DLG_SFX_NO_PPMD,
	MSG_UPDATE_DLG_SFX_NO_ENCRYPT,
	MSG_UPDATE_DLG_SAVE_PARAMS,
	MSG_UPDATE_DLG_PARAMS_SAVED,
	MSG_UPDATE_DLG_USE_EXPORT,
	MSG_UPDATE_DLG_EXPORT_SETTINGS,
	MSG_COMPRESSION_ARCHIVE_7Z,
	MSG_COMPRESSION_ARCHIVE_ZIP,
	MSG_COMPRESSION_LEVEL_STORE,
	MSG_COMPRESSION_LEVEL_FASTEST,
	MSG_COMPRESSION_LEVEL_FAST,
	MSG_COMPRESSION_LEVEL_NORMAL,
	MSG_COMPRESSION_LEVEL_MAXIMUM,
	MSG_COMPRESSION_LEVEL_ULTRA,
	MSG_COMPRESSION_METHOD_DEFAULT,
	MSG_COMPRESSION_METHOD_LZMA,
	MSG_COMPRESSION_METHOD_LZMA2,
	MSG_COMPRESSION_METHOD_PPMD,
	MSG_COMPRESSION_METHOD_DEFLATE,
	MSG_COMPRESSION_METHOD_DEFLATE64,
	MSG_COMPRESSION_METHOD_BZIP2,
	MSG_COMPRESSION_METHOD_DELTA,
	MSG_COMPRESSION_METHOD_BCJ,
	MSG_COMPRESSION_METHOD_BCJ2,
	MSG_COMPRESSION_TAR_METHOD_GNU,
	MSG_COMPRESSION_TAR_METHOD_PAX,
	MSG_COMPRESSION_TAR_METHOD_POSIX,
	MSG_DELETE_DLG_CONFIRM,
	MSG_CREATE_DIR_DLG_NAME,
	MSG_TEST_OK,
	MSG_TEST_MENU,
	MSG_PASSWORD_TITLE,
	MSG_PASSWORD_PASSWORD,
	MSG_OVERWRITE_DLG_TITLE,
	MSG_OVERWRITE_DLG_QUESTION,
	MSG_OVERWRITE_DLG_SOURCE,
	MSG_OVERWRITE_DLG_DESTINATION,
	MSG_OVERWRITE_DLG_NEWER,
	MSG_OVERWRITE_DLG_ALL,
	MSG_OVERWRITE_DLG_OVERWRITE,
	MSG_OVERWRITE_DLG_SKIP,
	MSG_OVERWRITE_DLG_RENAME,
	MSG_OVERWRITE_DLG_APPEND,
	MSG_OVERWRITE_DLG_CANCEL,
	MSG_BUTTON_RETRY,
	MSG_BUTTON_IGNORE,
	MSG_BUTTON_IGNORE_ALL,
	MSG_LOG_TITLE,
	MSG_LOG_INFO,
	MSG_LOG_CLOSE,
	MSG_LOG_SHOW,
	MSG_SETTINGS_DLG_PLUGIN_ENABLED,
	MSG_SETTINGS_DLG_HANDLE_CREATE,
	MSG_SETTINGS_DLG_HANDLE_COMMANDS,
	MSG_SETTINGS_DLG_OWN_PANEL_VIEW_MODE,
	MSG_SETTINGS_DLG_OEM_CODEPAGE,
	MSG_SETTINGS_DLG_ANSI_CODEPAGE,
	MSG_SETTINGS_DLG_PATCH_CODEPAGE,
	MSG_SETTINGS_DLG_7Z_PATH,
	MSG_SETTINGS_DLG_RELOAD,
	MSG_SETTINGS_DLG_USE_INCLUDE_MASKS,
	MSG_SETTINGS_DLG_USE_EXCLUDE_MASKS,
	MSG_SETTINGS_DLG_PGDN_MASKS,
	MSG_SETTINGS_DLG_GENERATE_MASKS,
	MSG_SETTINGS_DLG_DEFAULT_MASKS,
	MSG_SETTINGS_DLG_USE_ENABLED_FORMATS,
	MSG_SETTINGS_DLG_USE_DISABLED_FORMATS,
	MSG_SETTINGS_DLG_PGDN_FORMATS,
	MSG_SETTINGS_DLG_LIB_INFO,
	MSG_SETTINGS_DLG_LIB_NOT_FOUND,
	MSG_SETTINGS_DLG_LIB_VERSION,
	MSG_SETTINGS_DLG_LIB_FORMATS,
	MSG_SETTINGS_DLG_LIB_MASKS,
	MSG_SETTINGS_DLG_ACTIVE,
	MSG_SETTINGS_DLG_EDIT,
	MSG_ATTR_DLG_TITLE,
	MSG_SFX_OPTIONS_DLG_TITLE,
	MSG_SFX_OPTIONS_DLG_PROFILE,
	MSG_SFX_OPTIONS_DLG_MODULE,
	MSG_SFX_OPTIONS_DLG_REPLACE_ICON,
	MSG_SFX_OPTIONS_DLG_ICON_PATH,
	MSG_SFX_OPTIONS_DLG_REPLACE_VERSION,
	MSG_SFX_OPTIONS_DLG_VER_INFO_VERSION,
	MSG_SFX_OPTIONS_DLG_VER_INFO_COMMENTS,
	MSG_SFX_OPTIONS_DLG_VER_INFO_COMPANY_NAME,
	MSG_SFX_OPTIONS_DLG_VER_INFO_FILE_DESCRIPTION,
	MSG_SFX_OPTIONS_DLG_VER_INFO_LEGAL_COPYRIGHT,
	MSG_SFX_OPTIONS_DLG_VER_INFO_PRODUCT_NAME,
	MSG_SFX_OPTIONS_DLG_APPEND_INSTALL_CONFIG,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_TITLE,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_BEGIN_PROMPT,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_PROGRESS,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_RUN_PROGRAM,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_DIRECTORY,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_EXECUTE_FILE,
	MSG_SFX_OPTIONS_DLG_INSTALL_CONFIG_EXECUTE_PARAMETERS,
	MSG_SFX_OPTIONS_DLG_WRONG_MODULE,
	MSG_SFX_OPTIONS_DLG_INVALID_ICON_PATH,
	MSG_SFX_DESCR_7Z,
	MSG_SFX_DESCR_7ZCON,
	MSG_SFX_DESCR_7ZS,
	MSG_SFX_DESCR_7ZS2,
	MSG_SFX_DESCR_7ZS2CON,
	MSG_SFX_DESCR_7ZSD,
	MSG_SFX_DESCR_UNKNOWN,
	MSG_EXPORT_OPTIONS_DLG_TITLE,
	MSG_EXPORT_OPTIONS_DLG_FILEATTR,
	MSG_EXPORT_OPTIONS_DLG_FTIMEFORMAT1,
	MSG_EXPORT_OPTIONS_DLG_FTIMEFORMAT2,
	MSG_EXPORT_OPTIONS_DLG_FTIMEFORMAT3,
	MSG_EXPORT_OPTIONS_DLG_CURTIME,
	MSG_EXPORT_OPTIONS_DLG_CREATION_TIME,
	MSG_EXPORT_OPTIONS_DLG_LAST_ACCESS_TIME,
	MSG_EXPORT_OPTIONS_DLG_LAST_WRITE_TIME,
	MSG_EXPORT_OPTIONS_DLG_OWNER,
	MSG_EXPORT_OPTIONS_DLG_GROUP,
	MSG_EXPORT_OPTIONS_DLG_OWNER_ID,
	MSG_EXPORT_OPTIONS_DLG_GROUP_ID,
	MSG_EXPORT_OPTIONS_DLG_UNIX_MODE,
	MSG_EXPORT_OPTIONS_DLG_UNIX_DEVICE,
	MSG_EXPORT_OPTIONS_DLG_FILE_ATTR,
	MSG_EXPORT_OPTIONS_DLG_FILE_DESC,
	MSG_EXPORT_ATTR_DLG_TITLE,
	MSG_EXPORT_ATTR_DLG_ATTR00,
	MSG_EXPORT_ATTR_DLG_ATTR01,
	MSG_EXPORT_ATTR_DLG_ATTR02,
	MSG_EXPORT_ATTR_DLG_ATTR03,
	MSG_EXPORT_ATTR_DLG_ATTR04,
	MSG_EXPORT_ATTR_DLG_ATTR05,
	MSG_EXPORT_ATTR_DLG_ATTR06,
	MSG_EXPORT_ATTR_DLG_ATTR07,
	MSG_EXPORT_ATTR_DLG_ATTR08,
	MSG_EXPORT_ATTR_DLG_ATTR09,
	MSG_EXPORT_ATTR_DLG_ATTR10,
	MSG_EXPORT_ATTR_DLG_ATTR11,
	MSG_EXPORT_ATTR_DLG_ATTR12,
	MSG_EXPORT_ATTR_DLG_ATTR13,
	MSG_EXPORT_ATTR_DLG_ATTR14,
	MSG_EXPORT_ATTR_DLG_ATTR15,
	MSG_EXPORT_ATTR_DLG_ATTR16,
	MSG_EXPORT_ATTR_DLG_ATTR17,
	MSG_EXPORT_ATTR_DLG_ATTR18,
	MSG_EXPORT_ATTR_DLG_ATTR19,
	MSG_EXPORT_ATTR_DLG_ATTR20,
	MSG_MENU_OPEN,
	MSG_MENU_DETECT,
	MSG_MENU_CREATE,
	MSG_MENU_EXTRACT,
	MSG_MENU_TEST,
	MSG_MENU_SFX_CONVERT,
	MSG_PROGRESS_OPEN,
	MSG_PROGRESS_EXTRACT,
	MSG_PROGRESS_CREATE_DIRS,
	MSG_PROGRESS_SET_ATTR,
	MSG_PROGRESS_TEST,
	MSG_PROGRESS_UPDATE,
	MSG_PROGRESS_CREATE,
	MSG_PROGRESS_DELETE_FILES,
	MSG_PROGRESS_SCAN_DIRS,
	MSG_PROGRESS_INTERRUPT,
	MSG_PROGRESS_PAUSED,
	MSG_PROGRESS_LOW_PRIORITY,
	MSG_PROGRESS_SFX_CONVERT,
	MSG_ERROR_EXTRACT_UNSUPPORTED_METHOD,
	MSG_ERROR_EXTRACT_DATA_ERROR,
	MSG_ERROR_EXTRACT_DATA_ERROR_ENCRYPTED,
	MSG_ERROR_EXTRACT_CRC_ERROR,
	MSG_ERROR_EXTRACT_CRC_ERROR_ENCRYPTED,
	MSG_ERROR_EXTRACT_UNAVAILABLE_DATA,
	MSG_ERROR_EXTRACT_UNEXPECTED_END_DATA,
	MSG_ERROR_EXTRACT_DATA_AFTER_END,
	MSG_ERROR_EXTRACT_IS_NOT_ARCHIVE,
	MSG_ERROR_EXTRACT_HEADERS_ERROR,
	MSG_ERROR_EXTRACT_WRONG_PASSWORD,
	MSG_ERROR_EXTRACT_UNKNOWN,
	MSG_ERROR_UPDATE_ERROR,
	MSG_ERROR_UPDATE_UNKNOWN,
	MSG_ERROR_NO_FORMAT,
	MSG_ERROR_NOT_UPDATABLE,
	MSG_ERROR_NOT_ARCHIVE,
	MSG_ERROR_SFX_CONVERT,
	MSG_ERROR_UPDATE_UNSUPPORTED_FOR_SINGLEFILEARCHIVE,
	MSG_BUTTON_OK,
	MSG_BUTTON_CANCEL,
	MSG_BUTTON_RESET,
	MSG_BUTTON_CLEAR,
	MSG_SUFFIX_SIZE_B,
	MSG_SUFFIX_SIZE_KB,
	MSG_SUFFIX_SIZE_MB,
	MSG_SUFFIX_SIZE_GB,
	MSG_SUFFIX_SIZE_TB,
	MSG_SUFFIX_SPEED_B,
	MSG_SUFFIX_SPEED_KB,
	MSG_SUFFIX_SPEED_MB,
	MSG_SUFFIX_SPEED_GB,
	MSG_SUFFIX_SPEED_TB,
	MSG_KPID_PATH,
	MSG_KPID_NAME,
	MSG_KPID_EXTENSION,
	MSG_KPID_ISDIR,
	MSG_KPID_SIZE,
	MSG_KPID_PACKSIZE,
	MSG_KPID_ATTRIB,
	MSG_KPID_CTIME,
	MSG_KPID_ATIME,
	MSG_KPID_MTIME,
	MSG_KPID_SOLID,
	MSG_KPID_COMMENTED,
	MSG_KPID_ENCRYPTED,
	MSG_KPID_SPLITBEFORE,
	MSG_KPID_SPLITAFTER,
	MSG_KPID_DICTIONARYSIZE,
	MSG_KPID_CRC,
	MSG_KPID_TYPE,
	MSG_KPID_ISANTI,
	MSG_KPID_METHOD,
	MSG_KPID_HOSTOS,
	MSG_KPID_FILESYSTEM,
	MSG_KPID_USER,
	MSG_KPID_GROUP,
	MSG_KPID_BLOCK,
	MSG_KPID_COMMENT,
	MSG_KPID_POSITION,
	MSG_KPID_PREFIX,
	MSG_KPID_NUMSUBDIRS,
	MSG_KPID_NUMSUBFILES,
	MSG_KPID_UNPACKVER,
	MSG_KPID_VOLUME,
	MSG_KPID_ISVOLUME,
	MSG_KPID_OFFSET,
	MSG_KPID_LINKS,
	MSG_KPID_NUMBLOCKS,
	MSG_KPID_NUMVOLUMES,
	MSG_KPID_TIMETYPE,
	MSG_KPID_BIT64,
	MSG_KPID_BIGENDIAN,
	MSG_KPID_CPU,
	MSG_KPID_PHYSIZE,
	MSG_KPID_HEADERSSIZE,
	MSG_KPID_CHECKSUM,
	MSG_KPID_CHARACTS,
	MSG_KPID_VA,
	MSG_KPID_ID,
	MSG_KPID_SHORTNAME,
	MSG_KPID_CREATORAPP,
	MSG_KPID_SECTORSIZE,
	MSG_KPID_POSIXATTRIB,
	MSG_KPID_LINK,
	MSG_KPID_ERROR,
	MSG_KPID_TOTALSIZE,
	MSG_KPID_FREESPACE,
	MSG_KPID_CLUSTERSIZE,
	MSG_KPID_VOLUMENAME,
	MSG_KPID_LOCALNAME,
	MSG_KPID_PROVIDER,
	MSG_KPID_NTSECURE,
	MSG_KPID_ISALTSTREAM,
	MSG_KPID_ISAUX,
	MSG_KPID_ISDELETED,
	MSG_KPID_ISTREE,
	MSG_KPID_SHA1,
	MSG_KPID_SHA256,
	MSG_KPID_ERRORTYPE,
	MSG_KPID_NUMERRORS,
	MSG_KPID_ERRORFLAGS,
	MSG_KPID_WARNINGFLAGS,
	MSG_KPID_WARNING,
	MSG_KPID_NUMSTREAMS,
	MSG_KPID_NUMALTSTREAMS,
	MSG_KPID_ALTSTREAMSSIZE,
	MSG_KPID_VIRTUALSIZE,
	MSG_KPID_UNPACKSIZE,
	MSG_KPID_TOTALPHYSIZE,
	MSG_KPID_VOLUMEINDEX,
	MSG_KPID_SUBTYPE,
	MSG_KPID_SHORTCOMMENT,
	MSG_KPID_CODEPAGE,
	MSG_KPID_ISNOTARCTYPE,
	MSG_KPID_PHYSIZECANTBEDETECTED,
	MSG_KPID_ZEROSTAILISALLOWED,
	MSG_KPID_TAILSIZE,
	MSG_KPID_EMBEDDEDSTUBSIZE,
	MSG_KPID_NTREPARSE,
	MSG_KPID_HARDLINK,
	MSG_KPID_INODE,
	MSG_KPID_STREAMID,
	MSG_KPID_READONLY,
	MSG_KPID_OUTNAME,
	MSG_KPID_COPYLINK,
	MSG_KPID_ARCFILENAME,
	MSG_KPID_ISHASH,
	MSG_KPID_METADATA_CHANGED,
	MSG_KPID_USER_ID,
	MSG_KPID_GROUP_ID,
	MSG_KPID_DEVICE_MAJOR,
	MSG_KPID_DEVICE_MINOR,
	MSG_KPID_DEV_MAJOR,
	MSG_KPID_DEV_MINOR,
	MSG_PROPERTY_TRUE,
	MSG_PROPERTY_FALSE,
	MSG_PROPERTY_COMPRESSION_RATIO,
	MSG_PROPERTY_TOTAL_SIZE,
	MSG_PROPERTY_TOTAL_PACKED_SIZE,
	MSG_PROPERTY_FILE_COUNT,
	MSG_PROPERTY_DIR_COUNT,
};
