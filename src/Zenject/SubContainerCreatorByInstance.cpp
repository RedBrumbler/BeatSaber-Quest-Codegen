// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByInstance
#include "Zenject/SubContainerCreatorByInstance.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByInstance..ctor
Zenject::SubContainerCreatorByInstance* Zenject::SubContainerCreatorByInstance::New_ctor(Zenject::DiContainer* subcontainer) {
  return (SubContainerCreatorByInstance*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByInstance", subcontainer));
}
// Autogenerated method: Zenject.SubContainerCreatorByInstance.CreateSubContainer
Zenject::DiContainer* Zenject::SubContainerCreatorByInstance::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, context));
}
