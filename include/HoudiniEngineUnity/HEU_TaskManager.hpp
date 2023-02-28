// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Task
#include "HoudiniEngineUnity/HEU_Task.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Guid because it is already included!
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TaskManager
  class HEU_TaskManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TaskManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TaskManager*, "HoudiniEngineUnity", "HEU_TaskManager");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_TaskManager
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_TaskManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Task> _tasks
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* _get__tasks();
    // Set static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Task> _tasks
    static void _set__tasks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* value);
    // Get static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Task> _pendingAdd
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* _get__pendingAdd();
    // Set static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Task> _pendingAdd
    static void _set__pendingAdd(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* value);
    // Get static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Task> _pendingRemove
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* _get__pendingRemove();
    // Set static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Task> _pendingRemove
    static void _set__pendingRemove(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1B6BED0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1B6C5B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_TaskManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_TaskManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_TaskManager*, creationType>()));
    }
    // static private System.Void Update()
    // Offset: 0x1B6BF8C
    static void Update();
    // static public HoudiniEngineUnity.HEU_Task GetTask(System.Guid taskGuid)
    // Offset: 0x1B6BF90
    static ::HoudiniEngineUnity::HEU_Task* GetTask(::System::Guid taskGuid);
    // static public System.Void AddTask(HoudiniEngineUnity.HEU_Task task)
    // Offset: 0x1B6C118
    static void AddTask(::HoudiniEngineUnity::HEU_Task* task);
    // static public System.Void KillTask(HoudiniEngineUnity.HEU_Task task, System.Boolean bRemove)
    // Offset: 0x1B6C238
    static void KillTask(::HoudiniEngineUnity::HEU_Task* task, bool bRemove);
    // static public System.Void KillTask(System.Guid taskGuid, System.Boolean bRemove)
    // Offset: 0x1B6C440
    static void KillTask(::System::Guid taskGuid, bool bRemove);
    // static public System.Void RemoveTask(HoudiniEngineUnity.HEU_Task task)
    // Offset: 0x1B6C32C
    static void RemoveTask(::HoudiniEngineUnity::HEU_Task* task);
    // static public System.Void ExecuteTask(HoudiniEngineUnity.HEU_Task task)
    // Offset: 0x1B6C4F4
    static void ExecuteTask(::HoudiniEngineUnity::HEU_Task* task);
    // static public System.Void CompleteTask(HoudiniEngineUnity.HEU_Task task, HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskResult result)
    // Offset: 0x1B6C528
    static void CompleteTask(::HoudiniEngineUnity::HEU_Task* task, ::HoudiniEngineUnity::HEU_Task::TaskResult result);
    // static private System.Void InternalCompleteTask(HoudiniEngineUnity.HEU_Task task)
    // Offset: 0x1B6C550
    static void InternalCompleteTask(::HoudiniEngineUnity::HEU_Task* task);
  }; // HoudiniEngineUnity.HEU_TaskManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_TaskManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_TaskManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::GetTask
// Il2CppName: GetTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Task* (*)(::System::Guid)>(&HoudiniEngineUnity::HEU_TaskManager::GetTask)> {
  static const MethodInfo* get() {
    static auto* taskGuid = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "GetTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taskGuid});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::AddTask
// Il2CppName: AddTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&HoudiniEngineUnity::HEU_TaskManager::AddTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "AddTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::KillTask
// Il2CppName: KillTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*, bool)>(&HoudiniEngineUnity::HEU_TaskManager::KillTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    static auto* bRemove = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "KillTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, bRemove});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::KillTask
// Il2CppName: KillTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Guid, bool)>(&HoudiniEngineUnity::HEU_TaskManager::KillTask)> {
  static const MethodInfo* get() {
    static auto* taskGuid = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* bRemove = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "KillTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taskGuid, bRemove});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::RemoveTask
// Il2CppName: RemoveTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&HoudiniEngineUnity::HEU_TaskManager::RemoveTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "RemoveTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::ExecuteTask
// Il2CppName: ExecuteTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&HoudiniEngineUnity::HEU_TaskManager::ExecuteTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "ExecuteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::CompleteTask
// Il2CppName: CompleteTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*, ::HoudiniEngineUnity::HEU_Task::TaskResult)>(&HoudiniEngineUnity::HEU_TaskManager::CompleteTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task/TaskResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "CompleteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, result});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TaskManager::InternalCompleteTask
// Il2CppName: InternalCompleteTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_Task*)>(&HoudiniEngineUnity::HEU_TaskManager::InternalCompleteTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TaskManager*), "InternalCompleteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
