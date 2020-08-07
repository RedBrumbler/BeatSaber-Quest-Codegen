// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TextSegmentedControl
#include "HMUI/TextSegmentedControl.hpp"
// Including type: HMUI.TextSegmentedControlCellBase
#include "HMUI/TextSegmentedControlCellBase.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: HMUI.SegmentedControlCell
#include "HMUI/SegmentedControlCell.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.TextSegmentedControl.SetTexts
void HMUI::TextSegmentedControl::SetTexts(::Array<::Il2CppString*>* texts) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTexts", texts));
}
// Autogenerated method: HMUI.TextSegmentedControl.InstantiateCell
HMUI::TextSegmentedControlCellBase* HMUI::TextSegmentedControl::InstantiateCell(UnityEngine::Object* prefab) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TextSegmentedControlCellBase*>(this, "InstantiateCell", prefab));
}
// Autogenerated method: HMUI.TextSegmentedControl.NumberOfCells
int HMUI::TextSegmentedControl::NumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfCells"));
}
// Autogenerated method: HMUI.TextSegmentedControl.CellForCellNumber
HMUI::SegmentedControlCell* HMUI::TextSegmentedControl::CellForCellNumber(int cellNumber) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::SegmentedControlCell*>(this, "CellForCellNumber", cellNumber));
}
// Autogenerated method: HMUI.TextSegmentedControl..ctor
HMUI::TextSegmentedControl* HMUI::TextSegmentedControl::New_ctor() {
  return (TextSegmentedControl*)THROW_UNLESS(il2cpp_utils::New("HMUI", "TextSegmentedControl"));
}