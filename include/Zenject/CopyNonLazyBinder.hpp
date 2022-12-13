// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.NonLazyBinder
#include "Zenject/NonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: CopyNonLazyBinder
  class CopyNonLazyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::CopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CopyNonLazyBinder*, "Zenject", "CopyNonLazyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.CopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class CopyNonLazyBinder : public ::Zenject::NonLazyBinder {
    public:
    public:
    // private System.Collections.Generic.List`1<Zenject.BindInfo> _secondaryBindInfos
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* secondaryBindInfos;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::BindInfo*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::BindInfo*
    constexpr operator ::Zenject::BindInfo*() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.BindInfo> _secondaryBindInfos
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*& dyn__secondaryBindInfos();
    // System.Void AddSecondaryCopyBindInfo(Zenject.BindInfo bindInfo)
    // Offset: 0x17C62FC
    void AddSecondaryCopyBindInfo(::Zenject::BindInfo* bindInfo);
    // public Zenject.NonLazyBinder CopyIntoAllSubContainers()
    // Offset: 0x17C6394
    ::Zenject::NonLazyBinder* CopyIntoAllSubContainers();
    // public Zenject.NonLazyBinder CopyIntoDirectSubContainers()
    // Offset: 0x17C64C4
    ::Zenject::NonLazyBinder* CopyIntoDirectSubContainers();
    // public Zenject.NonLazyBinder MoveIntoAllSubContainers()
    // Offset: 0x17C64EC
    ::Zenject::NonLazyBinder* MoveIntoAllSubContainers();
    // public Zenject.NonLazyBinder MoveIntoDirectSubContainers()
    // Offset: 0x17C6514
    ::Zenject::NonLazyBinder* MoveIntoDirectSubContainers();
    // private System.Void SetInheritanceMethod(Zenject.BindingInheritanceMethods method)
    // Offset: 0x17C63BC
    void SetInheritanceMethod(::Zenject::BindingInheritanceMethods method);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x17C071C
    // Implemented from: Zenject.NonLazyBinder
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::CopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.CopyNonLazyBinder
  #pragma pack(pop)
  static check_size<sizeof(CopyNonLazyBinder), 24 + sizeof(::System::Collections::Generic::List_1<::Zenject::BindInfo*>*)> __Zenject_CopyNonLazyBinderSizeCheck;
  static_assert(sizeof(CopyNonLazyBinder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::AddSecondaryCopyBindInfo
// Il2CppName: AddSecondaryCopyBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::CopyNonLazyBinder::*)(::Zenject::BindInfo*)>(&Zenject::CopyNonLazyBinder::AddSecondaryCopyBindInfo)> {
  static const MethodInfo* get() {
    static auto* bindInfo = &::il2cpp_utils::GetClassFromName("Zenject", "BindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CopyNonLazyBinder*), "AddSecondaryCopyBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindInfo});
  }
};
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::CopyIntoAllSubContainers
// Il2CppName: CopyIntoAllSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NonLazyBinder* (Zenject::CopyNonLazyBinder::*)()>(&Zenject::CopyNonLazyBinder::CopyIntoAllSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CopyNonLazyBinder*), "CopyIntoAllSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::CopyIntoDirectSubContainers
// Il2CppName: CopyIntoDirectSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NonLazyBinder* (Zenject::CopyNonLazyBinder::*)()>(&Zenject::CopyNonLazyBinder::CopyIntoDirectSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CopyNonLazyBinder*), "CopyIntoDirectSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::MoveIntoAllSubContainers
// Il2CppName: MoveIntoAllSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NonLazyBinder* (Zenject::CopyNonLazyBinder::*)()>(&Zenject::CopyNonLazyBinder::MoveIntoAllSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CopyNonLazyBinder*), "MoveIntoAllSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::MoveIntoDirectSubContainers
// Il2CppName: MoveIntoDirectSubContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::NonLazyBinder* (Zenject::CopyNonLazyBinder::*)()>(&Zenject::CopyNonLazyBinder::MoveIntoDirectSubContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CopyNonLazyBinder*), "MoveIntoDirectSubContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::SetInheritanceMethod
// Il2CppName: SetInheritanceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::CopyNonLazyBinder::*)(::Zenject::BindingInheritanceMethods)>(&Zenject::CopyNonLazyBinder::SetInheritanceMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("Zenject", "BindingInheritanceMethods")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CopyNonLazyBinder*), "SetInheritanceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Zenject::CopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
