// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedIntListSettingsController
#include "GlobalNamespace/NamedIntListSettingsController.hpp"
// Including type: NamedIntListSettingsController/TextValuePair
#include "GlobalNamespace/NamedIntListSettingsController_TextValuePair.hpp"
// Including type: IntSO
#include "GlobalNamespace/IntSO.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NamedIntListSettingsController.GetInitValues
bool GlobalNamespace::NamedIntListSettingsController::GetInitValues(int& idx, int& numberOfElements) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetInitValues", idx, numberOfElements));
}
// Autogenerated method: NamedIntListSettingsController.ApplyValue
void GlobalNamespace::NamedIntListSettingsController::ApplyValue(int idx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyValue", idx));
}
// Autogenerated method: NamedIntListSettingsController.TextForValue
::Il2CppString* GlobalNamespace::NamedIntListSettingsController::TextForValue(int idx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "TextForValue", idx));
}
// Autogenerated method: NamedIntListSettingsController..ctor
GlobalNamespace::NamedIntListSettingsController* GlobalNamespace::NamedIntListSettingsController::New_ctor() {
  return (NamedIntListSettingsController*)THROW_UNLESS(il2cpp_utils::New("", "NamedIntListSettingsController"));
}