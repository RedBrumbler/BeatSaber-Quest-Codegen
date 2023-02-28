// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: KeyValuePairType
  struct KeyValuePairType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::KeyValuePairType, "Oculus.Platform", "KeyValuePairType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.KeyValuePairType
  // [TokenAttribute] Offset: FFFFFFFF
  struct KeyValuePairType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: KeyValuePairType
    constexpr KeyValuePairType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x11121CC
    // static field const value: static public Oculus.Platform.KeyValuePairType String
    static constexpr const int String = 0;
    // Get static field: static public Oculus.Platform.KeyValuePairType String
    static ::Oculus::Platform::KeyValuePairType _get_String();
    // Set static field: static public Oculus.Platform.KeyValuePairType String
    static void _set_String(::Oculus::Platform::KeyValuePairType value);
    // [DescriptionAttribute] Offset: 0x1112204
    // static field const value: static public Oculus.Platform.KeyValuePairType Int
    static constexpr const int Int = 1;
    // Get static field: static public Oculus.Platform.KeyValuePairType Int
    static ::Oculus::Platform::KeyValuePairType _get_Int();
    // Set static field: static public Oculus.Platform.KeyValuePairType Int
    static void _set_Int(::Oculus::Platform::KeyValuePairType value);
    // [DescriptionAttribute] Offset: 0x111223C
    // static field const value: static public Oculus.Platform.KeyValuePairType Double
    static constexpr const int Double = 2;
    // Get static field: static public Oculus.Platform.KeyValuePairType Double
    static ::Oculus::Platform::KeyValuePairType _get_Double();
    // Set static field: static public Oculus.Platform.KeyValuePairType Double
    static void _set_Double(::Oculus::Platform::KeyValuePairType value);
    // [DescriptionAttribute] Offset: 0x1112274
    // static field const value: static public Oculus.Platform.KeyValuePairType Unknown
    static constexpr const int Unknown = 3;
    // Get static field: static public Oculus.Platform.KeyValuePairType Unknown
    static ::Oculus::Platform::KeyValuePairType _get_Unknown();
    // Set static field: static public Oculus.Platform.KeyValuePairType Unknown
    static void _set_Unknown(::Oculus::Platform::KeyValuePairType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.KeyValuePairType
  #pragma pack(pop)
  static check_size<sizeof(KeyValuePairType), 0 + sizeof(int)> __Oculus_Platform_KeyValuePairTypeSizeCheck;
  static_assert(sizeof(KeyValuePairType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
