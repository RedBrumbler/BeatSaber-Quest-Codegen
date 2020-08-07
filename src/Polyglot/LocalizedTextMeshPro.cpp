// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizedTextMeshPro
#include "Polyglot/LocalizedTextMeshPro.hpp"
// Including type: TMPro.TextMeshPro
#include "TMPro/TextMeshPro.hpp"
// Including type: TMPro.TextAlignmentOptions
#include "TMPro/TextAlignmentOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Polyglot.LocalizedTextMeshPro.SetText
void Polyglot::LocalizedTextMeshPro::SetText(TMPro::TextMeshPro* text, ::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetText", text, value));
}
// Autogenerated method: Polyglot.LocalizedTextMeshPro.UpdateAlignment
void Polyglot::LocalizedTextMeshPro::UpdateAlignment(TMPro::TextMeshPro* text, Polyglot::LanguageDirection direction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAlignment", text, direction));
}
// Autogenerated method: Polyglot.LocalizedTextMeshPro.IsOppositeDirection
bool Polyglot::LocalizedTextMeshPro::IsOppositeDirection(TMPro::TextAlignmentOptions alignment, Polyglot::LanguageDirection direction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsOppositeDirection", alignment, direction));
}
// Autogenerated method: Polyglot.LocalizedTextMeshPro.IsAlignmentRight
bool Polyglot::LocalizedTextMeshPro::IsAlignmentRight(TMPro::TextAlignmentOptions alignment) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsAlignmentRight", alignment));
}
// Autogenerated method: Polyglot.LocalizedTextMeshPro.IsAlignmentLeft
bool Polyglot::LocalizedTextMeshPro::IsAlignmentLeft(TMPro::TextAlignmentOptions alignment) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsAlignmentLeft", alignment));
}
// Autogenerated method: Polyglot.LocalizedTextMeshPro..ctor
Polyglot::LocalizedTextMeshPro* Polyglot::LocalizedTextMeshPro::New_ctor() {
  return (LocalizedTextMeshPro*)THROW_UNLESS(il2cpp_utils::New("Polyglot", "LocalizedTextMeshPro"));
}