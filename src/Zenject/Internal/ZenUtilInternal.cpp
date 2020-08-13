// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: Zenject.Internal.ZenUtilInternal/<>c
#include "Zenject/Internal/ZenUtilInternal_--c.hpp"
// Including type: Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
#include "Zenject/Internal/ZenUtilInternal_-GetAllSceneContexts-d__3.hpp"
// Including type: Zenject.Internal.ZenUtilInternal/<>c__DisplayClass10_0
#include "Zenject/Internal/ZenUtilInternal_--c__DisplayClass10_0.hpp"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.Internal.ZenUtilInternal.IsNull
bool Zenject::Internal::ZenUtilInternal::IsNull(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject.Internal", "ZenUtilInternal", "IsNull", obj));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.AreFunctionsEqual
bool Zenject::Internal::ZenUtilInternal::AreFunctionsEqual(System::Delegate* left, System::Delegate* right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject.Internal", "ZenUtilInternal", "AreFunctionsEqual", left, right));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.GetInheritanceDelta
int Zenject::Internal::ZenUtilInternal::GetInheritanceDelta(System::Type* derived, System::Type* parent) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Zenject.Internal", "ZenUtilInternal", "GetInheritanceDelta", derived, parent));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.GetAllSceneContexts
System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* Zenject::Internal::ZenUtilInternal::GetAllSceneContexts() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>("Zenject.Internal", "ZenUtilInternal", "GetAllSceneContexts"));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.AddStateMachineBehaviourAutoInjectersInScene
void Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersInScene(UnityEngine::SceneManagement::Scene scene) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenUtilInternal", "AddStateMachineBehaviourAutoInjectersInScene", scene));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.AddStateMachineBehaviourAutoInjectersUnderGameObject
void Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersUnderGameObject(UnityEngine::GameObject* root) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenUtilInternal", "AddStateMachineBehaviourAutoInjectersUnderGameObject", root));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.GetInjectableMonoBehavioursInScene
void Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursInScene(UnityEngine::SceneManagement::Scene scene, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenUtilInternal", "GetInjectableMonoBehavioursInScene", scene, monoBehaviours));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.GetInjectableMonoBehavioursUnderGameObject
void Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObject(UnityEngine::GameObject* gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableComponents) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenUtilInternal", "GetInjectableMonoBehavioursUnderGameObject", gameObject, injectableComponents));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.GetInjectableMonoBehavioursUnderGameObjectInternal
void Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObjectInternal(UnityEngine::GameObject* gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableComponents) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenUtilInternal", "GetInjectableMonoBehavioursUnderGameObjectInternal", gameObject, injectableComponents));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.IsInjectableMonoBehaviourType
bool Zenject::Internal::ZenUtilInternal::IsInjectableMonoBehaviourType(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject.Internal", "ZenUtilInternal", "IsInjectableMonoBehaviourType", type));
}
// Autogenerated method: Zenject.Internal.ZenUtilInternal.GetRootGameObjects
System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* Zenject::Internal::ZenUtilInternal::GetRootGameObjects(UnityEngine::SceneManagement::Scene scene) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>("Zenject.Internal", "ZenUtilInternal", "GetRootGameObjects", scene));
}
