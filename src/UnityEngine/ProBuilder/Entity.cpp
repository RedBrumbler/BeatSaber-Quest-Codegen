// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Entity
#include "UnityEngine/ProBuilder/Entity.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Entity.get_entityType
UnityEngine::ProBuilder::EntityType UnityEngine::ProBuilder::Entity::get_entityType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::EntityType>(this, "get_entityType"));
}
// Autogenerated method: UnityEngine.ProBuilder.Entity.Awake
void UnityEngine::ProBuilder::Entity::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: UnityEngine.ProBuilder.Entity.SetEntity
void UnityEngine::ProBuilder::Entity::SetEntity(UnityEngine::ProBuilder::EntityType t) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetEntity", t));
}
// Autogenerated method: UnityEngine.ProBuilder.Entity..ctor
UnityEngine::ProBuilder::Entity* UnityEngine::ProBuilder::Entity::New_ctor() {
  return (Entity*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Entity"));
}