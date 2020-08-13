// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewPrefab
#include "Zenject/SubContainerCreatorByNewPrefab.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByNewPrefab..ctor
Zenject::SubContainerCreatorByNewPrefab* Zenject::SubContainerCreatorByNewPrefab::New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return (SubContainerCreatorByNewPrefab*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByNewPrefab", container, prefabProvider, gameObjectBindInfo));
}
// Autogenerated method: Zenject.SubContainerCreatorByNewPrefab.CreateSubContainer
Zenject::DiContainer* Zenject::SubContainerCreatorByNewPrefab::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* parentContext) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, parentContext));
}
