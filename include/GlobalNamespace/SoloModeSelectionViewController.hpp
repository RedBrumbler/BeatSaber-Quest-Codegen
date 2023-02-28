// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MenuType because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SoloModeSelectionViewController
  class SoloModeSelectionViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SoloModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloModeSelectionViewController*, "", "SoloModeSelectionViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: SoloModeSelectionViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SoloModeSelectionViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::SoloModeSelectionViewController::MenuType
    struct MenuType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SoloModeSelectionViewController/MenuType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MenuType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MenuType
      constexpr MenuType(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public SoloModeSelectionViewController/MenuType FreePlayMode
      static constexpr const int FreePlayMode = 0;
      // Get static field: static public SoloModeSelectionViewController/MenuType FreePlayMode
      static ::GlobalNamespace::SoloModeSelectionViewController::MenuType _get_FreePlayMode();
      // Set static field: static public SoloModeSelectionViewController/MenuType FreePlayMode
      static void _set_FreePlayMode(::GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // static field const value: static public SoloModeSelectionViewController/MenuType NoArrowsMode
      static constexpr const int NoArrowsMode = 1;
      // Get static field: static public SoloModeSelectionViewController/MenuType NoArrowsMode
      static ::GlobalNamespace::SoloModeSelectionViewController::MenuType _get_NoArrowsMode();
      // Set static field: static public SoloModeSelectionViewController/MenuType NoArrowsMode
      static void _set_NoArrowsMode(::GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // static field const value: static public SoloModeSelectionViewController/MenuType OneSaberMode
      static constexpr const int OneSaberMode = 2;
      // Get static field: static public SoloModeSelectionViewController/MenuType OneSaberMode
      static ::GlobalNamespace::SoloModeSelectionViewController::MenuType _get_OneSaberMode();
      // Set static field: static public SoloModeSelectionViewController/MenuType OneSaberMode
      static void _set_OneSaberMode(::GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // static field const value: static public SoloModeSelectionViewController/MenuType Back
      static constexpr const int Back = 3;
      // Get static field: static public SoloModeSelectionViewController/MenuType Back
      static ::GlobalNamespace::SoloModeSelectionViewController::MenuType _get_Back();
      // Set static field: static public SoloModeSelectionViewController/MenuType Back
      static void _set_Back(::GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // SoloModeSelectionViewController/MenuType
    #pragma pack(pop)
    static check_size<sizeof(SoloModeSelectionViewController::MenuType), 0 + sizeof(int)> __GlobalNamespace_SoloModeSelectionViewController_MenuTypeSizeCheck;
    static_assert(sizeof(SoloModeSelectionViewController::MenuType) == 0x4);
    public:
    // private UnityEngine.UI.Button _freePlayModeButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* freePlayModeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _oneSaberModeButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* oneSaberModeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _noArrowsModeButton
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Button* noArrowsModeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _dismissButton
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::UI::Button* dismissButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _freePlayModeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__freePlayModeButton();
    // Get instance field reference: private UnityEngine.UI.Button _oneSaberModeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__oneSaberModeButton();
    // Get instance field reference: private UnityEngine.UI.Button _noArrowsModeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__noArrowsModeButton();
    // Get instance field reference: private UnityEngine.UI.Button _dismissButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__dismissButton();
    // Get instance field reference: private System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> value)
    // Offset: 0x141C5CC
    void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> value)
    // Offset: 0x141C670
    void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>* value);
    // public System.Void .ctor()
    // Offset: 0x141C910
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoloModeSelectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SoloModeSelectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoloModeSelectionViewController*, creationType>()));
    }
    // private System.Void HandleMenuButton(SoloModeSelectionViewController/MenuType subMenuType)
    // Offset: 0x141C898
    void HandleMenuButton(::GlobalNamespace::SoloModeSelectionViewController::MenuType subMenuType);
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0x141C918
    void $DidActivate$b__8_0();
    // private System.Void <DidActivate>b__8_1()
    // Offset: 0x141C920
    void $DidActivate$b__8_1();
    // private System.Void <DidActivate>b__8_2()
    // Offset: 0x141C928
    void $DidActivate$b__8_2();
    // private System.Void <DidActivate>b__8_3()
    // Offset: 0x141C930
    void $DidActivate$b__8_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x141C714
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // SoloModeSelectionViewController
  #pragma pack(pop)
  static check_size<sizeof(SoloModeSelectionViewController), 144 + sizeof(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>*)> __GlobalNamespace_SoloModeSelectionViewControllerSizeCheck;
  static_assert(sizeof(SoloModeSelectionViewController) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloModeSelectionViewController::MenuType, "", "SoloModeSelectionViewController/MenuType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>*)>(&GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SoloModeSelectionViewController"), ::il2cpp_utils::GetClassFromName("", "SoloModeSelectionViewController/MenuType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::SoloModeSelectionViewController::MenuType>*)>(&GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SoloModeSelectionViewController"), ::il2cpp_utils::GetClassFromName("", "SoloModeSelectionViewController/MenuType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton
// Il2CppName: HandleMenuButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)(::GlobalNamespace::SoloModeSelectionViewController::MenuType)>(&GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton)> {
  static const MethodInfo* get() {
    static auto* subMenuType = &::il2cpp_utils::GetClassFromName("", "SoloModeSelectionViewController/MenuType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "HandleMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subMenuType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_0
// Il2CppName: <DidActivate>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)()>(&GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "<DidActivate>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_1
// Il2CppName: <DidActivate>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)()>(&GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "<DidActivate>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_2
// Il2CppName: <DidActivate>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)()>(&GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "<DidActivate>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_3
// Il2CppName: <DidActivate>b__8_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)()>(&GlobalNamespace::SoloModeSelectionViewController::$DidActivate$b__8_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "<DidActivate>b__8_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloModeSelectionViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloModeSelectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::SoloModeSelectionViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloModeSelectionViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
