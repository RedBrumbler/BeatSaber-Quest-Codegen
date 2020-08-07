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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.AchievementType
  struct AchievementType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.AchievementType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.AchievementType Unknown
    static Oculus::Platform::AchievementType _get_Unknown();
    // Set static field: static public Oculus.Platform.AchievementType Unknown
    static void _set_Unknown(Oculus::Platform::AchievementType value);
    // static field const value: static public Oculus.Platform.AchievementType Simple
    static constexpr const int Simple = 1;
    // Get static field: static public Oculus.Platform.AchievementType Simple
    static Oculus::Platform::AchievementType _get_Simple();
    // Set static field: static public Oculus.Platform.AchievementType Simple
    static void _set_Simple(Oculus::Platform::AchievementType value);
    // static field const value: static public Oculus.Platform.AchievementType Bitfield
    static constexpr const int Bitfield = 2;
    // Get static field: static public Oculus.Platform.AchievementType Bitfield
    static Oculus::Platform::AchievementType _get_Bitfield();
    // Set static field: static public Oculus.Platform.AchievementType Bitfield
    static void _set_Bitfield(Oculus::Platform::AchievementType value);
    // static field const value: static public Oculus.Platform.AchievementType Count
    static constexpr const int Count = 3;
    // Get static field: static public Oculus.Platform.AchievementType Count
    static Oculus::Platform::AchievementType _get_Count();
    // Set static field: static public Oculus.Platform.AchievementType Count
    static void _set_Count(Oculus::Platform::AchievementType value);
    // Creating value type constructor for type: AchievementType
    AchievementType(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.AchievementType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AchievementType, "Oculus.Platform", "AchievementType");
#pragma pack(pop)