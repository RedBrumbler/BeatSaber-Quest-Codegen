// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Physics2D
#include "UnityEngine/Physics2D.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Rigidbody2D
#include "UnityEngine/Rigidbody2D.hpp"
// Including type: UnityEngine.PhysicsScene2D
#include "UnityEngine/PhysicsScene2D.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: UnityEngine.ContactFilter2D
#include "UnityEngine/ContactFilter2D.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
System::Collections::Generic::List_1<UnityEngine::Rigidbody2D*>* UnityEngine::Physics2D::_get_m_LastDisabledRigidbody2D() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::Rigidbody2D*>*>("UnityEngine", "Physics2D", "m_LastDisabledRigidbody2D"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
void UnityEngine::Physics2D::_set_m_LastDisabledRigidbody2D(System::Collections::Generic::List_1<UnityEngine::Rigidbody2D*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Physics2D", "m_LastDisabledRigidbody2D", value));
}
// Autogenerated method: UnityEngine.Physics2D.get_defaultPhysicsScene
UnityEngine::PhysicsScene2D UnityEngine::Physics2D::get_defaultPhysicsScene() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::PhysicsScene2D>("UnityEngine", "Physics2D", "get_defaultPhysicsScene"));
}
// Autogenerated method: UnityEngine.Physics2D.get_queriesHitTriggers
bool UnityEngine::Physics2D::get_queriesHitTriggers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Physics2D", "get_queriesHitTriggers"));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RaycastHit2D>("UnityEngine", "Physics2D", "Raycast", origin, direction));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RaycastHit2D>("UnityEngine", "Physics2D", "Raycast", origin, direction, distance));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RaycastHit2D>("UnityEngine", "Physics2D", "Raycast", origin, direction, distance, layerMask));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RaycastHit2D>("UnityEngine", "Physics2D", "Raycast", origin, direction, distance, layerMask, minDepth));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth, float maxDepth) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RaycastHit2D>("UnityEngine", "Physics2D", "Raycast", origin, direction, distance, layerMask, minDepth, maxDepth));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
int UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Physics2D", "Raycast", origin, direction, contactFilter, results));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
int UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results, float distance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Physics2D", "Raycast", origin, direction, contactFilter, results, distance));
}
// Autogenerated method: UnityEngine.Physics2D.Raycast
int UnityEngine::Physics2D::Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results, float distance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Physics2D", "Raycast", origin, direction, contactFilter, results, distance));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionAll
::Array<UnityEngine::RaycastHit2D>* UnityEngine::Physics2D::GetRayIntersectionAll(UnityEngine::Ray ray) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>("UnityEngine", "Physics2D", "GetRayIntersectionAll", ray));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionAll
::Array<UnityEngine::RaycastHit2D>* UnityEngine::Physics2D::GetRayIntersectionAll(UnityEngine::Ray ray, float distance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>("UnityEngine", "Physics2D", "GetRayIntersectionAll", ray, distance));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionAll
::Array<UnityEngine::RaycastHit2D>* UnityEngine::Physics2D::GetRayIntersectionAll(UnityEngine::Ray ray, float distance, int layerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>("UnityEngine", "Physics2D", "GetRayIntersectionAll", ray, distance, layerMask));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionAll_Internal
::Array<UnityEngine::RaycastHit2D>* UnityEngine::Physics2D::GetRayIntersectionAll_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float distance, int layerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>("UnityEngine", "Physics2D", "GetRayIntersectionAll_Internal", physicsScene, origin, direction, distance, layerMask));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionNonAlloc
int UnityEngine::Physics2D::GetRayIntersectionNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit2D>* results) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Physics2D", "GetRayIntersectionNonAlloc", ray, results));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionNonAlloc
int UnityEngine::Physics2D::GetRayIntersectionNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit2D>* results, float distance) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Physics2D", "GetRayIntersectionNonAlloc", ray, results, distance));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionNonAlloc
int UnityEngine::Physics2D::GetRayIntersectionNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit2D>* results, float distance, int layerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Physics2D", "GetRayIntersectionNonAlloc", ray, results, distance, layerMask));
}
// Autogenerated method: UnityEngine.Physics2D..cctor
void UnityEngine::Physics2D::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Physics2D", ".cctor"));
}
// Autogenerated method: UnityEngine.Physics2D.GetRayIntersectionAll_Internal_Injected
::Array<UnityEngine::RaycastHit2D>* UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector3& origin, UnityEngine::Vector3& direction, float distance, int layerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>("UnityEngine", "Physics2D", "GetRayIntersectionAll_Internal_Injected", physicsScene, origin, direction, distance, layerMask));
}