// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderNLS
  class DecoderNLS : public System::Text::Decoder/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // protected System.Text.Encoding m_encoding
    // Size: 0x8
    // Offset: 0x20
    System::Text::Encoding* m_encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // protected System.Boolean m_mustFlush
    // Size: 0x1
    // Offset: 0x28
    bool m_mustFlush;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_throwOnOverflow
    // Size: 0x1
    // Offset: 0x29
    bool m_throwOnOverflow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_throwOnOverflow and: m_bytesUsed
    char __padding2[0x2] = {};
    // System.Int32 m_bytesUsed
    // Size: 0x4
    // Offset: 0x2C
    int m_bytesUsed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DecoderNLS
    DecoderNLS(System::Text::Encoding* m_encoding_ = {}, bool m_mustFlush_ = {}, bool m_throwOnOverflow_ = {}, int m_bytesUsed_ = {}) noexcept : m_encoding{m_encoding_}, m_mustFlush{m_mustFlush_}, m_throwOnOverflow{m_throwOnOverflow_}, m_bytesUsed{m_bytesUsed_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B62860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderNLS* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderNLS*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B62944
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x1B616D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderNLS* New_ctor(System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderNLS*, creationType>(encoding)));
    }
    // public System.Boolean get_MustFlush()
    // Offset: 0x1B631BC
    bool get_MustFlush();
    // System.Boolean get_HasState()
    // Offset: 0x1B631C4
    bool get_HasState();
    // System.Void ClearMustFlush()
    // Offset: 0x1B631CC
    void ClearMustFlush();
    // System.Void .ctor()
    // Offset: 0x1B62A04
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderNLS* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderNLS*, creationType>()));
    }
    // public override System.Void Reset()
    // Offset: 0x1B62A38
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::Reset()
    void Reset();
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1B62A50
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x1B62A60
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count, bool flush);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x1B62C40
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1B62D80
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x1B62D90
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex, bool flush);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x1B63034
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
  }; // System.Text.DecoderNLS
  #pragma pack(pop)
  static check_size<sizeof(DecoderNLS), 44 + sizeof(int)> __System_Text_DecoderNLSSizeCheck;
  static_assert(sizeof(DecoderNLS) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderNLS*, "System.Text", "DecoderNLS");
// Writing MetadataGetter for method: System::Text::DecoderNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderNLS::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Text::DecoderNLS::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderNLS::get_MustFlush
// Il2CppName: get_MustFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::get_MustFlush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "get_MustFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::get_HasState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::ClearMustFlush
// Il2CppName: ClearMustFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::ClearMustFlush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "ClearMustFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderNLS::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::Array<uint8_t>*, int, int)>(&System::Text::DecoderNLS::GetCharCount)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::Array<uint8_t>*, int, int, bool)>(&System::Text::DecoderNLS::GetCharCount)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(uint8_t*, int, bool)>(&System::Text::DecoderNLS::GetCharCount)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::Array<uint8_t>*, int, int, ::Array<::Il2CppChar>*, int)>(&System::Text::DecoderNLS::GetChars)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::Array<uint8_t>*, int, int, ::Array<::Il2CppChar>*, int, bool)>(&System::Text::DecoderNLS::GetChars)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex, flush});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(uint8_t*, int, ::Il2CppChar*, int, bool)>(&System::Text::DecoderNLS::GetChars)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, flush});
  }
};
