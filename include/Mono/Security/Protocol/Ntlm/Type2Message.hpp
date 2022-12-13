// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: Type2Message
  class Type2Message;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type2Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type2Message*, "Mono.Security.Protocol.Ntlm", "Type2Message");
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type2Message
  // [TokenAttribute] Offset: FFFFFFFF
  class Type2Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    public:
    // private System.Byte[] _nonce
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> nonce;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String _targetName
    // Size: 0x8
    // Offset: 0x20
    ::StringW targetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] _targetInfo
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> targetInfo;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.Byte[] _nonce
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__nonce();
    // Get instance field reference: private System.String _targetName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__targetName();
    // Get instance field reference: private System.Byte[] _targetInfo
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__targetInfo();
    // public System.Byte[] get_Nonce()
    // Offset: 0x23C2218
    ::ArrayW<uint8_t> get_Nonce();
    // public System.String get_TargetName()
    // Offset: 0x23C32F8
    ::StringW get_TargetName();
    // public System.Byte[] get_TargetInfo()
    // Offset: 0x23C2198
    ::ArrayW<uint8_t> get_TargetInfo();
    // public System.Void .ctor(System.Byte[] message)
    // Offset: 0x23C31D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type2Message* New_ctor(::ArrayW<uint8_t> message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Ntlm::Type2Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type2Message*, creationType>(message)));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23C327C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x23C3300
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::ArrayW<uint8_t> message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x23C3488
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::ArrayW<uint8_t> GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type2Message
  #pragma pack(pop)
  static check_size<sizeof(Type2Message), 40 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Protocol_Ntlm_Type2MessageSizeCheck;
  static_assert(sizeof(Type2Message) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce
// Il2CppName: get_Nonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type2Message*), "get_Nonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName
// Il2CppName: get_TargetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type2Message*), "get_TargetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo
// Il2CppName: get_TargetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type2Message*), "get_TargetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&Mono::Security::Protocol::Ntlm::Type2Message::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type2Message*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type2Message::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::Type2Message::Decode)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type2Message*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&Mono::Security::Protocol::Ntlm::Type2Message::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type2Message*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
