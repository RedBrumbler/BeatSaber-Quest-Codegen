// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UTF7Encoding::Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF7Encoding::Decoder*, "System.Text", "UTF7Encoding/Decoder");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF7Encoding/System.Text.Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF7Encoding::Decoder : public ::System::Text::DecoderNLS {
    public:
    public:
    // System.Int32 bits
    // Size: 0x4
    // Offset: 0x30
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 bitCount
    // Size: 0x4
    // Offset: 0x34
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean firstByte
    // Size: 0x1
    // Offset: 0x38
    bool firstByte;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Int32 bits
    [[deprecated("Use field access instead!")]] int& dyn_bits();
    // Get instance field reference: System.Int32 bitCount
    [[deprecated("Use field access instead!")]] int& dyn_bitCount();
    // Get instance field reference: System.Boolean firstByte
    [[deprecated("Use field access instead!")]] bool& dyn_firstByte();
    // public System.Void .ctor(System.Text.UTF7Encoding encoding)
    // Offset: 0x2295D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Decoder* New_ctor(::System::Text::UTF7Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF7Encoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Decoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x229615C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // override System.Boolean get_HasState()
    // Offset: 0x229627C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2295F1C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Decoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF7Encoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Decoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x2296254
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
  }; // System.Text.UTF7Encoding/System.Text.Decoder
  #pragma pack(pop)
  static check_size<sizeof(UTF7Encoding::Decoder), 56 + sizeof(bool)> __System_Text_UTF7Encoding_DecoderSizeCheck;
  static_assert(sizeof(UTF7Encoding::Decoder) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Decoder::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::Decoder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::UTF7Encoding::Decoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Decoder*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Decoder::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF7Encoding::Decoder::*)()>(&System::Text::UTF7Encoding::Decoder::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Decoder*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Decoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::Decoder::*)()>(&System::Text::UTF7Encoding::Decoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Decoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
