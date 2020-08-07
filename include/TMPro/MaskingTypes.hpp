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
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.MaskingTypes
  struct MaskingTypes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.MaskingTypes MaskOff
    static constexpr const int MaskOff = 0;
    // Get static field: static public TMPro.MaskingTypes MaskOff
    static TMPro::MaskingTypes _get_MaskOff();
    // Set static field: static public TMPro.MaskingTypes MaskOff
    static void _set_MaskOff(TMPro::MaskingTypes value);
    // static field const value: static public TMPro.MaskingTypes MaskHard
    static constexpr const int MaskHard = 1;
    // Get static field: static public TMPro.MaskingTypes MaskHard
    static TMPro::MaskingTypes _get_MaskHard();
    // Set static field: static public TMPro.MaskingTypes MaskHard
    static void _set_MaskHard(TMPro::MaskingTypes value);
    // static field const value: static public TMPro.MaskingTypes MaskSoft
    static constexpr const int MaskSoft = 2;
    // Get static field: static public TMPro.MaskingTypes MaskSoft
    static TMPro::MaskingTypes _get_MaskSoft();
    // Set static field: static public TMPro.MaskingTypes MaskSoft
    static void _set_MaskSoft(TMPro::MaskingTypes value);
    // Creating value type constructor for type: MaskingTypes
    MaskingTypes(int value_ = {}) : value{value_} {}
  }; // TMPro.MaskingTypes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaskingTypes, "TMPro", "MaskingTypes");
#pragma pack(pop)