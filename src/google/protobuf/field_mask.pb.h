// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/field_mask.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ffield_5fmask_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ffield_5fmask_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ffield_5fmask_2eproto PROTOBUF_EXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto {
  static const uint32_t offsets[];
};
PROTOBUF_EXPORT extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto;
PROTOBUF_NAMESPACE_OPEN
class FieldMask;
struct FieldMaskDefaultTypeInternal;
PROTOBUF_EXPORT extern FieldMaskDefaultTypeInternal _FieldMask_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_EXPORT ::PROTOBUF_NAMESPACE_ID::FieldMask* Arena::CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::FieldMask>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class PROTOBUF_EXPORT FieldMask final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.FieldMask) */ {
 public:
  inline FieldMask() : FieldMask(nullptr) {}
  ~FieldMask() override;
  explicit PROTOBUF_CONSTEXPR FieldMask(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FieldMask(const FieldMask& from);
  FieldMask(FieldMask&& from) noexcept
    : FieldMask() {
    *this = ::std::move(from);
  }

  inline FieldMask& operator=(const FieldMask& from) {
    CopyFrom(from);
    return *this;
  }
  inline FieldMask& operator=(FieldMask&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FieldMask& default_instance() {
    return *internal_default_instance();
  }
  static inline const FieldMask* internal_default_instance() {
    return reinterpret_cast<const FieldMask*>(
               &_FieldMask_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FieldMask& a, FieldMask& b) {
    a.Swap(&b);
  }
  inline void Swap(FieldMask* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FieldMask* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FieldMask* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FieldMask>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FieldMask& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const FieldMask& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FieldMask* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.FieldMask";
  }
  protected:
  explicit FieldMask(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPathsFieldNumber = 1,
  };
  // repeated string paths = 1;
  int paths_size() const;
  private:
  int _internal_paths_size() const;
  public:
  void clear_paths();
  const std::string& paths(int index) const;
  std::string* mutable_paths(int index);
  void set_paths(int index, const std::string& value);
  void set_paths(int index, std::string&& value);
  void set_paths(int index, const char* value);
  void set_paths(int index, const char* value, size_t size);
  std::string* add_paths();
  void add_paths(const std::string& value);
  void add_paths(std::string&& value);
  void add_paths(const char* value);
  void add_paths(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& paths() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_paths();
  private:
  const std::string& _internal_paths(int index) const;
  std::string* _internal_add_paths();
  public:

  // @@protoc_insertion_point(class_scope:google.protobuf.FieldMask)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> paths_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FieldMask

// repeated string paths = 1;
inline int FieldMask::_internal_paths_size() const {
  return paths_.size();
}
inline int FieldMask::paths_size() const {
  return _internal_paths_size();
}
inline void FieldMask::clear_paths() {
  paths_.Clear();
}
inline std::string* FieldMask::add_paths() {
  std::string* _s = _internal_add_paths();
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.FieldMask.paths)
  return _s;
}
inline const std::string& FieldMask::_internal_paths(int index) const {
  return paths_.Get(index);
}
inline const std::string& FieldMask::paths(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldMask.paths)
  return _internal_paths(index);
}
inline std::string* FieldMask::mutable_paths(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldMask.paths)
  return paths_.Mutable(index);
}
inline void FieldMask::set_paths(int index, const std::string& value) {
  paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
}
inline void FieldMask::set_paths(int index, std::string&& value) {
  paths_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
}
inline void FieldMask::set_paths(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldMask.paths)
}
inline void FieldMask::set_paths(int index, const char* value, size_t size) {
  paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldMask.paths)
}
inline std::string* FieldMask::_internal_add_paths() {
  return paths_.Add();
}
inline void FieldMask::add_paths(const std::string& value) {
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
inline void FieldMask::add_paths(std::string&& value) {
  paths_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
inline void FieldMask::add_paths(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.FieldMask.paths)
}
inline void FieldMask::add_paths(const char* value, size_t size) {
  paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.FieldMask.paths)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
FieldMask::paths() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FieldMask.paths)
  return paths_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
FieldMask::mutable_paths() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FieldMask.paths)
  return &paths_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ffield_5fmask_2eproto
