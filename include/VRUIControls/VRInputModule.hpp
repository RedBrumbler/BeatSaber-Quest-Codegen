// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: VRInputModule
  class VRInputModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::VRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRInputModule*, "VRUIControls", "VRInputModule");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRInputModule
  // [TokenAttribute] Offset: FFFFFFFF
  class VRInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
    public:
    public:
    // private VRUIControls.VRPointer _vrPointer
    // Size: 0x8
    // Offset: 0x48
    ::VRUIControls::VRPointer* vrPointer;
    // Field size check
    static_assert(sizeof(::VRUIControls::VRPointer*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Size: 0x8
    // Offset: 0x50
    ::Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // Field size check
    static_assert(sizeof(::Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0x1116F9C
    // private readonly HapticFeedbackController _hapticFeedbackController
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HapticFeedbackController*) == 0x8);
    // private System.Boolean <useMouseForPressInput>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool useMouseForPressInput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useMouseForPressInput and: onProcessMousePressEvent
    char __padding3[0x7] = {};
    // private System.Action`1<UnityEngine.GameObject> onProcessMousePressEvent
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<::UnityEngine::GameObject*>* onProcessMousePressEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::GameObject*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> _pointerData
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::EventSystems::PointerEventData*>* pointerData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::EventSystems::PointerEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Component> _componentList
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::UnityEngine::Component*>* componentList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Component*>*) == 0x8);
    // private readonly VRUIControls.MouseState _mouseState
    // Size: 0x8
    // Offset: 0x80
    ::VRUIControls::MouseState* mouseState;
    // Field size check
    static_assert(sizeof(::VRUIControls::MouseState*) == 0x8);
    public:
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
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1116FCC
    // Get static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
    static ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* _get__raycastComparer();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
    static void _set__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value);
    // Get instance field reference: private VRUIControls.VRPointer _vrPointer
    [[deprecated("Use field access instead!")]] ::VRUIControls::VRPointer*& dyn__vrPointer();
    // Get instance field reference: private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    [[deprecated("Use field access instead!")]] ::Libraries::HM::HMLib::VR::HapticPresetSO*& dyn__rumblePreset();
    // Get instance field reference: private readonly HapticFeedbackController _hapticFeedbackController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HapticFeedbackController*& dyn__hapticFeedbackController();
    // Get instance field reference: private System.Boolean <useMouseForPressInput>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$useMouseForPressInput$k__BackingField();
    // Get instance field reference: private System.Action`1<UnityEngine.GameObject> onProcessMousePressEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::GameObject*>*& dyn_onProcessMousePressEvent();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> _pointerData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::EventSystems::PointerEventData*>*& dyn__pointerData();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Component> _componentList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Component*>*& dyn__componentList();
    // Get instance field reference: private readonly VRUIControls.MouseState _mouseState
    [[deprecated("Use field access instead!")]] ::VRUIControls::MouseState*& dyn__mouseState();
    // public System.Boolean get_useMouseForPressInput()
    // Offset: 0x2B15588
    bool get_useMouseForPressInput();
    // public System.Void set_useMouseForPressInput(System.Boolean value)
    // Offset: 0x2B15590
    void set_useMouseForPressInput(bool value);
    // public System.Void add_onProcessMousePressEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x2B1559C
    void add_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value);
    // public System.Void remove_onProcessMousePressEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x2B15640
    void remove_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value);
    // public System.Void .ctor()
    // Offset: 0x2B17D08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::VRInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRInputModule*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2B17DC0
    static void _cctor();
    // protected System.Boolean GetPointerData(System.Int32 id, out UnityEngine.EventSystems.PointerEventData data, System.Boolean create)
    // Offset: 0x2B1589C
    bool GetPointerData(int id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create);
    // protected VRUIControls.MouseState GetMousePointerEventData(System.Int32 id)
    // Offset: 0x2B15980
    ::VRUIControls::MouseState* GetMousePointerEventData(int id);
    // protected UnityEngine.EventSystems.PointerEventData GetLastPointerEventData(System.Int32 id)
    // Offset: 0x2B15D54
    ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int id);
    // private System.Boolean ShouldStartDrag(UnityEngine.Vector2 pressPos, UnityEngine.Vector2 currentPos, System.Single threshold, System.Boolean useDragThreshold)
    // Offset: 0x2B15D80
    bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
    // protected System.Void ProcessMove(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x2B15E50
    void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x2B16784
    void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ClearSelection()
    // Offset: 0x2B1570C
    void ClearSelection();
    // protected System.Void DeselectIfSelectionChanged(UnityEngine.GameObject currentOverGo, UnityEngine.EventSystems.BaseEventData pointerEvent)
    // Offset: 0x2B16D10
    void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent);
    // protected System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x2B177E4
    bool SendUpdateEventToSelectedObject();
    // protected System.Void ProcessMousePress(VRUIControls.MouseButtonEventData data)
    // Offset: 0x2B16FD8
    void ProcessMousePress(::VRUIControls::MouseButtonEventData* data);
    // protected System.Void HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    // Offset: 0x2B15E68
    void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget);
    // static private System.Int32 RaycastComparer(UnityEngine.EventSystems.RaycastResult lhs, UnityEngine.EventSystems.RaycastResult rhs)
    // Offset: 0x2B17938
    static int RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs);
    // protected override System.Void OnDisable()
    // Offset: 0x2B156E4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::OnDisable()
    void OnDisable();
    // public override System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x2B16A80
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsPointerOverGameObject(System.Int32 pointerId)
    bool IsPointerOverGameObject(int pointerId);
    // public override System.String ToString()
    // Offset: 0x2B16B2C
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Void Process()
    // Offset: 0x2B16E00
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
  }; // VRUIControls.VRInputModule
  #pragma pack(pop)
  static check_size<sizeof(VRInputModule), 128 + sizeof(::VRUIControls::MouseState*)> __VRUIControls_VRInputModuleSizeCheck;
  static_assert(sizeof(VRInputModule) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::VRInputModule::get_useMouseForPressInput
// Il2CppName: get_useMouseForPressInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::VRInputModule::*)()>(&VRUIControls::VRInputModule::get_useMouseForPressInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "get_useMouseForPressInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::set_useMouseForPressInput
// Il2CppName: set_useMouseForPressInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(bool)>(&VRUIControls::VRInputModule::set_useMouseForPressInput)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "set_useMouseForPressInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::add_onProcessMousePressEvent
// Il2CppName: add_onProcessMousePressEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&VRUIControls::VRInputModule::add_onProcessMousePressEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "add_onProcessMousePressEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::remove_onProcessMousePressEvent
// Il2CppName: remove_onProcessMousePressEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&VRUIControls::VRInputModule::remove_onProcessMousePressEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "remove_onProcessMousePressEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::VRInputModule::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VRUIControls::VRInputModule::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::GetPointerData
// Il2CppName: GetPointerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::VRInputModule::*)(int, ByRef<::UnityEngine::EventSystems::PointerEventData*>, bool)>(&VRUIControls::VRInputModule::GetPointerData)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->this_arg;
    static auto* create = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "GetPointerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, data, create});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::GetMousePointerEventData
// Il2CppName: GetMousePointerEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::MouseState* (VRUIControls::VRInputModule::*)(int)>(&VRUIControls::VRInputModule::GetMousePointerEventData)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "GetMousePointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::GetLastPointerEventData
// Il2CppName: GetLastPointerEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (VRUIControls::VRInputModule::*)(int)>(&VRUIControls::VRInputModule::GetLastPointerEventData)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "GetLastPointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::ShouldStartDrag
// Il2CppName: ShouldStartDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::VRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, bool)>(&VRUIControls::VRInputModule::ShouldStartDrag)> {
  static const MethodInfo* get() {
    static auto* pressPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* currentPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* threshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* useDragThreshold = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "ShouldStartDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pressPos, currentPos, threshold, useDragThreshold});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::ProcessMove
// Il2CppName: ProcessMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&VRUIControls::VRInputModule::ProcessMove)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "ProcessMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::ProcessDrag
// Il2CppName: ProcessDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&VRUIControls::VRInputModule::ProcessDrag)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "ProcessDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)()>(&VRUIControls::VRInputModule::ClearSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::DeselectIfSelectionChanged
// Il2CppName: DeselectIfSelectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(&VRUIControls::VRInputModule::DeselectIfSelectionChanged)> {
  static const MethodInfo* get() {
    static auto* currentOverGo = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentOverGo, pointerEvent});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::SendUpdateEventToSelectedObject
// Il2CppName: SendUpdateEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::VRInputModule::*)()>(&VRUIControls::VRInputModule::SendUpdateEventToSelectedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::ProcessMousePress
// Il2CppName: ProcessMousePress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::VRUIControls::MouseButtonEventData*)>(&VRUIControls::VRInputModule::ProcessMousePress)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VRUIControls", "MouseButtonEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "ProcessMousePress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::HandlePointerExitAndEnter
// Il2CppName: HandlePointerExitAndEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(&VRUIControls::VRInputModule::HandlePointerExitAndEnter)> {
  static const MethodInfo* get() {
    static auto* currentPointerData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* newEnterTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "HandlePointerExitAndEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPointerData, newEnterTarget});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::RaycastComparer
// Il2CppName: RaycastComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(&VRUIControls::VRInputModule::RaycastComparer)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "RaycastComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)()>(&VRUIControls::VRInputModule::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::IsPointerOverGameObject
// Il2CppName: IsPointerOverGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::VRInputModule::*)(int)>(&VRUIControls::VRInputModule::IsPointerOverGameObject)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "IsPointerOverGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VRUIControls::VRInputModule::*)()>(&VRUIControls::VRInputModule::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRInputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRInputModule::*)()>(&VRUIControls::VRInputModule::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
