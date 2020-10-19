// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TaskExtensions
  class TaskExtensions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1<T>
    template<typename T>
    class $$c__DisplayClass0_0_1;
    // Nested type: GlobalNamespace::TaskExtensions::$WaitForTask$d__1_1<T>
    template<typename T>
    struct $WaitForTask$d__1_1;
    // static public System.Threading.Tasks.Task`1<T> WithCancellation(System.Threading.Tasks.Task`1<T> task, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Threading::Tasks::Task_1<T>* WithCancellation(System::Threading::Tasks::Task_1<T>* task, System::Threading::CancellationToken cancellationToken) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Threading::Tasks::Task_1<T>*>("", "TaskExtensions", "WithCancellation", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, task, cancellationToken)));
    }
    // static private System.Void WaitForTask(System.Threading.Tasks.Task`1<T> task, System.Threading.Tasks.TaskCompletionSource`1<T> tcs)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void WaitForTask(System::Threading::Tasks::Task_1<T>* task, System::Threading::Tasks::TaskCompletionSource_1<T>* tcs) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("", "TaskExtensions", "WaitForTask", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, task, tcs));
    }
  }; // TaskExtensions
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TaskExtensions*, "", "TaskExtensions");
#pragma pack(pop)