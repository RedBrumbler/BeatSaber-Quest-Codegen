// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectTypeInfo/InjectMethodInfo
#include "Zenject/InjectTypeInfo_InjectMethodInfo.hpp"
// Including type: Zenject.ZenInjectMethod
#include "Zenject/ZenInjectMethod.hpp"
// Including type: Zenject.InjectableInfo
#include "Zenject/InjectableInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.InjectTypeInfo/InjectMethodInfo..ctor
Zenject::InjectTypeInfo::InjectMethodInfo* Zenject::InjectTypeInfo::InjectMethodInfo::New_ctor(Zenject::ZenInjectMethod* action, ::Array<Zenject::InjectableInfo*>* parameters, ::CsString* name) {
  return (InjectTypeInfo::InjectMethodInfo*)THROW_UNLESS(il2cpp_utils::New("Zenject", "InjectTypeInfo/InjectMethodInfo", action, parameters, name));
}
