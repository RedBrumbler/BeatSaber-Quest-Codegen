// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
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
  // Forward declaring type: BeatmapCharacteristicSelectionViewController
  class BeatmapCharacteristicSelectionViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, "", "BeatmapCharacteristicSelectionViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicSelectionViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicSelectionViewController : public ::HMUI::ViewController {
    public:
    public:
    // private HMUI.IconSegmentedControl _beatmapCharacteristicSegmentedControl
    // Size: 0x8
    // Offset: 0x70
    ::HMUI::IconSegmentedControl* beatmapCharacteristicSegmentedControl;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControl*) == 0x8);
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private System.Action`2<BeatmapCharacteristicSelectionViewController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    public:
    // Get instance field reference: private HMUI.IconSegmentedControl _beatmapCharacteristicSegmentedControl
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControl*& dyn__beatmapCharacteristicSegmentedControl();
    // Get instance field reference: private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& dyn__beatmapCharacteristicCollection();
    // Get instance field reference: private System.Action`2<BeatmapCharacteristicSelectionViewController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>*& dyn_didSelectBeatmapCharacteristicEvent();
    // Get instance field reference: private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn__selectedBeatmapCharacteristic();
    // public BeatmapCharacteristicSO get_selectedBeatmapCharacteristic()
    // Offset: 0x13B18F4
    ::GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();
    // public System.Void add_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSelectionViewController,BeatmapCharacteristicSO> value)
    // Offset: 0x13B17AC
    void add_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSelectionViewController,BeatmapCharacteristicSO> value)
    // Offset: 0x13B1850
    void remove_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void .ctor()
    // Offset: 0x13B1CBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicSelectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicSelectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicSelectionViewController*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x13B18FC
    void Init();
    // private System.Void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x13B1C00
    void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13B1964
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13B1B54
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // BeatmapCharacteristicSelectionViewController
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicSelectionViewController), 136 + sizeof(::GlobalNamespace::BeatmapCharacteristicSO*)> __GlobalNamespace_BeatmapCharacteristicSelectionViewControllerSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicSelectionViewController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::get_selectedBeatmapCharacteristic
// Il2CppName: get_selectedBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)()>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::get_selectedBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "get_selectedBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::add_didSelectBeatmapCharacteristicEvent
// Il2CppName: add_didSelectBeatmapCharacteristicEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::add_didSelectBeatmapCharacteristicEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSelectionViewController"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "add_didSelectBeatmapCharacteristicEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::remove_didSelectBeatmapCharacteristicEvent
// Il2CppName: remove_didSelectBeatmapCharacteristicEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::remove_didSelectBeatmapCharacteristicEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSelectionViewController"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "remove_didSelectBeatmapCharacteristicEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)()>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell
// Il2CppName: HandleBeatmapCharacteristicSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(::HMUI::SegmentedControl*, int)>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "HandleBeatmapCharacteristicSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(bool, bool)>(&GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSelectionViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
