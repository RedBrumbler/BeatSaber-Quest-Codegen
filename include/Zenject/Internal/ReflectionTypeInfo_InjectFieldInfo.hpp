// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ReflectionTypeInfo::InjectFieldInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Reflection.FieldInfo FieldInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::FieldInfo* FieldInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::InjectableInfo* InjectableInfo;
    // Field size check
    static_assert(sizeof(::Zenject::InjectableInfo*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Reflection.FieldInfo FieldInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn_FieldInfo();
    // Get instance field reference: public readonly Zenject.InjectableInfo InjectableInfo
    [[deprecated("Use field access instead!")]] ::Zenject::InjectableInfo*& dyn_InjectableInfo();
    // public System.Void .ctor(System.Reflection.FieldInfo fieldInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0x1CCCED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo::InjectFieldInfo* New_ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo::InjectFieldInfo*, creationType>(fieldInfo, injectableInfo)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectFieldInfo
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeInfo::InjectFieldInfo), 24 + sizeof(::Zenject::InjectableInfo*)> __Zenject_Internal_ReflectionTypeInfo_InjectFieldInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo::InjectFieldInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
