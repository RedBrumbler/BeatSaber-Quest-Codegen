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
  // Forward declaring type: RoomType
  struct RoomType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomType, "Oculus.Platform", "RoomType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RoomType
  // [TokenAttribute] Offset: FFFFFFFF
  struct RoomType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RoomType
    constexpr RoomType(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x110ED14
    // static field const value: static public Oculus.Platform.RoomType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RoomType Unknown
    static ::Oculus::Platform::RoomType _get_Unknown();
    // Set static field: static public Oculus.Platform.RoomType Unknown
    static void _set_Unknown(::Oculus::Platform::RoomType value);
    // [DescriptionAttribute] Offset: 0x110ED4C
    // static field const value: static public Oculus.Platform.RoomType Matchmaking
    static constexpr const int Matchmaking = 1;
    // Get static field: static public Oculus.Platform.RoomType Matchmaking
    static ::Oculus::Platform::RoomType _get_Matchmaking();
    // Set static field: static public Oculus.Platform.RoomType Matchmaking
    static void _set_Matchmaking(::Oculus::Platform::RoomType value);
    // [DescriptionAttribute] Offset: 0x110ED84
    // static field const value: static public Oculus.Platform.RoomType Moderated
    static constexpr const int Moderated = 2;
    // Get static field: static public Oculus.Platform.RoomType Moderated
    static ::Oculus::Platform::RoomType _get_Moderated();
    // Set static field: static public Oculus.Platform.RoomType Moderated
    static void _set_Moderated(::Oculus::Platform::RoomType value);
    // [DescriptionAttribute] Offset: 0x110EDBC
    // static field const value: static public Oculus.Platform.RoomType Private
    static constexpr const int Private = 3;
    // Get static field: static public Oculus.Platform.RoomType Private
    static ::Oculus::Platform::RoomType _get_Private();
    // Set static field: static public Oculus.Platform.RoomType Private
    static void _set_Private(::Oculus::Platform::RoomType value);
    // [DescriptionAttribute] Offset: 0x110EDF4
    // static field const value: static public Oculus.Platform.RoomType Solo
    static constexpr const int Solo = 4;
    // Get static field: static public Oculus.Platform.RoomType Solo
    static ::Oculus::Platform::RoomType _get_Solo();
    // Set static field: static public Oculus.Platform.RoomType Solo
    static void _set_Solo(::Oculus::Platform::RoomType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.RoomType
  #pragma pack(pop)
  static check_size<sizeof(RoomType), 0 + sizeof(int)> __Oculus_Platform_RoomTypeSizeCheck;
  static_assert(sizeof(RoomType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
