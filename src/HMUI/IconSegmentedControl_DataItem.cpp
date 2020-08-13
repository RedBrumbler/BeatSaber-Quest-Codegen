// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.IconSegmentedControl/DataItem
#include "HMUI/IconSegmentedControl_DataItem.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.IconSegmentedControl/DataItem.get_icon
UnityEngine::Sprite* HMUI::IconSegmentedControl::DataItem::get_icon() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Sprite*>(this, "get_icon"));
}
// Autogenerated method: HMUI.IconSegmentedControl/DataItem.set_icon
void HMUI::IconSegmentedControl::DataItem::set_icon(UnityEngine::Sprite* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_icon", value));
}
// Autogenerated method: HMUI.IconSegmentedControl/DataItem.get_hintText
::CsString* HMUI::IconSegmentedControl::DataItem::get_hintText() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_hintText"));
}
// Autogenerated method: HMUI.IconSegmentedControl/DataItem.set_hintText
void HMUI::IconSegmentedControl::DataItem::set_hintText(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_hintText", value));
}
// Autogenerated method: HMUI.IconSegmentedControl/DataItem..ctor
HMUI::IconSegmentedControl::DataItem* HMUI::IconSegmentedControl::DataItem::New_ctor(UnityEngine::Sprite* icon, ::CsString* hintText) {
  return (IconSegmentedControl::DataItem*)THROW_UNLESS(il2cpp_utils::New("HMUI", "IconSegmentedControl/DataItem", icon, hintText));
}
