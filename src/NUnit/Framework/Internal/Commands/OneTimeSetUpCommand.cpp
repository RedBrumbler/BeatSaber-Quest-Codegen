// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.OneTimeSetUpCommand
#include "NUnit/Framework/Internal/Commands/OneTimeSetUpCommand.hpp"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: NUnit.Framework.Internal.Commands.SetUpTearDownItem
#include "NUnit/Framework/Internal/Commands/SetUpTearDownItem.hpp"
// Including type: NUnit.Framework.Internal.Commands.TestActionItem
#include "NUnit/Framework/Internal/Commands/TestActionItem.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Commands.OneTimeSetUpCommand..ctor
NUnit::Framework::Internal::Commands::OneTimeSetUpCommand* NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::New_ctor(NUnit::Framework::Internal::TestSuite* suite, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDown, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions) {
  return (OneTimeSetUpCommand*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Commands", "OneTimeSetUpCommand", suite, setUpTearDown, actions));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.OneTimeSetUpCommand.Execute
NUnit::Framework::Internal::TestResult* NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::Execute(NUnit::Framework::Internal::ITestExecutionContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::TestResult*>(this, "Execute", context));
}
