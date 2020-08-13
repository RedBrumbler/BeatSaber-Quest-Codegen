// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
// Including type: NUnit.Framework.Interfaces.TNode
#include "NUnit/Framework/Interfaces/TNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.TestSuite.Sort
void NUnit::Framework::Internal::TestSuite::Sort() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Sort"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.Add
void NUnit::Framework::Internal::TestSuite::Add(NUnit::Framework::Internal::Test* test) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", test));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.get_Arguments
::Array<::CsObject*>* NUnit::Framework::Internal::TestSuite::get_Arguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "get_Arguments"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.set_Arguments
void NUnit::Framework::Internal::TestSuite::set_Arguments(::Array<::CsObject*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Arguments", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.get_MaintainTestOrder
bool NUnit::Framework::Internal::TestSuite::get_MaintainTestOrder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_MaintainTestOrder"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.set_MaintainTestOrder
void NUnit::Framework::Internal::TestSuite::set_MaintainTestOrder(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_MaintainTestOrder", value));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.CheckSetUpTearDownMethods
void NUnit::Framework::Internal::TestSuite::CheckSetUpTearDownMethods(System::Type* attrType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckSetUpTearDownMethods", attrType));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite..ctor
NUnit::Framework::Internal::TestSuite* NUnit::Framework::Internal::TestSuite::New_ctor(::CsString* name) {
  return (TestSuite*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "TestSuite", name));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite..ctor
NUnit::Framework::Internal::TestSuite* NUnit::Framework::Internal::TestSuite::New_ctor(::CsString* parentSuiteName, ::CsString* name) {
  return (TestSuite*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "TestSuite", parentSuiteName, name));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite..ctor
NUnit::Framework::Internal::TestSuite* NUnit::Framework::Internal::TestSuite::New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType) {
  return (TestSuite*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "TestSuite", fixtureType));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.get_Tests
System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* NUnit::Framework::Internal::TestSuite::get_Tests() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>*>(this, "get_Tests"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.get_TestCaseCount
int NUnit::Framework::Internal::TestSuite::get_TestCaseCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_TestCaseCount"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.MakeTestResult
NUnit::Framework::Internal::TestResult* NUnit::Framework::Internal::TestSuite::MakeTestResult() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "MakeTestResult"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.get_HasChildren
bool NUnit::Framework::Internal::TestSuite::get_HasChildren() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasChildren"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.get_XmlElementName
::CsString* NUnit::Framework::Internal::TestSuite::get_XmlElementName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_XmlElementName"));
}
// Autogenerated method: NUnit.Framework.Internal.TestSuite.AddToXml
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Internal::TestSuite::AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "AddToXml", parentNode, recursive));
}
