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
  // Autogenerated type: UnityEngine.WrapMode
  struct WrapMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.WrapMode Once
    static constexpr const int Once = 1;
    // Get static field: static public UnityEngine.WrapMode Once
    static UnityEngine::WrapMode _get_Once();
    // Set static field: static public UnityEngine.WrapMode Once
    static void _set_Once(UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode Loop
    static constexpr const int Loop = 2;
    // Get static field: static public UnityEngine.WrapMode Loop
    static UnityEngine::WrapMode _get_Loop();
    // Set static field: static public UnityEngine.WrapMode Loop
    static void _set_Loop(UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode PingPong
    static constexpr const int PingPong = 4;
    // Get static field: static public UnityEngine.WrapMode PingPong
    static UnityEngine::WrapMode _get_PingPong();
    // Set static field: static public UnityEngine.WrapMode PingPong
    static void _set_PingPong(UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.WrapMode Default
    static UnityEngine::WrapMode _get_Default();
    // Set static field: static public UnityEngine.WrapMode Default
    static void _set_Default(UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode ClampForever
    static constexpr const int ClampForever = 8;
    // Get static field: static public UnityEngine.WrapMode ClampForever
    static UnityEngine::WrapMode _get_ClampForever();
    // Set static field: static public UnityEngine.WrapMode ClampForever
    static void _set_ClampForever(UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode Clamp
    static constexpr const int Clamp = 1;
    // Get static field: static public UnityEngine.WrapMode Clamp
    static UnityEngine::WrapMode _get_Clamp();
    // Set static field: static public UnityEngine.WrapMode Clamp
    static void _set_Clamp(UnityEngine::WrapMode value);
    // Creating value type constructor for type: WrapMode
    WrapMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.WrapMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WrapMode, "UnityEngine", "WrapMode");
#pragma pack(pop)