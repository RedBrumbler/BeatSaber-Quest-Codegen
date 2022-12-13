// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: SettingsNavigationController
#include "GlobalNamespace/SettingsNavigationController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: MainSettingsMenuViewController
  class MainSettingsMenuViewController;
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
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
  // Forward declaring type: SettingsFlowCoordinator
  class SettingsFlowCoordinator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsFlowCoordinator*, "", "SettingsFlowCoordinator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: SettingsFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
    public:
    // Nested type: ::GlobalNamespace::SettingsFlowCoordinator::FinishAction
    struct FinishAction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SettingsFlowCoordinator/FinishAction
    // [TokenAttribute] Offset: FFFFFFFF
    struct FinishAction/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FinishAction
      constexpr FinishAction(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public SettingsFlowCoordinator/FinishAction Cancel
      static constexpr const int Cancel = 0;
      // Get static field: static public SettingsFlowCoordinator/FinishAction Cancel
      static ::GlobalNamespace::SettingsFlowCoordinator::FinishAction _get_Cancel();
      // Set static field: static public SettingsFlowCoordinator/FinishAction Cancel
      static void _set_Cancel(::GlobalNamespace::SettingsFlowCoordinator::FinishAction value);
      // static field const value: static public SettingsFlowCoordinator/FinishAction Ok
      static constexpr const int Ok = 1;
      // Get static field: static public SettingsFlowCoordinator/FinishAction Ok
      static ::GlobalNamespace::SettingsFlowCoordinator::FinishAction _get_Ok();
      // Set static field: static public SettingsFlowCoordinator/FinishAction Ok
      static void _set_Ok(::GlobalNamespace::SettingsFlowCoordinator::FinishAction value);
      // static field const value: static public SettingsFlowCoordinator/FinishAction Apply
      static constexpr const int Apply = 2;
      // Get static field: static public SettingsFlowCoordinator/FinishAction Apply
      static ::GlobalNamespace::SettingsFlowCoordinator::FinishAction _get_Apply();
      // Set static field: static public SettingsFlowCoordinator/FinishAction Apply
      static void _set_Apply(::GlobalNamespace::SettingsFlowCoordinator::FinishAction value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // SettingsFlowCoordinator/FinishAction
    #pragma pack(pop)
    static check_size<sizeof(SettingsFlowCoordinator::FinishAction), 0 + sizeof(int)> __GlobalNamespace_SettingsFlowCoordinator_FinishActionSizeCheck;
    static_assert(sizeof(SettingsFlowCoordinator::FinishAction) == 0x4);
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0x11287A8
    // private MainSettingsMenuViewController _mainSettingsMenuViewController
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::MainSettingsMenuViewController* mainSettingsMenuViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsMenuViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x11287B8
    // private SettingsNavigationController _settingsNavigationController
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::SettingsNavigationController* settingsNavigationController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SettingsNavigationController*) == 0x8);
    // private System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> didFinishEvent
    // Size: 0x8
    // Offset: 0xC0
    ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11287D8
    // Get static field: static private System.Int32 _selectedSettingsSubMenuInfoIdx
    static int _get__selectedSettingsSubMenuInfoIdx();
    // Set static field: static private System.Int32 _selectedSettingsSubMenuInfoIdx
    static void _set__selectedSettingsSubMenuInfoIdx(int value);
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private MainSettingsMenuViewController _mainSettingsMenuViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsMenuViewController*& dyn__mainSettingsMenuViewController();
    // Get instance field reference: private SettingsNavigationController _settingsNavigationController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SettingsNavigationController*& dyn__settingsNavigationController();
    // Get instance field reference: private System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> value)
    // Offset: 0x141C48C
    void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> value)
    // Offset: 0x141C530
    void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>* value);
    // public System.Void .ctor()
    // Offset: 0x141CD18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SettingsFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsFlowCoordinator*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x141CD20
    static void _cctor();
    // public System.Void ShowSecretViewController(HMUI.ViewController viewController)
    // Offset: 0x141CAA8
    void ShowSecretViewController(::HMUI::ViewController* viewController);
    // private System.Void HandleDidSelectSettingsSubMenu(SettingsSubMenuInfo settingsSubMenuInfo, System.Int32 idx)
    // Offset: 0x141CB50
    void HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int idx);
    // private System.Void ReplaceViewController(HMUI.ViewController viewController)
    // Offset: 0x141CAAC
    void ReplaceViewController(::HMUI::ViewController* viewController);
    // private System.Void HandleSettingsNavigationControllerDidFinish(SettingsNavigationController/FinishAction finishAction)
    // Offset: 0x141CBDC
    void HandleSettingsNavigationControllerDidFinish(::GlobalNamespace::SettingsNavigationController::FinishAction finishAction);
    // private System.Void ApplySettings()
    // Offset: 0x141CCB8
    void ApplySettings();
    // private System.Void CancelSettings()
    // Offset: 0x141CCF8
    void CancelSettings();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x141C5D4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x141C910
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // SettingsFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(SettingsFlowCoordinator), 192 + sizeof(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>*)> __GlobalNamespace_SettingsFlowCoordinatorSizeCheck;
  static_assert(sizeof(SettingsFlowCoordinator) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsFlowCoordinator::FinishAction, "", "SettingsFlowCoordinator/FinishAction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>*)>(&GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SettingsFlowCoordinator"), ::il2cpp_utils::GetClassFromName("", "SettingsFlowCoordinator/FinishAction")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::SettingsFlowCoordinator::FinishAction>*)>(&GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SettingsFlowCoordinator"), ::il2cpp_utils::GetClassFromName("", "SettingsFlowCoordinator/FinishAction")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SettingsFlowCoordinator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController
// Il2CppName: ShowSecretViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(&GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "ShowSecretViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu
// Il2CppName: HandleDidSelectSettingsSubMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(::GlobalNamespace::SettingsSubMenuInfo*, int)>(&GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu)> {
  static const MethodInfo* get() {
    static auto* settingsSubMenuInfo = &::il2cpp_utils::GetClassFromName("", "SettingsSubMenuInfo")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "HandleDidSelectSettingsSubMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settingsSubMenuInfo, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController
// Il2CppName: ReplaceViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(&GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "ReplaceViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinish
// Il2CppName: HandleSettingsNavigationControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(::GlobalNamespace::SettingsNavigationController::FinishAction)>(&GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* finishAction = &::il2cpp_utils::GetClassFromName("", "SettingsNavigationController/FinishAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "HandleSettingsNavigationControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finishAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::ApplySettings
// Il2CppName: ApplySettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)()>(&GlobalNamespace::SettingsFlowCoordinator::ApplySettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "ApplySettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::CancelSettings
// Il2CppName: CancelSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)()>(&GlobalNamespace::SettingsFlowCoordinator::CancelSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "CancelSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::SettingsFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::SettingsFlowCoordinator::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
