// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
// Including type: LeaderboardTableView/ScoreData
#include "GlobalNamespace/LeaderboardTableView_ScoreData.hpp"
// Including type: LeaderboardTableCell
#include "GlobalNamespace/LeaderboardTableCell.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCellIdentifier
::CsString* GlobalNamespace::LeaderboardTableView::_get_kCellIdentifier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "LeaderboardTableView", "kCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCellIdentifier
void GlobalNamespace::LeaderboardTableView::_set_kCellIdentifier(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LeaderboardTableView", "kCellIdentifier", value));
}
// Autogenerated method: LeaderboardTableView.SetScores
void GlobalNamespace::LeaderboardTableView::SetScores(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores, int specialScorePos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetScores", scores, specialScorePos));
}
// Autogenerated method: LeaderboardTableView.CellSize
float GlobalNamespace::LeaderboardTableView::CellSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
}
// Autogenerated method: LeaderboardTableView.NumberOfCells
int GlobalNamespace::LeaderboardTableView::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: LeaderboardTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::LeaderboardTableView::CellForIdx(HMUI::TableView* tableView, int row) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, row));
}
// Autogenerated method: LeaderboardTableView..ctor
GlobalNamespace::LeaderboardTableView* GlobalNamespace::LeaderboardTableView::New_ctor() {
  return (LeaderboardTableView*)THROW_UNLESS(il2cpp_utils::New("", "LeaderboardTableView"));
}
