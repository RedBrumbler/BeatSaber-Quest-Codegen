// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.EnumerableRetryTestCommand
#include "UnityEngine/TestTools/EnumerableRetryTestCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*, "UnityEngine.TestTools", "EnumerableRetryTestCommand/<ExecuteEnumerable>d__3");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableRetryTestCommand/UnityEngine.TestTools.<ExecuteEnumerable>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnumerableRetryTestCommand::$ExecuteEnumerable$d__3 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: context
    char __padding2[0x4] = {};
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x28
    ::NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Size: 0x8
    // Offset: 0x30
    ::NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public UnityEngine.TestTools.EnumerableRetryTestCommand <>4__this
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::TestTools::EnumerableRetryTestCommand* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::EnumerableRetryTestCommand*) == 0x8);
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <unityContext>5__2
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* $unityContext$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // private System.Int32 <count>5__3
    // Size: 0x4
    // Offset: 0x48
    int $count$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <firstCycleAfterResume>5__4
    // Size: 0x1
    // Offset: 0x4C
    bool $firstCycleAfterResume$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $firstCycleAfterResume$5__4 and: $$7__wrap4
    char __padding8[0x3] = {};
    // private System.Collections.IEnumerator <>7__wrap4
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::IEnumerator* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private NUnit.Framework.Internal.ITestExecutionContext context
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::ITestExecutionContext*& dyn_context();
    // Get instance field reference: public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::ITestExecutionContext*& dyn_$$3__context();
    // Get instance field reference: public UnityEngine.TestTools.EnumerableRetryTestCommand <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::EnumerableRetryTestCommand*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <unityContext>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*& dyn_$unityContext$5__2();
    // Get instance field reference: private System.Int32 <count>5__3
    [[deprecated("Use field access instead!")]] int& dyn_$count$5__3();
    // Get instance field reference: private System.Boolean <firstCycleAfterResume>5__4
    [[deprecated("Use field access instead!")]] bool& dyn_$firstCycleAfterResume$5__4();
    // Get instance field reference: private System.Collections.IEnumerator <>7__wrap4
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_$$7__wrap4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x19B94F0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x19B9558
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x19B8DB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableRetryTestCommand::$ExecuteEnumerable$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x19B8DF0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x19B8ED8
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x19B8E0C
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x19B94F8
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x19B9560
    ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x19B9614
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestTools.EnumerableRetryTestCommand/UnityEngine.TestTools.<ExecuteEnumerable>d__3
  #pragma pack(pop)
  static check_size<sizeof(EnumerableRetryTestCommand::$ExecuteEnumerable$d__3), 80 + sizeof(::System::Collections::IEnumerator*)> __UnityEngine_TestTools_EnumerableRetryTestCommand_$ExecuteEnumerable$d__3SizeCheck;
  static_assert(sizeof(EnumerableRetryTestCommand::$ExecuteEnumerable$d__3) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
