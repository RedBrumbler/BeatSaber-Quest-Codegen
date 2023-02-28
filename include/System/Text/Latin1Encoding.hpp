// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.EncodingNLS
#include "System/Text/EncodingNLS.hpp"
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: Latin1Encoding
  class Latin1Encoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::Latin1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Latin1Encoding*, "System.Text", "Latin1Encoding");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Latin1Encoding
  // [TokenAttribute] Offset: FFFFFFFF
  class Latin1Encoding : public ::System::Text::EncodingNLS/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private readonly System.Char[] arrayCharBestFit
    static ::ArrayW<::Il2CppChar> _get_arrayCharBestFit();
    // Set static field: static private readonly System.Char[] arrayCharBestFit
    static void _set_arrayCharBestFit(::ArrayW<::Il2CppChar> value);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1F7B3D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Latin1Encoding* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::Latin1Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Latin1Encoding*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1F7BD3C
    static void _cctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1F7B408
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0x1F76C90
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Latin1Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::Latin1Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Latin1Encoding*, creationType>()));
    }
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 charCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1F7B4CC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 charCount, System.Text.EncoderNLS encoder)
    int GetByteCount(::Il2CppChar* chars, int charCount, ::System::Text::EncoderNLS* encoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1F7B6B8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, ::System::Text::EncoderNLS* encoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    // Offset: 0x1F7BA40
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    int GetCharCount(uint8_t* bytes, int count, ::System::Text::DecoderNLS* decoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    // Offset: 0x1F7BA48
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, ::System::Text::DecoderNLS* decoder);
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x1F7BAC0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x1F7BBCC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // override System.Char[] GetBestFitUnicodeToBytesData()
    // Offset: 0x1F7BCD4
    // Implemented from: System.Text.Encoding
    // Base method: System.Char[] Encoding::GetBestFitUnicodeToBytesData()
    ::ArrayW<::Il2CppChar> GetBestFitUnicodeToBytesData();
  }; // System.Text.Latin1Encoding
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Latin1Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::Latin1Encoding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::Latin1Encoding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Latin1Encoding::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::Latin1Encoding::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Latin1Encoding::*)(::Il2CppChar*, int, ::System::Text::EncoderNLS*)>(&System::Text::Latin1Encoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Latin1Encoding::*)(::Il2CppChar*, int, uint8_t*, int, ::System::Text::EncoderNLS*)>(&System::Text::Latin1Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Latin1Encoding::*)(uint8_t*, int, ::System::Text::DecoderNLS*)>(&System::Text::Latin1Encoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, decoder});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Latin1Encoding::*)(uint8_t*, int, ::Il2CppChar*, int, ::System::Text::DecoderNLS*)>(&System::Text::Latin1Encoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, decoder});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetMaxByteCount
// Il2CppName: GetMaxByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Latin1Encoding::*)(int)>(&System::Text::Latin1Encoding::GetMaxByteCount)> {
  static const MethodInfo* get() {
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetMaxByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCount});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetMaxCharCount
// Il2CppName: GetMaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Latin1Encoding::*)(int)>(&System::Text::Latin1Encoding::GetMaxCharCount)> {
  static const MethodInfo* get() {
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetMaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::Latin1Encoding::GetBestFitUnicodeToBytesData
// Il2CppName: GetBestFitUnicodeToBytesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (System::Text::Latin1Encoding::*)()>(&System::Text::Latin1Encoding::GetBestFitUnicodeToBytesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Latin1Encoding*), "GetBestFitUnicodeToBytesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
