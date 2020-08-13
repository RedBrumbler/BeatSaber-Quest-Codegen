// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Logging.LogMatch
#include "UnityEngine/TestTools/Logging/LogMatch.hpp"
// Including type: System.Text.RegularExpressions.Regex
#include "System/Text/RegularExpressions/Regex.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.TestTools.Logging.LogEvent
#include "UnityEngine/TestTools/Logging/LogEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.Logging.LogMatch.get_Message
::CsString* UnityEngine::TestTools::Logging::LogMatch::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Message"));
}
// Autogenerated method: UnityEngine.TestTools.Logging.LogMatch.get_MessageRegex
System::Text::RegularExpressions::Regex* UnityEngine::TestTools::Logging::LogMatch::get_MessageRegex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::Regex*>(this, "get_MessageRegex"));
}
// Autogenerated method: UnityEngine.TestTools.Logging.LogMatch.get_LogType
System::Nullable_1<UnityEngine::LogType> UnityEngine::TestTools::Logging::LogMatch::get_LogType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<UnityEngine::LogType>>(this, "get_LogType"));
}
// Autogenerated method: UnityEngine.TestTools.Logging.LogMatch.Matches
bool UnityEngine::TestTools::Logging::LogMatch::Matches(UnityEngine::TestTools::Logging::LogEvent* log) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Matches", log));
}
// Autogenerated method: UnityEngine.TestTools.Logging.LogMatch.ToString
::CsString* UnityEngine::TestTools::Logging::LogMatch::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
// Autogenerated method: UnityEngine.TestTools.Logging.LogMatch..ctor
UnityEngine::TestTools::Logging::LogMatch* UnityEngine::TestTools::Logging::LogMatch::New_ctor() {
  return (LogMatch*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.Logging", "LogMatch"));
}
