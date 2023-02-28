// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Tuple_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: KeyBindingType because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: KeyboardBinder
  class KeyboardBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::KeyboardBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::KeyboardBinder*, "HMUI", "KeyboardBinder");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.KeyboardBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyboardBinder : public ::Il2CppObject {
    public:
    // Nested type: ::HMUI::KeyboardBinder::KeyBindingType
    struct KeyBindingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.KeyboardBinder/HMUI.KeyBindingType
    // [TokenAttribute] Offset: FFFFFFFF
    struct KeyBindingType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: KeyBindingType
      constexpr KeyBindingType(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyDown
      static constexpr const int KeyDown = 0;
      // Get static field: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyDown
      static ::HMUI::KeyboardBinder::KeyBindingType _get_KeyDown();
      // Set static field: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyDown
      static void _set_KeyDown(::HMUI::KeyboardBinder::KeyBindingType value);
      // static field const value: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyUp
      static constexpr const int KeyUp = 1;
      // Get static field: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyUp
      static ::HMUI::KeyboardBinder::KeyBindingType _get_KeyUp();
      // Set static field: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyUp
      static void _set_KeyUp(::HMUI::KeyboardBinder::KeyBindingType value);
      // static field const value: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyPress
      static constexpr const int KeyPress = 2;
      // Get static field: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyPress
      static ::HMUI::KeyboardBinder::KeyBindingType _get_KeyPress();
      // Set static field: static public HMUI.KeyboardBinder/HMUI.KeyBindingType KeyPress
      static void _set_KeyPress(::HMUI::KeyboardBinder::KeyBindingType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HMUI.KeyboardBinder/HMUI.KeyBindingType
    #pragma pack(pop)
    static check_size<sizeof(KeyboardBinder::KeyBindingType), 0 + sizeof(int)> __HMUI_KeyboardBinder_KeyBindingTypeSizeCheck;
    static_assert(sizeof(KeyboardBinder::KeyBindingType) == 0x4);
    public:
    // private System.Boolean <enabled>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: bindings
    char __padding0[0x7] = {};
    // private System.Collections.Generic.List`1<System.Tuple`3<UnityEngine.KeyCode,HMUI.KeyboardBinder/HMUI.KeyBindingType,UnityEngine.Events.UnityAction`1<System.Boolean>>> _bindings
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>* bindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean <enabled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$enabled$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Tuple`3<UnityEngine.KeyCode,HMUI.KeyboardBinder/HMUI.KeyBindingType,UnityEngine.Events.UnityAction`1<System.Boolean>>> _bindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>*& dyn__bindings();
    // public System.Boolean get_enabled()
    // Offset: 0x1702080
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x1702088
    void set_enabled(bool value);
    // public System.Void .ctor()
    // Offset: 0x1702094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::KeyboardBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardBinder*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.KeyCode keycode, HMUI.KeyboardBinder/HMUI.KeyBindingType keyBindingType, System.Action`1<System.Boolean> action)
    // Offset: 0x170212C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardBinder* New_ctor(::UnityEngine::KeyCode keycode, ::HMUI::KeyboardBinder::KeyBindingType keyBindingType, ::System::Action_1<bool>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::KeyboardBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardBinder*, creationType>(keycode, keyBindingType, action)));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`3<UnityEngine.KeyCode,HMUI.KeyboardBinder/HMUI.KeyBindingType,System.Action`1<System.Boolean>>> bindingData)
    // Offset: 0x170225C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::System::Action_1<bool>*>*>* bindingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::KeyboardBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardBinder*, creationType>(bindingData)));
    }
    // private System.Void Init()
    // Offset: 0x17020BC
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`3<UnityEngine.KeyCode,HMUI.KeyboardBinder/HMUI.KeyBindingType,System.Action`1<System.Boolean>>> bindingData)
    // Offset: 0x1702294
    void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);
    // public System.Void AddBinding(UnityEngine.KeyCode keyCode, HMUI.KeyboardBinder/HMUI.KeyBindingType keyBindingType, System.Action`1<System.Boolean> action)
    // Offset: 0x170217C
    void AddBinding(::UnityEngine::KeyCode keyCode, ::HMUI::KeyboardBinder::KeyBindingType keyBindingType, ::System::Action_1<bool>* action);
    // public System.Void ClearBindings()
    // Offset: 0x17023A0
    void ClearBindings();
    // public System.Void ManualUpdate()
    // Offset: 0x1702400
    void ManualUpdate();
  }; // HMUI.KeyboardBinder
  #pragma pack(pop)
  static check_size<sizeof(KeyboardBinder), 24 + sizeof(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>*)> __HMUI_KeyboardBinderSizeCheck;
  static_assert(sizeof(KeyboardBinder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::KeyboardBinder::KeyBindingType, "HMUI", "KeyboardBinder/KeyBindingType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::KeyboardBinder::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::KeyboardBinder::*)()>(&HMUI::KeyboardBinder::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::KeyboardBinder::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::KeyboardBinder::*)(bool)>(&HMUI::KeyboardBinder::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::KeyboardBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::KeyboardBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::KeyboardBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::KeyboardBinder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::KeyboardBinder::*)()>(&HMUI::KeyboardBinder::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::KeyboardBinder::AddBindings
// Il2CppName: AddBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::System::Action_1<bool>*>*>*)>(&HMUI::KeyboardBinder::AddBindings)> {
  static const MethodInfo* get() {
    static auto* bindingData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode"), ::il2cpp_utils::GetClassFromName("HMUI", "KeyboardBinder/KeyBindingType"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "AddBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingData});
  }
};
// Writing MetadataGetter for method: HMUI::KeyboardBinder::AddBinding
// Il2CppName: AddBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::KeyboardBinder::KeyBindingType, ::System::Action_1<bool>*)>(&HMUI::KeyboardBinder::AddBinding)> {
  static const MethodInfo* get() {
    static auto* keyCode = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* keyBindingType = &::il2cpp_utils::GetClassFromName("HMUI", "KeyboardBinder/KeyBindingType")->byval_arg;
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "AddBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyCode, keyBindingType, action});
  }
};
// Writing MetadataGetter for method: HMUI::KeyboardBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::KeyboardBinder::*)()>(&HMUI::KeyboardBinder::ClearBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::KeyboardBinder::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::KeyboardBinder::*)()>(&HMUI::KeyboardBinder::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::KeyboardBinder*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
