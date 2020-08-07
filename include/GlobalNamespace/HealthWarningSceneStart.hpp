// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningFlowCoordinator
  class HealthWarningFlowCoordinator;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HierarchyManager
  class HierarchyManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HealthWarningSceneStart
  class HealthWarningSceneStart : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::HealthWarningSceneStart::$Start$d__3
    class $Start$d__3;
    // private HealthWarningFlowCoordinator _healthWarninglowCoordinator
    // Offset: 0x18
    GlobalNamespace::HealthWarningFlowCoordinator* healthWarninglowCoordinator;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private HMUI.HierarchyManager _hierarchyManager
    // Offset: 0x28
    HMUI::HierarchyManager* hierarchyManager;
    // public System.Collections.IEnumerator Start()
    // Offset: 0xB43AFC
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0xB43BA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HealthWarningSceneStart* New_ctor();
  }; // HealthWarningSceneStart
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneStart*, "", "HealthWarningSceneStart");
#pragma pack(pop)