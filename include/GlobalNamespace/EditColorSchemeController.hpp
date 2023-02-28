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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeColorsToggleGroup
  class ColorSchemeColorsToggleGroup;
  // Forward declaring type: RGBPanelController
  class RGBPanelController;
  // Forward declaring type: HSVPanelController
  class HSVPanelController;
  // Forward declaring type: PreviousColorPanelController
  class PreviousColorPanelController;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorChangeUIEventType
  struct ColorChangeUIEventType;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EditColorSchemeController
  class EditColorSchemeController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EditColorSchemeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditColorSchemeController*, "", "EditColorSchemeController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: EditColorSchemeController
  // [TokenAttribute] Offset: FFFFFFFF
  class EditColorSchemeController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private ColorSchemeColorsToggleGroup _colorSchemeColorsToggleGroup
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorSchemeColorsToggleGroup* colorSchemeColorsToggleGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeColorsToggleGroup*) == 0x8);
    // private RGBPanelController _rgbPanelController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::RGBPanelController* rgbPanelController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RGBPanelController*) == 0x8);
    // private HSVPanelController _hsvPanelController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::HSVPanelController* hsvPanelController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HSVPanelController*) == 0x8);
    // private PreviousColorPanelController _previousColorPanelController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PreviousColorPanelController* previousColorPanelController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PreviousColorPanelController*) == 0x8);
    // private UnityEngine.UI.Button _closeButton
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Button* closeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<ColorScheme> didChangeColorSchemeEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ColorScheme*>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x50
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSchemeColorsToggleGroup _colorSchemeColorsToggleGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSchemeColorsToggleGroup*& dyn__colorSchemeColorsToggleGroup();
    // Get instance field reference: private RGBPanelController _rgbPanelController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RGBPanelController*& dyn__rgbPanelController();
    // Get instance field reference: private HSVPanelController _hsvPanelController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HSVPanelController*& dyn__hsvPanelController();
    // Get instance field reference: private PreviousColorPanelController _previousColorPanelController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PreviousColorPanelController*& dyn__previousColorPanelController();
    // Get instance field reference: private UnityEngine.UI.Button _closeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__closeButton();
    // Get instance field reference: private System.Action didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didFinishEvent();
    // Get instance field reference: private System.Action`1<ColorScheme> didChangeColorSchemeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ColorScheme*>*& dyn_didChangeColorSchemeEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x13BD10C
    void add_didFinishEvent(::System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x13BD1B0
    void remove_didFinishEvent(::System::Action* value);
    // public System.Void add_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0x13BD254
    void add_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);
    // public System.Void remove_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0x13BD2F8
    void remove_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);
    // public System.Void .ctor()
    // Offset: 0x13BDB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditColorSchemeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EditColorSchemeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditColorSchemeController*, creationType>()));
    }
    // public System.Void SetColorScheme(ColorScheme colorScheme)
    // Offset: 0x13BD39C
    void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);
    // protected System.Void Start()
    // Offset: 0x13BD3B8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13BD5F4
    void OnDestroy();
    // private System.Void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine.Color color)
    // Offset: 0x13BD7C8
    void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(::UnityEngine::Color color);
    // private System.Void HandleRGBPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x13BD854
    void HandleRGBPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandleHSVPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x13BD970
    void HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine.Color color)
    // Offset: 0x13BDA8C
    void HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color);
    // private System.Void <Start>b__13_0()
    // Offset: 0x13BDB98
    void $Start$b__13_0();
  }; // EditColorSchemeController
  #pragma pack(pop)
  static check_size<sizeof(EditColorSchemeController), 80 + sizeof(::HMUI::ButtonBinder*)> __GlobalNamespace_EditColorSchemeControllerSizeCheck;
  static_assert(sizeof(EditColorSchemeController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::System::Action*)>(&GlobalNamespace::EditColorSchemeController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::System::Action*)>(&GlobalNamespace::EditColorSchemeController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::add_didChangeColorSchemeEvent
// Il2CppName: add_didChangeColorSchemeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::System::Action_1<::GlobalNamespace::ColorScheme*>*)>(&GlobalNamespace::EditColorSchemeController::add_didChangeColorSchemeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorScheme")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "add_didChangeColorSchemeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::remove_didChangeColorSchemeEvent
// Il2CppName: remove_didChangeColorSchemeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::System::Action_1<::GlobalNamespace::ColorScheme*>*)>(&GlobalNamespace::EditColorSchemeController::remove_didChangeColorSchemeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorScheme")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "remove_didChangeColorSchemeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::SetColorScheme
// Il2CppName: SetColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::GlobalNamespace::ColorScheme*)>(&GlobalNamespace::EditColorSchemeController::SetColorScheme)> {
  static const MethodInfo* get() {
    static auto* colorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "SetColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorScheme});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)()>(&GlobalNamespace::EditColorSchemeController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)()>(&GlobalNamespace::EditColorSchemeController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandleColorSchemeColorsToggleGroupSelectedColorDidChange
// Il2CppName: HandleColorSchemeColorsToggleGroupSelectedColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color)>(&GlobalNamespace::EditColorSchemeController::HandleColorSchemeColorsToggleGroupSelectedColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandleColorSchemeColorsToggleGroupSelectedColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandleRGBPanelControllerColorDidChange
// Il2CppName: HandleRGBPanelControllerColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::EditColorSchemeController::HandleRGBPanelControllerColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandleRGBPanelControllerColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandleHSVPanelControllerColorDidChange
// Il2CppName: HandleHSVPanelControllerColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::EditColorSchemeController::HandleHSVPanelControllerColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandleHSVPanelControllerColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandlePreviousColorPanelControllerColorWasSelected
// Il2CppName: HandlePreviousColorPanelControllerColorWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color)>(&GlobalNamespace::EditColorSchemeController::HandlePreviousColorPanelControllerColorWasSelected)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandlePreviousColorPanelControllerColorWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::$Start$b__13_0
// Il2CppName: <Start>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)()>(&GlobalNamespace::EditColorSchemeController::$Start$b__13_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "<Start>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
