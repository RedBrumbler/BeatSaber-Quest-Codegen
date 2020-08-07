// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskUtilities
#include "UnityEngine/UI/MaskUtilities.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.UI.RectMask2D
#include "UnityEngine/UI/RectMask2D.hpp"
// Including type: UnityEngine.UI.IClippable
#include "UnityEngine/UI/IClippable.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.UI.MaskUtilities.Notify2DMaskStateChanged
void UnityEngine::UI::MaskUtilities::Notify2DMaskStateChanged(UnityEngine::Component* mask) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "MaskUtilities", "Notify2DMaskStateChanged", mask));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities.NotifyStencilStateChanged
void UnityEngine::UI::MaskUtilities::NotifyStencilStateChanged(UnityEngine::Component* mask) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "MaskUtilities", "NotifyStencilStateChanged", mask));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities.FindRootSortOverrideCanvas
UnityEngine::Transform* UnityEngine::UI::MaskUtilities::FindRootSortOverrideCanvas(UnityEngine::Transform* start) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>("UnityEngine.UI", "MaskUtilities", "FindRootSortOverrideCanvas", start));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities.GetStencilDepth
int UnityEngine::UI::MaskUtilities::GetStencilDepth(UnityEngine::Transform* transform, UnityEngine::Transform* stopAfter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine.UI", "MaskUtilities", "GetStencilDepth", transform, stopAfter));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities.IsDescendantOrSelf
bool UnityEngine::UI::MaskUtilities::IsDescendantOrSelf(UnityEngine::Transform* father, UnityEngine::Transform* child) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.UI", "MaskUtilities", "IsDescendantOrSelf", father, child));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities.GetRectMaskForClippable
UnityEngine::UI::RectMask2D* UnityEngine::UI::MaskUtilities::GetRectMaskForClippable(UnityEngine::UI::IClippable* clippable) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::UI::RectMask2D*>("UnityEngine.UI", "MaskUtilities", "GetRectMaskForClippable", clippable));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities.GetRectMasksForClip
void UnityEngine::UI::MaskUtilities::GetRectMasksForClip(UnityEngine::UI::RectMask2D* clipper, System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>* masks) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "MaskUtilities", "GetRectMasksForClip", clipper, masks));
}
// Autogenerated method: UnityEngine.UI.MaskUtilities..ctor
UnityEngine::UI::MaskUtilities* UnityEngine::UI::MaskUtilities::New_ctor() {
  return (MaskUtilities*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "MaskUtilities"));
}