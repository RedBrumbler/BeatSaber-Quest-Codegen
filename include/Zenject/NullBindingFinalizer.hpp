// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IBindingFinalizer
#include "Zenject/IBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: NullBindingFinalizer
  class NullBindingFinalizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::NullBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NullBindingFinalizer*, "Zenject", "NullBindingFinalizer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NullBindingFinalizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class NullBindingFinalizer : public ::Il2CppObject/*, public ::Zenject::IBindingFinalizer*/ {
    public:
    // Creating interface conversion operator: operator ::Zenject::IBindingFinalizer
    operator ::Zenject::IBindingFinalizer() noexcept {
      return *reinterpret_cast<::Zenject::IBindingFinalizer*>(this);
    }
    // Creating interface conversion operator: i_IBindingFinalizer
    inline ::Zenject::IBindingFinalizer* i_IBindingFinalizer() noexcept {
      return reinterpret_cast<::Zenject::IBindingFinalizer*>(this);
    }
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0x1CD23BC
    ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // public System.Void .ctor()
    // Offset: 0x1CD23C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullBindingFinalizer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::NullBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullBindingFinalizer*, creationType>()));
    }
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x1CD23C4
    void FinalizeBinding(::Zenject::DiContainer* container);
  }; // Zenject.NullBindingFinalizer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::NullBindingFinalizer::get_BindingInheritanceMethod
// Il2CppName: get_BindingInheritanceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingInheritanceMethods (Zenject::NullBindingFinalizer::*)()>(&Zenject::NullBindingFinalizer::get_BindingInheritanceMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::NullBindingFinalizer*), "get_BindingInheritanceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::NullBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::NullBindingFinalizer::FinalizeBinding
// Il2CppName: FinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NullBindingFinalizer::*)(::Zenject::DiContainer*)>(&Zenject::NullBindingFinalizer::FinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::NullBindingFinalizer*), "FinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
