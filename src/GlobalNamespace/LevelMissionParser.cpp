// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelMissionParser
#include "GlobalNamespace/LevelMissionParser.hpp"
// Including type: LevelMissionParser/ParserFunction
#include "GlobalNamespace/LevelMissionParser_ParserFunction.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LevelMissionParser.AddFunction
void GlobalNamespace::LevelMissionParser::AddFunction(::CsString* name, GlobalNamespace::LevelMissionParser::ParserFunction* function) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddFunction", name, function));
}
// Autogenerated method: LevelMissionParser.Parse
bool GlobalNamespace::LevelMissionParser::Parse(::CsString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Parse", s));
}
// Autogenerated method: LevelMissionParser.Parse
bool GlobalNamespace::LevelMissionParser::Parse(::CsString* s, int start, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Parse", s, start, length));
}
// Autogenerated method: LevelMissionParser.ParseFunction
bool GlobalNamespace::LevelMissionParser::ParseFunction(::CsString* s, int start, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ParseFunction", s, start, length));
}
// Autogenerated method: LevelMissionParser..ctor
GlobalNamespace::LevelMissionParser* GlobalNamespace::LevelMissionParser::New_ctor() {
  return (LevelMissionParser*)THROW_UNLESS(il2cpp_utils::New("", "LevelMissionParser"));
}
