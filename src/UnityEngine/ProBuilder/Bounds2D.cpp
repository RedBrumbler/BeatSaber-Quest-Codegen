// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Bounds2D
#include "UnityEngine/ProBuilder/Bounds2D.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.get_size
UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::get_size() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "get_size"));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.set_size
void UnityEngine::ProBuilder::Bounds2D::set_size(UnityEngine::Vector2 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_size", value));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.get_extents
UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::get_extents() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "get_extents"));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.get_corners
::Array<UnityEngine::Vector2>* UnityEngine::ProBuilder::Bounds2D::get_corners() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Vector2>*>(this, "get_corners"));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D..ctor
UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(UnityEngine::Vector2 center, UnityEngine::Vector2 size) {
  return (Bounds2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Bounds2D", center, size));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D..ctor
UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points) {
  return (Bounds2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Bounds2D", points));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D..ctor
UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes) {
  return (Bounds2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Bounds2D", points, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D..ctor
UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::Array<UnityEngine::Vector3>* points, ::Array<UnityEngine::ProBuilder::Edge>* edges) {
  return (Bounds2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Bounds2D", points, edges));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D..ctor
UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::Array<UnityEngine::Vector2>* points, int length) {
  return (Bounds2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Bounds2D", points, length));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.ContainsPoint
bool UnityEngine::ProBuilder::Bounds2D::ContainsPoint(UnityEngine::Vector2 point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ContainsPoint", point));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.IntersectsLineSegment
bool UnityEngine::ProBuilder::Bounds2D::IntersectsLineSegment(UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IntersectsLineSegment", lineStart, lineEnd));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.Intersects
bool UnityEngine::ProBuilder::Bounds2D::Intersects(UnityEngine::ProBuilder::Bounds2D* bounds) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Intersects", bounds));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.Intersects
bool UnityEngine::ProBuilder::Bounds2D::Intersects(UnityEngine::Rect rect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Intersects", rect));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.SetWithPoints
void UnityEngine::ProBuilder::Bounds2D::SetWithPoints(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWithPoints", points));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.SetWithPoints
void UnityEngine::ProBuilder::Bounds2D::SetWithPoints(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWithPoints", points, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.Center
UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Center(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("UnityEngine.ProBuilder", "Bounds2D", "Center", points));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.Center
UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Center(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("UnityEngine.ProBuilder", "Bounds2D", "Center", points, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.Size
UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Size(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("UnityEngine.ProBuilder", "Bounds2D", "Size", points, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.Center
UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Center(System::Collections::Generic::IList_1<UnityEngine::Vector4>* points, System::Collections::Generic::IEnumerable_1<int>* indexes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("UnityEngine.ProBuilder", "Bounds2D", "Center", points, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D..ctor
UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor() {
  return (Bounds2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Bounds2D"));
}
// Autogenerated method: UnityEngine.ProBuilder.Bounds2D.ToString
::CsString* UnityEngine::ProBuilder::Bounds2D::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
