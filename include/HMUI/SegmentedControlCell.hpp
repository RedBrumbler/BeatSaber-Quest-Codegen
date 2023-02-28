// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::SegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControlCell*, "HMUI", "SegmentedControlCell");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SegmentedControlCell
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 110CA00
  class SegmentedControlCell : public ::HMUI::SelectableCell {
    public:
    // Writing base type padding for base size: 0x42 to desired offset: 0x44
    char ___base_padding[0x2] = {};
    public:
    // private System.Int32 <cellNumber>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    int cellNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private HMUI.SegmentedControl _segmentedControl
    // Size: 0x8
    // Offset: 0x48
    ::HMUI::SegmentedControl* segmentedControl;
    // Field size check
    static_assert(sizeof(::HMUI::SegmentedControl*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <cellNumber>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$cellNumber$k__BackingField();
    // Get instance field reference: private HMUI.SegmentedControl _segmentedControl
    [[deprecated("Use field access instead!")]] ::HMUI::SegmentedControl*& dyn__segmentedControl();
    // public System.Int32 get_cellNumber()
    // Offset: 0x170C76C
    int get_cellNumber();
    // private System.Void set_cellNumber(System.Int32 value)
    // Offset: 0x170C774
    void set_cellNumber(int value);
    // public System.Void SegmentedControlSetup(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x170C1F4
    void SegmentedControlSetup(::HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // public System.Void .ctor()
    // Offset: 0x170C79C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SegmentedControlCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::SegmentedControlCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SegmentedControlCell*, creationType>()));
    }
    // protected override System.Void InternalToggle()
    // Offset: 0x170C77C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::InternalToggle()
    void InternalToggle();
  }; // HMUI.SegmentedControlCell
  #pragma pack(pop)
  static check_size<sizeof(SegmentedControlCell), 72 + sizeof(::HMUI::SegmentedControl*)> __HMUI_SegmentedControlCellSizeCheck;
  static_assert(sizeof(SegmentedControlCell) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SegmentedControlCell::get_cellNumber
// Il2CppName: get_cellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SegmentedControlCell::*)()>(&HMUI::SegmentedControlCell::get_cellNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControlCell*), "get_cellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControlCell::set_cellNumber
// Il2CppName: set_cellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)(int)>(&HMUI::SegmentedControlCell::set_cellNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControlCell*), "set_cellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControlCell::SegmentedControlSetup
// Il2CppName: SegmentedControlSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)(::HMUI::SegmentedControl*, int)>(&HMUI::SegmentedControlCell::SegmentedControlSetup)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControlCell*), "SegmentedControlSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControlCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::SegmentedControlCell::InternalToggle
// Il2CppName: InternalToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)()>(&HMUI::SegmentedControlCell::InternalToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControlCell*), "InternalToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
