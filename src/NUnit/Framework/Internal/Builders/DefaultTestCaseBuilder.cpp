// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder
#include "NUnit/Framework/Internal/Builders/DefaultTestCaseBuilder.hpp"
// Including type: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
#include "NUnit/Framework/Internal/Builders/NUnitTestCaseBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.IMethodInfo
#include "NUnit/Framework/Interfaces/IMethodInfo.hpp"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder.CanBuildFrom
bool NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CanBuildFrom", method));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder.BuildParameterizedMethodSuite
NUnit::Framework::Internal::Test* NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::BuildParameterizedMethodSuite(NUnit::Framework::Interfaces::IMethodInfo* method, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* tests) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::Test*>(this, "BuildParameterizedMethodSuite", method, tests));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder.BuildSingleTestMethod
NUnit::Framework::Internal::Test* NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::BuildSingleTestMethod(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::Test*>(this, "BuildSingleTestMethod", method, suite));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder.CanBuildFrom
bool NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CanBuildFrom", method, parentSuite));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder.BuildFrom
NUnit::Framework::Internal::Test* NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::Test*>(this, "BuildFrom", method, parentSuite));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder..ctor
NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder* NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::New_ctor() {
  return (DefaultTestCaseBuilder*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Builders", "DefaultTestCaseBuilder"));
}
