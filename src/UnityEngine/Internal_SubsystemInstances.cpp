// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Internal_SubsystemInstances
#include "UnityEngine/Internal_SubsystemInstances.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.ISubsystem
#include "UnityEngine/ISubsystem.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.IntegratedSubsystem
#include "UnityEngine/IntegratedSubsystem.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_IntegratedSubsystemInstances
System::Collections::Generic::List_1<UnityEngine::ISubsystem*>* UnityEngine::Internal_SubsystemInstances::_get_s_IntegratedSubsystemInstances() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::ISubsystem*>*>("UnityEngine", "Internal_SubsystemInstances", "s_IntegratedSubsystemInstances"));
}
// Autogenerated static field setter
// Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_IntegratedSubsystemInstances
void UnityEngine::Internal_SubsystemInstances::_set_s_IntegratedSubsystemInstances(System::Collections::Generic::List_1<UnityEngine::ISubsystem*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Internal_SubsystemInstances", "s_IntegratedSubsystemInstances", value));
}
// Autogenerated static field getter
// Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_StandaloneSubsystemInstances
System::Collections::Generic::List_1<UnityEngine::ISubsystem*>* UnityEngine::Internal_SubsystemInstances::_get_s_StandaloneSubsystemInstances() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::ISubsystem*>*>("UnityEngine", "Internal_SubsystemInstances", "s_StandaloneSubsystemInstances"));
}
// Autogenerated static field setter
// Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_StandaloneSubsystemInstances
void UnityEngine::Internal_SubsystemInstances::_set_s_StandaloneSubsystemInstances(System::Collections::Generic::List_1<UnityEngine::ISubsystem*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Internal_SubsystemInstances", "s_StandaloneSubsystemInstances", value));
}
// Autogenerated method: UnityEngine.Internal_SubsystemInstances.Internal_InitializeManagedInstance
void UnityEngine::Internal_SubsystemInstances::Internal_InitializeManagedInstance(System::IntPtr ptr, UnityEngine::IntegratedSubsystem* inst) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Internal_SubsystemInstances", "Internal_InitializeManagedInstance", ptr, inst));
}
// Autogenerated method: UnityEngine.Internal_SubsystemInstances.Internal_ClearManagedInstances
void UnityEngine::Internal_SubsystemInstances::Internal_ClearManagedInstances() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Internal_SubsystemInstances", "Internal_ClearManagedInstances"));
}
// Autogenerated method: UnityEngine.Internal_SubsystemInstances.Internal_RemoveInstanceByPtr
void UnityEngine::Internal_SubsystemInstances::Internal_RemoveInstanceByPtr(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Internal_SubsystemInstances", "Internal_RemoveInstanceByPtr", ptr));
}
// Autogenerated method: UnityEngine.Internal_SubsystemInstances.Internal_GetInstanceByPtr
UnityEngine::IntegratedSubsystem* UnityEngine::Internal_SubsystemInstances::Internal_GetInstanceByPtr(System::IntPtr ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::IntegratedSubsystem*>("UnityEngine", "Internal_SubsystemInstances", "Internal_GetInstanceByPtr", ptr));
}
// Autogenerated method: UnityEngine.Internal_SubsystemInstances..cctor
void UnityEngine::Internal_SubsystemInstances::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Internal_SubsystemInstances", ".cctor"));
}