/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_WM_2ebegin_2eproto__INCLUDED
#define PROTOBUF_C_WM_2ebegin_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Wm__Begin Wm__Begin;


/* --- enums --- */


/* --- messages --- */

struct  _Wm__Begin
{
  ProtobufCMessage base;
  int32_t s_id;
  int32_t d_id;
  int32_t state;
};
#define WM__BEGIN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wm__begin__descriptor) \
    , 0, 0, 0 }


/* Wm__Begin methods */
void   wm__begin__init
                     (Wm__Begin         *message);
size_t wm__begin__get_packed_size
                     (const Wm__Begin   *message);
size_t wm__begin__pack
                     (const Wm__Begin   *message,
                      uint8_t             *out);
size_t wm__begin__pack_to_buffer
                     (const Wm__Begin   *message,
                      ProtobufCBuffer     *buffer);
Wm__Begin *
       wm__begin__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wm__begin__free_unpacked
                     (Wm__Begin *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Wm__Begin_Closure)
                 (const Wm__Begin *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor wm__begin__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_WM_2ebegin_2eproto__INCLUDED */