// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: HMUI.TableCell/TransitionType
#include "HMUI/TableCell_TransitionType.hpp"
// Including type: Signal
#include "GlobalNamespace/Signal.hpp"
// Including type: HMUI.ITableCellOwner
#include "HMUI/ITableCellOwner.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.TableCell.get_reuseIdentifier
::Il2CppString* HMUI::TableCell::get_reuseIdentifier() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_reuseIdentifier"));
}
// Autogenerated method: HMUI.TableCell.set_reuseIdentifier
void HMUI::TableCell::set_reuseIdentifier(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_reuseIdentifier", value));
}
// Autogenerated method: HMUI.TableCell.get_idx
int HMUI::TableCell::get_idx() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_idx"));
}
// Autogenerated method: HMUI.TableCell.Start
void HMUI::TableCell::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: HMUI.TableCell.TableViewSetup
void HMUI::TableCell::TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TableViewSetup", tableCellOwner, idx));
}
// Autogenerated method: HMUI.TableCell.MoveIdx
void HMUI::TableCell::MoveIdx(int offset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveIdx", offset));
}
// Autogenerated method: HMUI.TableCell.get_selected
bool HMUI::TableCell::get_selected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_selected"));
}
// Autogenerated method: HMUI.TableCell.set_selected
void HMUI::TableCell::set_selected(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_selected", value));
}
// Autogenerated method: HMUI.TableCell.get_highlighted
bool HMUI::TableCell::get_highlighted() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_highlighted"));
}
// Autogenerated method: HMUI.TableCell.ChangeSelection
void HMUI::TableCell::ChangeSelection(bool value, HMUI::TableCell::TransitionType transitionType, bool callbackTable, bool ignoreCurrentValue) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeSelection", value, transitionType, callbackTable, ignoreCurrentValue));
}
// Autogenerated method: HMUI.TableCell.ChangeHighlight
void HMUI::TableCell::ChangeHighlight(bool value, HMUI::TableCell::TransitionType transitionType, bool ignoreCurrentValue) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeHighlight", value, transitionType, ignoreCurrentValue));
}
// Autogenerated method: HMUI.TableCell.InternalToggle
void HMUI::TableCell::InternalToggle() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalToggle"));
}
// Autogenerated method: HMUI.TableCell.SelectionDidChange
void HMUI::TableCell::SelectionDidChange(HMUI::TableCell::TransitionType transitionType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectionDidChange", transitionType));
}
// Autogenerated method: HMUI.TableCell.HighlightDidChange
void HMUI::TableCell::HighlightDidChange(HMUI::TableCell::TransitionType transitionType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HighlightDidChange", transitionType));
}
// Autogenerated method: HMUI.TableCell.__WasPreparedForReuse
void HMUI::TableCell::__WasPreparedForReuse() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "__WasPreparedForReuse"));
}
// Autogenerated method: HMUI.TableCell.WasPreparedForReuse
void HMUI::TableCell::WasPreparedForReuse() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WasPreparedForReuse"));
}
// Autogenerated method: HMUI.TableCell.OnPointerClick
void HMUI::TableCell::OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPointerClick", eventData));
}
// Autogenerated method: HMUI.TableCell.OnSubmit
void HMUI::TableCell::OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSubmit", eventData));
}
// Autogenerated method: HMUI.TableCell.OnPointerEnter
void HMUI::TableCell::OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPointerEnter", eventData));
}
// Autogenerated method: HMUI.TableCell.OnPointerExit
void HMUI::TableCell::OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPointerExit", eventData));
}
// Autogenerated method: HMUI.TableCell..ctor
HMUI::TableCell* HMUI::TableCell::New_ctor() {
  return (TableCell*)THROW_UNLESS(il2cpp_utils::New("HMUI", "TableCell"));
}