// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystem
  class ISubsystem;
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Internal_SubsystemInstances
  class Internal_SubsystemInstances;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Internal_SubsystemInstances);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal_SubsystemInstances*, "UnityEngine", "Internal_SubsystemInstances");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Internal_SubsystemInstances
  // [TokenAttribute] Offset: FFFFFFFF
  class Internal_SubsystemInstances : public ::Il2CppObject {
    public:
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_IntegratedSubsystemInstances
    static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>* _get_s_IntegratedSubsystemInstances();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_IntegratedSubsystemInstances
    static void _set_s_IntegratedSubsystemInstances(::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>* value);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_StandaloneSubsystemInstances
    static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>* _get_s_StandaloneSubsystemInstances();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystem> s_StandaloneSubsystemInstances
    static void _set_s_StandaloneSubsystemInstances(::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2BAC0F4
    static void _cctor();
    // static System.Void Internal_InitializeManagedInstance(System.IntPtr ptr, UnityEngine.IntegratedSubsystem inst)
    // Offset: 0x2BABB10
    static void Internal_InitializeManagedInstance(::System::IntPtr ptr, ::UnityEngine::IntegratedSubsystem* inst);
    // static System.Void Internal_ClearManagedInstances()
    // Offset: 0x2BABBD4
    static void Internal_ClearManagedInstances();
    // static System.Void Internal_RemoveInstanceByPtr(System.IntPtr ptr)
    // Offset: 0x2BABD88
    static void Internal_RemoveInstanceByPtr(::System::IntPtr ptr);
    // static UnityEngine.IntegratedSubsystem Internal_GetInstanceByPtr(System.IntPtr ptr)
    // Offset: 0x2BABF70
    static ::UnityEngine::IntegratedSubsystem* Internal_GetInstanceByPtr(::System::IntPtr ptr);
  }; // UnityEngine.Internal_SubsystemInstances
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemInstances::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Internal_SubsystemInstances::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemInstances*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemInstances::Internal_InitializeManagedInstance
// Il2CppName: Internal_InitializeManagedInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystem*)>(&UnityEngine::Internal_SubsystemInstances::Internal_InitializeManagedInstance)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* inst = &::il2cpp_utils::GetClassFromName("UnityEngine", "IntegratedSubsystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemInstances*), "Internal_InitializeManagedInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, inst});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemInstances::Internal_ClearManagedInstances
// Il2CppName: Internal_ClearManagedInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Internal_SubsystemInstances::Internal_ClearManagedInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemInstances*), "Internal_ClearManagedInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemInstances::Internal_RemoveInstanceByPtr
// Il2CppName: Internal_RemoveInstanceByPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Internal_SubsystemInstances::Internal_RemoveInstanceByPtr)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemInstances*), "Internal_RemoveInstanceByPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemInstances::Internal_GetInstanceByPtr
// Il2CppName: Internal_GetInstanceByPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::IntegratedSubsystem* (*)(::System::IntPtr)>(&UnityEngine::Internal_SubsystemInstances::Internal_GetInstanceByPtr)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemInstances*), "Internal_GetInstanceByPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
