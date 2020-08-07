// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialNoteCutEffectSpawner
#include "GlobalNamespace/TutorialNoteCutEffectSpawner.hpp"
// Including type: NoteCutParticlesEffect
#include "GlobalNamespace/NoteCutParticlesEffect.hpp"
// Including type: ShockwaveEffect
#include "GlobalNamespace/ShockwaveEffect.hpp"
// Including type: NoteDebrisSpawner
#include "GlobalNamespace/NoteDebrisSpawner.hpp"
// Including type: NoteCutHapticEffect
#include "GlobalNamespace/NoteCutHapticEffect.hpp"
// Including type: FlyingTextSpawner
#include "GlobalNamespace/FlyingTextSpawner.hpp"
// Including type: BombExplosionEffect
#include "GlobalNamespace/BombExplosionEffect.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: INoteController
#include "GlobalNamespace/INoteController.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TutorialNoteCutEffectSpawner.get_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts
bool GlobalNamespace::TutorialNoteCutEffectSpawner::get_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts"));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.set_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts
void GlobalNamespace::TutorialNoteCutEffectSpawner::set_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts", value));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.Start
void GlobalNamespace::TutorialNoteCutEffectSpawner::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.OnDestroy
void GlobalNamespace::TutorialNoteCutEffectSpawner::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.HandleNoteWasCut
void GlobalNamespace::TutorialNoteCutEffectSpawner::HandleNoteWasCut(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasCut", noteController, noteCutInfo));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.SpawnNoteCutEffect
void GlobalNamespace::TutorialNoteCutEffectSpawner::SpawnNoteCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnNoteCutEffect", pos, noteController, noteCutInfo));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.SpawnBombCutEffect
void GlobalNamespace::TutorialNoteCutEffectSpawner::SpawnBombCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnBombCutEffect", pos, noteController, noteCutInfo));
}
// Autogenerated method: TutorialNoteCutEffectSpawner.HandleNoteWasMissed
void GlobalNamespace::TutorialNoteCutEffectSpawner::HandleNoteWasMissed(GlobalNamespace::INoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasMissed", noteController));
}
// Autogenerated method: TutorialNoteCutEffectSpawner..ctor
GlobalNamespace::TutorialNoteCutEffectSpawner* GlobalNamespace::TutorialNoteCutEffectSpawner::New_ctor() {
  return (TutorialNoteCutEffectSpawner*)THROW_UNLESS(il2cpp_utils::New("", "TutorialNoteCutEffectSpawner"));
}