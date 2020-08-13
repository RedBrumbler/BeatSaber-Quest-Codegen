// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskFactory
#include "System/Threading/Tasks/TaskFactory.hpp"
// Including type: System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
#include "System/Threading/Tasks/TaskFactory_CompleteOnInvokePromise.hpp"
// Including type: System.Threading.Tasks.TaskScheduler
#include "System/Threading/Tasks/TaskScheduler.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Tasks.TaskFactory..ctor
System::Threading::Tasks::TaskFactory* System::Threading::Tasks::TaskFactory::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
  return (TaskFactory*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskFactory", cancellationToken, creationOptions, continuationOptions, scheduler));
}
// Autogenerated method: System.Threading.Tasks.TaskFactory.CheckCreationOptions
void System::Threading::Tasks::TaskFactory::CheckCreationOptions(System::Threading::Tasks::TaskCreationOptions creationOptions) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "TaskFactory", "CheckCreationOptions", creationOptions));
}
// Autogenerated method: System.Threading.Tasks.TaskFactory.StartNew
System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::StartNew(System::Action* action, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(this, "StartNew", action, cancellationToken, creationOptions, scheduler));
}
// Autogenerated method: System.Threading.Tasks.TaskFactory.CommonCWAnyLogic
System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>* System::Threading::Tasks::TaskFactory::CommonCWAnyLogic(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>*>("System.Threading.Tasks", "TaskFactory", "CommonCWAnyLogic", tasks));
}
// Autogenerated method: System.Threading.Tasks.TaskFactory.CheckMultiTaskContinuationOptions
void System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions(System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "TaskFactory", "CheckMultiTaskContinuationOptions", continuationOptions));
}
// Autogenerated method: System.Threading.Tasks.TaskFactory..ctor
System::Threading::Tasks::TaskFactory* System::Threading::Tasks::TaskFactory::New_ctor() {
  return (TaskFactory*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskFactory"));
}
