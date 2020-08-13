// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PhysicsScene
#include "UnityEngine/PhysicsScene.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.QueryTriggerInteraction
#include "UnityEngine/QueryTriggerInteraction.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.PhysicsScene.Raycast
bool UnityEngine::PhysicsScene::Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Raycast", origin, direction, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_RaycastTest
bool UnityEngine::PhysicsScene::Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Internal_RaycastTest", physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Raycast
bool UnityEngine::PhysicsScene::Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Raycast", origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_Raycast
bool UnityEngine::PhysicsScene::Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Internal_Raycast", physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Raycast
int UnityEngine::PhysicsScene::Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "Raycast", origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_RaycastNonAlloc
int UnityEngine::PhysicsScene::Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "PhysicsScene", "Internal_RaycastNonAlloc", physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Query_CapsuleCast
bool UnityEngine::PhysicsScene::Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Query_CapsuleCast", physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_CapsuleCast
bool UnityEngine::PhysicsScene::Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Internal_CapsuleCast", physicsScene, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.CapsuleCast
bool UnityEngine::PhysicsScene::CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "CapsuleCast", point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Query_SphereCast
bool UnityEngine::PhysicsScene::Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Query_SphereCast", physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_SphereCast
bool UnityEngine::PhysicsScene::Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Internal_SphereCast", physicsScene, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.SphereCast
bool UnityEngine::PhysicsScene::SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "SphereCast", origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.OverlapBoxNonAlloc_Internal
int UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "PhysicsScene", "OverlapBoxNonAlloc_Internal", physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.OverlapBox
int UnityEngine::PhysicsScene::OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "OverlapBox", center, halfExtents, results, orientation, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_RaycastTest_Injected
bool UnityEngine::PhysicsScene::Internal_RaycastTest_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Internal_RaycastTest_Injected", physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_Raycast_Injected
bool UnityEngine::PhysicsScene::Internal_Raycast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Internal_Raycast_Injected", physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Internal_RaycastNonAlloc_Injected
int UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "PhysicsScene", "Internal_RaycastNonAlloc_Injected", physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Query_CapsuleCast_Injected
bool UnityEngine::PhysicsScene::Query_CapsuleCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& point1, UnityEngine::Vector3& point2, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Query_CapsuleCast_Injected", physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.Query_SphereCast_Injected
bool UnityEngine::PhysicsScene::Query_SphereCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& origin, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "PhysicsScene", "Query_SphereCast_Injected", physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.OverlapBoxNonAlloc_Internal_Injected
int UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& center, UnityEngine::Vector3& halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion& orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "PhysicsScene", "OverlapBoxNonAlloc_Internal_Injected", physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction));
}
// Autogenerated method: UnityEngine.PhysicsScene.ToString
::CsString* UnityEngine::PhysicsScene::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString"));
}
// Autogenerated method: UnityEngine.PhysicsScene.GetHashCode
int UnityEngine::PhysicsScene::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: UnityEngine.PhysicsScene.Equals
bool UnityEngine::PhysicsScene::Equals(::CsObject* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: UnityEngine.PhysicsScene.Equals
bool UnityEngine::PhysicsScene::Equals(UnityEngine::PhysicsScene other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
