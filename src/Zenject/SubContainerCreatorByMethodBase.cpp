// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.SubContainerCreatorBindInfo
#include "Zenject/SubContainerCreatorBindInfo.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByMethodBase..ctor
Zenject::SubContainerCreatorByMethodBase* Zenject::SubContainerCreatorByMethodBase::New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo) {
  return (SubContainerCreatorByMethodBase*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByMethodBase", container, containerBindInfo));
}
// Autogenerated method: Zenject.SubContainerCreatorByMethodBase.CreateEmptySubContainer
Zenject::DiContainer* Zenject::SubContainerCreatorByMethodBase::CreateEmptySubContainer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateEmptySubContainer"));
}
// Autogenerated method: Zenject.SubContainerCreatorByMethodBase.CreateSubContainer
Zenject::DiContainer* Zenject::SubContainerCreatorByMethodBase::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, context));
}