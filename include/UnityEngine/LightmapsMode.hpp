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
  // Autogenerated type: UnityEngine.LightmapsMode
  struct LightmapsMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.LightmapsMode NonDirectional
    static constexpr const int NonDirectional = 0;
    // Get static field: static public UnityEngine.LightmapsMode NonDirectional
    static UnityEngine::LightmapsMode _get_NonDirectional();
    // Set static field: static public UnityEngine.LightmapsMode NonDirectional
    static void _set_NonDirectional(UnityEngine::LightmapsMode value);
    // static field const value: static public UnityEngine.LightmapsMode CombinedDirectional
    static constexpr const int CombinedDirectional = 1;
    // Get static field: static public UnityEngine.LightmapsMode CombinedDirectional
    static UnityEngine::LightmapsMode _get_CombinedDirectional();
    // Set static field: static public UnityEngine.LightmapsMode CombinedDirectional
    static void _set_CombinedDirectional(UnityEngine::LightmapsMode value);
    // Creating value type constructor for type: LightmapsMode
    LightmapsMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.LightmapsMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightmapsMode, "UnityEngine", "LightmapsMode");
#pragma pack(pop)