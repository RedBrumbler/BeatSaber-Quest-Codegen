// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.EmptyGameObjectProvider
#include "Zenject/EmptyGameObjectProvider.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.EmptyGameObjectProvider..ctor
Zenject::EmptyGameObjectProvider* Zenject::EmptyGameObjectProvider::New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  return (EmptyGameObjectProvider*)THROW_UNLESS(il2cpp_utils::New("Zenject", "EmptyGameObjectProvider", container, gameObjectBindInfo));
}
// Autogenerated method: Zenject.EmptyGameObjectProvider.get_IsCached
bool Zenject::EmptyGameObjectProvider::get_IsCached() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
}
// Autogenerated method: Zenject.EmptyGameObjectProvider.get_TypeVariesBasedOnMemberType
bool Zenject::EmptyGameObjectProvider::get_TypeVariesBasedOnMemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
}
// Autogenerated method: Zenject.EmptyGameObjectProvider.GetInstanceType
System::Type* Zenject::EmptyGameObjectProvider::GetInstanceType(Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
}
// Autogenerated method: Zenject.EmptyGameObjectProvider.GetAllInstancesWithInjectSplit
void Zenject::EmptyGameObjectProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::CsObject*>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
}
