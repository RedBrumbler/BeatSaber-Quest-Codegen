// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.BindStatement
#include "Zenject/BindStatement.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.IBindingFinalizer
#include "Zenject/IBindingFinalizer.hpp"
// Including type: Zenject.BindingInheritanceMethods
#include "Zenject/BindingInheritanceMethods.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.BindStatement.get_BindingInheritanceMethod
Zenject::BindingInheritanceMethods Zenject::BindStatement::get_BindingInheritanceMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::BindingInheritanceMethods>(this, "get_BindingInheritanceMethod"));
}
// Autogenerated method: Zenject.BindStatement.get_HasFinalizer
bool Zenject::BindStatement::get_HasFinalizer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasFinalizer"));
}
// Autogenerated method: Zenject.BindStatement.SetFinalizer
void Zenject::BindStatement::SetFinalizer(Zenject::IBindingFinalizer* bindingFinalizer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetFinalizer", bindingFinalizer));
}
// Autogenerated method: Zenject.BindStatement.AssertHasFinalizer
void Zenject::BindStatement::AssertHasFinalizer() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AssertHasFinalizer"));
}
// Autogenerated method: Zenject.BindStatement.AddDisposable
void Zenject::BindStatement::AddDisposable(System::IDisposable* disposable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddDisposable", disposable));
}
// Autogenerated method: Zenject.BindStatement.SpawnBindInfo
Zenject::BindInfo* Zenject::BindStatement::SpawnBindInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::BindInfo*>(this, "SpawnBindInfo"));
}
// Autogenerated method: Zenject.BindStatement.FinalizeBinding
void Zenject::BindStatement::FinalizeBinding(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBinding", container));
}
// Autogenerated method: Zenject.BindStatement.Reset
void Zenject::BindStatement::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: Zenject.BindStatement..ctor
Zenject::BindStatement* Zenject::BindStatement::New_ctor() {
  return (BindStatement*)THROW_UNLESS(il2cpp_utils::New("Zenject", "BindStatement"));
}
// Autogenerated method: Zenject.BindStatement.Dispose
void Zenject::BindStatement::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void Zenject::BindStatement::System_IDisposable_Dispose() {
  Dispose();
}