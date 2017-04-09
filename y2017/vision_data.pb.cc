// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vision_data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vision_data.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace y2017 {
namespace vision {

namespace {

const ::google::protobuf::Descriptor* VisionData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VisionData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_vision_5fdata_2eproto() {
  protobuf_AddDesc_vision_5fdata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "vision_data.proto");
  GOOGLE_CHECK(file != NULL);
  VisionData_descriptor_ = file->message_type(0);
  static const int VisionData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisionData, image_timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisionData, send_timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisionData, yaw_),
  };
  VisionData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      VisionData_descriptor_,
      VisionData::default_instance_,
      VisionData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisionData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VisionData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(VisionData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_vision_5fdata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    VisionData_descriptor_, &VisionData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_vision_5fdata_2eproto() {
  delete VisionData::default_instance_;
  delete VisionData_reflection_;
}

void protobuf_AddDesc_vision_5fdata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021vision_data.proto\022\014y2017.vision\"J\n\nVis"
    "ionData\022\027\n\017image_timestamp\030\001 \001(\003\022\026\n\016send"
    "_timestamp\030\003 \001(\003\022\013\n\003yaw\030\002 \001(\001", 109);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vision_data.proto", &protobuf_RegisterTypes);
  VisionData::default_instance_ = new VisionData();
  VisionData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_vision_5fdata_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_vision_5fdata_2eproto {
  StaticDescriptorInitializer_vision_5fdata_2eproto() {
    protobuf_AddDesc_vision_5fdata_2eproto();
  }
} static_descriptor_initializer_vision_5fdata_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int VisionData::kImageTimestampFieldNumber;
const int VisionData::kSendTimestampFieldNumber;
const int VisionData::kYawFieldNumber;
#endif  // !_MSC_VER

VisionData::VisionData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:y2017.vision.VisionData)
}

void VisionData::InitAsDefaultInstance() {
}

VisionData::VisionData(const VisionData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:y2017.vision.VisionData)
}

void VisionData::SharedCtor() {
  _cached_size_ = 0;
  image_timestamp_ = GOOGLE_LONGLONG(0);
  send_timestamp_ = GOOGLE_LONGLONG(0);
  yaw_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

VisionData::~VisionData() {
  // @@protoc_insertion_point(destructor:y2017.vision.VisionData)
  SharedDtor();
}

void VisionData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void VisionData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VisionData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VisionData_descriptor_;
}

const VisionData& VisionData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_vision_5fdata_2eproto();
  return *default_instance_;
}

VisionData* VisionData::default_instance_ = NULL;

VisionData* VisionData::New() const {
  return new VisionData;
}

void VisionData::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<VisionData*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(image_timestamp_, yaw_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool VisionData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:y2017.vision.VisionData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 image_timestamp = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &image_timestamp_)));
          set_has_image_timestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_yaw;
        break;
      }

      // optional double yaw = 2;
      case 2: {
        if (tag == 17) {
         parse_yaw:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &yaw_)));
          set_has_yaw();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_send_timestamp;
        break;
      }

      // optional int64 send_timestamp = 3;
      case 3: {
        if (tag == 24) {
         parse_send_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &send_timestamp_)));
          set_has_send_timestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:y2017.vision.VisionData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:y2017.vision.VisionData)
  return false;
#undef DO_
}

void VisionData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:y2017.vision.VisionData)
  // optional int64 image_timestamp = 1;
  if (has_image_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->image_timestamp(), output);
  }

  // optional double yaw = 2;
  if (has_yaw()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->yaw(), output);
  }

  // optional int64 send_timestamp = 3;
  if (has_send_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->send_timestamp(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:y2017.vision.VisionData)
}

::google::protobuf::uint8* VisionData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:y2017.vision.VisionData)
  // optional int64 image_timestamp = 1;
  if (has_image_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->image_timestamp(), target);
  }

  // optional double yaw = 2;
  if (has_yaw()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->yaw(), target);
  }

  // optional int64 send_timestamp = 3;
  if (has_send_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->send_timestamp(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:y2017.vision.VisionData)
  return target;
}

int VisionData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 image_timestamp = 1;
    if (has_image_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->image_timestamp());
    }

    // optional int64 send_timestamp = 3;
    if (has_send_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->send_timestamp());
    }

    // optional double yaw = 2;
    if (has_yaw()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VisionData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const VisionData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const VisionData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VisionData::MergeFrom(const VisionData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_image_timestamp()) {
      set_image_timestamp(from.image_timestamp());
    }
    if (from.has_send_timestamp()) {
      set_send_timestamp(from.send_timestamp());
    }
    if (from.has_yaw()) {
      set_yaw(from.yaw());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void VisionData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VisionData::CopyFrom(const VisionData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VisionData::IsInitialized() const {

  return true;
}

void VisionData::Swap(VisionData* other) {
  if (other != this) {
    std::swap(image_timestamp_, other->image_timestamp_);
    std::swap(send_timestamp_, other->send_timestamp_);
    std::swap(yaw_, other->yaw_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata VisionData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VisionData_descriptor_;
  metadata.reflection = VisionData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vision
}  // namespace y2017

// @@protoc_insertion_point(global_scope)
