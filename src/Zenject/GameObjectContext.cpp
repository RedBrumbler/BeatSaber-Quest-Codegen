// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.GameObjectContext
#include "Zenject/GameObjectContext.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: Zenject.MonoKernel
#include "Zenject/MonoKernel.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.GameObjectContext.add_PreInstall
void Zenject::GameObjectContext::add_PreInstall(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_PreInstall", value));
}
// Autogenerated method: Zenject.GameObjectContext.remove_PreInstall
void Zenject::GameObjectContext::remove_PreInstall(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_PreInstall", value));
}
// Autogenerated method: Zenject.GameObjectContext.add_PostInstall
void Zenject::GameObjectContext::add_PostInstall(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_PostInstall", value));
}
// Autogenerated method: Zenject.GameObjectContext.remove_PostInstall
void Zenject::GameObjectContext::remove_PostInstall(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_PostInstall", value));
}
// Autogenerated method: Zenject.GameObjectContext.add_PreResolve
void Zenject::GameObjectContext::add_PreResolve(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_PreResolve", value));
}
// Autogenerated method: Zenject.GameObjectContext.remove_PreResolve
void Zenject::GameObjectContext::remove_PreResolve(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_PreResolve", value));
}
// Autogenerated method: Zenject.GameObjectContext.add_PostResolve
void Zenject::GameObjectContext::add_PostResolve(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_PostResolve", value));
}
// Autogenerated method: Zenject.GameObjectContext.remove_PostResolve
void Zenject::GameObjectContext::remove_PostResolve(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_PostResolve", value));
}
// Autogenerated method: Zenject.GameObjectContext.Construct
void Zenject::GameObjectContext::Construct(Zenject::DiContainer* parentContainer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Construct", parentContainer));
}
// Autogenerated method: Zenject.GameObjectContext.InstallBindings
void Zenject::GameObjectContext::InstallBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableMonoBehaviours) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallBindings", injectableMonoBehaviours));
}
// Autogenerated method: Zenject.GameObjectContext.get_Container
Zenject::DiContainer* Zenject::GameObjectContext::get_Container() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
}
// Autogenerated method: Zenject.GameObjectContext.GetRootGameObjects
System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* Zenject::GameObjectContext::GetRootGameObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>(this, "GetRootGameObjects"));
}
// Autogenerated method: Zenject.GameObjectContext.RunInternal
void Zenject::GameObjectContext::RunInternal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunInternal"));
}
// Autogenerated method: Zenject.GameObjectContext.GetInjectableMonoBehaviours
void Zenject::GameObjectContext::GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetInjectableMonoBehaviours", monoBehaviours));
}
// Autogenerated method: Zenject.GameObjectContext..ctor
Zenject::GameObjectContext* Zenject::GameObjectContext::New_ctor() {
  return (GameObjectContext*)THROW_UNLESS(il2cpp_utils::New("Zenject", "GameObjectContext"));
}
