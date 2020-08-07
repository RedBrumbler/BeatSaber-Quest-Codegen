// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: SettingsNavigationController
#include "GlobalNamespace/SettingsNavigationController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: MainSettingsMenuViewController
  class MainSettingsMenuViewController;
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
  // Autogenerated type: SettingsFlowCoordinator
  class SettingsFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SettingsFlowCoordinator::FinishAction
    struct FinishAction;
    // Autogenerated type: SettingsFlowCoordinator/FinishAction
    struct FinishAction : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public SettingsFlowCoordinator/FinishAction Cancel
      static constexpr const int Cancel = 0;
      // Get static field: static public SettingsFlowCoordinator/FinishAction Cancel
      static GlobalNamespace::SettingsFlowCoordinator::FinishAction _get_Cancel();
      // Set static field: static public SettingsFlowCoordinator/FinishAction Cancel
      static void _set_Cancel(GlobalNamespace::SettingsFlowCoordinator::FinishAction value);
      // static field const value: static public SettingsFlowCoordinator/FinishAction Ok
      static constexpr const int Ok = 1;
      // Get static field: static public SettingsFlowCoordinator/FinishAction Ok
      static GlobalNamespace::SettingsFlowCoordinator::FinishAction _get_Ok();
      // Set static field: static public SettingsFlowCoordinator/FinishAction Ok
      static void _set_Ok(GlobalNamespace::SettingsFlowCoordinator::FinishAction value);
      // static field const value: static public SettingsFlowCoordinator/FinishAction Apply
      static constexpr const int Apply = 2;
      // Get static field: static public SettingsFlowCoordinator/FinishAction Apply
      static GlobalNamespace::SettingsFlowCoordinator::FinishAction _get_Apply();
      // Set static field: static public SettingsFlowCoordinator/FinishAction Apply
      static void _set_Apply(GlobalNamespace::SettingsFlowCoordinator::FinishAction value);
      // Creating value type constructor for type: FinishAction
      FinishAction(int value_ = {}) : value{value_} {}
    }; // SettingsFlowCoordinator/FinishAction
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0xA8
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private MainSettingsMenuViewController _mainSettingsMenuViewController
    // Offset: 0xB0
    GlobalNamespace::MainSettingsMenuViewController* mainSettingsMenuViewController;
    // private SettingsNavigationController _settingsNavigationController
    // Offset: 0xB8
    GlobalNamespace::SettingsNavigationController* settingsNavigationController;
    // private System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> didFinishEvent
    // Offset: 0xC0
    System::Action_2<GlobalNamespace::SettingsFlowCoordinator*, GlobalNamespace::SettingsFlowCoordinator::FinishAction>* didFinishEvent;
    // Get static field: static private System.Int32 _selectedSettingsSubMenuInfoIdx
    static int _get__selectedSettingsSubMenuInfoIdx();
    // Set static field: static private System.Int32 _selectedSettingsSubMenuInfoIdx
    static void _set__selectedSettingsSubMenuInfoIdx(int value);
    // public System.Void add_didFinishEvent(System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> value)
    // Offset: 0xC18A38
    void add_didFinishEvent(System::Action_2<GlobalNamespace::SettingsFlowCoordinator*, GlobalNamespace::SettingsFlowCoordinator::FinishAction>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SettingsFlowCoordinator,SettingsFlowCoordinator/FinishAction> value)
    // Offset: 0xC18ADC
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::SettingsFlowCoordinator*, GlobalNamespace::SettingsFlowCoordinator::FinishAction>* value);
    // private System.Void HandleDidSelectSettingsSubMenu(SettingsSubMenuInfo settingsSubMenuInfo, System.Int32 idx)
    // Offset: 0xC19048
    void HandleDidSelectSettingsSubMenu(GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int idx);
    // private System.Void HandleSettingsNavigationControllerDidFinish(SettingsNavigationController/FinishAction finishAction)
    // Offset: 0xC19110
    void HandleSettingsNavigationControllerDidFinish(GlobalNamespace::SettingsNavigationController::FinishAction finishAction);
    // private System.Void ApplySettings()
    // Offset: 0xC191EC
    void ApplySettings();
    // private System.Void CancelSettings()
    // Offset: 0xC1922C
    void CancelSettings();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0xC18B80
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0xC18EB0
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    void DidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // public System.Void .ctor()
    // Offset: 0xC1924C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SettingsFlowCoordinator* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xC19254
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SettingsFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SettingsFlowCoordinator*, "", "SettingsFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SettingsFlowCoordinator::FinishAction, "", "SettingsFlowCoordinator/FinishAction");
#pragma pack(pop)