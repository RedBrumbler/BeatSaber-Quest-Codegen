// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AsyncHelper
  class AsyncHelper : public ::CsObject {
    public:
    // Nested type: GlobalNamespace::AsyncHelper::$$c__DisplayClass0_0_1<T>
    template<typename T>
    class $$c__DisplayClass0_0_1;
    // Nested type: GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // static public T RunSync(System.Func`1<System.Threading.Tasks.Task`1<T>> asyncTask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T RunSync(System::Func_1<System::Threading::Tasks::Task_1<T>*>* asyncTask) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("", "AsyncHelper", "RunSync", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, asyncTask)));
    }
    // static public System.Void RunSync(System.Func`1<System.Threading.Tasks.Task> asyncTask)
    // Offset: 0xCAA4D4
    static void RunSync(System::Func_1<System::Threading::Tasks::Task*>* asyncTask);
  }; // AsyncHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncHelper*, "", "AsyncHelper");
#pragma pack(pop)
