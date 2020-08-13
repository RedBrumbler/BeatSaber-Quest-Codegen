// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.SectionTableView/IDataSource
#include "HMUI/SectionTableView_IDataSource.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.SectionTableView/IDataSource.RowHeight
float HMUI::SectionTableView::IDataSource::RowHeight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "RowHeight"));
}
// Autogenerated method: HMUI.SectionTableView/IDataSource.NumberOfSections
int HMUI::SectionTableView::IDataSource::NumberOfSections() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfSections"));
}
// Autogenerated method: HMUI.SectionTableView/IDataSource.NumberOfRowsInSection
int HMUI::SectionTableView::IDataSource::NumberOfRowsInSection(int section) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NumberOfRowsInSection", section));
}
// Autogenerated method: HMUI.SectionTableView/IDataSource.CellForSectionHeader
HMUI::TableCell* HMUI::SectionTableView::IDataSource::CellForSectionHeader(int section, bool unfolded) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForSectionHeader", section, unfolded));
}
// Autogenerated method: HMUI.SectionTableView/IDataSource.CellForRowInSection
HMUI::TableCell* HMUI::SectionTableView::IDataSource::CellForRowInSection(int section, int row) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::TableCell*>(this, "CellForRowInSection", section, row));
}
