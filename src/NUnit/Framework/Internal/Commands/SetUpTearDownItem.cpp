// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.SetUpTearDownItem
#include "NUnit/Framework/Internal/Commands/SetUpTearDownItem.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Commands.SetUpTearDownItem..ctor
NUnit::Framework::Internal::Commands::SetUpTearDownItem* NUnit::Framework::Internal::Commands::SetUpTearDownItem::New_ctor(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods) {
  return (SetUpTearDownItem*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Commands", "SetUpTearDownItem", setUpMethods, tearDownMethods));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.SetUpTearDownItem.get_HasMethods
bool NUnit::Framework::Internal::Commands::SetUpTearDownItem::get_HasMethods() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasMethods"));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.SetUpTearDownItem.RunSetUp
void NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunSetUp(NUnit::Framework::Internal::ITestExecutionContext* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunSetUp", context));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.SetUpTearDownItem.RunTearDown
void NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunTearDown(NUnit::Framework::Internal::ITestExecutionContext* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunTearDown", context));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.SetUpTearDownItem.RunSetUpOrTearDownMethod
void NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunSetUpOrTearDownMethod(NUnit::Framework::Internal::ITestExecutionContext* context, System::Reflection::MethodInfo* method) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunSetUpOrTearDownMethod", context, method));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.SetUpTearDownItem.RunNonAsyncMethod
::Il2CppObject* NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunNonAsyncMethod(System::Reflection::MethodInfo* method, NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "RunNonAsyncMethod", method, context));
}