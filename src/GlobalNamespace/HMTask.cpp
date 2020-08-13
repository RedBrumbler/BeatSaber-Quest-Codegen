// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMTask
#include "GlobalNamespace/HMTask.hpp"
// Including type: HMTask/<RunCoroutine>d__8
#include "GlobalNamespace/HMTask_-RunCoroutine-d__8.hpp"
// Including type: System.Threading.Thread
#include "System/Threading/Thread.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMTask..ctor
GlobalNamespace::HMTask* GlobalNamespace::HMTask::New_ctor(System::Action* job, System::Action* finishCallback) {
  return (HMTask*)THROW_UNLESS(il2cpp_utils::New("", "HMTask", job, finishCallback));
}
// Autogenerated method: HMTask.Run
void GlobalNamespace::HMTask::Run() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Run"));
}
// Autogenerated method: HMTask.RunCoroutine
System::Collections::IEnumerator* GlobalNamespace::HMTask::RunCoroutine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "RunCoroutine"));
}
// Autogenerated method: HMTask.RunJob
void GlobalNamespace::HMTask::RunJob() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunJob"));
}
// Autogenerated method: HMTask.Cancel
void GlobalNamespace::HMTask::Cancel() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cancel"));
}
// Autogenerated method: HMTask.<RunCoroutine>b__8_0
bool GlobalNamespace::HMTask::$RunCoroutine$b__8_0() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<RunCoroutine>b__8_0")));
}
// Autogenerated method: HMTask.<RunJob>b__9_0
void GlobalNamespace::HMTask::$RunJob$b__9_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<RunJob>b__9_0"));
}
