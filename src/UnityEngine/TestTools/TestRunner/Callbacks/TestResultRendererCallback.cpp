// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback
#include "UnityEngine/TestTools/TestRunner/Callbacks/TestResultRendererCallback.hpp"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
#include "UnityEngine/TestTools/TestRunner/Callbacks/TestResultRenderer.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: NUnit.Framework.Interfaces.ITestResult
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback.RunStarted
void UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunStarted", testsToRun));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback.RunFinished
void UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunFinished", testResults));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback.OnGUI
void UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::OnGUI() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnGUI"));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback.TestStarted
void UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::TestStarted(NUnit::Framework::Interfaces::ITest* test) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestStarted", test));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback.TestFinished
void UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::TestFinished(NUnit::Framework::Interfaces::ITestResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestFinished", result));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback..ctor
UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback* UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::New_ctor() {
  return (TestResultRendererCallback*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRendererCallback"));
}
