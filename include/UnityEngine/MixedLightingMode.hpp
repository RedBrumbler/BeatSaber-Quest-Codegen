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
  // Autogenerated type: UnityEngine.MixedLightingMode
  struct MixedLightingMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.MixedLightingMode IndirectOnly
    static constexpr const int IndirectOnly = 0;
    // Get static field: static public UnityEngine.MixedLightingMode IndirectOnly
    static UnityEngine::MixedLightingMode _get_IndirectOnly();
    // Set static field: static public UnityEngine.MixedLightingMode IndirectOnly
    static void _set_IndirectOnly(UnityEngine::MixedLightingMode value);
    // static field const value: static public UnityEngine.MixedLightingMode Shadowmask
    static constexpr const int Shadowmask = 2;
    // Get static field: static public UnityEngine.MixedLightingMode Shadowmask
    static UnityEngine::MixedLightingMode _get_Shadowmask();
    // Set static field: static public UnityEngine.MixedLightingMode Shadowmask
    static void _set_Shadowmask(UnityEngine::MixedLightingMode value);
    // static field const value: static public UnityEngine.MixedLightingMode Subtractive
    static constexpr const int Subtractive = 1;
    // Get static field: static public UnityEngine.MixedLightingMode Subtractive
    static UnityEngine::MixedLightingMode _get_Subtractive();
    // Set static field: static public UnityEngine.MixedLightingMode Subtractive
    static void _set_Subtractive(UnityEngine::MixedLightingMode value);
    // Creating value type constructor for type: MixedLightingMode
    MixedLightingMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.MixedLightingMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MixedLightingMode, "UnityEngine", "MixedLightingMode");
#pragma pack(pop)