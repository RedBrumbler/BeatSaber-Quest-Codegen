// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.TestEnumeratorWrapper
#include "UnityEngine/TestTools/TestRunner/TestEnumeratorWrapper.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.TestRunner.TestEnumeratorWrapper..ctor
UnityEngine::TestTools::TestRunner::TestEnumeratorWrapper* UnityEngine::TestTools::TestRunner::TestEnumeratorWrapper::New_ctor(NUnit::Framework::Internal::TestMethod* testMethod) {
  return (TestEnumeratorWrapper*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.TestRunner", "TestEnumeratorWrapper", testMethod));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.TestEnumeratorWrapper.GetEnumerator
System::Collections::IEnumerator* UnityEngine::TestTools::TestRunner::TestEnumeratorWrapper::GetEnumerator(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator", context));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.TestEnumeratorWrapper.HandleEnumerableTest
System::Collections::IEnumerator* UnityEngine::TestTools::TestRunner::TestEnumeratorWrapper::HandleEnumerableTest(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "HandleEnumerableTest", context));
}
