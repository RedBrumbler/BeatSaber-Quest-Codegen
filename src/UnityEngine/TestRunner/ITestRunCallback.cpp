// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.ITestRunCallback
#include "UnityEngine/TestRunner/ITestRunCallback.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: NUnit.Framework.Interfaces.ITestResult
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestRunner.ITestRunCallback.RunStarted
void UnityEngine::TestRunner::ITestRunCallback::RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunStarted", testsToRun));
}
// Autogenerated method: UnityEngine.TestRunner.ITestRunCallback.RunFinished
void UnityEngine::TestRunner::ITestRunCallback::RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunFinished", testResults));
}
// Autogenerated method: UnityEngine.TestRunner.ITestRunCallback.TestStarted
void UnityEngine::TestRunner::ITestRunCallback::TestStarted(NUnit::Framework::Interfaces::ITest* test) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestStarted", test));
}
// Autogenerated method: UnityEngine.TestRunner.ITestRunCallback.TestFinished
void UnityEngine::TestRunner::ITestRunCallback::TestFinished(NUnit::Framework::Interfaces::ITestResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TestFinished", result));
}