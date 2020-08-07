// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/TransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder..ctor
Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(Zenject::BindInfo* bindInfo, Zenject::GameObjectCreationParameters* gameObjectInfo) {
  return (TransformScopeConcreteIdArgConditionCopyNonLazyBinder*)THROW_UNLESS(il2cpp_utils::New("Zenject", "TransformScopeConcreteIdArgConditionCopyNonLazyBinder", bindInfo, gameObjectInfo));
}
// Autogenerated method: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder.get_GameObjectInfo
Zenject::GameObjectCreationParameters* Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::get_GameObjectInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::GameObjectCreationParameters*>(this, "get_GameObjectInfo"));
}
// Autogenerated method: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder.set_GameObjectInfo
void Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::set_GameObjectInfo(Zenject::GameObjectCreationParameters* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_GameObjectInfo", value));
}
// Autogenerated method: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder.UnderTransform
Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransform(UnityEngine::Transform* parent) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "UnderTransform", parent));
}
// Autogenerated method: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder.UnderTransform
Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransform(System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* parentGetter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "UnderTransform", parentGetter));
}
// Autogenerated method: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder.UnderTransformGroup
Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransformGroup(::Il2CppString* transformGroupname) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "UnderTransformGroup", transformGroupname));
}