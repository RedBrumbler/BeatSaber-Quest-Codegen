// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByInstaller
#include "Zenject/SubContainerCreatorByInstaller.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.SubContainerCreatorBindInfo
#include "Zenject/SubContainerCreatorBindInfo.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByInstaller..ctor
Zenject::SubContainerCreatorByInstaller* Zenject::SubContainerCreatorByInstaller::New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Type* installerType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArgs) {
  return (SubContainerCreatorByInstaller*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByInstaller", container, containerBindInfo, installerType, extraArgs));
}
// Autogenerated method: Zenject.SubContainerCreatorByInstaller..ctor
Zenject::SubContainerCreatorByInstaller* Zenject::SubContainerCreatorByInstaller::New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Type* installerType) {
  return (SubContainerCreatorByInstaller*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByInstaller", container, containerBindInfo, installerType));
}
// Autogenerated method: Zenject.SubContainerCreatorByInstaller.CreateSubContainer
Zenject::DiContainer* Zenject::SubContainerCreatorByInstaller::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, context));
}
