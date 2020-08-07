// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameCoreSceneSetupData
#include "GlobalNamespace/GameCoreSceneSetupData.hpp"
// Including type: ColorScheme
#include "GlobalNamespace/ColorScheme.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameCoreSceneSetupData.get_colorScheme
GlobalNamespace::ColorScheme* GlobalNamespace::GameCoreSceneSetupData::get_colorScheme() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ColorScheme*>(this, "get_colorScheme"));
}
// Autogenerated method: GameCoreSceneSetupData.set_colorScheme
void GlobalNamespace::GameCoreSceneSetupData::set_colorScheme(GlobalNamespace::ColorScheme* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_colorScheme", value));
}
// Autogenerated method: GameCoreSceneSetupData..ctor
GlobalNamespace::GameCoreSceneSetupData* GlobalNamespace::GameCoreSceneSetupData::New_ctor(GlobalNamespace::ColorScheme* colorScheme) {
  return (GameCoreSceneSetupData*)THROW_UNLESS(il2cpp_utils::New("", "GameCoreSceneSetupData", colorScheme));
}