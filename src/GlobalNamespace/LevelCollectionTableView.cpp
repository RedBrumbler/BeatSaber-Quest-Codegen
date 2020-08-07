// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelCollectionTableView
#include "GlobalNamespace/LevelCollectionTableView.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: HMUI.AlphabetScrollbar
#include "HMUI/AlphabetScrollbar.hpp"
// Including type: LevelListTableCell
#include "GlobalNamespace/LevelListTableCell.hpp"
// Including type: LevelPackHeaderTableCell
#include "GlobalNamespace/LevelPackHeaderTableCell.hpp"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LevelCollectionTableView.add_didSelectLevelEvent
void GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectLevelEvent", value));
}
// Autogenerated method: LevelCollectionTableView.remove_didSelectLevelEvent
void GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectLevelEvent", value));
}
// Autogenerated method: LevelCollectionTableView.add_didSelectHeaderEvent
void GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionTableView*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectHeaderEvent", value));
}
// Autogenerated method: LevelCollectionTableView.remove_didSelectHeaderEvent
void GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionTableView*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectHeaderEvent", value));
}
// Autogenerated method: LevelCollectionTableView.Init
void GlobalNamespace::LevelCollectionTableView::Init(::Il2CppString* headerText, UnityEngine::Sprite* headerSprite) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", headerText, headerSprite));
}
// Autogenerated method: LevelCollectionTableView.Init
void GlobalNamespace::LevelCollectionTableView::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: LevelCollectionTableView.SetData
void GlobalNamespace::LevelCollectionTableView::SetData(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels, System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds, bool beatmapLevelsAreSorted) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", previewBeatmapLevels, favoriteLevelIds, beatmapLevelsAreSorted));
}
// Autogenerated method: LevelCollectionTableView.RefreshFavorites
void GlobalNamespace::LevelCollectionTableView::RefreshFavorites(System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshFavorites", favoriteLevelIds));
}
// Autogenerated method: LevelCollectionTableView.OnEnable
void GlobalNamespace::LevelCollectionTableView::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: LevelCollectionTableView.OnDisable
void GlobalNamespace::LevelCollectionTableView::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: LevelCollectionTableView.OnDestroy
void GlobalNamespace::LevelCollectionTableView::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: LevelCollectionTableView.HandleDidSelectRowEvent
void GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent(HMUI::TableView* tableView, int row) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDidSelectRowEvent", tableView, row));
}
// Autogenerated method: LevelCollectionTableView.HandleAdditionalContentModelDidInvalidateData
void GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleAdditionalContentModelDidInvalidateData"));
}
// Autogenerated method: LevelCollectionTableView.CancelAsyncOperations
void GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CancelAsyncOperations"));
}
// Autogenerated method: LevelCollectionTableView.RefreshLevelsAvailability
void GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshLevelsAvailability"));
}
// Autogenerated method: LevelCollectionTableView.SelectLevelPackHeaderCell
void GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectLevelPackHeaderCell"));
}
// Autogenerated method: LevelCollectionTableView.SelectFirstLevelCell
void GlobalNamespace::LevelCollectionTableView::SelectFirstLevelCell() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectFirstLevelCell"));
}
// Autogenerated method: LevelCollectionTableView.SelectLevel
void GlobalNamespace::LevelCollectionTableView::SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectLevel", beatmapLevel));
}
// Autogenerated method: LevelCollectionTableView.CellSize
float GlobalNamespace::LevelCollectionTableView::CellSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "CellSize"));
}
// Autogenerated method: LevelCollectionTableView.NumberOfCells
int GlobalNamespace::LevelCollectionTableView::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: LevelCollectionTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::LevelCollectionTableView::CellForIdx(HMUI::TableView* tableView, int row) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForIdx", tableView, row));
}
// Autogenerated method: LevelCollectionTableView..ctor
GlobalNamespace::LevelCollectionTableView* GlobalNamespace::LevelCollectionTableView::New_ctor() {
  return (LevelCollectionTableView*)THROW_UNLESS(il2cpp_utils::New("", "LevelCollectionTableView"));
}