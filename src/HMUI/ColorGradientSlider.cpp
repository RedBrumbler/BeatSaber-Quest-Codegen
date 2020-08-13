// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ColorGradientSlider
#include "HMUI/ColorGradientSlider.hpp"
// Including type: HMUI.GradientImage
#include "HMUI/GradientImage.hpp"
// Including type: System.Action`3
#include "System/Action_3.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.ColorGradientSlider.add_colorDidChangeEvent
void HMUI::ColorGradientSlider::add_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_colorDidChangeEvent", value));
}
// Autogenerated method: HMUI.ColorGradientSlider.remove_colorDidChangeEvent
void HMUI::ColorGradientSlider::remove_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_colorDidChangeEvent", value));
}
// Autogenerated method: HMUI.ColorGradientSlider.SetColors
void HMUI::ColorGradientSlider::SetColors(UnityEngine::Color color0, UnityEngine::Color color1) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColors", color0, color1));
}
// Autogenerated method: HMUI.ColorGradientSlider.HandleNormalizedValueDidChange
void HMUI::ColorGradientSlider::HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNormalizedValueDidChange", slider, normalizedValue));
}
// Autogenerated method: HMUI.ColorGradientSlider.Awake
void HMUI::ColorGradientSlider::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: HMUI.ColorGradientSlider.OnDestroy
void HMUI::ColorGradientSlider::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: HMUI.ColorGradientSlider.UpdateVisuals
void HMUI::ColorGradientSlider::UpdateVisuals() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateVisuals"));
}
// Autogenerated method: HMUI.ColorGradientSlider.TextForNormalizedValue
::CsString* HMUI::ColorGradientSlider::TextForNormalizedValue(float normalizedValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "TextForNormalizedValue", normalizedValue));
}
// Autogenerated method: HMUI.ColorGradientSlider.OnPointerUp
void HMUI::ColorGradientSlider::OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPointerUp", eventData));
}
// Autogenerated method: HMUI.ColorGradientSlider..ctor
HMUI::ColorGradientSlider* HMUI::ColorGradientSlider::New_ctor() {
  return (ColorGradientSlider*)THROW_UNLESS(il2cpp_utils::New("HMUI", "ColorGradientSlider"));
}
