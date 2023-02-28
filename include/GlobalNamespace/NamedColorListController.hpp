// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListColorController
#include "GlobalNamespace/ListColorController.hpp"
// Including type: HMUI.IValueChanger`1
#include "HMUI/IValueChanger_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NamedColorListController
  class NamedColorListController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NamedColorListController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedColorListController*, "", "NamedColorListController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NamedColorListController
  // [TokenAttribute] Offset: FFFFFFFF
  class NamedColorListController : public ::GlobalNamespace::ListColorController/*, public ::HMUI::IValueChanger_1<int>*/ {
    public:
    // Nested type: ::GlobalNamespace::NamedColorListController::ColorValuePair
    class ColorValuePair;
    public:
    // private NamedColorListController/ColorValuePair[] _textValuePairs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::NamedColorListController::ColorValuePair*> textValuePairs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::NamedColorListController::ColorValuePair*>) == 0x8);
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x30
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: value and: valueChangedEvent
    char __padding1[0x4] = {};
    // private System.Action`1<System.Int32> valueChangedEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<int>* valueChangedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HMUI::IValueChanger_1<int>
    operator ::HMUI::IValueChanger_1<int>() noexcept {
      return *reinterpret_cast<::HMUI::IValueChanger_1<int>*>(this);
    }
    // Creating interface conversion operator: i_IValueChanger_1_int
    inline ::HMUI::IValueChanger_1<int>* i_IValueChanger_1_int() noexcept {
      return reinterpret_cast<::HMUI::IValueChanger_1<int>*>(this);
    }
    // Get instance field reference: private NamedColorListController/ColorValuePair[] _textValuePairs
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::NamedColorListController::ColorValuePair*>& dyn__textValuePairs();
    // Get instance field reference: private System.Int32 _value
    [[deprecated("Use field access instead!")]] int& dyn__value();
    // Get instance field reference: private System.Action`1<System.Int32> valueChangedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_valueChangedEvent();
    // public System.Void add_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1433D4C
    void add_valueChangedEvent(::System::Action_1<int>* value);
    // public System.Void remove_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1433DF0
    void remove_valueChangedEvent(::System::Action_1<int>* value);
    // public System.Void Init(NamedColorListController/ColorValuePair[] values, System.Int32 value)
    // Offset: 0x1433E94
    void Init(::ArrayW<::GlobalNamespace::NamedColorListController::ColorValuePair*> values, int value);
    // public System.Void SetValue(System.Int32 value)
    // Offset: 0x1433EA8
    void SetValue(int value);
    // public System.Void .ctor()
    // Offset: 0x1434014
    // Implemented from: ListColorController
    // Base method: System.Void ListColorController::.ctor()
    // Base method: System.Void IncDecColorController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedColorListController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NamedColorListController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedColorListController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1433EB8
    // Implemented from: ListColorController
    // Base method: System.Boolean ListColorController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1433F54
    // Implemented from: ListColorController
    // Base method: System.Void ListColorController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override UnityEngine.Color ColorForValue(System.Int32 idx)
    // Offset: 0x1433FCC
    // Implemented from: ListColorController
    // Base method: UnityEngine.Color ListColorController::ColorForValue(System.Int32 idx)
    ::UnityEngine::Color ColorForValue(int idx);
  }; // NamedColorListController
  #pragma pack(pop)
  static check_size<sizeof(NamedColorListController), 56 + sizeof(::System::Action_1<int>*)> __GlobalNamespace_NamedColorListControllerSizeCheck;
  static_assert(sizeof(NamedColorListController) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::add_valueChangedEvent
// Il2CppName: add_valueChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(::System::Action_1<int>*)>(&GlobalNamespace::NamedColorListController::add_valueChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "add_valueChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::remove_valueChangedEvent
// Il2CppName: remove_valueChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(::System::Action_1<int>*)>(&GlobalNamespace::NamedColorListController::remove_valueChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "remove_valueChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(::ArrayW<::GlobalNamespace::NamedColorListController::ColorValuePair*>, int)>(&GlobalNamespace::NamedColorListController::Init)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "NamedColorListController/ColorValuePair"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(int)>(&GlobalNamespace::NamedColorListController::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NamedColorListController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::NamedColorListController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(int)>(&GlobalNamespace::NamedColorListController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::ColorForValue
// Il2CppName: ColorForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::NamedColorListController::*)(int)>(&GlobalNamespace::NamedColorListController::ColorForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedColorListController*), "ColorForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
