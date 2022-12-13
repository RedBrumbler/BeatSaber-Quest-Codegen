// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: Interactable
  class Interactable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionToggle
  class MissionToggle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionToggle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionToggle*, "", "MissionToggle");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: MissionToggle
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionToggle : public ::UnityEngine::EventSystems::UIBehaviour/*, public ::UnityEngine::EventSystems::IPointerClickHandler, public ::UnityEngine::EventSystems::ISubmitHandler, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    public:
    // [SignalSenderAttribute] Offset: 0x1128E80
    // private Signal _missionToggleWasPressedSignal
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Signal* missionToggleWasPressedSignal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // [SpaceAttribute] Offset: 0x1128EB8
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _lockedImage
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Image* lockedImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _clearedImage
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Image* clearedImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _strokeImage
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Image* strokeImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0x1128F30
    // private HMUI.Interactable _vrInteractable
    // Size: 0x8
    // Offset: 0x48
    ::HMUI::Interactable* vrInteractable;
    // Field size check
    static_assert(sizeof(::HMUI::Interactable*) == 0x8);
    // [SpaceAttribute] Offset: 0x1128F68
    // private UnityEngine.Color _disabledColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color disabledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _invertColor
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Color invertColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightColor
    // Size: 0x10
    // Offset: 0x80
    ::UnityEngine::Color highlightColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Action`1<MissionToggle> selectionDidChangeEvent
    // Size: 0x8
    // Offset: 0x90
    ::System::Action_1<::GlobalNamespace::MissionToggle*>* selectionDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MissionToggle*>*) == 0x8);
    // private System.Boolean _selected
    // Size: 0x1
    // Offset: 0x98
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x99
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x9A
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _missionCleared
    // Size: 0x1
    // Offset: 0x9B
    bool missionCleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
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
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Signal _missionToggleWasPressedSignal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Signal*& dyn__missionToggleWasPressedSignal();
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.UI.Image _lockedImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__lockedImage();
    // Get instance field reference: private UnityEngine.UI.Image _clearedImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__clearedImage();
    // Get instance field reference: private UnityEngine.UI.Image _bgImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__bgImage();
    // Get instance field reference: private UnityEngine.UI.Image _strokeImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__strokeImage();
    // Get instance field reference: private HMUI.Interactable _vrInteractable
    [[deprecated("Use field access instead!")]] ::HMUI::Interactable*& dyn__vrInteractable();
    // Get instance field reference: private UnityEngine.Color _disabledColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__disabledColor();
    // Get instance field reference: private UnityEngine.Color _normalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__normalColor();
    // Get instance field reference: private UnityEngine.Color _invertColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__invertColor();
    // Get instance field reference: private UnityEngine.Color _highlightColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__highlightColor();
    // Get instance field reference: private System.Action`1<MissionToggle> selectionDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MissionToggle*>*& dyn_selectionDidChangeEvent();
    // Get instance field reference: private System.Boolean _selected
    [[deprecated("Use field access instead!")]] bool& dyn__selected();
    // Get instance field reference: private System.Boolean _highlighted
    [[deprecated("Use field access instead!")]] bool& dyn__highlighted();
    // Get instance field reference: private System.Boolean _interactable
    [[deprecated("Use field access instead!")]] bool& dyn__interactable();
    // Get instance field reference: private System.Boolean _missionCleared
    [[deprecated("Use field access instead!")]] bool& dyn__missionCleared();
    // public System.Void set_missionCleared(System.Boolean value)
    // Offset: 0x14987D8
    void set_missionCleared(bool value);
    // public System.Boolean get_selected()
    // Offset: 0x14987E4
    bool get_selected();
    // public System.Void set_selected(System.Boolean value)
    // Offset: 0x1493678
    void set_selected(bool value);
    // public System.Boolean get_interactable()
    // Offset: 0x14987EC
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x1493834
    void set_interactable(bool value);
    // public System.Boolean get_highlighted()
    // Offset: 0x1498AE8
    bool get_highlighted();
    // public System.Void add_selectionDidChangeEvent(System.Action`1<MissionToggle> value)
    // Offset: 0x1493790
    void add_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle*>* value);
    // public System.Void remove_selectionDidChangeEvent(System.Action`1<MissionToggle> value)
    // Offset: 0x1493978
    void remove_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle*>* value);
    // public System.Void .ctor()
    // Offset: 0x1498D24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionToggle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionToggle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionToggle*, creationType>()));
    }
    // public System.Void ChangeSelection(System.Boolean value, System.Boolean callSelectionDidChange, System.Boolean ignoreCurrentValue)
    // Offset: 0x1493AB0
    void ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue);
    // public System.Void ChangeHighlight(System.Boolean value, System.Boolean ignoreCurrentValue)
    // Offset: 0x1498B18
    void ChangeHighlight(bool value, bool ignoreCurrentValue);
    // public System.Void SetText(System.String text)
    // Offset: 0x1493A1C
    void SetText(::StringW text);
    // private System.Void InternalToggle()
    // Offset: 0x1498B40
    void InternalToggle();
    // private System.Void RefreshUI()
    // Offset: 0x14987F4
    void RefreshUI();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1498B7C
    void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1498C40
    void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1498CE8
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1498D08
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // protected override System.Void Start()
    // Offset: 0x1498AF0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
  }; // MissionToggle
  #pragma pack(pop)
  static check_size<sizeof(MissionToggle), 155 + sizeof(bool)> __GlobalNamespace_MissionToggleSizeCheck;
  static_assert(sizeof(MissionToggle) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::set_missionCleared
// Il2CppName: set_missionCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(bool)>(&GlobalNamespace::MissionToggle::set_missionCleared)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "set_missionCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::get_selected
// Il2CppName: get_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionToggle::*)()>(&GlobalNamespace::MissionToggle::get_selected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "get_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::set_selected
// Il2CppName: set_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(bool)>(&GlobalNamespace::MissionToggle::set_selected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "set_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionToggle::*)()>(&GlobalNamespace::MissionToggle::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(bool)>(&GlobalNamespace::MissionToggle::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::get_highlighted
// Il2CppName: get_highlighted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionToggle::*)()>(&GlobalNamespace::MissionToggle::get_highlighted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "get_highlighted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::add_selectionDidChangeEvent
// Il2CppName: add_selectionDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::System::Action_1<::GlobalNamespace::MissionToggle*>*)>(&GlobalNamespace::MissionToggle::add_selectionDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionToggle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "add_selectionDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::remove_selectionDidChangeEvent
// Il2CppName: remove_selectionDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::System::Action_1<::GlobalNamespace::MissionToggle*>*)>(&GlobalNamespace::MissionToggle::remove_selectionDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionToggle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "remove_selectionDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::ChangeSelection
// Il2CppName: ChangeSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(bool, bool, bool)>(&GlobalNamespace::MissionToggle::ChangeSelection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callSelectionDidChange = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "ChangeSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, callSelectionDidChange, ignoreCurrentValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::ChangeHighlight
// Il2CppName: ChangeHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(bool, bool)>(&GlobalNamespace::MissionToggle::ChangeHighlight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "ChangeHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, ignoreCurrentValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::StringW)>(&GlobalNamespace::MissionToggle::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::InternalToggle
// Il2CppName: InternalToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)()>(&GlobalNamespace::MissionToggle::InternalToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "InternalToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)()>(&GlobalNamespace::MissionToggle::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::MissionToggle::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::BaseEventData*)>(&GlobalNamespace::MissionToggle::OnSubmit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::MissionToggle::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::MissionToggle::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionToggle::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionToggle::*)()>(&GlobalNamespace::MissionToggle::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionToggle*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
