// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: IRemotingTypeInfo
  class IRemotingTypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::IRemotingTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IRemotingTypeInfo*, "System.Runtime.Remoting", "IRemotingTypeInfo");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.IRemotingTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107E1A4
  class IRemotingTypeInfo {
    public:
    // public System.String get_TypeName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanCastTo(::System::Type* fromType, ::Il2CppObject* o);
  }; // System.Runtime.Remoting.IRemotingTypeInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::IRemotingTypeInfo::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::IRemotingTypeInfo::*)()>(&System::Runtime::Remoting::IRemotingTypeInfo::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::IRemotingTypeInfo*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::IRemotingTypeInfo::CanCastTo
// Il2CppName: CanCastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::IRemotingTypeInfo::*)(::System::Type*, ::Il2CppObject*)>(&System::Runtime::Remoting::IRemotingTypeInfo::CanCastTo)> {
  static const MethodInfo* get() {
    static auto* fromType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::IRemotingTypeInfo*), "CanCastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromType, o});
  }
};
