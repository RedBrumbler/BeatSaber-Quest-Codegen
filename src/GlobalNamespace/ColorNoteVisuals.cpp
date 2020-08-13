// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorNoteVisuals
#include "GlobalNamespace/ColorNoteVisuals.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: UnityEngine.SpriteRenderer
#include "UnityEngine/SpriteRenderer.hpp"
// Including type: MaterialPropertyBlockController
#include "GlobalNamespace/MaterialPropertyBlockController.hpp"
// Including type: UnityEngine.MeshRenderer
#include "UnityEngine/MeshRenderer.hpp"
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _colorID
int GlobalNamespace::ColorNoteVisuals::_get__colorID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ColorNoteVisuals", "_colorID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _colorID
void GlobalNamespace::ColorNoteVisuals::_set__colorID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ColorNoteVisuals", "_colorID", value));
}
// Autogenerated method: ColorNoteVisuals.add_didInitEvent
void GlobalNamespace::ColorNoteVisuals::add_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didInitEvent", value));
}
// Autogenerated method: ColorNoteVisuals.remove_didInitEvent
void GlobalNamespace::ColorNoteVisuals::remove_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didInitEvent", value));
}
// Autogenerated method: ColorNoteVisuals.get_noteColor
UnityEngine::Color GlobalNamespace::ColorNoteVisuals::get_noteColor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_noteColor"));
}
// Autogenerated method: ColorNoteVisuals.set_showArrow
void GlobalNamespace::ColorNoteVisuals::set_showArrow(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_showArrow", value));
}
// Autogenerated method: ColorNoteVisuals.set_showCircle
void GlobalNamespace::ColorNoteVisuals::set_showCircle(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_showCircle", value));
}
// Autogenerated method: ColorNoteVisuals.Awake
void GlobalNamespace::ColorNoteVisuals::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: ColorNoteVisuals.OnDestroy
void GlobalNamespace::ColorNoteVisuals::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: ColorNoteVisuals.HandleNoteControllerDidInitEvent
void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInitEvent(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteControllerDidInitEvent", noteController));
}
// Autogenerated method: ColorNoteVisuals.NoteIsOnDifferentSide
bool GlobalNamespace::ColorNoteVisuals::NoteIsOnDifferentSide(GlobalNamespace::NoteData* noteData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "NoteIsOnDifferentSide", noteData));
}
// Autogenerated method: ColorNoteVisuals.HandleNoteControllerNoteDidPassJumpThreeQuartersEvent
void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuartersEvent(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteControllerNoteDidPassJumpThreeQuartersEvent", noteController));
}
// Autogenerated method: ColorNoteVisuals.HandleNoteDidStartDissolvingEvent
void GlobalNamespace::ColorNoteVisuals::HandleNoteDidStartDissolvingEvent(GlobalNamespace::NoteController* noteController, float duration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteDidStartDissolvingEvent", noteController, duration));
}
// Autogenerated method: ColorNoteVisuals..ctor
GlobalNamespace::ColorNoteVisuals* GlobalNamespace::ColorNoteVisuals::New_ctor() {
  return (ColorNoteVisuals*)THROW_UNLESS(il2cpp_utils::New("", "ColorNoteVisuals"));
}
// Autogenerated method: ColorNoteVisuals..cctor
void GlobalNamespace::ColorNoteVisuals::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "ColorNoteVisuals", ".cctor"));
}
