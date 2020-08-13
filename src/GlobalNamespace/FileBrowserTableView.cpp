// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FileBrowserTableView
#include "GlobalNamespace/FileBrowserTableView.hpp"
// Including type: FileBrowserTableCell
#include "GlobalNamespace/FileBrowserTableCell.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: FileBrowserItem
#include "GlobalNamespace/FileBrowserItem.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCellIdentifier
::CsString* GlobalNamespace::FileBrowserTableView::_get_kCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "FileBrowserTableView", "kCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCellIdentifier
void GlobalNamespace::FileBrowserTableView::_set_kCellIdentifier(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "FileBrowserTableView", "kCellIdentifier", value));
}
// Autogenerated method: FileBrowserTableView.add_didSelectRow
void GlobalNamespace::FileBrowserTableView::add_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectRow", value));
}
// Autogenerated method: FileBrowserTableView.remove_didSelectRow
void GlobalNamespace::FileBrowserTableView::remove_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectRow", value));
}
// Autogenerated method: FileBrowserTableView.Init
void GlobalNamespace::FileBrowserTableView::Init(::Array<GlobalNamespace::FileBrowserItem*>* items) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", items));
}
// Autogenerated method: FileBrowserTableView.SetItems
void GlobalNamespace::FileBrowserTableView::SetItems(::Array<GlobalNamespace::FileBrowserItem*>* items) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetItems", items));
}
// Autogenerated method: FileBrowserTableView.SelectAndScrollRowToItemWithPath
bool GlobalNamespace::FileBrowserTableView::SelectAndScrollRowToItemWithPath(::CsString* folderPath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SelectAndScrollRowToItemWithPath", folderPath));
}
// Autogenerated method: FileBrowserTableView.HandleDidSelectRowEvent
void GlobalNamespace::FileBrowserTableView::HandleDidSelectRowEvent(HMUI::TableView* tableView, int row) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDidSelectRowEvent", tableView, row));
}
// Autogenerated method: FileBrowserTableView.SelectAndScrollRow
void GlobalNamespace::FileBrowserTableView::SelectAndScrollRow(int row) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectAndScrollRow", row));
}
// Autogenerated method: FileBrowserTableView.ClearSelection
void GlobalNamespace::FileBrowserTableView::ClearSelection(bool animated, bool scrollToRow0) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearSelection", animated, scrollToRow0));
}
// Autogenerated method: FileBrowserTableView.CellSize
float GlobalNamespace::FileBrowserTableView::CellSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
}
// Autogenerated method: FileBrowserTableView.NumberOfCells
int GlobalNamespace::FileBrowserTableView::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: FileBrowserTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::FileBrowserTableView::CellForIdx(HMUI::TableView* tableView, int row) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, row));
}
// Autogenerated method: FileBrowserTableView..ctor
GlobalNamespace::FileBrowserTableView* GlobalNamespace::FileBrowserTableView::New_ctor() {
  return (FileBrowserTableView*)THROW_UNLESS(il2cpp_utils::New("", "FileBrowserTableView"));
}
