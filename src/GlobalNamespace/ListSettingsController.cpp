// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ListSettingsController.GetInitValues
bool GlobalNamespace::ListSettingsController::GetInitValues(int& idx, int& numberOfElements) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetInitValues", idx, numberOfElements));
}
// Autogenerated method: ListSettingsController.ApplyValue
void GlobalNamespace::ListSettingsController::ApplyValue(int idx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyValue", idx));
}
// Autogenerated method: ListSettingsController.TextForValue
::CsString* GlobalNamespace::ListSettingsController::TextForValue(int idx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "TextForValue", idx));
}
// Autogenerated method: ListSettingsController.RefreshUI
void GlobalNamespace::ListSettingsController::RefreshUI() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshUI"));
}
// Autogenerated method: ListSettingsController.Refresh
void GlobalNamespace::ListSettingsController::Refresh(bool applyValue) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Refresh", applyValue));
}
// Autogenerated method: ListSettingsController.OnEnable
void GlobalNamespace::ListSettingsController::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: ListSettingsController.IncButtonPressed
void GlobalNamespace::ListSettingsController::IncButtonPressed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "IncButtonPressed"));
}
// Autogenerated method: ListSettingsController.DecButtonPressed
void GlobalNamespace::ListSettingsController::DecButtonPressed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DecButtonPressed"));
}
// Autogenerated method: ListSettingsController..ctor
GlobalNamespace::ListSettingsController* GlobalNamespace::ListSettingsController::New_ctor() {
  return (ListSettingsController*)THROW_UNLESS(il2cpp_utils::New("", "ListSettingsController"));
}
