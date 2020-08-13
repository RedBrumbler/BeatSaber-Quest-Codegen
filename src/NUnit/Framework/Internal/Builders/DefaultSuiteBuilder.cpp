// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
#include "NUnit/Framework/Internal/Builders/DefaultSuiteBuilder.hpp"
// Including type: NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder
#include "NUnit/Framework/Internal/Builders/NUnitTestFixtureBuilder.hpp"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: NUnit.Framework.Interfaces.IFixtureBuilder
#include "NUnit/Framework/Interfaces/IFixtureBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder.BuildMultipleFixtures
NUnit::Framework::Internal::TestSuite* NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::BuildMultipleFixtures(NUnit::Framework::Interfaces::ITypeInfo* typeInfo, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* fixtures) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestSuite*>(this, "BuildMultipleFixtures", typeInfo, fixtures));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder.GetFixtureBuilderAttributes
::Array<NUnit::Framework::Interfaces::IFixtureBuilder*>* NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::GetFixtureBuilderAttributes(NUnit::Framework::Interfaces::ITypeInfo* typeInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<NUnit::Framework::Interfaces::IFixtureBuilder*>*>(this, "GetFixtureBuilderAttributes", typeInfo));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder.HasArguments
bool NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::HasArguments(NUnit::Framework::Interfaces::IFixtureBuilder* attr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasArguments", attr));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder.CanBuildFrom
bool NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::CanBuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CanBuildFrom", typeInfo));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder.BuildFrom
NUnit::Framework::Internal::TestSuite* NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestSuite*>(this, "BuildFrom", typeInfo));
}
// Autogenerated method: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder..ctor
NUnit::Framework::Internal::Builders::DefaultSuiteBuilder* NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::New_ctor() {
  return (DefaultSuiteBuilder*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Builders", "DefaultSuiteBuilder"));
}
