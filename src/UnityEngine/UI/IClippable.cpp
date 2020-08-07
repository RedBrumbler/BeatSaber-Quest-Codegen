// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.IClippable
#include "UnityEngine/UI/IClippable.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.UI.IClippable.get_gameObject
UnityEngine::GameObject* UnityEngine::UI::IClippable::UnityEngine_UI_IClippable_get_gameObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "get_gameObject"));
}
// Autogenerated method: UnityEngine.UI.IClippable.RecalculateClipping
void UnityEngine::UI::IClippable::RecalculateClipping() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecalculateClipping"));
}
// Autogenerated method: UnityEngine.UI.IClippable.get_rectTransform
UnityEngine::RectTransform* UnityEngine::UI::IClippable::get_rectTransform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RectTransform*>(this, "get_rectTransform"));
}
// Autogenerated method: UnityEngine.UI.IClippable.Cull
void UnityEngine::UI::IClippable::Cull(UnityEngine::Rect clipRect, bool validRect) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cull", clipRect, validRect));
}
// Autogenerated method: UnityEngine.UI.IClippable.SetClipRect
void UnityEngine::UI::IClippable::SetClipRect(UnityEngine::Rect value, bool validRect) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetClipRect", value, validRect));
}