// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskSchedulerException
#include "System/Threading/Tasks/TaskSchedulerException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Tasks.TaskSchedulerException..ctor
System::Threading::Tasks::TaskSchedulerException* System::Threading::Tasks::TaskSchedulerException::New_ctor(System::Exception* innerException) {
  return (TaskSchedulerException*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskSchedulerException", innerException));
}
// Autogenerated method: System.Threading.Tasks.TaskSchedulerException..ctor
System::Threading::Tasks::TaskSchedulerException* System::Threading::Tasks::TaskSchedulerException::New_ctor() {
  return (TaskSchedulerException*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskSchedulerException"));
}
// Autogenerated method: System.Threading.Tasks.TaskSchedulerException..ctor
System::Threading::Tasks::TaskSchedulerException* System::Threading::Tasks::TaskSchedulerException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (TaskSchedulerException*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "TaskSchedulerException", info, context));
}