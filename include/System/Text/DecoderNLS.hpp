// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::DecoderNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderNLS*, "System.Text", "DecoderNLS");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderNLS
  // [TokenAttribute] Offset: FFFFFFFF
  class DecoderNLS : public ::System::Text::Decoder/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // protected System.Text.Encoding m_encoding
    // Size: 0x8
    // Offset: 0x20
    ::System::Text::Encoding* m_encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
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
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get instance field reference: protected System.Text.Encoding m_encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn_m_encoding();
    // Get instance field reference: protected System.Boolean m_mustFlush
    [[deprecated("Use field access instead!")]] bool& dyn_m_mustFlush();
    // Get instance field reference: System.Boolean m_throwOnOverflow
    [[deprecated("Use field access instead!")]] bool& dyn_m_throwOnOverflow();
    // Get instance field reference: System.Int32 m_bytesUsed
    [[deprecated("Use field access instead!")]] int& dyn_m_bytesUsed();
    // public System.Boolean get_MustFlush()
    // Offset: 0x1F5FDD8
    bool get_MustFlush();
    // System.Boolean get_HasState()
    // Offset: 0x1F5FDE0
    bool get_HasState();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1F5EF80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderNLS* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderNLS*, creationType>(info, context)));
    }
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x1F5D6C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderNLS* New_ctor(::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderNLS*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1F5F068
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void ClearMustFlush()
    // Offset: 0x1F5FDE8
    void ClearMustFlush();
    // System.Void .ctor()
    // Offset: 0x1F5F128
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderNLS* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderNLS*, creationType>()));
    }
    // public override System.Void Reset()
    // Offset: 0x1F5F15C
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::Reset()
    void Reset();
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1F5F174
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x1F5F184
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count, bool flush);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x1F5F364
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1F5F4A4
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x1F5F4B4
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex, bool flush);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x1F5F758
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
    // public override System.Void Convert(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Boolean flush, out System.Int32 bytesUsed, out System.Int32 charsUsed, out System.Boolean completed)
    // Offset: 0x1F5F8E0
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::Convert(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Boolean flush, out System.Int32 bytesUsed, out System.Int32 charsUsed, out System.Boolean completed)
    void Convert(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, bool flush, ByRef<int> bytesUsed, ByRef<int> charsUsed, ByRef<bool> completed);
    // public override System.Void Convert(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush, out System.Int32 bytesUsed, out System.Int32 charsUsed, out System.Boolean completed)
    // Offset: 0x1F5FBD8
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::Convert(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush, out System.Int32 bytesUsed, out System.Int32 charsUsed, out System.Boolean completed)
    void Convert(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush, ByRef<int> bytesUsed, ByRef<int> charsUsed, ByRef<bool> completed);
  }; // System.Text.DecoderNLS
  #pragma pack(pop)
  static check_size<sizeof(DecoderNLS), 44 + sizeof(int)> __System_Text_DecoderNLSSizeCheck;
  static_assert(sizeof(DecoderNLS) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::DecoderNLS::get_MustFlush
// Il2CppName: get_MustFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::get_MustFlush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "get_MustFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderNLS::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::DecoderNLS::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::ClearMustFlush
// Il2CppName: ClearMustFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)()>(&System::Text::DecoderNLS::ClearMustFlush)> {
  static const MethodInfo* get() {
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
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::DecoderNLS::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int, int, bool)>(&System::Text::DecoderNLS::GetCharCount)> {
  static const MethodInfo* get() {
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
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Text::DecoderNLS::GetChars)> {
  static const MethodInfo* get() {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int, bool)>(&System::Text::DecoderNLS::GetChars)> {
  static const MethodInfo* get() {
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
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, flush});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Text::DecoderNLS::Convert)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderNLS::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderNLS::*)(uint8_t*, int, ::Il2CppChar*, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Text::DecoderNLS::Convert)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderNLS*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, flush, bytesUsed, charsUsed, completed});
  }
};
