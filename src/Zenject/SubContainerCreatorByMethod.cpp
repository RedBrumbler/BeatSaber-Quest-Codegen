// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByMethod
#include "Zenject/SubContainerCreatorByMethod.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.SubContainerCreatorBindInfo
#include "Zenject/SubContainerCreatorBindInfo.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByMethod..ctor
Zenject::SubContainerCreatorByMethod* Zenject::SubContainerCreatorByMethod::New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_1<Zenject::DiContainer*>* installMethod) {
  return (SubContainerCreatorByMethod*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByMethod", container, containerBindInfo, installMethod));
}
// Autogenerated method: Zenject.SubContainerCreatorByMethod.CreateSubContainer
Zenject::DiContainer* Zenject::SubContainerCreatorByMethod::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, context));
}
