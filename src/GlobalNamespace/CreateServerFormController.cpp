// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: CreateServerFormController
#include "GlobalNamespace/CreateServerFormController.hpp"
// Including type: FormattedFloatListSettingsController
#include "GlobalNamespace/FormattedFloatListSettingsController.hpp"
// Including type: CreateServerFormData
#include "GlobalNamespace/CreateServerFormData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kMinPlayers
int GlobalNamespace::CreateServerFormController::_get_kMinPlayers() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "CreateServerFormController", "kMinPlayers"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMinPlayers
void GlobalNamespace::CreateServerFormController::_set_kMinPlayers(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "CreateServerFormController", "kMinPlayers", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxPlayers
int GlobalNamespace::CreateServerFormController::_get_kMaxPlayers() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "CreateServerFormController", "kMaxPlayers"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxPlayers
void GlobalNamespace::CreateServerFormController::_set_kMaxPlayers(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "CreateServerFormController", "kMaxPlayers", value));
}
// Autogenerated method: CreateServerFormController.get_formData
GlobalNamespace::CreateServerFormData GlobalNamespace::CreateServerFormController::get_formData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::CreateServerFormData>(this, "get_formData"));
}
// Autogenerated method: CreateServerFormController.Setup
void GlobalNamespace::CreateServerFormController::Setup(int selectedNumberOfPlayers, bool netDiscoverable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", selectedNumberOfPlayers, netDiscoverable));
}
// Autogenerated method: CreateServerFormController..ctor
GlobalNamespace::CreateServerFormController* GlobalNamespace::CreateServerFormController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<CreateServerFormController*>());
}