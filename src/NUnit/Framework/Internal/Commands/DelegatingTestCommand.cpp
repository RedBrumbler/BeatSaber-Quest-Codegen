// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Commands.DelegatingTestCommand.GetInnerCommand
NUnit::Framework::Internal::Commands::TestCommand* NUnit::Framework::Internal::Commands::DelegatingTestCommand::GetInnerCommand() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Internal::Commands::TestCommand*>(this, "GetInnerCommand"));
}
// Autogenerated method: NUnit.Framework.Internal.Commands.DelegatingTestCommand..ctor
NUnit::Framework::Internal::Commands::DelegatingTestCommand* NUnit::Framework::Internal::Commands::DelegatingTestCommand::New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
  return (DelegatingTestCommand*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal.Commands", "DelegatingTestCommand", innerCommand));
}