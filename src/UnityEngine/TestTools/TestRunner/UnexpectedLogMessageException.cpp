// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
#include "UnityEngine/TestTools/TestRunner/UnexpectedLogMessageException.hpp"
// Including type: UnityEngine.TestTools.Logging.LogMatch
#include "UnityEngine/TestTools/Logging/LogMatch.hpp"
// Including type: NUnit.Framework.Interfaces.ResultState
#include "NUnit/Framework/Interfaces/ResultState.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException..ctor
UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException* UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::New_ctor(UnityEngine::TestTools::Logging::LogMatch* log) {
  return (UnexpectedLogMessageException*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.TestRunner", "UnexpectedLogMessageException", log));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException.BuildMessage
::Il2CppString* UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::BuildMessage(UnityEngine::TestTools::Logging::LogMatch* log) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("UnityEngine.TestTools.TestRunner", "UnexpectedLogMessageException", "BuildMessage", log));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException.get_ResultState
NUnit::Framework::Interfaces::ResultState* UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::get_ResultState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::ResultState*>(this, "get_ResultState"));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException.get_StackTrace
::Il2CppString* UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException::get_StackTrace() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_StackTrace"));
}