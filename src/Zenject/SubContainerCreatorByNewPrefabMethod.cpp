// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewPrefabMethod
#include "Zenject/SubContainerCreatorByNewPrefabMethod.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.GameObjectContext
#include "Zenject/GameObjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerCreatorByNewPrefabMethod..ctor
Zenject::SubContainerCreatorByNewPrefabMethod* Zenject::SubContainerCreatorByNewPrefabMethod::New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_1<Zenject::DiContainer*>* installerMethod) {
  return (SubContainerCreatorByNewPrefabMethod*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerCreatorByNewPrefabMethod", container, prefabProvider, gameObjectBindInfo, installerMethod));
}
// Autogenerated method: Zenject.SubContainerCreatorByNewPrefabMethod.AddInstallers
void Zenject::SubContainerCreatorByNewPrefabMethod::AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddInstallers", args, context));
}
