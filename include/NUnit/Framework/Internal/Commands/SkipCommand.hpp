// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: SkipCommand
  class SkipCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Commands::SkipCommand);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Commands::SkipCommand*, "NUnit.Framework.Internal.Commands", "SkipCommand");
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.SkipCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class SkipCommand : public ::NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // private System.String GetSkipReason()
    // Offset: 0x1D6479C
    ::StringW GetSkipReason();
    // private System.String GetProviderStackTrace()
    // Offset: 0x1D6488C
    ::StringW GetProviderStackTrace();
    // public System.Void .ctor(NUnit.Framework.Internal.Test test)
    // Offset: 0x1D64590
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: System.Void TestCommand::.ctor(NUnit.Framework.Internal.Test test)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkipCommand* New_ctor(::NUnit::Framework::Internal::Test* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Commands::SkipCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkipCommand*, creationType>(test)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1D645BC
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    ::NUnit::Framework::Internal::TestResult* Execute(::NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.SkipCommand
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SkipCommand::GetSkipReason
// Il2CppName: GetSkipReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::Commands::SkipCommand::*)()>(&NUnit::Framework::Internal::Commands::SkipCommand::GetSkipReason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SkipCommand*), "GetSkipReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SkipCommand::GetProviderStackTrace
// Il2CppName: GetProviderStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::Commands::SkipCommand::*)()>(&NUnit::Framework::Internal::Commands::SkipCommand::GetProviderStackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SkipCommand*), "GetProviderStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SkipCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SkipCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::Commands::SkipCommand::*)(::NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::SkipCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SkipCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
