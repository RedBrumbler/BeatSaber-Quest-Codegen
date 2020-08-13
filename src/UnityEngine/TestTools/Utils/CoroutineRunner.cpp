// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner
#include "UnityEngine/TestTools/Utils/CoroutineRunner.hpp"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner/<HandleEnumerableTest>d__9
#include "UnityEngine/TestTools/Utils/CoroutineRunner_-HandleEnumerableTest-d__9.hpp"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner/<ExMethod>d__11
#include "UnityEngine/TestTools/Utils/CoroutineRunner_-ExMethod-d__11.hpp"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner/<StartTimer>d__12
#include "UnityEngine/TestTools/Utils/CoroutineRunner_-StartTimer-d__12.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityTestExecutionContext.hpp"
// Including type: UnityEngine.Coroutine
#include "UnityEngine/Coroutine.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner..ctor
UnityEngine::TestTools::Utils::CoroutineRunner* UnityEngine::TestTools::Utils::CoroutineRunner::New_ctor(UnityEngine::MonoBehaviour* playmodeTestsController, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
  return (CoroutineRunner*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.Utils", "CoroutineRunner", playmodeTestsController, context));
}
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner.HandleEnumerableTest
System::Collections::IEnumerator* UnityEngine::TestTools::Utils::CoroutineRunner::HandleEnumerableTest(System::Collections::IEnumerator* testEnumerator) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "HandleEnumerableTest", testEnumerator));
}
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner.StopAllRunningCoroutines
void UnityEngine::TestTools::Utils::CoroutineRunner::StopAllRunningCoroutines() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StopAllRunningCoroutines"));
}
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner.ExMethod
System::Collections::IEnumerator* UnityEngine::TestTools::Utils::CoroutineRunner::ExMethod(System::Collections::IEnumerator* e, int timeout) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "ExMethod", e, timeout));
}
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner.StartTimer
System::Collections::IEnumerator* UnityEngine::TestTools::Utils::CoroutineRunner::StartTimer(System::Collections::IEnumerator* coroutineToBeKilled, int timeout, System::Action* onTimeout) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "StartTimer", coroutineToBeKilled, timeout, onTimeout));
}
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner.HasFailedWithTimeout
bool UnityEngine::TestTools::Utils::CoroutineRunner::HasFailedWithTimeout() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasFailedWithTimeout"));
}
// Autogenerated method: UnityEngine.TestTools.Utils.CoroutineRunner.<ExMethod>b__11_0
void UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$b__11_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<ExMethod>b__11_0"));
}
