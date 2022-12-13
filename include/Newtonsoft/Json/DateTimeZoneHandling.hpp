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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: DateTimeZoneHandling
  struct DateTimeZoneHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateTimeZoneHandling, "Newtonsoft.Json", "DateTimeZoneHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.DateTimeZoneHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F87DC
  struct DateTimeZoneHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateTimeZoneHandling
    constexpr DateTimeZoneHandling(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.DateTimeZoneHandling Local
    static constexpr const int Local = 0;
    // Get static field: static public Newtonsoft.Json.DateTimeZoneHandling Local
    static ::Newtonsoft::Json::DateTimeZoneHandling _get_Local();
    // Set static field: static public Newtonsoft.Json.DateTimeZoneHandling Local
    static void _set_Local(::Newtonsoft::Json::DateTimeZoneHandling value);
    // static field const value: static public Newtonsoft.Json.DateTimeZoneHandling Utc
    static constexpr const int Utc = 1;
    // Get static field: static public Newtonsoft.Json.DateTimeZoneHandling Utc
    static ::Newtonsoft::Json::DateTimeZoneHandling _get_Utc();
    // Set static field: static public Newtonsoft.Json.DateTimeZoneHandling Utc
    static void _set_Utc(::Newtonsoft::Json::DateTimeZoneHandling value);
    // static field const value: static public Newtonsoft.Json.DateTimeZoneHandling Unspecified
    static constexpr const int Unspecified = 2;
    // Get static field: static public Newtonsoft.Json.DateTimeZoneHandling Unspecified
    static ::Newtonsoft::Json::DateTimeZoneHandling _get_Unspecified();
    // Set static field: static public Newtonsoft.Json.DateTimeZoneHandling Unspecified
    static void _set_Unspecified(::Newtonsoft::Json::DateTimeZoneHandling value);
    // static field const value: static public Newtonsoft.Json.DateTimeZoneHandling RoundtripKind
    static constexpr const int RoundtripKind = 3;
    // Get static field: static public Newtonsoft.Json.DateTimeZoneHandling RoundtripKind
    static ::Newtonsoft::Json::DateTimeZoneHandling _get_RoundtripKind();
    // Set static field: static public Newtonsoft.Json.DateTimeZoneHandling RoundtripKind
    static void _set_RoundtripKind(::Newtonsoft::Json::DateTimeZoneHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.DateTimeZoneHandling
  #pragma pack(pop)
  static check_size<sizeof(DateTimeZoneHandling), 0 + sizeof(int)> __Newtonsoft_Json_DateTimeZoneHandlingSizeCheck;
  static_assert(sizeof(DateTimeZoneHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
