// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopableBindingFinalizer
#include "Zenject/ScopableBindingFinalizer.hpp"
// Including type: Zenject.ScopableBindingFinalizer/<>c__DisplayClass3_0
#include "Zenject/ScopableBindingFinalizer_--c__DisplayClass3_0.hpp"
// Including type: Zenject.ScopableBindingFinalizer/<>c__DisplayClass4_0
#include "Zenject/ScopableBindingFinalizer_--c__DisplayClass4_0.hpp"
// Including type: System.Func`3
#include "System/Func_3.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ScopableBindingFinalizer..ctor
Zenject::ScopableBindingFinalizer* Zenject::ScopableBindingFinalizer::New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory) {
  return (ScopableBindingFinalizer*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ScopableBindingFinalizer", bindInfo, providerFactory));
}
// Autogenerated method: Zenject.ScopableBindingFinalizer.FinalizeBindingConcrete
void Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBindingConcrete", container, concreteTypes));
}
// Autogenerated method: Zenject.ScopableBindingFinalizer.FinalizeBindingSelf
void Zenject::ScopableBindingFinalizer::FinalizeBindingSelf(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBindingSelf", container));
}
// Autogenerated method: Zenject.ScopableBindingFinalizer.OnFinalizeBinding
void Zenject::ScopableBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnFinalizeBinding", container));
}