// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticContext
#include "Zenject/StaticContext.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private Zenject.DiContainer _container
Zenject::DiContainer* Zenject::StaticContext::_get__container() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::DiContainer*>("Zenject", "StaticContext", "_container"));
}
// Autogenerated static field setter
// Set static field: static private Zenject.DiContainer _container
void Zenject::StaticContext::_set__container(Zenject::DiContainer* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "StaticContext", "_container", value));
}
// Autogenerated method: Zenject.StaticContext.Clear
void Zenject::StaticContext::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject", "StaticContext", "Clear"));
}
// Autogenerated method: Zenject.StaticContext.get_HasContainer
bool Zenject::StaticContext::get_HasContainer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject", "StaticContext", "get_HasContainer"));
}
// Autogenerated method: Zenject.StaticContext.get_Container
Zenject::DiContainer* Zenject::StaticContext::get_Container() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>("Zenject", "StaticContext", "get_Container"));
}