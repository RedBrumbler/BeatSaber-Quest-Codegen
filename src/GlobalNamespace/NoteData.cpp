// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteData.get_noteType
GlobalNamespace::NoteType GlobalNamespace::NoteData::get_noteType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteType>(this, "get_noteType"));
}
// Autogenerated method: NoteData.set_noteType
void GlobalNamespace::NoteData::set_noteType(GlobalNamespace::NoteType value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_noteType", value));
}
// Autogenerated method: NoteData.get_cutDirection
GlobalNamespace::NoteCutDirection GlobalNamespace::NoteData::get_cutDirection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteCutDirection>(this, "get_cutDirection"));
}
// Autogenerated method: NoteData.set_cutDirection
void GlobalNamespace::NoteData::set_cutDirection(GlobalNamespace::NoteCutDirection value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_cutDirection", value));
}
// Autogenerated method: NoteData.get_noteLineLayer
GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_noteLineLayer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteLineLayer>(this, "get_noteLineLayer"));
}
// Autogenerated method: NoteData.set_noteLineLayer
void GlobalNamespace::NoteData::set_noteLineLayer(GlobalNamespace::NoteLineLayer value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_noteLineLayer", value));
}
// Autogenerated method: NoteData.get_startNoteLineLayer
GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_startNoteLineLayer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteLineLayer>(this, "get_startNoteLineLayer"));
}
// Autogenerated method: NoteData.set_startNoteLineLayer
void GlobalNamespace::NoteData::set_startNoteLineLayer(GlobalNamespace::NoteLineLayer value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_startNoteLineLayer", value));
}
// Autogenerated method: NoteData.get_flipLineIndex
int GlobalNamespace::NoteData::get_flipLineIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_flipLineIndex"));
}
// Autogenerated method: NoteData.set_flipLineIndex
void GlobalNamespace::NoteData::set_flipLineIndex(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_flipLineIndex", value));
}
// Autogenerated method: NoteData.get_flipYSide
float GlobalNamespace::NoteData::get_flipYSide() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_flipYSide"));
}
// Autogenerated method: NoteData.set_flipYSide
void GlobalNamespace::NoteData::set_flipYSide(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_flipYSide", value));
}
// Autogenerated method: NoteData.get_timeToNextBasicNote
float GlobalNamespace::NoteData::get_timeToNextBasicNote() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_timeToNextBasicNote"));
}
// Autogenerated method: NoteData.set_timeToNextBasicNote
void GlobalNamespace::NoteData::set_timeToNextBasicNote(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_timeToNextBasicNote", value));
}
// Autogenerated method: NoteData.get_timeToPrevBasicNote
float GlobalNamespace::NoteData::get_timeToPrevBasicNote() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_timeToPrevBasicNote"));
}
// Autogenerated method: NoteData.set_timeToPrevBasicNote
void GlobalNamespace::NoteData::set_timeToPrevBasicNote(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_timeToPrevBasicNote", value));
}
// Autogenerated method: NoteData..ctor
GlobalNamespace::NoteData* GlobalNamespace::NoteData::New_ctor(int id, float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer startNoteLineLayer, GlobalNamespace::NoteType noteType, GlobalNamespace::NoteCutDirection cutDirection, float timeToNextBasicNote, float timeToPrevBasicNote) {
  return (NoteData*)THROW_UNLESS(il2cpp_utils::New("", "NoteData", id, time, lineIndex, noteLineLayer, startNoteLineLayer, noteType, cutDirection, timeToNextBasicNote, timeToPrevBasicNote));
}
// Autogenerated method: NoteData..ctor
GlobalNamespace::NoteData* GlobalNamespace::NoteData::New_ctor(int id, float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer startNoteLineLayer, GlobalNamespace::NoteType noteType, GlobalNamespace::NoteCutDirection cutDirection, float timeToNextBasicNote, float timeToPrevBasicNote, int flipLineIndex, float flipYSide) {
  return (NoteData*)THROW_UNLESS(il2cpp_utils::New("", "NoteData", id, time, lineIndex, noteLineLayer, startNoteLineLayer, noteType, cutDirection, timeToNextBasicNote, timeToPrevBasicNote, flipLineIndex, flipYSide));
}
// Autogenerated method: NoteData.SetNoteFlipToNote
void GlobalNamespace::NoteData::SetNoteFlipToNote(GlobalNamespace::NoteData* targetNote) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetNoteFlipToNote", targetNote));
}
// Autogenerated method: NoteData.SwitchNoteType
void GlobalNamespace::NoteData::SwitchNoteType() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SwitchNoteType"));
}
// Autogenerated method: NoteData.MirrorTransformCutDirection
void GlobalNamespace::NoteData::MirrorTransformCutDirection() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MirrorTransformCutDirection"));
}
// Autogenerated method: NoteData.SetNoteToAnyCutDirection
void GlobalNamespace::NoteData::SetNoteToAnyCutDirection() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetNoteToAnyCutDirection"));
}
// Autogenerated method: NoteData.TransformNoteAOrBToRandomType
void GlobalNamespace::NoteData::TransformNoteAOrBToRandomType() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TransformNoteAOrBToRandomType"));
}
// Autogenerated method: NoteData.SetNoteStartLineLayer
void GlobalNamespace::NoteData::SetNoteStartLineLayer(GlobalNamespace::NoteLineLayer lineLayer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetNoteStartLineLayer", lineLayer));
}
// Autogenerated method: NoteData.GetCopy
GlobalNamespace::BeatmapObjectData* GlobalNamespace::NoteData::GetCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectData*>(this, "GetCopy"));
}
// Autogenerated method: NoteData.MirrorLineIndex
void GlobalNamespace::NoteData::MirrorLineIndex(int lineCount) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MirrorLineIndex", lineCount));
}