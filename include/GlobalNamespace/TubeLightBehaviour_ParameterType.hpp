// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TubeLightBehaviour
#include "GlobalNamespace/TubeLightBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TubeLightBehaviour/ParameterType
  struct TubeLightBehaviour::ParameterType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParameterType
    constexpr ParameterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TubeLightBehaviour/ParameterType Values
    static constexpr const int Values = 0;
    // Get static field: static public TubeLightBehaviour/ParameterType Values
    static GlobalNamespace::TubeLightBehaviour::ParameterType _get_Values();
    // Set static field: static public TubeLightBehaviour/ParameterType Values
    static void _set_Values(GlobalNamespace::TubeLightBehaviour::ParameterType value);
    // static field const value: static public TubeLightBehaviour/ParameterType References
    static constexpr const int References = 1;
    // Get static field: static public TubeLightBehaviour/ParameterType References
    static GlobalNamespace::TubeLightBehaviour::ParameterType _get_References();
    // Set static field: static public TubeLightBehaviour/ParameterType References
    static void _set_References(GlobalNamespace::TubeLightBehaviour::ParameterType value);
  }; // TubeLightBehaviour/ParameterType
  #pragma pack(pop)
  static check_size<sizeof(TubeLightBehaviour::ParameterType), 0 + sizeof(int)> __GlobalNamespace_TubeLightBehaviour_ParameterTypeSizeCheck;
  static_assert(sizeof(TubeLightBehaviour::ParameterType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightBehaviour::ParameterType, "", "TubeLightBehaviour/ParameterType");