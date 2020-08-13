// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerPrefabBindingFinalizer
#include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
// Including type: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass5_0
#include "Zenject/SubContainerPrefabBindingFinalizer_--c__DisplayClass5_0.hpp"
// Including type: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass5_1
#include "Zenject/SubContainerPrefabBindingFinalizer_--c__DisplayClass5_1.hpp"
// Including type: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0
#include "Zenject/SubContainerPrefabBindingFinalizer_--c__DisplayClass6_0.hpp"
// Including type: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1
#include "Zenject/SubContainerPrefabBindingFinalizer_--c__DisplayClass6_1.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerPrefabBindingFinalizer..ctor
Zenject::SubContainerPrefabBindingFinalizer* Zenject::SubContainerPrefabBindingFinalizer::New_ctor(Zenject::BindInfo* bindInfo, ::CsObject* subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* subContainerCreatorFactory) {
  return (SubContainerPrefabBindingFinalizer*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerPrefabBindingFinalizer", bindInfo, subIdentifier, resolveAll, subContainerCreatorFactory));
}
// Autogenerated method: Zenject.SubContainerPrefabBindingFinalizer.FinalizeBindingConcrete
void Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBindingConcrete", container, concreteTypes));
}
// Autogenerated method: Zenject.SubContainerPrefabBindingFinalizer.FinalizeBindingSelf
void Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingSelf(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBindingSelf", container));
}
// Autogenerated method: Zenject.SubContainerPrefabBindingFinalizer.OnFinalizeBinding
void Zenject::SubContainerPrefabBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnFinalizeBinding", container));
}
