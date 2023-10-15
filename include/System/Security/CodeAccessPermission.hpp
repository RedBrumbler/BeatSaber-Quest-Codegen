// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.IPermission
#include "System/Security/IPermission.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System::Security::Permissions
namespace System::Security::Permissions {
  // Forward declaring type: PermissionState
  struct PermissionState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: CodeAccessPermission
  class CodeAccessPermission;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::CodeAccessPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::CodeAccessPermission*, "System.Security", "CodeAccessPermission");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.CodeAccessPermission
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107D248
  // [MonoTODOAttribute] Offset: 107D248
  class CodeAccessPermission : public ::Il2CppObject/*, public ::System::Security::IPermission*/ {
    public:
    // Creating interface conversion operator: operator ::System::Security::IPermission
    operator ::System::Security::IPermission() noexcept {
      return *reinterpret_cast<::System::Security::IPermission*>(this);
    }
    // Creating interface conversion operator: i_IPermission
    inline ::System::Security::IPermission* i_IPermission() noexcept {
      return reinterpret_cast<::System::Security::IPermission*>(this);
    }
    // public System.Void Demand()
    // Offset: 0x1BEDD30
    void Demand();
    // public System.Boolean IsSubsetOf(System.Security.IPermission target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsSubsetOf(::System::Security::IPermission* target);
    // public System.Security.SecurityElement ToXml()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::SecurityElement* ToXml();
    // System.Security.SecurityElement Element(System.Int32 version)
    // Offset: 0x1BEDF18
    ::System::Security::SecurityElement* Element(int version);
    // static System.Security.Permissions.PermissionState CheckPermissionState(System.Security.Permissions.PermissionState state, System.Boolean allowUnrestricted)
    // Offset: 0x1BEE058
    static ::System::Security::Permissions::PermissionState CheckPermissionState(::System::Security::Permissions::PermissionState state, bool allowUnrestricted);
    // static System.Void ThrowInvalidPermission(System.Security.IPermission target, System.Type expected)
    // Offset: 0x1BEE134
    static void ThrowInvalidPermission(::System::Security::IPermission* target, ::System::Type* expected);
    // private System.Void System.Security.IPermission.Demand()
    // Offset: 0x1BEE1F8
    void System_Security_IPermission_Demand();
    // protected System.Void .ctor()
    // Offset: 0x1BEDD28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodeAccessPermission* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::CodeAccessPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodeAccessPermission*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1BEDDBC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1BEDEE4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1BEDEEC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Security.CodeAccessPermission
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::Demand
// Il2CppName: Demand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::Demand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "Demand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::IsSubsetOf
// Il2CppName: IsSubsetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::CodeAccessPermission::*)(::System::Security::IPermission*)>(&System::Security::CodeAccessPermission::IsSubsetOf)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "IsSubsetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::ToXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::Element
// Il2CppName: Element
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::CodeAccessPermission::*)(int)>(&System::Security::CodeAccessPermission::Element)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "Element", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::CheckPermissionState
// Il2CppName: CheckPermissionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Permissions::PermissionState (*)(::System::Security::Permissions::PermissionState, bool)>(&System::Security::CodeAccessPermission::CheckPermissionState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System.Security.Permissions", "PermissionState")->byval_arg;
    static auto* allowUnrestricted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "CheckPermissionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, allowUnrestricted});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::ThrowInvalidPermission
// Il2CppName: ThrowInvalidPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::IPermission*, ::System::Type*)>(&System::Security::CodeAccessPermission::ThrowInvalidPermission)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "ThrowInvalidPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, expected});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::System_Security_IPermission_Demand
// Il2CppName: System.Security.IPermission.Demand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::System_Security_IPermission_Demand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "System.Security.IPermission.Demand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::CodeAccessPermission::*)(::Il2CppObject*)>(&System::Security::CodeAccessPermission::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::CodeAccessPermission::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::CodeAccessPermission*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};