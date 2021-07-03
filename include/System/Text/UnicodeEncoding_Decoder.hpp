// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UnicodeEncoding
#include "System/Text/UnicodeEncoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x36
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UnicodeEncoding/Decoder
  class UnicodeEncoding::Decoder : public System::Text::DecoderNLS {
    public:
    // System.Int32 lastByte
    // Size: 0x4
    // Offset: 0x30
    int lastByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Char lastChar
    // Size: 0x2
    // Offset: 0x34
    ::Il2CppChar lastChar;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: Decoder
    Decoder(int lastByte_ = {}, ::Il2CppChar lastChar_ = {}) noexcept : lastByte{lastByte_}, lastChar{lastChar_} {}
    // public System.Void .ctor(System.Text.UnicodeEncoding encoding)
    // Offset: 0x18A73E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding::Decoder* New_ctor(System::Text::UnicodeEncoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding::Decoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18A7D38
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18A7980
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding::Decoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding::Decoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x18A7E90
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x18A7EB8
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UnicodeEncoding/Decoder
  #pragma pack(pop)
  static check_size<sizeof(UnicodeEncoding::Decoder), 52 + sizeof(::Il2CppChar)> __System_Text_UnicodeEncoding_DecoderSizeCheck;
  static_assert(sizeof(UnicodeEncoding::Decoder) == 0x36);
  // Writing MetadataGetter for method: UnicodeEncoding::Decoder::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnicodeEncoding::Decoder::*)(System::Text::UnicodeEncoding*)>(&UnicodeEncoding::Decoder::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::UnicodeEncoding*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnicodeEncoding::Decoder::*)(System::Text::UnicodeEncoding*)>(&UnicodeEncoding::Decoder::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::UnicodeEncoding*>()});
    }
  };
  // Writing MetadataGetter for method: UnicodeEncoding::Decoder::System_Runtime_Serialization_ISerializable_GetObjectData
  // Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnicodeEncoding::Decoder::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&UnicodeEncoding::Decoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  // Writing MetadataGetter for method: UnicodeEncoding::Decoder::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnicodeEncoding::Decoder::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&UnicodeEncoding::Decoder::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnicodeEncoding::Decoder::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&UnicodeEncoding::Decoder::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  // Writing MetadataGetter for method: UnicodeEncoding::Decoder::Reset
  // Il2CppName: Reset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnicodeEncoding::Decoder::*)()>(&UnicodeEncoding::Decoder::Reset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: UnicodeEncoding::Decoder::get_HasState
  // Il2CppName: get_HasState
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnicodeEncoding::Decoder::*)()>(&UnicodeEncoding::Decoder::get_HasState)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnicodeEncoding::Decoder*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding::Decoder*, "System.Text", "UnicodeEncoding/Decoder");
