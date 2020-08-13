// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizedText
#include "Polyglot/LocalizedText.hpp"
// Including type: UnityEngine.UI.Text
#include "UnityEngine/UI/Text.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Polyglot.LocalizedText.SetText
void Polyglot::LocalizedText::SetText(UnityEngine::UI::Text* text, ::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetText", text, value));
}
// Autogenerated method: Polyglot.LocalizedText.UpdateAlignment
void Polyglot::LocalizedText::UpdateAlignment(UnityEngine::UI::Text* text, Polyglot::LanguageDirection direction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAlignment", text, direction));
}
// Autogenerated method: Polyglot.LocalizedText.IsOppositeDirection
bool Polyglot::LocalizedText::IsOppositeDirection(UnityEngine::TextAnchor alignment, Polyglot::LanguageDirection direction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsOppositeDirection", alignment, direction));
}
// Autogenerated method: Polyglot.LocalizedText.IsAlignmentRight
bool Polyglot::LocalizedText::IsAlignmentRight(UnityEngine::TextAnchor alignment) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsAlignmentRight", alignment));
}
// Autogenerated method: Polyglot.LocalizedText.IsAlignmentLeft
bool Polyglot::LocalizedText::IsAlignmentLeft(UnityEngine::TextAnchor alignment) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsAlignmentLeft", alignment));
}
// Autogenerated method: Polyglot.LocalizedText..ctor
Polyglot::LocalizedText* Polyglot::LocalizedText::New_ctor() {
  return (LocalizedText*)THROW_UNLESS(il2cpp_utils::New("Polyglot", "LocalizedText"));
}
