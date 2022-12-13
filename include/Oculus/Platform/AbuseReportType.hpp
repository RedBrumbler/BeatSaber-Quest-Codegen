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
  // Forward declaring type: AbuseReportType
  struct AbuseReportType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReportType, "Oculus.Platform", "AbuseReportType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AbuseReportType
  // [TokenAttribute] Offset: FFFFFFFF
  struct AbuseReportType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AbuseReportType
    constexpr AbuseReportType(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x110CD44
    // static field const value: static public Oculus.Platform.AbuseReportType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.AbuseReportType Unknown
    static ::Oculus::Platform::AbuseReportType _get_Unknown();
    // Set static field: static public Oculus.Platform.AbuseReportType Unknown
    static void _set_Unknown(::Oculus::Platform::AbuseReportType value);
    // [DescriptionAttribute] Offset: 0x110CD7C
    // static field const value: static public Oculus.Platform.AbuseReportType Object
    static constexpr const int Object = 1;
    // Get static field: static public Oculus.Platform.AbuseReportType Object
    static ::Oculus::Platform::AbuseReportType _get_Object();
    // Set static field: static public Oculus.Platform.AbuseReportType Object
    static void _set_Object(::Oculus::Platform::AbuseReportType value);
    // [DescriptionAttribute] Offset: 0x110CDB4
    // static field const value: static public Oculus.Platform.AbuseReportType User
    static constexpr const int User = 2;
    // Get static field: static public Oculus.Platform.AbuseReportType User
    static ::Oculus::Platform::AbuseReportType _get_User();
    // Set static field: static public Oculus.Platform.AbuseReportType User
    static void _set_User(::Oculus::Platform::AbuseReportType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.AbuseReportType
  #pragma pack(pop)
  static check_size<sizeof(AbuseReportType), 0 + sizeof(int)> __Oculus_Platform_AbuseReportTypeSizeCheck;
  static_assert(sizeof(AbuseReportType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
