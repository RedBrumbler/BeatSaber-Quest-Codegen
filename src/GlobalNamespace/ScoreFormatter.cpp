// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScoreFormatter
#include "GlobalNamespace/ScoreFormatter.hpp"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
System::Globalization::NumberFormatInfo* GlobalNamespace::ScoreFormatter::_get__numberFormatInfo() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::NumberFormatInfo*>("", "ScoreFormatter", "_numberFormatInfo"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
void GlobalNamespace::ScoreFormatter::_set__numberFormatInfo(System::Globalization::NumberFormatInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreFormatter", "_numberFormatInfo", value));
}
// Autogenerated method: ScoreFormatter..cctor
void GlobalNamespace::ScoreFormatter::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "ScoreFormatter", ".cctor"));
}
// Autogenerated method: ScoreFormatter.Format
::Il2CppString* GlobalNamespace::ScoreFormatter::Format(int score) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("", "ScoreFormatter", "Format", score));
}
// Autogenerated method: ScoreFormatter..ctor
GlobalNamespace::ScoreFormatter* GlobalNamespace::ScoreFormatter::New_ctor() {
  return (ScoreFormatter*)THROW_UNLESS(il2cpp_utils::New("", "ScoreFormatter"));
}