// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo
#include "Zenject/Internal/ReflectionTypeInfo_InjectPropertyInfo.hpp"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
// Including type: Zenject.InjectableInfo
#include "Zenject/InjectableInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo..ctor
Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo* Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo::New_ctor(System::Reflection::PropertyInfo* propertyInfo, Zenject::InjectableInfo* injectableInfo) {
  return (ReflectionTypeInfo::InjectPropertyInfo*)THROW_UNLESS(il2cpp_utils::New("Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo", propertyInfo, injectableInfo));
}