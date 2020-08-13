// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainSettingsTableView
#include "GlobalNamespace/MainSettingsTableView.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: MainSettingsTableCell
#include "GlobalNamespace/MainSettingsTableCell.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: SettingsSubMenuInfo
#include "GlobalNamespace/SettingsSubMenuInfo.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCellIdentifier
::CsString* GlobalNamespace::MainSettingsTableView::_get_kCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "MainSettingsTableView", "kCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCellIdentifier
void GlobalNamespace::MainSettingsTableView::_set_kCellIdentifier(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MainSettingsTableView", "kCellIdentifier", value));
}
// Autogenerated method: MainSettingsTableView.add_didSelectRowEvent
void GlobalNamespace::MainSettingsTableView::add_didSelectRowEvent(System::Action_2<GlobalNamespace::MainSettingsTableView*, int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectRowEvent", value));
}
// Autogenerated method: MainSettingsTableView.remove_didSelectRowEvent
void GlobalNamespace::MainSettingsTableView::remove_didSelectRowEvent(System::Action_2<GlobalNamespace::MainSettingsTableView*, int>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectRowEvent", value));
}
// Autogenerated method: MainSettingsTableView.Init
void GlobalNamespace::MainSettingsTableView::Init(::Array<GlobalNamespace::SettingsSubMenuInfo*>* settingsSubMenuInfos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", settingsSubMenuInfos));
}
// Autogenerated method: MainSettingsTableView.HandleDidSelectRow
void GlobalNamespace::MainSettingsTableView::HandleDidSelectRow(HMUI::TableView* tableView, int row) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDidSelectRow", tableView, row));
}
// Autogenerated method: MainSettingsTableView.SelectRow
void GlobalNamespace::MainSettingsTableView::SelectRow(int row) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectRow", row));
}
// Autogenerated method: MainSettingsTableView.ClearSelection
void GlobalNamespace::MainSettingsTableView::ClearSelection() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearSelection"));
}
// Autogenerated method: MainSettingsTableView.CellSize
float GlobalNamespace::MainSettingsTableView::CellSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
}
// Autogenerated method: MainSettingsTableView.NumberOfCells
int GlobalNamespace::MainSettingsTableView::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: MainSettingsTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::MainSettingsTableView::CellForIdx(HMUI::TableView* tableView, int row) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, row));
}
// Autogenerated method: MainSettingsTableView..ctor
GlobalNamespace::MainSettingsTableView* GlobalNamespace::MainSettingsTableView::New_ctor() {
  return (MainSettingsTableView*)THROW_UNLESS(il2cpp_utils::New("", "MainSettingsTableView"));
}
