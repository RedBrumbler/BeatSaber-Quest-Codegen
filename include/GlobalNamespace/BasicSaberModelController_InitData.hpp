// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BasicSaberModelController
#include "GlobalNamespace/BasicSaberModelController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BasicSaberModelController/InitData
  class BasicSaberModelController::InitData : public ::Il2CppObject {
    public:
    // public readonly UnityEngine.Color trailTintColor
    // Offset: 0x10
    UnityEngine::Color trailTintColor;
    // public System.Void .ctor(UnityEngine.Color trailTintColor)
    // Offset: 0x1971414
    static BasicSaberModelController::InitData* New_ctor(UnityEngine::Color trailTintColor);
  }; // BasicSaberModelController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicSaberModelController::InitData*, "", "BasicSaberModelController/InitData");
#pragma pack(pop)