// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.GenericAce
#include "System/Security/AccessControl/GenericAce.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: SecurityIdentifier
  class SecurityIdentifier;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: KnownAce
  class KnownAce;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::KnownAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::KnownAce*, "System.Security.AccessControl", "KnownAce");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.KnownAce
  // [TokenAttribute] Offset: FFFFFFFF
  class KnownAce : public ::System::Security::AccessControl::GenericAce {
    public:
    // Writing base type padding for base size: 0x12 to desired offset: 0x14
    char ___base_padding[0x2] = {};
    public:
    // private System.Int32 access_mask
    // Size: 0x4
    // Offset: 0x14
    int access_mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Principal.SecurityIdentifier identifier
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Principal::SecurityIdentifier* identifier;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::SecurityIdentifier*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 access_mask
    [[deprecated("Use field access instead!")]] int& dyn_access_mask();
    // Get instance field reference: private System.Security.Principal.SecurityIdentifier identifier
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::SecurityIdentifier*& dyn_identifier();
    // public System.Int32 get_AccessMask()
    // Offset: 0x1BE72F8
    int get_AccessMask();
    // public System.Void set_AccessMask(System.Int32 value)
    // Offset: 0x1BE7300
    void set_AccessMask(int value);
    // public System.Security.Principal.SecurityIdentifier get_SecurityIdentifier()
    // Offset: 0x1BE7308
    ::System::Security::Principal::SecurityIdentifier* get_SecurityIdentifier();
    // public System.Void set_SecurityIdentifier(System.Security.Principal.SecurityIdentifier value)
    // Offset: 0x1BE7310
    void set_SecurityIdentifier(::System::Security::Principal::SecurityIdentifier* value);
    // System.Void .ctor(System.Security.AccessControl.AceType type, System.Security.AccessControl.AceFlags flags)
    // Offset: 0x1BE72F0
    // Implemented from: System.Security.AccessControl.GenericAce
    // Base method: System.Void GenericAce::.ctor(System.Security.AccessControl.AceType type, System.Security.AccessControl.AceFlags flags)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KnownAce* New_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::KnownAce::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KnownAce*, creationType>(type, flags)));
    }
    // System.Void .ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1BE72F4
    // Implemented from: System.Security.AccessControl.GenericAce
    // Base method: System.Void GenericAce::.ctor(System.Byte[] binaryForm, System.Int32 offset)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KnownAce* New_ctor(::ArrayW<uint8_t> binaryForm, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::KnownAce::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KnownAce*, creationType>(binaryForm, offset)));
    }
  }; // System.Security.AccessControl.KnownAce
  #pragma pack(pop)
  static check_size<sizeof(KnownAce), 24 + sizeof(::System::Security::Principal::SecurityIdentifier*)> __System_Security_AccessControl_KnownAceSizeCheck;
  static_assert(sizeof(KnownAce) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::KnownAce::get_AccessMask
// Il2CppName: get_AccessMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::KnownAce::*)()>(&System::Security::AccessControl::KnownAce::get_AccessMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::KnownAce*), "get_AccessMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::KnownAce::set_AccessMask
// Il2CppName: set_AccessMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::KnownAce::*)(int)>(&System::Security::AccessControl::KnownAce::set_AccessMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::KnownAce*), "set_AccessMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::KnownAce::get_SecurityIdentifier
// Il2CppName: get_SecurityIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::SecurityIdentifier* (System::Security::AccessControl::KnownAce::*)()>(&System::Security::AccessControl::KnownAce::get_SecurityIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::KnownAce*), "get_SecurityIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::KnownAce::set_SecurityIdentifier
// Il2CppName: set_SecurityIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::KnownAce::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::AccessControl::KnownAce::set_SecurityIdentifier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::KnownAce*), "set_SecurityIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::KnownAce::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::KnownAce::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
