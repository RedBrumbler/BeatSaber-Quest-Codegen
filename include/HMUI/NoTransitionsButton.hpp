// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: SelectionState because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: NoTransitionsButton
  class NoTransitionsButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::NoTransitionsButton);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsButton*, "HMUI", "NoTransitionsButton");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.NoTransitionsButton
  // [TokenAttribute] Offset: FFFFFFFF
  class NoTransitionsButton : public ::UnityEngine::UI::Button {
    public:
    // Nested type: ::HMUI::NoTransitionsButton::SelectionState
    struct SelectionState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.NoTransitionsButton/HMUI.SelectionState
    // [TokenAttribute] Offset: FFFFFFFF
    struct SelectionState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SelectionState
      constexpr SelectionState(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public HMUI.NoTransitionsButton/HMUI.SelectionState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Normal
      static ::HMUI::NoTransitionsButton::SelectionState _get_Normal();
      // Set static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Normal
      static void _set_Normal(::HMUI::NoTransitionsButton::SelectionState value);
      // static field const value: static public HMUI.NoTransitionsButton/HMUI.SelectionState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Highlighted
      static ::HMUI::NoTransitionsButton::SelectionState _get_Highlighted();
      // Set static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Highlighted
      static void _set_Highlighted(::HMUI::NoTransitionsButton::SelectionState value);
      // static field const value: static public HMUI.NoTransitionsButton/HMUI.SelectionState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Pressed
      static ::HMUI::NoTransitionsButton::SelectionState _get_Pressed();
      // Set static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Pressed
      static void _set_Pressed(::HMUI::NoTransitionsButton::SelectionState value);
      // static field const value: static public HMUI.NoTransitionsButton/HMUI.SelectionState Disabled
      static constexpr const int Disabled = 3;
      // Get static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Disabled
      static ::HMUI::NoTransitionsButton::SelectionState _get_Disabled();
      // Set static field: static public HMUI.NoTransitionsButton/HMUI.SelectionState Disabled
      static void _set_Disabled(::HMUI::NoTransitionsButton::SelectionState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HMUI.NoTransitionsButton/HMUI.SelectionState
    #pragma pack(pop)
    static check_size<sizeof(NoTransitionsButton::SelectionState), 0 + sizeof(int)> __HMUI_NoTransitionsButton_SelectionStateSizeCheck;
    static_assert(sizeof(NoTransitionsButton::SelectionState) == 0x4);
    public:
    // private System.Action`1<HMUI.NoTransitionsButton/HMUI.SelectionState> selectionStateDidChangeEvent
    // Size: 0x8
    // Offset: 0x100
    ::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>* selectionStateDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>*) == 0x8);
    // private HMUI.NoTransitionsButton/HMUI.SelectionState _selectionState
    // Size: 0x4
    // Offset: 0x108
    ::HMUI::NoTransitionsButton::SelectionState selectionState;
    // Field size check
    static_assert(sizeof(::HMUI::NoTransitionsButton::SelectionState) == 0x4);
    public:
    // Get instance field reference: private System.Action`1<HMUI.NoTransitionsButton/HMUI.SelectionState> selectionStateDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>*& dyn_selectionStateDidChangeEvent();
    // Get instance field reference: private HMUI.NoTransitionsButton/HMUI.SelectionState _selectionState
    [[deprecated("Use field access instead!")]] ::HMUI::NoTransitionsButton::SelectionState& dyn__selectionState();
    // public HMUI.NoTransitionsButton/HMUI.SelectionState get_selectionState()
    // Offset: 0x1704D88
    ::HMUI::NoTransitionsButton::SelectionState get_selectionState();
    // public System.Void add_selectionStateDidChangeEvent(System.Action`1<HMUI.NoTransitionsButton/HMUI.SelectionState> value)
    // Offset: 0x1704D90
    void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>* value);
    // public System.Void remove_selectionStateDidChangeEvent(System.Action`1<HMUI.NoTransitionsButton/HMUI.SelectionState> value)
    // Offset: 0x1704E38
    void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>* value);
    // public System.Void .ctor()
    // Offset: 0x1704F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoTransitionsButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::NoTransitionsButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoTransitionsButton*, creationType>()));
    }
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    // Offset: 0x1704EE0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    void DoStateTransition(::UnityEngine::UI::Selectable::SelectionState state, bool instant);
  }; // HMUI.NoTransitionsButton
  #pragma pack(pop)
  static check_size<sizeof(NoTransitionsButton), 264 + sizeof(::HMUI::NoTransitionsButton::SelectionState)> __HMUI_NoTransitionsButtonSizeCheck;
  static_assert(sizeof(NoTransitionsButton) == 0x10C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsButton::SelectionState, "HMUI", "NoTransitionsButton/SelectionState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::NoTransitionsButton::get_selectionState
// Il2CppName: get_selectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::NoTransitionsButton::SelectionState (HMUI::NoTransitionsButton::*)()>(&HMUI::NoTransitionsButton::get_selectionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::NoTransitionsButton*), "get_selectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent
// Il2CppName: add_selectionStateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>*)>(&HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "NoTransitionsButton/SelectionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NoTransitionsButton*), "add_selectionStateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent
// Il2CppName: remove_selectionStateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::NoTransitionsButton::SelectionState>*)>(&HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "NoTransitionsButton/SelectionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NoTransitionsButton*), "remove_selectionStateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::NoTransitionsButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::NoTransitionsButton::DoStateTransition
// Il2CppName: DoStateTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NoTransitionsButton::*)(::UnityEngine::UI::Selectable::SelectionState, bool)>(&HMUI::NoTransitionsButton::DoStateTransition)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable/SelectionState")->byval_arg;
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NoTransitionsButton*), "DoStateTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, instant});
  }
};
