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
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TubeBloomPrePassLightUpdater
  class TubeBloomPrePassLightUpdater : public UnityEngine::MonoBehaviour {
    public:
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Offset: 0x18
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void LateUpdate()
    // Offset: 0x1D050C4
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1D050DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TubeBloomPrePassLightUpdater* New_ctor();
  }; // TubeBloomPrePassLightUpdater
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLightUpdater*, "", "TubeBloomPrePassLightUpdater");
#pragma pack(pop)