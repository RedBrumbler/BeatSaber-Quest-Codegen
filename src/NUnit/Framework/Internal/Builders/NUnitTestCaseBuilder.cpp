// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
#include "NUnit/Framework/Internal/Builders/NUnitTestCaseBuilder.hpp"
// Including type: NUnit.Framework.Internal.Randomizer
#include "NUnit/Framework/Internal/Randomizer.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: NUnit.Framework.Interfaces.IMethodInfo
#include "NUnit/Framework/Interfaces/IMethodInfo.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
// Including type: NUnit.Framework.Internal.TestCaseParameters
#include "NUnit/Framework/Internal/TestCaseParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder.BuildTestMethod
NUnit::Framework::Internal::TestMethod* NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder::BuildTestMethod(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite, NUnit::Framework::Internal::TestCaseParameters* parms) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestMethod*>(this, "BuildTestMethod", method, parentSuite, parms));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder.CheckTestMethodSignature
bool NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder::CheckTestMethodSignature(NUnit::Framework::Internal::TestMethod* testMethod, NUnit::Framework::Internal::TestCaseParameters* parms) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NUnit.Framework.Internal.Builders", "NUnitTestCaseBuilder", "CheckTestMethodSignature", testMethod, parms));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder.MarkAsNotRunnable
bool NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder::MarkAsNotRunnable(NUnit::Framework::Internal::TestMethod* testMethod, ::Il2CppString* reason) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NUnit.Framework.Internal.Builders", "NUnitTestCaseBuilder", "MarkAsNotRunnable", testMethod, reason));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder..ctor
NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder::New_ctor() {
  return (NUnitTestCaseBuilder*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Builders", "NUnitTestCaseBuilder"));
}