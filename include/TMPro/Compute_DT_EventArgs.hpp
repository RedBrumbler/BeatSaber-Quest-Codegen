// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.Compute_DistanceTransform_EventTypes
#include "TMPro/Compute_DistanceTransform_EventTypes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.Compute_DT_EventArgs
  class Compute_DT_EventArgs : public ::Il2CppObject {
    public:
    // public TMPro.Compute_DistanceTransform_EventTypes EventType
    // Offset: 0x10
    TMPro::Compute_DistanceTransform_EventTypes EventType;
    // public System.Single ProgressPercentage
    // Offset: 0x14
    float ProgressPercentage;
    // public UnityEngine.Color[] Colors
    // Offset: 0x18
    ::Array<UnityEngine::Color>* Colors;
    // public System.Void .ctor(TMPro.Compute_DistanceTransform_EventTypes type, System.Single progress)
    // Offset: 0xB64578
    static Compute_DT_EventArgs* New_ctor(TMPro::Compute_DistanceTransform_EventTypes type, float progress);
    // public System.Void .ctor(TMPro.Compute_DistanceTransform_EventTypes type, UnityEngine.Color[] colors)
    // Offset: 0xB645B4
    static Compute_DT_EventArgs* New_ctor(TMPro::Compute_DistanceTransform_EventTypes type, ::Array<UnityEngine::Color>* colors);
  }; // TMPro.Compute_DT_EventArgs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::Compute_DT_EventArgs*, "TMPro", "Compute_DT_EventArgs");
#pragma pack(pop)