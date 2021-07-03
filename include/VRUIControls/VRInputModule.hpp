// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRPointer
  class VRPointer;
  // Forward declaring type: MouseState
  class MouseState;
  // Forward declaring type: MouseButtonEventData
  class MouseButtonEventData;
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Component because it is already included!
  // Skipping declaration: Vector2 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRInputModule
  class VRInputModule : public UnityEngine::EventSystems::BaseInputModule {
    public:
    // private VRUIControls.VRPointer _vrPointer
    // Size: 0x8
    // Offset: 0x48
    VRUIControls::VRPointer* vrPointer;
    // Field size check
    static_assert(sizeof(VRUIControls::VRPointer*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Size: 0x8
    // Offset: 0x50
    Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // Field size check
    static_assert(sizeof(Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE03F3C
    // private readonly HapticFeedbackController _hapticFeedbackController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HapticFeedbackController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE03F4C
    // private System.Boolean <useMouseForPressInput>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool useMouseForPressInput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useMouseForPressInput and: onProcessMousePressEvent
    char __padding3[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE03F5C
    // private System.Action`1<UnityEngine.GameObject> onProcessMousePressEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<UnityEngine::GameObject*>* onProcessMousePressEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::GameObject*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> _pointerData
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>* pointerData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Component> _componentList
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<UnityEngine::Component*>* componentList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Component*>*) == 0x8);
    // private readonly VRUIControls.MouseState _mouseState
    // Size: 0x8
    // Offset: 0x80
    VRUIControls::MouseState* mouseState;
    // Field size check
    static_assert(sizeof(VRUIControls::MouseState*) == 0x8);
    // Creating value type constructor for type: VRInputModule
    VRInputModule(VRUIControls::VRPointer* vrPointer_ = {}, Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset_ = {}, GlobalNamespace::HapticFeedbackController* hapticFeedbackController_ = {}, bool useMouseForPressInput_ = {}, System::Action_1<UnityEngine::GameObject*>* onProcessMousePressEvent_ = {}, System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>* pointerData_ = {}, System::Collections::Generic::List_1<UnityEngine::Component*>* componentList_ = {}, VRUIControls::MouseState* mouseState_ = {}) noexcept : vrPointer{vrPointer_}, rumblePreset{rumblePreset_}, hapticFeedbackController{hapticFeedbackController_}, useMouseForPressInput{useMouseForPressInput_}, onProcessMousePressEvent{onProcessMousePressEvent_}, pointerData{pointerData_}, componentList{componentList_}, mouseState{mouseState_} {}
    // static field const value: static private System.Int32 kMouseLeftId
    static constexpr const int kMouseLeftId = -1;
    // Get static field: static private System.Int32 kMouseLeftId
    static int _get_kMouseLeftId();
    // Set static field: static private System.Int32 kMouseLeftId
    static void _set_kMouseLeftId(int value);
    // static field const value: static private System.Single kMinPressValue
    static constexpr const float kMinPressValue = 0.9;
    // Get static field: static private System.Single kMinPressValue
    static float _get_kMinPressValue();
    // Set static field: static private System.Single kMinPressValue
    static void _set_kMinPressValue(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE03F6C
    // Get static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
    static System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* _get__raycastComparer();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
    static void _set__raycastComparer(System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* value);
    // public System.Boolean get_useMouseForPressInput()
    // Offset: 0x2366D64
    bool get_useMouseForPressInput();
    // public System.Void set_useMouseForPressInput(System.Boolean value)
    // Offset: 0x2366D6C
    void set_useMouseForPressInput(bool value);
    // public System.Void add_onProcessMousePressEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x2366D78
    void add_onProcessMousePressEvent(System::Action_1<UnityEngine::GameObject*>* value);
    // public System.Void remove_onProcessMousePressEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x2366E1C
    void remove_onProcessMousePressEvent(System::Action_1<UnityEngine::GameObject*>* value);
    // protected System.Boolean GetPointerData(System.Int32 id, out UnityEngine.EventSystems.PointerEventData data, System.Boolean create)
    // Offset: 0x2367078
    bool GetPointerData(int id, UnityEngine::EventSystems::PointerEventData*& data, bool create);
    // protected VRUIControls.MouseState GetMousePointerEventData(System.Int32 id)
    // Offset: 0x236715C
    VRUIControls::MouseState* GetMousePointerEventData(int id);
    // protected UnityEngine.EventSystems.PointerEventData GetLastPointerEventData(System.Int32 id)
    // Offset: 0x2367530
    UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int id);
    // private System.Boolean ShouldStartDrag(UnityEngine.Vector2 pressPos, UnityEngine.Vector2 currentPos, System.Single threshold, System.Boolean useDragThreshold)
    // Offset: 0x236755C
    bool ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
    // protected System.Void ProcessMove(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x236762C
    void ProcessMove(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x2367F60
    void ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ClearSelection()
    // Offset: 0x2366EE8
    void ClearSelection();
    // protected System.Void DeselectIfSelectionChanged(UnityEngine.GameObject currentOverGo, UnityEngine.EventSystems.BaseEventData pointerEvent)
    // Offset: 0x23684EC
    void DeselectIfSelectionChanged(UnityEngine::GameObject* currentOverGo, UnityEngine::EventSystems::BaseEventData* pointerEvent);
    // protected System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x2368FC0
    bool SendUpdateEventToSelectedObject();
    // protected System.Void ProcessMousePress(VRUIControls.MouseButtonEventData data)
    // Offset: 0x23687B4
    void ProcessMousePress(VRUIControls::MouseButtonEventData* data);
    // static private System.Int32 RaycastComparer(UnityEngine.EventSystems.RaycastResult lhs, UnityEngine.EventSystems.RaycastResult rhs)
    // Offset: 0x2369114
    static int RaycastComparer(UnityEngine::EventSystems::RaycastResult lhs, UnityEngine::EventSystems::RaycastResult rhs);
    // protected override System.Void OnDisable()
    // Offset: 0x2366EC0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::OnDisable()
    void OnDisable();
    // public override System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x236825C
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsPointerOverGameObject(System.Int32 pointerId)
    bool IsPointerOverGameObject(int pointerId);
    // public override System.String ToString()
    // Offset: 0x2368308
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Void Process()
    // Offset: 0x23685DC
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
    // protected System.Void HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    // Offset: 0x2367644
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    void HandlePointerExitAndEnter(UnityEngine::EventSystems::PointerEventData* currentPointerData, UnityEngine::GameObject* newEnterTarget);
    // public System.Void .ctor()
    // Offset: 0x23694E4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::VRInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRInputModule*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x236959C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRInputModule
  #pragma pack(pop)
  static check_size<sizeof(VRInputModule), 128 + sizeof(VRUIControls::MouseState*)> __VRUIControls_VRInputModuleSizeCheck;
  static_assert(sizeof(VRInputModule) == 0x88);
  // Writing MetadataGetter for method: VRInputModule::get_useMouseForPressInput
  // Il2CppName: get_useMouseForPressInput
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRInputModule::*)()>(&VRInputModule::get_useMouseForPressInput)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "get_useMouseForPressInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::set_useMouseForPressInput
  // Il2CppName: set_useMouseForPressInput
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(bool)>(&VRInputModule::set_useMouseForPressInput)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "set_useMouseForPressInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::add_onProcessMousePressEvent
  // Il2CppName: add_onProcessMousePressEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(System::Action_1<UnityEngine::GameObject*>*)>(&VRInputModule::add_onProcessMousePressEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "add_onProcessMousePressEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<UnityEngine::GameObject*>*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::remove_onProcessMousePressEvent
  // Il2CppName: remove_onProcessMousePressEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(System::Action_1<UnityEngine::GameObject*>*)>(&VRInputModule::remove_onProcessMousePressEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "remove_onProcessMousePressEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<UnityEngine::GameObject*>*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::GetPointerData
  // Il2CppName: GetPointerData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRInputModule::*)(int, UnityEngine::EventSystems::PointerEventData*&, bool)>(&VRInputModule::GetPointerData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "GetPointerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*&>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::GetMousePointerEventData
  // Il2CppName: GetMousePointerEventData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<VRUIControls::MouseState* (VRInputModule::*)(int)>(&VRInputModule::GetMousePointerEventData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "GetMousePointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::GetLastPointerEventData
  // Il2CppName: GetLastPointerEventData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerEventData* (VRInputModule::*)(int)>(&VRInputModule::GetLastPointerEventData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "GetLastPointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::ShouldStartDrag
  // Il2CppName: ShouldStartDrag
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRInputModule::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, bool)>(&VRInputModule::ShouldStartDrag)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "ShouldStartDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::ProcessMove
  // Il2CppName: ProcessMove
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(UnityEngine::EventSystems::PointerEventData*)>(&VRInputModule::ProcessMove)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "ProcessMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::ProcessDrag
  // Il2CppName: ProcessDrag
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(UnityEngine::EventSystems::PointerEventData*)>(&VRInputModule::ProcessDrag)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "ProcessDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::ClearSelection
  // Il2CppName: ClearSelection
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)()>(&VRInputModule::ClearSelection)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::DeselectIfSelectionChanged
  // Il2CppName: DeselectIfSelectionChanged
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(UnityEngine::GameObject*, UnityEngine::EventSystems::BaseEventData*)>(&VRInputModule::DeselectIfSelectionChanged)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::BaseEventData*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::SendUpdateEventToSelectedObject
  // Il2CppName: SendUpdateEventToSelectedObject
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRInputModule::*)()>(&VRInputModule::SendUpdateEventToSelectedObject)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::ProcessMousePress
  // Il2CppName: ProcessMousePress
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(VRUIControls::MouseButtonEventData*)>(&VRInputModule::ProcessMousePress)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "ProcessMousePress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<VRUIControls::MouseButtonEventData*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::RaycastComparer
  // Il2CppName: RaycastComparer
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::EventSystems::RaycastResult, UnityEngine::EventSystems::RaycastResult)>(&VRInputModule::RaycastComparer)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "RaycastComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::RaycastResult>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::RaycastResult>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::OnDisable
  // Il2CppName: OnDisable
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)()>(&VRInputModule::OnDisable)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::IsPointerOverGameObject
  // Il2CppName: IsPointerOverGameObject
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRInputModule::*)(int)>(&VRInputModule::IsPointerOverGameObject)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "IsPointerOverGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::ToString
  // Il2CppName: ToString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (VRInputModule::*)()>(&VRInputModule::ToString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::Process
  // Il2CppName: Process
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)()>(&VRInputModule::Process)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::HandlePointerExitAndEnter
  // Il2CppName: HandlePointerExitAndEnter
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)(UnityEngine::EventSystems::PointerEventData*, UnityEngine::GameObject*)>(&VRInputModule::HandlePointerExitAndEnter)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), "HandlePointerExitAndEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>()});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)()>(&VRInputModule::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRInputModule::*)()>(&VRInputModule::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRInputModule::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VRInputModule::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRInputModule*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRInputModule*, "VRUIControls", "VRInputModule");
