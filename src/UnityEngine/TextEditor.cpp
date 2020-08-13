// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TextEditor
#include "UnityEngine/TextEditor.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.TextEditor/CharacterType
#include "UnityEngine/TextEditor_CharacterType.hpp"
// Including type: UnityEngine.TextEditor/Direction
#include "UnityEngine/TextEditor_Direction.hpp"
// Including type: UnityEngine.TouchScreenKeyboard
#include "UnityEngine/TouchScreenKeyboard.hpp"
// Including type: UnityEngine.GUIStyle
#include "UnityEngine/GUIStyle.hpp"
// Including type: UnityEngine.GUIContent
#include "UnityEngine/GUIContent.hpp"
// Including type: UnityEngine.Event
#include "UnityEngine/Event.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> s_Keyactions
System::Collections::Generic::Dictionary_2<UnityEngine::Event*, UnityEngine::TextEditor::TextEditOp>* UnityEngine::TextEditor::_get_s_Keyactions() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<UnityEngine::Event*, UnityEngine::TextEditor::TextEditOp>*>("UnityEngine", "TextEditor", "s_Keyactions")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> s_Keyactions
void UnityEngine::TextEditor::_set_s_Keyactions(System::Collections::Generic::Dictionary_2<UnityEngine::Event*, UnityEngine::TextEditor::TextEditOp>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "TextEditor", "s_Keyactions", value));
}
// Autogenerated method: UnityEngine.TextEditor.get_text
::CsString* UnityEngine::TextEditor::get_text() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_text"));
}
// Autogenerated method: UnityEngine.TextEditor.set_text
void UnityEngine::TextEditor::set_text(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_text", value));
}
// Autogenerated method: UnityEngine.TextEditor.get_position
UnityEngine::Rect UnityEngine::TextEditor::get_position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Rect>(this, "get_position"));
}
// Autogenerated method: UnityEngine.TextEditor.set_position
void UnityEngine::TextEditor::set_position(UnityEngine::Rect value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_position", value));
}
// Autogenerated method: UnityEngine.TextEditor.get_localPosition
UnityEngine::Rect UnityEngine::TextEditor::get_localPosition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Rect>(this, "get_localPosition"));
}
// Autogenerated method: UnityEngine.TextEditor.get_cursorIndex
int UnityEngine::TextEditor::get_cursorIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_cursorIndex"));
}
// Autogenerated method: UnityEngine.TextEditor.set_cursorIndex
void UnityEngine::TextEditor::set_cursorIndex(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_cursorIndex", value));
}
// Autogenerated method: UnityEngine.TextEditor.get_selectIndex
int UnityEngine::TextEditor::get_selectIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_selectIndex"));
}
// Autogenerated method: UnityEngine.TextEditor.set_selectIndex
void UnityEngine::TextEditor::set_selectIndex(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_selectIndex", value));
}
// Autogenerated method: UnityEngine.TextEditor.ClearCursorPos
void UnityEngine::TextEditor::ClearCursorPos() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearCursorPos"));
}
// Autogenerated method: UnityEngine.TextEditor.OnFocus
void UnityEngine::TextEditor::OnFocus() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnFocus"));
}
// Autogenerated method: UnityEngine.TextEditor.OnLostFocus
void UnityEngine::TextEditor::OnLostFocus() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnLostFocus"));
}
// Autogenerated method: UnityEngine.TextEditor.GrabGraphicalCursorPos
void UnityEngine::TextEditor::GrabGraphicalCursorPos() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabGraphicalCursorPos"));
}
// Autogenerated method: UnityEngine.TextEditor.HandleKeyEvent
bool UnityEngine::TextEditor::HandleKeyEvent(UnityEngine::Event* e) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HandleKeyEvent", e));
}
// Autogenerated method: UnityEngine.TextEditor.HandleKeyEvent
bool UnityEngine::TextEditor::HandleKeyEvent(UnityEngine::Event* e, bool textIsReadOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HandleKeyEvent", e, textIsReadOnly));
}
// Autogenerated method: UnityEngine.TextEditor.DeleteLineBack
bool UnityEngine::TextEditor::DeleteLineBack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DeleteLineBack"));
}
// Autogenerated method: UnityEngine.TextEditor.DeleteWordBack
bool UnityEngine::TextEditor::DeleteWordBack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DeleteWordBack"));
}
// Autogenerated method: UnityEngine.TextEditor.DeleteWordForward
bool UnityEngine::TextEditor::DeleteWordForward() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DeleteWordForward"));
}
// Autogenerated method: UnityEngine.TextEditor.Delete
bool UnityEngine::TextEditor::Delete() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Delete"));
}
// Autogenerated method: UnityEngine.TextEditor.Backspace
bool UnityEngine::TextEditor::Backspace() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Backspace"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectAll
void UnityEngine::TextEditor::SelectAll() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectAll"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectNone
void UnityEngine::TextEditor::SelectNone() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectNone"));
}
// Autogenerated method: UnityEngine.TextEditor.get_hasSelection
bool UnityEngine::TextEditor::get_hasSelection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasSelection"));
}
// Autogenerated method: UnityEngine.TextEditor.DeleteSelection
bool UnityEngine::TextEditor::DeleteSelection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DeleteSelection"));
}
// Autogenerated method: UnityEngine.TextEditor.ReplaceSelection
void UnityEngine::TextEditor::ReplaceSelection(::CsString* replace) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReplaceSelection", replace));
}
// Autogenerated method: UnityEngine.TextEditor.Insert
void UnityEngine::TextEditor::Insert(::Il2CppChar c) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Insert", c));
}
// Autogenerated method: UnityEngine.TextEditor.MoveRight
void UnityEngine::TextEditor::MoveRight() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveRight"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveLeft
void UnityEngine::TextEditor::MoveLeft() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveLeft"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveUp
void UnityEngine::TextEditor::MoveUp() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveUp"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveDown
void UnityEngine::TextEditor::MoveDown() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveDown"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveLineStart
void UnityEngine::TextEditor::MoveLineStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveLineStart"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveLineEnd
void UnityEngine::TextEditor::MoveLineEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveLineEnd"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveGraphicalLineStart
void UnityEngine::TextEditor::MoveGraphicalLineStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveGraphicalLineStart"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveGraphicalLineEnd
void UnityEngine::TextEditor::MoveGraphicalLineEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveGraphicalLineEnd"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveTextStart
void UnityEngine::TextEditor::MoveTextStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveTextStart"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveTextEnd
void UnityEngine::TextEditor::MoveTextEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveTextEnd"));
}
// Autogenerated method: UnityEngine.TextEditor.IndexOfEndOfLine
int UnityEngine::TextEditor::IndexOfEndOfLine(int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "IndexOfEndOfLine", startIndex));
}
// Autogenerated method: UnityEngine.TextEditor.MoveParagraphForward
void UnityEngine::TextEditor::MoveParagraphForward() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveParagraphForward"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveParagraphBackward
void UnityEngine::TextEditor::MoveParagraphBackward() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveParagraphBackward"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveCursorToPosition
void UnityEngine::TextEditor::MoveCursorToPosition(UnityEngine::Vector2 cursorPosition) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveCursorToPosition", cursorPosition));
}
// Autogenerated method: UnityEngine.TextEditor.MoveCursorToPosition_Internal
void UnityEngine::TextEditor::MoveCursorToPosition_Internal(UnityEngine::Vector2 cursorPosition, bool shift) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveCursorToPosition_Internal", cursorPosition, shift));
}
// Autogenerated method: UnityEngine.TextEditor.SelectToPosition
void UnityEngine::TextEditor::SelectToPosition(UnityEngine::Vector2 cursorPosition) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectToPosition", cursorPosition));
}
// Autogenerated method: UnityEngine.TextEditor.SelectLeft
void UnityEngine::TextEditor::SelectLeft() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectLeft"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectRight
void UnityEngine::TextEditor::SelectRight() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectRight"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectUp
void UnityEngine::TextEditor::SelectUp() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectUp"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectDown
void UnityEngine::TextEditor::SelectDown() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectDown"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectTextEnd
void UnityEngine::TextEditor::SelectTextEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectTextEnd"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectTextStart
void UnityEngine::TextEditor::SelectTextStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectTextStart"));
}
// Autogenerated method: UnityEngine.TextEditor.MouseDragSelectsWholeWords
void UnityEngine::TextEditor::MouseDragSelectsWholeWords(bool on) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MouseDragSelectsWholeWords", on));
}
// Autogenerated method: UnityEngine.TextEditor.DblClickSnap
void UnityEngine::TextEditor::DblClickSnap(UnityEngine::TextEditor::DblClickSnapping snapping) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DblClickSnap", snapping));
}
// Autogenerated method: UnityEngine.TextEditor.GetGraphicalLineStart
int UnityEngine::TextEditor::GetGraphicalLineStart(int p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetGraphicalLineStart", p));
}
// Autogenerated method: UnityEngine.TextEditor.GetGraphicalLineEnd
int UnityEngine::TextEditor::GetGraphicalLineEnd(int p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetGraphicalLineEnd", p));
}
// Autogenerated method: UnityEngine.TextEditor.FindNextSeperator
int UnityEngine::TextEditor::FindNextSeperator(int startPos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindNextSeperator", startPos));
}
// Autogenerated method: UnityEngine.TextEditor.FindPrevSeperator
int UnityEngine::TextEditor::FindPrevSeperator(int startPos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindPrevSeperator", startPos));
}
// Autogenerated method: UnityEngine.TextEditor.MoveWordRight
void UnityEngine::TextEditor::MoveWordRight() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveWordRight"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveToStartOfNextWord
void UnityEngine::TextEditor::MoveToStartOfNextWord() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveToStartOfNextWord"));
}
// Autogenerated method: UnityEngine.TextEditor.MoveToEndOfPreviousWord
void UnityEngine::TextEditor::MoveToEndOfPreviousWord() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveToEndOfPreviousWord"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectToStartOfNextWord
void UnityEngine::TextEditor::SelectToStartOfNextWord() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectToStartOfNextWord"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectToEndOfPreviousWord
void UnityEngine::TextEditor::SelectToEndOfPreviousWord() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectToEndOfPreviousWord"));
}
// Autogenerated method: UnityEngine.TextEditor.ClassifyChar
UnityEngine::TextEditor::CharacterType UnityEngine::TextEditor::ClassifyChar(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TextEditor::CharacterType>(this, "ClassifyChar", index));
}
// Autogenerated method: UnityEngine.TextEditor.FindStartOfNextWord
int UnityEngine::TextEditor::FindStartOfNextWord(int p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindStartOfNextWord", p));
}
// Autogenerated method: UnityEngine.TextEditor.FindEndOfPreviousWord
int UnityEngine::TextEditor::FindEndOfPreviousWord(int p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindEndOfPreviousWord", p));
}
// Autogenerated method: UnityEngine.TextEditor.MoveWordLeft
void UnityEngine::TextEditor::MoveWordLeft() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveWordLeft"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectWordRight
void UnityEngine::TextEditor::SelectWordRight() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectWordRight"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectWordLeft
void UnityEngine::TextEditor::SelectWordLeft() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectWordLeft"));
}
// Autogenerated method: UnityEngine.TextEditor.ExpandSelectGraphicalLineStart
void UnityEngine::TextEditor::ExpandSelectGraphicalLineStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ExpandSelectGraphicalLineStart"));
}
// Autogenerated method: UnityEngine.TextEditor.ExpandSelectGraphicalLineEnd
void UnityEngine::TextEditor::ExpandSelectGraphicalLineEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ExpandSelectGraphicalLineEnd"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectGraphicalLineStart
void UnityEngine::TextEditor::SelectGraphicalLineStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectGraphicalLineStart"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectGraphicalLineEnd
void UnityEngine::TextEditor::SelectGraphicalLineEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectGraphicalLineEnd"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectParagraphForward
void UnityEngine::TextEditor::SelectParagraphForward() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectParagraphForward"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectParagraphBackward
void UnityEngine::TextEditor::SelectParagraphBackward() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectParagraphBackward"));
}
// Autogenerated method: UnityEngine.TextEditor.SelectCurrentWord
void UnityEngine::TextEditor::SelectCurrentWord() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectCurrentWord"));
}
// Autogenerated method: UnityEngine.TextEditor.FindEndOfClassification
int UnityEngine::TextEditor::FindEndOfClassification(int p, UnityEngine::TextEditor::Direction dir) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindEndOfClassification", p, dir));
}
// Autogenerated method: UnityEngine.TextEditor.SelectCurrentParagraph
void UnityEngine::TextEditor::SelectCurrentParagraph() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectCurrentParagraph"));
}
// Autogenerated method: UnityEngine.TextEditor.UpdateScrollOffsetIfNeeded
void UnityEngine::TextEditor::UpdateScrollOffsetIfNeeded(UnityEngine::Event* evt) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateScrollOffsetIfNeeded", evt));
}
// Autogenerated method: UnityEngine.TextEditor.UpdateScrollOffset
void UnityEngine::TextEditor::UpdateScrollOffset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateScrollOffset"));
}
// Autogenerated method: UnityEngine.TextEditor.DrawCursor
void UnityEngine::TextEditor::DrawCursor(::CsString* newText) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DrawCursor", newText));
}
// Autogenerated method: UnityEngine.TextEditor.PerformOperation
bool UnityEngine::TextEditor::PerformOperation(UnityEngine::TextEditor::TextEditOp operation, bool textIsReadOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "PerformOperation", operation, textIsReadOnly));
}
// Autogenerated method: UnityEngine.TextEditor.SaveBackup
void UnityEngine::TextEditor::SaveBackup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SaveBackup"));
}
// Autogenerated method: UnityEngine.TextEditor.Cut
bool UnityEngine::TextEditor::Cut() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Cut"));
}
// Autogenerated method: UnityEngine.TextEditor.Copy
void UnityEngine::TextEditor::Copy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Copy"));
}
// Autogenerated method: UnityEngine.TextEditor.ReplaceNewlinesWithSpaces
::CsString* UnityEngine::TextEditor::ReplaceNewlinesWithSpaces(::CsString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("UnityEngine", "TextEditor", "ReplaceNewlinesWithSpaces", value));
}
// Autogenerated method: UnityEngine.TextEditor.Paste
bool UnityEngine::TextEditor::Paste() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Paste"));
}
// Autogenerated method: UnityEngine.TextEditor.MapKey
void UnityEngine::TextEditor::MapKey(::CsString* key, UnityEngine::TextEditor::TextEditOp action) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "TextEditor", "MapKey", key, action));
}
// Autogenerated method: UnityEngine.TextEditor.InitKeyActions
void UnityEngine::TextEditor::InitKeyActions() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitKeyActions"));
}
// Autogenerated method: UnityEngine.TextEditor.DetectFocusChange
void UnityEngine::TextEditor::DetectFocusChange() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DetectFocusChange"));
}
// Autogenerated method: UnityEngine.TextEditor.OnDetectFocusChange
void UnityEngine::TextEditor::OnDetectFocusChange() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDetectFocusChange"));
}
// Autogenerated method: UnityEngine.TextEditor.OnCursorIndexChange
void UnityEngine::TextEditor::OnCursorIndexChange() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnCursorIndexChange"));
}
// Autogenerated method: UnityEngine.TextEditor.OnSelectIndexChange
void UnityEngine::TextEditor::OnSelectIndexChange() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSelectIndexChange"));
}
// Autogenerated method: UnityEngine.TextEditor.ClampTextIndex
void UnityEngine::TextEditor::ClampTextIndex(int& index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClampTextIndex", index));
}
// Autogenerated method: UnityEngine.TextEditor.EnsureValidCodePointIndex
void UnityEngine::TextEditor::EnsureValidCodePointIndex(int& index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureValidCodePointIndex", index));
}
// Autogenerated method: UnityEngine.TextEditor.IsValidCodePointIndex
bool UnityEngine::TextEditor::IsValidCodePointIndex(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValidCodePointIndex", index));
}
// Autogenerated method: UnityEngine.TextEditor.PreviousCodePointIndex
int UnityEngine::TextEditor::PreviousCodePointIndex(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "PreviousCodePointIndex", index));
}
// Autogenerated method: UnityEngine.TextEditor.NextCodePointIndex
int UnityEngine::TextEditor::NextCodePointIndex(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "NextCodePointIndex", index));
}
// Autogenerated method: UnityEngine.TextEditor..ctor
UnityEngine::TextEditor* UnityEngine::TextEditor::New_ctor() {
  return (TextEditor*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "TextEditor"));
}
