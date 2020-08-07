// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.IconSegmentedControlCell
#include "HMUI/IconSegmentedControlCell.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: HMUI.HoverHint
#include "HMUI/HoverHint.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
// Including type: HMUI.SegmentedControlCell/TransitionType
#include "HMUI/SegmentedControlCell_TransitionType.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.IconSegmentedControlCell.set_sprite
void HMUI::IconSegmentedControlCell::set_sprite(UnityEngine::Sprite* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_sprite", value));
}
// Autogenerated method: HMUI.IconSegmentedControlCell.get_sprite
UnityEngine::Sprite* HMUI::IconSegmentedControlCell::get_sprite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Sprite*>(this, "get_sprite"));
}
// Autogenerated method: HMUI.IconSegmentedControlCell.set_hintText
void HMUI::IconSegmentedControlCell::set_hintText(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_hintText", value));
}
// Autogenerated method: HMUI.IconSegmentedControlCell.RefreshVisuals
void HMUI::IconSegmentedControlCell::RefreshVisuals() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshVisuals"));
}
// Autogenerated method: HMUI.IconSegmentedControlCell.SelectionDidChange
void HMUI::IconSegmentedControlCell::SelectionDidChange(HMUI::SegmentedControlCell::TransitionType transitionType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectionDidChange", transitionType));
}
// Autogenerated method: HMUI.IconSegmentedControlCell.HighlightDidChange
void HMUI::IconSegmentedControlCell::HighlightDidChange(HMUI::SegmentedControlCell::TransitionType transitionType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HighlightDidChange", transitionType));
}
// Autogenerated method: HMUI.IconSegmentedControlCell..ctor
HMUI::IconSegmentedControlCell* HMUI::IconSegmentedControlCell::New_ctor() {
  return (IconSegmentedControlCell*)THROW_UNLESS(il2cpp_utils::New("HMUI", "IconSegmentedControlCell"));
}