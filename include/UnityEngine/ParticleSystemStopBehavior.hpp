// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystemStopBehavior
  struct ParticleSystemStopBehavior : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static constexpr const int StopEmittingAndClear = 0;
    // Get static field: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static UnityEngine::ParticleSystemStopBehavior _get_StopEmittingAndClear();
    // Set static field: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static void _set_StopEmittingAndClear(UnityEngine::ParticleSystemStopBehavior value);
    // static field const value: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static constexpr const int StopEmitting = 1;
    // Get static field: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static UnityEngine::ParticleSystemStopBehavior _get_StopEmitting();
    // Set static field: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static void _set_StopEmitting(UnityEngine::ParticleSystemStopBehavior value);
    // Creating value type constructor for type: ParticleSystemStopBehavior
    ParticleSystemStopBehavior(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ParticleSystemStopBehavior
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemStopBehavior, "UnityEngine", "ParticleSystemStopBehavior");
#pragma pack(pop)