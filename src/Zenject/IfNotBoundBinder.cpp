// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IfNotBoundBinder
#include "Zenject/IfNotBoundBinder.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.IfNotBoundBinder..ctor
Zenject::IfNotBoundBinder* Zenject::IfNotBoundBinder::New_ctor(Zenject::BindInfo* bindInfo) {
  return (IfNotBoundBinder*)THROW_UNLESS(il2cpp_utils::New("Zenject", "IfNotBoundBinder", bindInfo));
}
// Autogenerated method: Zenject.IfNotBoundBinder.get_BindInfo
Zenject::BindInfo* Zenject::IfNotBoundBinder::get_BindInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::BindInfo*>(this, "get_BindInfo"));
}
// Autogenerated method: Zenject.IfNotBoundBinder.set_BindInfo
void Zenject::IfNotBoundBinder::set_BindInfo(Zenject::BindInfo* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_BindInfo", value));
}
// Autogenerated method: Zenject.IfNotBoundBinder.IfNotBound
void Zenject::IfNotBoundBinder::IfNotBound() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "IfNotBound"));
}
