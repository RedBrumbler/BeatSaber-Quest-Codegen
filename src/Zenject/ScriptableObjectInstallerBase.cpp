// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectInstallerBase
#include "Zenject/ScriptableObjectInstallerBase.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ScriptableObjectInstallerBase.get_Container
Zenject::DiContainer* Zenject::ScriptableObjectInstallerBase::get_Container() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
}
// Autogenerated method: Zenject.ScriptableObjectInstallerBase.Zenject.IInstaller.get_IsEnabled
bool Zenject::ScriptableObjectInstallerBase::Zenject_IInstaller_get_IsEnabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Zenject.IInstaller.get_IsEnabled"));
}
// Autogenerated method: Zenject.ScriptableObjectInstallerBase.InstallBindings
void Zenject::ScriptableObjectInstallerBase::InstallBindings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallBindings"));
}
// Autogenerated method: Zenject.ScriptableObjectInstallerBase..ctor
Zenject::ScriptableObjectInstallerBase* Zenject::ScriptableObjectInstallerBase::New_ctor() {
  return (ScriptableObjectInstallerBase*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ScriptableObjectInstallerBase"));
}
