/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Wed Sep  5 00:52:14 2018. */

#ifndef PB_GOOGLE_PROTOBUF_TIMESTAMP_PB_H_INCLUDED
#define PB_GOOGLE_PROTOBUF_TIMESTAMP_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _google_protobuf_Timestamp {
    int64_t seconds;
    int32_t nanos;
/* @@protoc_insertion_point(struct:google_protobuf_Timestamp) */
} google_protobuf_Timestamp;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_protobuf_Timestamp_init_default   {0, 0}
#define google_protobuf_Timestamp_init_zero      {0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define google_protobuf_Timestamp_seconds_tag    1
#define google_protobuf_Timestamp_nanos_tag      2

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_protobuf_Timestamp_fields[3];

/* Maximum encoded size of messages (where known) */
#define google_protobuf_Timestamp_size           22

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TIMESTAMP_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
