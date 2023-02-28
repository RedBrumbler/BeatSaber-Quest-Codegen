// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TransitionType because it is already included!
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: SelectableCell
  class SelectableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::SelectableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCell*, "HMUI", "SelectableCell");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SelectableCell
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 110CE80
  class SelectableCell : public ::HMUI::Interactable/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler, public ::UnityEngine::EventSystems::IPointerClickHandler, public ::UnityEngine::EventSystems::ISubmitHandler*/ {
    public:
    // Nested type: ::HMUI::SelectableCell::TransitionType
    struct TransitionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.SelectableCell/HMUI.TransitionType
    // [TokenAttribute] Offset: FFFFFFFF
    struct TransitionType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TransitionType
      constexpr TransitionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.SelectableCell/HMUI.TransitionType Instant
      static constexpr const int Instant = 0;
      // Get static field: static public HMUI.SelectableCell/HMUI.TransitionType Instant
      static ::HMUI::SelectableCell::TransitionType _get_Instant();
      // Set static field: static public HMUI.SelectableCell/HMUI.TransitionType Instant
      static void _set_Instant(::HMUI::SelectableCell::TransitionType value);
      // static field const value: static public HMUI.SelectableCell/HMUI.TransitionType Animated
      static constexpr const int Animated = 1;
      // Get static field: static public HMUI.SelectableCell/HMUI.TransitionType Animated
      static ::HMUI::SelectableCell::TransitionType _get_Animated();
      // Set static field: static public HMUI.SelectableCell/HMUI.TransitionType Animated
      static void _set_Animated(::HMUI::SelectableCell::TransitionType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HMUI.SelectableCell/HMUI.TransitionType
    #pragma pack(pop)
    static check_size<sizeof(SelectableCell::TransitionType), 0 + sizeof(int)> __HMUI_SelectableCell_TransitionTypeSizeCheck;
    static_assert(sizeof(SelectableCell::TransitionType) == 0x4);
    public:
    // [SignalSenderAttribute] Offset: 0x110EE18
    // private Signal _wasPressedSignal
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::Signal* wasPressedSignal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // private System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType,System.Object> selectionDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* selectionDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*) == 0x8);
    // private System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType> highlightDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>* highlightDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>*) == 0x8);
    // private System.Boolean <highlighted>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <selected>k__BackingField
    // Size: 0x1
    // Offset: 0x41
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerEnterHandler
    inline ::UnityEngine::EventSystems::IPointerEnterHandler* i_IPointerEnterHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerExitHandler
    inline ::UnityEngine::EventSystems::IPointerExitHandler* i_IPointerExitHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerClickHandler
    operator ::UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerClickHandler
    inline ::UnityEngine::EventSystems::IPointerClickHandler* i_IPointerClickHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::ISubmitHandler
    operator ::UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: i_ISubmitHandler
    inline ::UnityEngine::EventSystems::ISubmitHandler* i_ISubmitHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Get instance field reference: private Signal _wasPressedSignal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Signal*& dyn__wasPressedSignal();
    // Get instance field reference: private System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType,System.Object> selectionDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*& dyn_selectionDidChangeEvent();
    // Get instance field reference: private System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType> highlightDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>*& dyn_highlightDidChangeEvent();
    // Get instance field reference: private System.Boolean <highlighted>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$highlighted$k__BackingField();
    // Get instance field reference: private System.Boolean <selected>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$selected$k__BackingField();
    // public System.Boolean get_highlighted()
    // Offset: 0x170C904
    bool get_highlighted();
    // private System.Void set_highlighted(System.Boolean value)
    // Offset: 0x170C90C
    void set_highlighted(bool value);
    // public System.Boolean get_selected()
    // Offset: 0x170C918
    bool get_selected();
    // private System.Void set_selected(System.Boolean value)
    // Offset: 0x170C920
    void set_selected(bool value);
    // public System.Void add_selectionDidChangeEvent(System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType,System.Object> value)
    // Offset: 0x170C2A4
    void add_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* value);
    // public System.Void remove_selectionDidChangeEvent(System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType,System.Object> value)
    // Offset: 0x170C200
    void remove_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* value);
    // public System.Void add_highlightDidChangeEvent(System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType> value)
    // Offset: 0x170C7BC
    void add_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>* value);
    // public System.Void remove_highlightDidChangeEvent(System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/HMUI.TransitionType> value)
    // Offset: 0x170C860
    void remove_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>* value);
    // protected System.Void Start()
    // Offset: 0x170C92C
    void Start();
    // public System.Void SetSelected(System.Boolean value, HMUI.SelectableCell/HMUI.TransitionType transitionType, System.Object changeOwner, System.Boolean ignoreCurrentValue)
    // Offset: 0x170C348
    void SetSelected(bool value, ::HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner, bool ignoreCurrentValue);
    // public System.Void ClearHighlight(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x170C410
    void ClearHighlight(::HMUI::SelectableCell::TransitionType transitionType);
    // private System.Void SetHighlight(System.Boolean value, HMUI.SelectableCell/HMUI.TransitionType transitionType, System.Boolean ignoreCurrentValue)
    // Offset: 0x170C968
    void SetHighlight(bool value, ::HMUI::SelectableCell::TransitionType transitionType, bool ignoreCurrentValue);
    // protected System.Void InternalToggle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InternalToggle();
    // protected System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x170CA28
    void SelectionDidChange(::HMUI::SelectableCell::TransitionType transitionType);
    // protected System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x170CA2C
    void HighlightDidChange(::HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x170CA30
    void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x170CAFC
    void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x170CBAC
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x170CBBC
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.Void .ctor()
    // Offset: 0x170C7AC
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::SelectableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableCell*, creationType>()));
    }
  }; // HMUI.SelectableCell
  #pragma pack(pop)
  static check_size<sizeof(SelectableCell), 65 + sizeof(bool)> __HMUI_SelectableCellSizeCheck;
  static_assert(sizeof(SelectableCell) == 0x42);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCell::TransitionType, "HMUI", "SelectableCell/TransitionType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SelectableCell::get_highlighted
// Il2CppName: get_highlighted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::get_highlighted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "get_highlighted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::set_highlighted
// Il2CppName: set_highlighted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool)>(&HMUI::SelectableCell::set_highlighted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "set_highlighted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::get_selected
// Il2CppName: get_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::get_selected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "get_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::set_selected
// Il2CppName: set_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool)>(&HMUI::SelectableCell::set_selected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "set_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::add_selectionDidChangeEvent
// Il2CppName: add_selectionDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*)>(&HMUI::SelectableCell::add_selectionDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "add_selectionDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::remove_selectionDidChangeEvent
// Il2CppName: remove_selectionDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::System::Action_3<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*)>(&HMUI::SelectableCell::remove_selectionDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "remove_selectionDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::add_highlightDidChangeEvent
// Il2CppName: add_highlightDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>*)>(&HMUI::SelectableCell::add_highlightDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "add_highlightDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::remove_highlightDidChangeEvent
// Il2CppName: remove_highlightDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::System::Action_2<::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType>*)>(&HMUI::SelectableCell::remove_highlightDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "remove_highlightDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::SetSelected
// Il2CppName: SetSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*, bool)>(&HMUI::SelectableCell::SetSelected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* changeOwner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* ignoreCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "SetSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, transitionType, changeOwner, ignoreCurrentValue});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::ClearHighlight
// Il2CppName: ClearHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCell::ClearHighlight)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "ClearHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::SetHighlight
// Il2CppName: SetHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool, ::HMUI::SelectableCell::TransitionType, bool)>(&HMUI::SelectableCell::SetHighlight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* ignoreCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "SetHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, transitionType, ignoreCurrentValue});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::InternalToggle
// Il2CppName: InternalToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::InternalToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "InternalToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::SelectableCell::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::UnityEngine::EventSystems::BaseEventData*)>(&HMUI::SelectableCell::OnSubmit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::SelectableCell::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::SelectableCell::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
