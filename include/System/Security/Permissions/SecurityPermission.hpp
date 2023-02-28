// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.CodeAccessPermission
#include "System/Security/CodeAccessPermission.hpp"
// Including type: System.Security.Permissions.SecurityPermissionFlag
#include "System/Security/Permissions/SecurityPermissionFlag.hpp"
// Including type: System.Security.Permissions.PermissionState
#include "System/Security/Permissions/PermissionState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Skipping declaration: IPermission because it is already included!
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Forward declaring type: SecurityPermission
  class SecurityPermission;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Permissions::SecurityPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityPermission*, "System.Security.Permissions", "SecurityPermission");
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Permissions.SecurityPermission
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107D460
  class SecurityPermission : public ::System::Security::CodeAccessPermission {
    public:
    public:
    // private System.Security.Permissions.SecurityPermissionFlag flags
    // Size: 0x4
    // Offset: 0x10
    ::System::Security::Permissions::SecurityPermissionFlag flags;
    // Field size check
    static_assert(sizeof(::System::Security::Permissions::SecurityPermissionFlag) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Security::Permissions::SecurityPermissionFlag
    constexpr operator ::System::Security::Permissions::SecurityPermissionFlag() const noexcept {
      return flags;
    }
    // Get instance field reference: private System.Security.Permissions.SecurityPermissionFlag flags
    [[deprecated("Use field access instead!")]] ::System::Security::Permissions::SecurityPermissionFlag& dyn_flags();
    // public System.Void .ctor(System.Security.Permissions.PermissionState state)
    // Offset: 0x1C36A00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityPermission* New_ctor(::System::Security::Permissions::PermissionState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Permissions::SecurityPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityPermission*, creationType>(state)));
    }
    // public System.Boolean IsUnrestricted()
    // Offset: 0x1C36A48
    bool IsUnrestricted();
    // private System.Boolean IsEmpty()
    // Offset: 0x1C36B6C
    bool IsEmpty();
    // private System.Security.Permissions.SecurityPermission Cast(System.Security.IPermission target)
    // Offset: 0x1C36AC0
    ::System::Security::Permissions::SecurityPermission* Cast(::System::Security::IPermission* target);
    // public override System.Boolean IsSubsetOf(System.Security.IPermission target)
    // Offset: 0x1C36A5C
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Boolean CodeAccessPermission::IsSubsetOf(System.Security.IPermission target)
    bool IsSubsetOf(::System::Security::IPermission* target);
    // public override System.Security.SecurityElement ToXml()
    // Offset: 0x1C36B7C
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Security.SecurityElement CodeAccessPermission::ToXml()
    ::System::Security::SecurityElement* ToXml();
  }; // System.Security.Permissions.SecurityPermission
  #pragma pack(pop)
  static check_size<sizeof(SecurityPermission), 16 + sizeof(::System::Security::Permissions::SecurityPermissionFlag)> __System_Security_Permissions_SecurityPermissionSizeCheck;
  static_assert(sizeof(SecurityPermission) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermission::IsUnrestricted
// Il2CppName: IsUnrestricted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::SecurityPermission::*)()>(&System::Security::Permissions::SecurityPermission::IsUnrestricted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermission*), "IsUnrestricted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermission::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::SecurityPermission::*)()>(&System::Security::Permissions::SecurityPermission::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermission*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermission::Cast
// Il2CppName: Cast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Permissions::SecurityPermission* (System::Security::Permissions::SecurityPermission::*)(::System::Security::IPermission*)>(&System::Security::Permissions::SecurityPermission::Cast)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermission*), "Cast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermission::IsSubsetOf
// Il2CppName: IsSubsetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::SecurityPermission::*)(::System::Security::IPermission*)>(&System::Security::Permissions::SecurityPermission::IsSubsetOf)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermission*), "IsSubsetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermission::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::Permissions::SecurityPermission::*)()>(&System::Security::Permissions::SecurityPermission::ToXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermission*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
