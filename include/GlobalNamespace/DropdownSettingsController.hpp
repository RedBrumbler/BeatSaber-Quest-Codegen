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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DropdownSettingsController
  class DropdownSettingsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DropdownSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownSettingsController*, "", "DropdownSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DropdownSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class DropdownSettingsController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private HMUI.SimpleTextDropdown _dropdown
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::SimpleTextDropdown* dropdown;
    // Field size check
    static_assert(sizeof(::HMUI::SimpleTextDropdown*) == 0x8);
    // private System.Action dropDownValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* dropDownValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Int32 _idx
    // Size: 0x4
    // Offset: 0x28
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x2C
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.SimpleTextDropdown _dropdown
    [[deprecated("Use field access instead!")]] ::HMUI::SimpleTextDropdown*& dyn__dropdown();
    // Get instance field reference: private System.Action dropDownValueDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_dropDownValueDidChangeEvent();
    // Get instance field reference: private System.Int32 _idx
    [[deprecated("Use field access instead!")]] int& dyn__idx();
    // Get instance field reference: private System.Int32 _numberOfElements
    [[deprecated("Use field access instead!")]] int& dyn__numberOfElements();
    // public System.Void add_dropDownValueDidChangeEvent(System.Action value)
    // Offset: 0x145177C
    void add_dropDownValueDidChangeEvent(::System::Action* value);
    // public System.Void remove_dropDownValueDidChangeEvent(System.Action value)
    // Offset: 0x1451820
    void remove_dropDownValueDidChangeEvent(::System::Action* value);
    // protected System.Void .ctor()
    // Offset: 0x1451BF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DropdownSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DropdownSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DropdownSettingsController*, creationType>()));
    }
    // protected System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplyValue(int idx);
    // protected System.String TextForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW TextForValue(int idx);
    // protected System.Void OnEnable()
    // Offset: 0x14518C4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1451A74
    void OnDisable();
    // private System.Void HandleDropdownValueDidChange(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1451B4C
    void HandleDropdownValueDidChange(::HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Void RefreshUI()
    // Offset: 0x145198C
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x1451B94
    void Refresh(bool applyValue);
  }; // DropdownSettingsController
  #pragma pack(pop)
  static check_size<sizeof(DropdownSettingsController), 44 + sizeof(int)> __GlobalNamespace_DropdownSettingsControllerSizeCheck;
  static_assert(sizeof(DropdownSettingsController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::add_dropDownValueDidChangeEvent
// Il2CppName: add_dropDownValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)(::System::Action*)>(&GlobalNamespace::DropdownSettingsController::add_dropDownValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "add_dropDownValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::remove_dropDownValueDidChangeEvent
// Il2CppName: remove_dropDownValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)(::System::Action*)>(&GlobalNamespace::DropdownSettingsController::remove_dropDownValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "remove_dropDownValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DropdownSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::DropdownSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)(int)>(&GlobalNamespace::DropdownSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::DropdownSettingsController::*)(int)>(&GlobalNamespace::DropdownSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)()>(&GlobalNamespace::DropdownSettingsController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)()>(&GlobalNamespace::DropdownSettingsController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::HandleDropdownValueDidChange
// Il2CppName: HandleDropdownValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)(::HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::DropdownSettingsController::HandleDropdownValueDidChange)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "HandleDropdownValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)()>(&GlobalNamespace::DropdownSettingsController::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DropdownSettingsController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DropdownSettingsController::*)(bool)>(&GlobalNamespace::DropdownSettingsController::Refresh)> {
  static const MethodInfo* get() {
    static auto* applyValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DropdownSettingsController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{applyValue});
  }
};
