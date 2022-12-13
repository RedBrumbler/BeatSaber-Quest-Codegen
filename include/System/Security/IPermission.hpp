// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.ISecurityEncodable
#include "System/Security/ISecurityEncodable.hpp"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: IPermission
  class IPermission;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::IPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::IPermission*, "System.Security", "IPermission");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.IPermission
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10766F8
  class IPermission/*, public ::System::Security::ISecurityEncodable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Security::ISecurityEncodable
    operator ::System::Security::ISecurityEncodable() noexcept {
      return *reinterpret_cast<::System::Security::ISecurityEncodable*>(this);
    }
    // Creating interface conversion operator: i_ISecurityEncodable
    inline ::System::Security::ISecurityEncodable* i_ISecurityEncodable() noexcept {
      return reinterpret_cast<::System::Security::ISecurityEncodable*>(this);
    }
    // public System.Void Demand()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Demand();
    // public System.Boolean IsSubsetOf(System.Security.IPermission target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsSubsetOf(::System::Security::IPermission* target);
  }; // System.Security.IPermission
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::IPermission::Demand
// Il2CppName: Demand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::IPermission::*)()>(&System::Security::IPermission::Demand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::IPermission*), "Demand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::IPermission::IsSubsetOf
// Il2CppName: IsSubsetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::IPermission::*)(::System::Security::IPermission*)>(&System::Security::IPermission::IsSubsetOf)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::IPermission*), "IsSubsetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
