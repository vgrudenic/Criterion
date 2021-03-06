/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.5-dev at Sun Jan 17 02:06:50 2016. */

#ifndef PB_CRITERION_PB_H_INCLUDED
#define PB_CRITERION_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _criterion_protocol_phase_kind {
    criterion_protocol_phase_kind_SETUP = 1,
    criterion_protocol_phase_kind_MAIN = 2,
    criterion_protocol_phase_kind_TEARDOWN = 3,
    criterion_protocol_phase_kind_END = 4,
    criterion_protocol_phase_kind_ABORT = 5,
    criterion_protocol_phase_kind_TIMEOUT = 6
} criterion_protocol_phase_kind;

typedef enum _criterion_protocol_death_result_type {
    criterion_protocol_death_result_type_NORMAL = 1,
    criterion_protocol_death_result_type_CRASH = 2
} criterion_protocol_death_result_type;

typedef enum _criterion_protocol_log_level {
    criterion_protocol_log_level_INFO = 0,
    criterion_protocol_log_level_WARNING = 1,
    criterion_protocol_log_level_ERROR = 2
} criterion_protocol_log_level;

typedef enum _criterion_protocol_ack_status {
    criterion_protocol_ack_status_OK = 0,
    criterion_protocol_ack_status_ERROR = 1
} criterion_protocol_ack_status;

/* Struct definitions */
typedef struct _criterion_protocol_ack {
    criterion_protocol_ack_status status_code;
    char *message;
} criterion_protocol_ack;

typedef struct _criterion_protocol_assert {
    char *message;
    bool passed;
    char *file;
    bool has_line;
    int64_t line;
} criterion_protocol_assert;

typedef struct _criterion_protocol_birth {
    char *name;
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_birth;

typedef struct _criterion_protocol_death {
    criterion_protocol_death_result_type result;
    bool has_status;
    int64_t status;
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_death;

typedef struct _criterion_protocol_log {
    criterion_protocol_log_level severity;
    char *message;
} criterion_protocol_log;

typedef struct _criterion_protocol_phase {
    criterion_protocol_phase_kind phase;
    char *name;
    bool has_timestamp;
    int64_t timestamp;
    char *message;
} criterion_protocol_phase;

typedef struct _criterion_protocol_submessage {
    pb_size_t which_value;
    union {
        criterion_protocol_birth birth;
        criterion_protocol_phase phase;
        criterion_protocol_death death;
        criterion_protocol_log message;
        criterion_protocol_assert assert;
    } value;
} criterion_protocol_submessage;

typedef struct _criterion_protocol_msg {
    int32_t version;
    pb_size_t which_id;
    union {
        int64_t pid;
        char *uid;
    } id;
    criterion_protocol_submessage data;
} criterion_protocol_msg;

/* Default values for struct fields */
extern const int32_t criterion_protocol_msg_version_default;

/* Initializer values for message structs */
#define criterion_protocol_birth_init_default    {NULL, false, 0}
#define criterion_protocol_phase_init_default    {(criterion_protocol_phase_kind)0, NULL, false, 0, NULL}
#define criterion_protocol_death_init_default    {(criterion_protocol_death_result_type)0, false, 0, false, 0}
#define criterion_protocol_assert_init_default   {NULL, 0, NULL, false, 0}
#define criterion_protocol_log_init_default      {(criterion_protocol_log_level)0, NULL}
#define criterion_protocol_ack_init_default      {(criterion_protocol_ack_status)0, NULL}
#define criterion_protocol_submessage_init_default {0, {criterion_protocol_birth_init_default}}
#define criterion_protocol_msg_init_default      {1, 0, {0}, criterion_protocol_submessage_init_default}
#define criterion_protocol_birth_init_zero       {NULL, false, 0}
#define criterion_protocol_phase_init_zero       {(criterion_protocol_phase_kind)0, NULL, false, 0, NULL}
#define criterion_protocol_death_init_zero       {(criterion_protocol_death_result_type)0, false, 0, false, 0}
#define criterion_protocol_assert_init_zero      {NULL, 0, NULL, false, 0}
#define criterion_protocol_log_init_zero         {(criterion_protocol_log_level)0, NULL}
#define criterion_protocol_ack_init_zero         {(criterion_protocol_ack_status)0, NULL}
#define criterion_protocol_submessage_init_zero  {0, {criterion_protocol_birth_init_zero}}
#define criterion_protocol_msg_init_zero         {0, 0, {0}, criterion_protocol_submessage_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define criterion_protocol_ack_status_code_tag   1
#define criterion_protocol_ack_message_tag       2
#define criterion_protocol_assert_message_tag    1
#define criterion_protocol_assert_passed_tag     2
#define criterion_protocol_assert_file_tag       3
#define criterion_protocol_assert_line_tag       4
#define criterion_protocol_birth_name_tag        1
#define criterion_protocol_birth_timestamp_tag   2
#define criterion_protocol_death_result_tag      1
#define criterion_protocol_death_status_tag      2
#define criterion_protocol_death_timestamp_tag   3
#define criterion_protocol_log_severity_tag      1
#define criterion_protocol_log_message_tag       2
#define criterion_protocol_phase_phase_tag       1
#define criterion_protocol_phase_name_tag        2
#define criterion_protocol_phase_timestamp_tag   3
#define criterion_protocol_phase_message_tag     4
#define criterion_protocol_submessage_birth_tag  1
#define criterion_protocol_submessage_phase_tag  2
#define criterion_protocol_submessage_death_tag  3
#define criterion_protocol_submessage_message_tag 4
#define criterion_protocol_submessage_assert_tag 5
#define criterion_protocol_msg_pid_tag           2
#define criterion_protocol_msg_uid_tag           3
#define criterion_protocol_msg_version_tag       1
#define criterion_protocol_msg_data_tag          16

/* Struct field encoding specification for nanopb */
extern const pb_field_t criterion_protocol_birth_fields[3];
extern const pb_field_t criterion_protocol_phase_fields[5];
extern const pb_field_t criterion_protocol_death_fields[4];
extern const pb_field_t criterion_protocol_assert_fields[5];
extern const pb_field_t criterion_protocol_log_fields[3];
extern const pb_field_t criterion_protocol_ack_fields[3];
extern const pb_field_t criterion_protocol_submessage_fields[6];
extern const pb_field_t criterion_protocol_msg_fields[5];

/* Maximum encoded size of messages (where known) */
#define criterion_protocol_death_size            24

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define CRITERION_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
