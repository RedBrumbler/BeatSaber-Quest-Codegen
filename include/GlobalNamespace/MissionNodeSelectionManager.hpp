// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeSelectionManager
  class MissionNodeSelectionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionNodeSelectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeSelectionManager*, "", "MissionNodeSelectionManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeSelectionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionNodeSelectionManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodesManager*) == 0x8);
    // private System.Action`1<MissionNodeVisualController> didSelectMissionNodeEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* didSelectMissionNodeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*) == 0x8);
    // private MissionNode[] _missionNodes
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::MissionNode*> missionNodes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionNode*>) == 0x8);
    // private MissionNodeVisualController _selectedNode
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MissionNodeVisualController* selectedNode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodeVisualController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionNodesManager _missionNodesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodesManager*& dyn__missionNodesManager();
    // Get instance field reference: private System.Action`1<MissionNodeVisualController> didSelectMissionNodeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*& dyn_didSelectMissionNodeEvent();
    // Get instance field reference: private MissionNode[] _missionNodes
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MissionNode*>& dyn__missionNodes();
    // Get instance field reference: private MissionNodeVisualController _selectedNode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodeVisualController*& dyn__selectedNode();
    // public System.Void add_didSelectMissionNodeEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x14B85A4
    void add_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_didSelectMissionNodeEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x14B8648
    void remove_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void .ctor()
    // Offset: 0x14B8E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeSelectionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionNodeSelectionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeSelectionManager*, creationType>()));
    }
    // public System.Void DeselectSelectedNode()
    // Offset: 0x14B86EC
    void DeselectSelectedNode();
    // protected System.Void Start()
    // Offset: 0x14B87A8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14B8A28
    void OnDestroy();
    // private System.Void HandleNodeWasSelect(MissionNodeVisualController missionNode)
    // Offset: 0x14B8CD4
    void HandleNodeWasSelect(::GlobalNamespace::MissionNodeVisualController* missionNode);
    // private System.Void HandleNodeWasDisplayed(MissionNodeVisualController missionNode)
    // Offset: 0x14B8D98
    void HandleNodeWasDisplayed(::GlobalNamespace::MissionNodeVisualController* missionNode);
  }; // MissionNodeSelectionManager
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeSelectionManager), 48 + sizeof(::GlobalNamespace::MissionNodeVisualController*)> __GlobalNamespace_MissionNodeSelectionManagerSizeCheck;
  static_assert(sizeof(MissionNodeSelectionManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::add_didSelectMissionNodeEvent
// Il2CppName: add_didSelectMissionNodeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*)>(&GlobalNamespace::MissionNodeSelectionManager::add_didSelectMissionNodeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "add_didSelectMissionNodeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::remove_didSelectMissionNodeEvent
// Il2CppName: remove_didSelectMissionNodeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*)>(&GlobalNamespace::MissionNodeSelectionManager::remove_didSelectMissionNodeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "remove_didSelectMissionNodeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::DeselectSelectedNode
// Il2CppName: DeselectSelectedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)()>(&GlobalNamespace::MissionNodeSelectionManager::DeselectSelectedNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "DeselectSelectedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)()>(&GlobalNamespace::MissionNodeSelectionManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)()>(&GlobalNamespace::MissionNodeSelectionManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::HandleNodeWasSelect
// Il2CppName: HandleNodeWasSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)(::GlobalNamespace::MissionNodeVisualController*)>(&GlobalNamespace::MissionNodeSelectionManager::HandleNodeWasSelect)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "HandleNodeWasSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeSelectionManager::HandleNodeWasDisplayed
// Il2CppName: HandleNodeWasDisplayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeSelectionManager::*)(::GlobalNamespace::MissionNodeVisualController*)>(&GlobalNamespace::MissionNodeSelectionManager::HandleNodeWasDisplayed)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeSelectionManager*), "HandleNodeWasDisplayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode});
  }
};
