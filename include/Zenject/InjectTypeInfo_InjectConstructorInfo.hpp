// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenFactoryMethod
  class ZenFactoryMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InjectTypeInfo::InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo::InjectConstructorInfo*, "Zenject", "InjectTypeInfo/InjectConstructorInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectTypeInfo/Zenject.InjectConstructorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: 10D3924
  class InjectTypeInfo::InjectConstructorInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly Zenject.ZenFactoryMethod Factory
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ZenFactoryMethod* Factory;
    // Field size check
    static_assert(sizeof(::Zenject::ZenFactoryMethod*) == 0x8);
    // public readonly Zenject.InjectableInfo[] Parameters
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Zenject::InjectableInfo*> Parameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Zenject::InjectableInfo*>) == 0x8);
    public:
    // Get instance field reference: public readonly Zenject.ZenFactoryMethod Factory
    [[deprecated("Use field access instead!")]] ::Zenject::ZenFactoryMethod*& dyn_Factory();
    // Get instance field reference: public readonly Zenject.InjectableInfo[] Parameters
    [[deprecated("Use field access instead!")]] ::ArrayW<::Zenject::InjectableInfo*>& dyn_Parameters();
    // public System.Void .ctor(Zenject.ZenFactoryMethod factory, Zenject.InjectableInfo[] parameters)
    // Offset: 0x2B9B1C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectTypeInfo::InjectConstructorInfo* New_ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*> parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InjectTypeInfo::InjectConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectTypeInfo::InjectConstructorInfo*, creationType>(factory, parameters)));
    }
  }; // Zenject.InjectTypeInfo/Zenject.InjectConstructorInfo
  #pragma pack(pop)
  static check_size<sizeof(InjectTypeInfo::InjectConstructorInfo), 24 + sizeof(::ArrayW<::Zenject::InjectableInfo*>)> __Zenject_InjectTypeInfo_InjectConstructorInfoSizeCheck;
  static_assert(sizeof(InjectTypeInfo::InjectConstructorInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::InjectConstructorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
