// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskFactory
#include "System/Threading/Tasks/TaskFactory.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: Task because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
  class TaskFactory::CompleteOnInvokePromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>/*, public System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    // private System.Collections.Generic.IList`1<System.Threading.Tasks.Task> _tasks
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>*) == 0x8);
    // private System.Int32 m_firstTaskAlreadyCompleted
    // Size: 0x4
    // Offset: 0x60
    int m_firstTaskAlreadyCompleted;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CompleteOnInvokePromise
    CompleteOnInvokePromise(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks_ = {}, int m_firstTaskAlreadyCompleted_ = {}) noexcept : tasks{tasks_}, m_firstTaskAlreadyCompleted{m_firstTaskAlreadyCompleted_} {}
    // Creating interface conversion operator: operator System::Threading::Tasks::ITaskCompletionAction
    operator System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<System.Threading.Tasks.Task> tasks)
    // Offset: 0x188FD24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory::CompleteOnInvokePromise* New_ctor(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory::CompleteOnInvokePromise*, creationType>(tasks)));
    }
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0x188FE3C
    void Invoke(System::Threading::Tasks::Task* completingTask);
  }; // System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
  // WARNING Not writing size check since size may be invalid!
  // Writing MetadataGetter for method: TaskFactory::CompleteOnInvokePromise::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TaskFactory::CompleteOnInvokePromise::*)(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>*)>(&TaskFactory::CompleteOnInvokePromise::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TaskFactory::CompleteOnInvokePromise*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TaskFactory::CompleteOnInvokePromise::*)(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>*)>(&TaskFactory::CompleteOnInvokePromise::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TaskFactory::CompleteOnInvokePromise*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>*>()});
    }
  };
  // Writing MetadataGetter for method: TaskFactory::CompleteOnInvokePromise::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TaskFactory::CompleteOnInvokePromise::*)(System::Threading::Tasks::Task*)>(&TaskFactory::CompleteOnInvokePromise::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TaskFactory::CompleteOnInvokePromise*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::Tasks::Task*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise*, "System.Threading.Tasks", "TaskFactory/CompleteOnInvokePromise");
