// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/cost_graph.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();

class CostGraphDef;
class CostGraphDef_Node;
class CostGraphDef_Node_InputInfo;
class CostGraphDef_Node_OutputInfo;

// ===================================================================

class CostGraphDef_Node_InputInfo : public ::google::protobuf::Message {
 public:
  CostGraphDef_Node_InputInfo();
  virtual ~CostGraphDef_Node_InputInfo();

  CostGraphDef_Node_InputInfo(const CostGraphDef_Node_InputInfo& from);

  inline CostGraphDef_Node_InputInfo& operator=(const CostGraphDef_Node_InputInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CostGraphDef_Node_InputInfo& default_instance();

  void UnsafeArenaSwap(CostGraphDef_Node_InputInfo* other);
  void Swap(CostGraphDef_Node_InputInfo* other);

  // implements Message ----------------------------------------------

  inline CostGraphDef_Node_InputInfo* New() const { return New(NULL); }

  CostGraphDef_Node_InputInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CostGraphDef_Node_InputInfo& from);
  void MergeFrom(const CostGraphDef_Node_InputInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CostGraphDef_Node_InputInfo* other);
  protected:
  explicit CostGraphDef_Node_InputInfo(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 preceding_node = 1;
  void clear_preceding_node();
  static const int kPrecedingNodeFieldNumber = 1;
  ::google::protobuf::int32 preceding_node() const;
  void set_preceding_node(::google::protobuf::int32 value);

  // optional int32 preceding_port = 2;
  void clear_preceding_port();
  static const int kPrecedingPortFieldNumber = 2;
  ::google::protobuf::int32 preceding_port() const;
  void set_preceding_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.CostGraphDef.Node.InputInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::int32 preceding_node_;
  ::google::protobuf::int32 preceding_port_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static CostGraphDef_Node_InputInfo* default_instance_;
};
// -------------------------------------------------------------------

class CostGraphDef_Node_OutputInfo : public ::google::protobuf::Message {
 public:
  CostGraphDef_Node_OutputInfo();
  virtual ~CostGraphDef_Node_OutputInfo();

  CostGraphDef_Node_OutputInfo(const CostGraphDef_Node_OutputInfo& from);

  inline CostGraphDef_Node_OutputInfo& operator=(const CostGraphDef_Node_OutputInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CostGraphDef_Node_OutputInfo& default_instance();

  void UnsafeArenaSwap(CostGraphDef_Node_OutputInfo* other);
  void Swap(CostGraphDef_Node_OutputInfo* other);

  // implements Message ----------------------------------------------

  inline CostGraphDef_Node_OutputInfo* New() const { return New(NULL); }

  CostGraphDef_Node_OutputInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CostGraphDef_Node_OutputInfo& from);
  void MergeFrom(const CostGraphDef_Node_OutputInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CostGraphDef_Node_OutputInfo* other);
  protected:
  explicit CostGraphDef_Node_OutputInfo(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 size = 1;
  void clear_size();
  static const int kSizeFieldNumber = 1;
  ::google::protobuf::int64 size() const;
  void set_size(::google::protobuf::int64 value);

  // optional int64 alias_input_port = 2;
  void clear_alias_input_port();
  static const int kAliasInputPortFieldNumber = 2;
  ::google::protobuf::int64 alias_input_port() const;
  void set_alias_input_port(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:tensorflow.CostGraphDef.Node.OutputInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::int64 size_;
  ::google::protobuf::int64 alias_input_port_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static CostGraphDef_Node_OutputInfo* default_instance_;
};
// -------------------------------------------------------------------

class CostGraphDef_Node : public ::google::protobuf::Message {
 public:
  CostGraphDef_Node();
  virtual ~CostGraphDef_Node();

  CostGraphDef_Node(const CostGraphDef_Node& from);

  inline CostGraphDef_Node& operator=(const CostGraphDef_Node& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CostGraphDef_Node& default_instance();

  void UnsafeArenaSwap(CostGraphDef_Node* other);
  void Swap(CostGraphDef_Node* other);

  // implements Message ----------------------------------------------

  inline CostGraphDef_Node* New() const { return New(NULL); }

  CostGraphDef_Node* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CostGraphDef_Node& from);
  void MergeFrom(const CostGraphDef_Node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CostGraphDef_Node* other);
  protected:
  explicit CostGraphDef_Node(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef CostGraphDef_Node_InputInfo InputInfo;
  typedef CostGraphDef_Node_OutputInfo OutputInfo;

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // optional string device = 2;
  void clear_device();
  static const int kDeviceFieldNumber = 2;
  const ::std::string& device() const;
  void set_device(const ::std::string& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  ::std::string* mutable_device();
  ::std::string* release_device();
  void set_allocated_device(::std::string* device);
  ::std::string* unsafe_arena_release_device();
  void unsafe_arena_set_allocated_device(
      ::std::string* device);

  // optional int32 id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // repeated .tensorflow.CostGraphDef.Node.InputInfo input_info = 4;
  int input_info_size() const;
  void clear_input_info();
  static const int kInputInfoFieldNumber = 4;
  const ::tensorflow::CostGraphDef_Node_InputInfo& input_info(int index) const;
  ::tensorflow::CostGraphDef_Node_InputInfo* mutable_input_info(int index);
  ::tensorflow::CostGraphDef_Node_InputInfo* add_input_info();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_InputInfo >*
      mutable_input_info();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_InputInfo >&
      input_info() const;

  // repeated .tensorflow.CostGraphDef.Node.OutputInfo output_info = 5;
  int output_info_size() const;
  void clear_output_info();
  static const int kOutputInfoFieldNumber = 5;
  const ::tensorflow::CostGraphDef_Node_OutputInfo& output_info(int index) const;
  ::tensorflow::CostGraphDef_Node_OutputInfo* mutable_output_info(int index);
  ::tensorflow::CostGraphDef_Node_OutputInfo* add_output_info();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_OutputInfo >*
      mutable_output_info();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_OutputInfo >&
      output_info() const;

  // optional int64 temporary_memory_size = 6;
  void clear_temporary_memory_size();
  static const int kTemporaryMemorySizeFieldNumber = 6;
  ::google::protobuf::int64 temporary_memory_size() const;
  void set_temporary_memory_size(::google::protobuf::int64 value);

  // optional bool is_final = 7;
  void clear_is_final();
  static const int kIsFinalFieldNumber = 7;
  bool is_final() const;
  void set_is_final(bool value);

  // repeated int32 control_input = 8;
  int control_input_size() const;
  void clear_control_input();
  static const int kControlInputFieldNumber = 8;
  ::google::protobuf::int32 control_input(int index) const;
  void set_control_input(int index, ::google::protobuf::int32 value);
  void add_control_input(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      control_input() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_control_input();

  // @@protoc_insertion_point(class_scope:tensorflow.CostGraphDef.Node)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr device_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_InputInfo > input_info_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_OutputInfo > output_info_;
  ::google::protobuf::int32 id_;
  bool is_final_;
  ::google::protobuf::int64 temporary_memory_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > control_input_;
  mutable int _control_input_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static CostGraphDef_Node* default_instance_;
};
// -------------------------------------------------------------------

class CostGraphDef : public ::google::protobuf::Message {
 public:
  CostGraphDef();
  virtual ~CostGraphDef();

  CostGraphDef(const CostGraphDef& from);

  inline CostGraphDef& operator=(const CostGraphDef& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CostGraphDef& default_instance();

  void UnsafeArenaSwap(CostGraphDef* other);
  void Swap(CostGraphDef* other);

  // implements Message ----------------------------------------------

  inline CostGraphDef* New() const { return New(NULL); }

  CostGraphDef* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CostGraphDef& from);
  void MergeFrom(const CostGraphDef& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CostGraphDef* other);
  protected:
  explicit CostGraphDef(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef CostGraphDef_Node Node;

  // accessors -------------------------------------------------------

  // repeated .tensorflow.CostGraphDef.Node node = 1;
  int node_size() const;
  void clear_node();
  static const int kNodeFieldNumber = 1;
  const ::tensorflow::CostGraphDef_Node& node(int index) const;
  ::tensorflow::CostGraphDef_Node* mutable_node(int index);
  ::tensorflow::CostGraphDef_Node* add_node();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node >*
      mutable_node();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node >&
      node() const;

  // @@protoc_insertion_point(class_scope:tensorflow.CostGraphDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node > node_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static CostGraphDef* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CostGraphDef_Node_InputInfo

// optional int32 preceding_node = 1;
inline void CostGraphDef_Node_InputInfo::clear_preceding_node() {
  preceding_node_ = 0;
}
inline ::google::protobuf::int32 CostGraphDef_Node_InputInfo::preceding_node() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.InputInfo.preceding_node)
  return preceding_node_;
}
inline void CostGraphDef_Node_InputInfo::set_preceding_node(::google::protobuf::int32 value) {
  
  preceding_node_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.InputInfo.preceding_node)
}

// optional int32 preceding_port = 2;
inline void CostGraphDef_Node_InputInfo::clear_preceding_port() {
  preceding_port_ = 0;
}
inline ::google::protobuf::int32 CostGraphDef_Node_InputInfo::preceding_port() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.InputInfo.preceding_port)
  return preceding_port_;
}
inline void CostGraphDef_Node_InputInfo::set_preceding_port(::google::protobuf::int32 value) {
  
  preceding_port_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.InputInfo.preceding_port)
}

// -------------------------------------------------------------------

// CostGraphDef_Node_OutputInfo

// optional int64 size = 1;
inline void CostGraphDef_Node_OutputInfo::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CostGraphDef_Node_OutputInfo::size() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.OutputInfo.size)
  return size_;
}
inline void CostGraphDef_Node_OutputInfo::set_size(::google::protobuf::int64 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.OutputInfo.size)
}

// optional int64 alias_input_port = 2;
inline void CostGraphDef_Node_OutputInfo::clear_alias_input_port() {
  alias_input_port_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CostGraphDef_Node_OutputInfo::alias_input_port() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.OutputInfo.alias_input_port)
  return alias_input_port_;
}
inline void CostGraphDef_Node_OutputInfo::set_alias_input_port(::google::protobuf::int64 value) {
  
  alias_input_port_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.OutputInfo.alias_input_port)
}

// -------------------------------------------------------------------

// CostGraphDef_Node

// optional string name = 1;
inline void CostGraphDef_Node::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& CostGraphDef_Node::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.name)
  return name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CostGraphDef_Node::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.name)
}
inline void CostGraphDef_Node::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.CostGraphDef.Node.name)
}
inline void CostGraphDef_Node::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CostGraphDef.Node.name)
}
inline ::std::string* CostGraphDef_Node::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CostGraphDef.Node.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CostGraphDef_Node::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.CostGraphDef.Node.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CostGraphDef_Node::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.CostGraphDef.Node.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void CostGraphDef_Node::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CostGraphDef.Node.name)
}
inline void CostGraphDef_Node::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.CostGraphDef.Node.name)
}

// optional string device = 2;
inline void CostGraphDef_Node::clear_device() {
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& CostGraphDef_Node::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.device)
  return device_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CostGraphDef_Node::set_device(const ::std::string& value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.device)
}
inline void CostGraphDef_Node::set_device(const char* value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.CostGraphDef.Node.device)
}
inline void CostGraphDef_Node::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CostGraphDef.Node.device)
}
inline ::std::string* CostGraphDef_Node::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CostGraphDef.Node.device)
  return device_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CostGraphDef_Node::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.CostGraphDef.Node.device)
  
  return device_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CostGraphDef_Node::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.CostGraphDef.Node.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void CostGraphDef_Node::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    
  } else {
    
  }
  device_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CostGraphDef.Node.device)
}
inline void CostGraphDef_Node::unsafe_arena_set_allocated_device(
    ::std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device != NULL) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.CostGraphDef.Node.device)
}

// optional int32 id = 3;
inline void CostGraphDef_Node::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 CostGraphDef_Node::id() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.id)
  return id_;
}
inline void CostGraphDef_Node::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.id)
}

// repeated .tensorflow.CostGraphDef.Node.InputInfo input_info = 4;
inline int CostGraphDef_Node::input_info_size() const {
  return input_info_.size();
}
inline void CostGraphDef_Node::clear_input_info() {
  input_info_.Clear();
}
inline const ::tensorflow::CostGraphDef_Node_InputInfo& CostGraphDef_Node::input_info(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.input_info)
  return input_info_.Get(index);
}
inline ::tensorflow::CostGraphDef_Node_InputInfo* CostGraphDef_Node::mutable_input_info(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CostGraphDef.Node.input_info)
  return input_info_.Mutable(index);
}
inline ::tensorflow::CostGraphDef_Node_InputInfo* CostGraphDef_Node::add_input_info() {
  // @@protoc_insertion_point(field_add:tensorflow.CostGraphDef.Node.input_info)
  return input_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_InputInfo >*
CostGraphDef_Node::mutable_input_info() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CostGraphDef.Node.input_info)
  return &input_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_InputInfo >&
CostGraphDef_Node::input_info() const {
  // @@protoc_insertion_point(field_list:tensorflow.CostGraphDef.Node.input_info)
  return input_info_;
}

// repeated .tensorflow.CostGraphDef.Node.OutputInfo output_info = 5;
inline int CostGraphDef_Node::output_info_size() const {
  return output_info_.size();
}
inline void CostGraphDef_Node::clear_output_info() {
  output_info_.Clear();
}
inline const ::tensorflow::CostGraphDef_Node_OutputInfo& CostGraphDef_Node::output_info(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.output_info)
  return output_info_.Get(index);
}
inline ::tensorflow::CostGraphDef_Node_OutputInfo* CostGraphDef_Node::mutable_output_info(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CostGraphDef.Node.output_info)
  return output_info_.Mutable(index);
}
inline ::tensorflow::CostGraphDef_Node_OutputInfo* CostGraphDef_Node::add_output_info() {
  // @@protoc_insertion_point(field_add:tensorflow.CostGraphDef.Node.output_info)
  return output_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_OutputInfo >*
CostGraphDef_Node::mutable_output_info() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CostGraphDef.Node.output_info)
  return &output_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node_OutputInfo >&
CostGraphDef_Node::output_info() const {
  // @@protoc_insertion_point(field_list:tensorflow.CostGraphDef.Node.output_info)
  return output_info_;
}

// optional int64 temporary_memory_size = 6;
inline void CostGraphDef_Node::clear_temporary_memory_size() {
  temporary_memory_size_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CostGraphDef_Node::temporary_memory_size() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.temporary_memory_size)
  return temporary_memory_size_;
}
inline void CostGraphDef_Node::set_temporary_memory_size(::google::protobuf::int64 value) {
  
  temporary_memory_size_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.temporary_memory_size)
}

// optional bool is_final = 7;
inline void CostGraphDef_Node::clear_is_final() {
  is_final_ = false;
}
inline bool CostGraphDef_Node::is_final() const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.is_final)
  return is_final_;
}
inline void CostGraphDef_Node::set_is_final(bool value) {
  
  is_final_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.is_final)
}

// repeated int32 control_input = 8;
inline int CostGraphDef_Node::control_input_size() const {
  return control_input_.size();
}
inline void CostGraphDef_Node::clear_control_input() {
  control_input_.Clear();
}
inline ::google::protobuf::int32 CostGraphDef_Node::control_input(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.Node.control_input)
  return control_input_.Get(index);
}
inline void CostGraphDef_Node::set_control_input(int index, ::google::protobuf::int32 value) {
  control_input_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.CostGraphDef.Node.control_input)
}
inline void CostGraphDef_Node::add_control_input(::google::protobuf::int32 value) {
  control_input_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.CostGraphDef.Node.control_input)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CostGraphDef_Node::control_input() const {
  // @@protoc_insertion_point(field_list:tensorflow.CostGraphDef.Node.control_input)
  return control_input_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CostGraphDef_Node::mutable_control_input() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CostGraphDef.Node.control_input)
  return &control_input_;
}

// -------------------------------------------------------------------

// CostGraphDef

// repeated .tensorflow.CostGraphDef.Node node = 1;
inline int CostGraphDef::node_size() const {
  return node_.size();
}
inline void CostGraphDef::clear_node() {
  node_.Clear();
}
inline const ::tensorflow::CostGraphDef_Node& CostGraphDef::node(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CostGraphDef.node)
  return node_.Get(index);
}
inline ::tensorflow::CostGraphDef_Node* CostGraphDef::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CostGraphDef.node)
  return node_.Mutable(index);
}
inline ::tensorflow::CostGraphDef_Node* CostGraphDef::add_node() {
  // @@protoc_insertion_point(field_add:tensorflow.CostGraphDef.node)
  return node_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node >*
CostGraphDef::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CostGraphDef.node)
  return &node_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::CostGraphDef_Node >&
CostGraphDef::node() const {
  // @@protoc_insertion_point(field_list:tensorflow.CostGraphDef.node)
  return node_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2fcost_5fgraph_2eproto__INCLUDED
