// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
#include "UnityEngine/TestTools/BeforeAfterTestCommandBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: SetUpTearDownCommand
  class SetUpTearDownCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::SetUpTearDownCommand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::SetUpTearDownCommand*, "UnityEngine.TestTools", "SetUpTearDownCommand");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestTools.SetUpTearDownCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class SetUpTearDownCommand : public ::UnityEngine::TestTools::BeforeAfterTestCommandBase_1<::System::Reflection::MethodInfo*> {
    public:
    // Nested type: ::UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__3
    class $InvokeBefore$d__3;
    // Nested type: ::UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__4
    class $InvokeAfter$d__4;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> m_BeforeActionsCache
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* _get_m_BeforeActionsCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> m_BeforeActionsCache
    static void _set_m_BeforeActionsCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> m_AfterActionsCache
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* _get_m_AfterActionsCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> m_AfterActionsCache
    static void _set_m_AfterActionsCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* value);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x19BD7B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetUpTearDownCommand* New_ctor(::NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::SetUpTearDownCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetUpTearDownCommand*, creationType>(innerCommand)));
    }
    // static private System.Void .cctor()
    // Offset: 0x19CA40C
    static void _cctor();
    // protected System.Collections.IEnumerator InvokeBefore(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x19CA2A4
    ::System::Collections::IEnumerator* InvokeBefore(::System::Reflection::MethodInfo* action, ::NUnit::Framework::Internal::Test* test, ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x19CA354
    ::System::Collections::IEnumerator* InvokeAfter(::System::Reflection::MethodInfo* action, ::NUnit::Framework::Internal::Test* test, ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x19CA404
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase_1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    ::UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.SetUpTearDownCommand
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::InvokeBefore
// Il2CppName: InvokeBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::TestTools::SetUpTearDownCommand::*)(::System::Reflection::MethodInfo*, ::NUnit::Framework::Internal::Test*, ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::SetUpTearDownCommand::InvokeBefore)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "InvokeBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::InvokeAfter
// Il2CppName: InvokeAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::TestTools::SetUpTearDownCommand::*)(::System::Reflection::MethodInfo*, ::NUnit::Framework::Internal::Test*, ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::SetUpTearDownCommand::InvokeAfter)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "InvokeAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TestTools::BeforeAfterTestCommandState* (UnityEngine::TestTools::SetUpTearDownCommand::*)(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::SetUpTearDownCommand::GetState)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
