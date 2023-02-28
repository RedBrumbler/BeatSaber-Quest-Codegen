// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ThreadedTask
  class HEU_ThreadedTask;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ThreadManager
  class HEU_ThreadManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadManager*, "HoudiniEngineUnity", "HEU_ThreadManager");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ThreadManager
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ThreadManager : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ThreadedTask> _tasks
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* tasks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*) == 0x8);
    // private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ThreadedTask> _pendingAdd
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* pendingAdd;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*) == 0x8);
    // private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ThreadedTask> _pendingRemove
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* pendingRemove;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*) == 0x8);
    public:
    // Get static field: static private HoudiniEngineUnity.HEU_ThreadManager _instance
    static ::HoudiniEngineUnity::HEU_ThreadManager* _get__instance();
    // Set static field: static private HoudiniEngineUnity.HEU_ThreadManager _instance
    static void _set__instance(::HoudiniEngineUnity::HEU_ThreadManager* value);
    // Get instance field reference: private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ThreadedTask> _tasks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*& dyn__tasks();
    // Get instance field reference: private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ThreadedTask> _pendingAdd
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*& dyn__pendingAdd();
    // Get instance field reference: private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ThreadedTask> _pendingRemove
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*& dyn__pendingRemove();
    // static public HoudiniEngineUnity.HEU_ThreadManager get_Instance()
    // Offset: 0x1B717DC
    static ::HoudiniEngineUnity::HEU_ThreadManager* get_Instance();
    // public System.Void .ctor()
    // Offset: 0x1B71CE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ThreadManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_ThreadManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ThreadManager*, creationType>()));
    }
    // static private System.Void CreateInstance()
    // Offset: 0x1B7182C
    static void CreateInstance();
    // public System.Void Register()
    // Offset: 0x1B7183C
    void Register();
    // public System.Void Unregister()
    // Offset: 0x1B71838
    void Unregister();
    // public System.Void Update()
    // Offset: 0x1B71840
    void Update();
    // public System.Void AddTask(HoudiniEngineUnity.HEU_ThreadedTask task)
    // Offset: 0x1B71B88
    void AddTask(::HoudiniEngineUnity::HEU_ThreadedTask* task);
    // public System.Void RemoveTask(HoudiniEngineUnity.HEU_ThreadedTask task)
    // Offset: 0x1B71C38
    void RemoveTask(::HoudiniEngineUnity::HEU_ThreadedTask* task);
    // protected override System.Void Finalize()
    // Offset: 0x1B71830
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // HoudiniEngineUnity.HEU_ThreadManager
  #pragma pack(pop)
  static check_size<sizeof(HEU_ThreadManager), 32 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*)> __HoudiniEngineUnity_HEU_ThreadManagerSizeCheck;
  static_assert(sizeof(HEU_ThreadManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ThreadManager* (*)()>(&HoudiniEngineUnity::HEU_ThreadManager::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_ThreadManager::CreateInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadManager::*)()>(&HoudiniEngineUnity::HEU_ThreadManager::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadManager::*)()>(&HoudiniEngineUnity::HEU_ThreadManager::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadManager::*)()>(&HoudiniEngineUnity::HEU_ThreadManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::AddTask
// Il2CppName: AddTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadManager::*)(::HoudiniEngineUnity::HEU_ThreadedTask*)>(&HoudiniEngineUnity::HEU_ThreadManager::AddTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ThreadedTask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "AddTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::RemoveTask
// Il2CppName: RemoveTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadManager::*)(::HoudiniEngineUnity::HEU_ThreadedTask*)>(&HoudiniEngineUnity::HEU_ThreadManager::RemoveTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ThreadedTask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "RemoveTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadManager::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ThreadManager::*)()>(&HoudiniEngineUnity::HEU_ThreadManager::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ThreadManager*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
