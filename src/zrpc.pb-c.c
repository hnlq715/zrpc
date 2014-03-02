/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: src/zrpc.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "src/zrpc.pb-c.h"
void   zrpc__request__init
                     (Zrpc__Request         *message)
{
  static Zrpc__Request init_value = ZRPC__REQUEST__INIT;
  *message = init_value;
}
size_t zrpc__request__get_packed_size
                     (const Zrpc__Request *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t zrpc__request__pack
                     (const Zrpc__Request *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t zrpc__request__pack_to_buffer
                     (const Zrpc__Request *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Zrpc__Request *
       zrpc__request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Zrpc__Request *)
     protobuf_c_message_unpack (&zrpc__request__descriptor,
                                allocator, len, data);
}
void   zrpc__request__free_unpacked
                     (Zrpc__Request *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   zrpc__reply__init
                     (Zrpc__Reply         *message)
{
  static Zrpc__Reply init_value = ZRPC__REPLY__INIT;
  *message = init_value;
}
size_t zrpc__reply__get_packed_size
                     (const Zrpc__Reply *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__reply__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t zrpc__reply__pack
                     (const Zrpc__Reply *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__reply__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t zrpc__reply__pack_to_buffer
                     (const Zrpc__Reply *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__reply__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Zrpc__Reply *
       zrpc__reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Zrpc__Reply *)
     protobuf_c_message_unpack (&zrpc__reply__descriptor,
                                allocator, len, data);
}
void   zrpc__reply__free_unpacked
                     (Zrpc__Reply *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &zrpc__reply__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor zrpc__request__field_descriptors[5] =
{
  {
    "event_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    PROTOBUF_C_OFFSETOF(Zrpc__Request, has_event_id),
    PROTOBUF_C_OFFSETOF(Zrpc__Request, event_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "deadline",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Zrpc__Request, has_deadline),
    PROTOBUF_C_OFFSETOF(Zrpc__Request, deadline),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "service",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Zrpc__Request, service),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "method",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Zrpc__Request, method),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Zrpc__Request, has_payload),
    PROTOBUF_C_OFFSETOF(Zrpc__Request, payload),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned zrpc__request__field_indices_by_name[] = {
  1,   /* field[1] = deadline */
  0,   /* field[0] = event_id */
  3,   /* field[3] = method */
  4,   /* field[4] = payload */
  2,   /* field[2] = service */
};
static const ProtobufCIntRange zrpc__request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor zrpc__request__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "zrpc.Request",
  "Request",
  "Zrpc__Request",
  "zrpc",
  sizeof(Zrpc__Request),
  5,
  zrpc__request__field_descriptors,
  zrpc__request__field_indices_by_name,
  1,  zrpc__request__number_ranges,
  (ProtobufCMessageInit) zrpc__request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue zrpc__reply__status__enum_values_by_number[3] =
{
  { "OK", "ZRPC__REPLY__STATUS__OK", 1 },
  { "APPLICATION_ERROR", "ZRPC__REPLY__STATUS__APPLICATION_ERROR", 2 },
  { "NETWORK_ERROR", "ZRPC__REPLY__STATUS__NETWORK_ERROR", 3 },
};
static const ProtobufCIntRange zrpc__reply__status__value_ranges[] = {
{1, 0},{0, 3}
};
const ProtobufCEnumValueIndex zrpc__reply__status__enum_values_by_name[3] =
{
  { "APPLICATION_ERROR", 1 },
  { "NETWORK_ERROR", 2 },
  { "OK", 0 },
};
const ProtobufCEnumDescriptor zrpc__reply__status__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "zrpc.Reply.Status",
  "Status",
  "Zrpc__Reply__Status",
  "zrpc",
  3,
  zrpc__reply__status__enum_values_by_number,
  3,
  zrpc__reply__status__enum_values_by_name,
  1,
  zrpc__reply__status__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue zrpc__reply__application_error__enum_values_by_number[4] =
{
  { "INVALID_MESSAGE", "ZRPC__REPLY__APPLICATION_ERROR__INVALID_MESSAGE", -4 },
  { "UNKNOWN_METHOD", "ZRPC__REPLY__APPLICATION_ERROR__UNKNOWN_METHOD", -3 },
  { "UNKNOWN_SERVICE", "ZRPC__REPLY__APPLICATION_ERROR__UNKNOWN_SERVICE", -2 },
  { "INVALID_GENERIC_WRAPPER", "ZRPC__REPLY__APPLICATION_ERROR__INVALID_GENERIC_WRAPPER", -1 },
};
static const ProtobufCIntRange zrpc__reply__application_error__value_ranges[] = {
{-4, 0},{0, 4}
};
const ProtobufCEnumValueIndex zrpc__reply__application_error__enum_values_by_name[4] =
{
  { "INVALID_GENERIC_WRAPPER", 3 },
  { "INVALID_MESSAGE", 0 },
  { "UNKNOWN_METHOD", 1 },
  { "UNKNOWN_SERVICE", 2 },
};
const ProtobufCEnumDescriptor zrpc__reply__application_error__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "zrpc.Reply.ApplicationError",
  "ApplicationError",
  "Zrpc__Reply__ApplicationError",
  "zrpc",
  4,
  zrpc__reply__application_error__enum_values_by_number,
  4,
  zrpc__reply__application_error__enum_values_by_name,
  1,
  zrpc__reply__application_error__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const Zrpc__Reply__Status zrpc__reply__status__default_value = ZRPC__REPLY__STATUS__OK;
static const ProtobufCFieldDescriptor zrpc__reply__field_descriptors[4] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, has_status),
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, status),
    &zrpc__reply__status__descriptor,
    &zrpc__reply__status__default_value,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "application_error",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, has_application_error),
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, application_error),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "error",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, error),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, has_payload),
    PROTOBUF_C_OFFSETOF(Zrpc__Reply, payload),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned zrpc__reply__field_indices_by_name[] = {
  1,   /* field[1] = application_error */
  2,   /* field[2] = error */
  3,   /* field[3] = payload */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange zrpc__reply__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor zrpc__reply__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "zrpc.Reply",
  "Reply",
  "Zrpc__Reply",
  "zrpc",
  sizeof(Zrpc__Reply),
  4,
  zrpc__reply__field_descriptors,
  zrpc__reply__field_indices_by_name,
  1,  zrpc__reply__number_ranges,
  (ProtobufCMessageInit) zrpc__reply__init,
  NULL,NULL,NULL    /* reserved[123] */
};