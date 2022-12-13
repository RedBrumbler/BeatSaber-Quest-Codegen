// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.ToggleGroup
#include "UnityEngine/UI/ToggleGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::ToggleGroup::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ToggleGroup::$$c*, "UnityEngine.UI", "ToggleGroup/<>c");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ToggleGroup/UnityEngine.UI.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ToggleGroup::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UI.ToggleGroup/UnityEngine.UI.<>c <>9
    static ::UnityEngine::UI::ToggleGroup::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.ToggleGroup/UnityEngine.UI.<>c <>9
    static void _set_$$9(::UnityEngine::UI::ToggleGroup::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.UI.Toggle> <>9__12_0
    static ::System::Predicate_1<::UnityEngine::UI::Toggle*>* _get_$$9__12_0();
    // Set static field: static public System.Predicate`1<UnityEngine.UI.Toggle> <>9__12_0
    static void _set_$$9__12_0(::System::Predicate_1<::UnityEngine::UI::Toggle*>* value);
    // Get static field: static public System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>9__13_0
    static ::System::Func_2<::UnityEngine::UI::Toggle*, bool>* _get_$$9__13_0();
    // Set static field: static public System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>9__13_0
    static void _set_$$9__13_0(::System::Func_2<::UnityEngine::UI::Toggle*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x2B399F4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2B39A58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleGroup::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::ToggleGroup::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleGroup::$$c*, creationType>()));
    }
    // System.Boolean <AnyTogglesOn>b__12_0(UnityEngine.UI.Toggle x)
    // Offset: 0x2B39A60
    bool $AnyTogglesOn$b__12_0(::UnityEngine::UI::Toggle* x);
    // System.Boolean <ActiveToggles>b__13_0(UnityEngine.UI.Toggle x)
    // Offset: 0x2B39A78
    bool $ActiveToggles$b__13_0(::UnityEngine::UI::Toggle* x);
  }; // UnityEngine.UI.ToggleGroup/UnityEngine.UI.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::ToggleGroup::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::$AnyTogglesOn$b__12_0
// Il2CppName: <AnyTogglesOn>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ToggleGroup::$$c::*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::$$c::$AnyTogglesOn$b__12_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup::$$c*), "<AnyTogglesOn>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::$ActiveToggles$b__13_0
// Il2CppName: <ActiveToggles>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ToggleGroup::$$c::*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::$$c::$ActiveToggles$b__13_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup::$$c*), "<ActiveToggles>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
