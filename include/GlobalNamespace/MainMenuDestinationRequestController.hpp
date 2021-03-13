// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDestinationRequestManager
  class IDestinationRequestManager;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuDestinationRequestController
  // [] Offset: FFFFFFFF
  class MainMenuDestinationRequestController : public ::Il2CppObject/*, public Zenject::IInitializable, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8
    struct $ProcessDestinationRequest$d__8;
    // [InjectAttribute] Offset: 0xD1FB2C
    // private readonly IDestinationRequestManager _destinationRequestManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IDestinationRequestManager* destinationRequestManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDestinationRequestManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD1FB3C
    // private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD1FB4C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: MainMenuDestinationRequestController
    MainMenuDestinationRequestController(GlobalNamespace::IDestinationRequestManager* destinationRequestManager_ = {}, GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}) noexcept : destinationRequestManager{destinationRequestManager_}, menuScenesTransitionSetupData{menuScenesTransitionSetupData_}, gameScenesManager{gameScenesManager_}, cancellationTokenSource{cancellationTokenSource_} {}
    // Creating interface conversion operator: operator Zenject::IInitializable
    operator Zenject::IInitializable() noexcept {
      return *reinterpret_cast<Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Initialize()
    // Offset: 0x10B5000
    void Initialize_NEW();
    // public System.Void Dispose()
    // Offset: 0x10B52B0
    void Dispose_NEW();
    // private System.Void HandleGameScenesManagerInstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x10B5448
    void HandleGameScenesManagerInstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void HandleDestinationRequestManagerDidSendMenuDestinationRequest(MenuDestination menuDestination)
    // Offset: 0x10B56D8
    void HandleDestinationRequestManagerDidSendMenuDestinationRequest(GlobalNamespace::MenuDestination* menuDestination);
    // private System.Void ProcessDestinationRequest(MenuDestination menuDestination)
    // Offset: 0x10B51E8
    void ProcessDestinationRequest(GlobalNamespace::MenuDestination* menuDestination);
    // public System.Void .ctor()
    // Offset: 0x10B56DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainMenuDestinationRequestController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainMenuDestinationRequestController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainMenuDestinationRequestController*, creationType>()));
    }
  }; // MainMenuDestinationRequestController
  #pragma pack(pop)
  static check_size<sizeof(MainMenuDestinationRequestController), 40 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_MainMenuDestinationRequestControllerSizeCheck;
  static_assert(sizeof(MainMenuDestinationRequestController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuDestinationRequestController*, "", "MainMenuDestinationRequestController");