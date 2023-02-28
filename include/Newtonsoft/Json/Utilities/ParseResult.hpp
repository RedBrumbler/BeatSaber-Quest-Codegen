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
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ParseResult
  struct ParseResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ParseResult, "Newtonsoft.Json.Utilities", "ParseResult");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ParseResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10FDB40
  struct ParseResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParseResult
    constexpr ParseResult(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.Utilities.ParseResult None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.Utilities.ParseResult None
    static ::Newtonsoft::Json::Utilities::ParseResult _get_None();
    // Set static field: static public Newtonsoft.Json.Utilities.ParseResult None
    static void _set_None(::Newtonsoft::Json::Utilities::ParseResult value);
    // static field const value: static public Newtonsoft.Json.Utilities.ParseResult Success
    static constexpr const int Success = 1;
    // Get static field: static public Newtonsoft.Json.Utilities.ParseResult Success
    static ::Newtonsoft::Json::Utilities::ParseResult _get_Success();
    // Set static field: static public Newtonsoft.Json.Utilities.ParseResult Success
    static void _set_Success(::Newtonsoft::Json::Utilities::ParseResult value);
    // static field const value: static public Newtonsoft.Json.Utilities.ParseResult Overflow
    static constexpr const int Overflow = 2;
    // Get static field: static public Newtonsoft.Json.Utilities.ParseResult Overflow
    static ::Newtonsoft::Json::Utilities::ParseResult _get_Overflow();
    // Set static field: static public Newtonsoft.Json.Utilities.ParseResult Overflow
    static void _set_Overflow(::Newtonsoft::Json::Utilities::ParseResult value);
    // static field const value: static public Newtonsoft.Json.Utilities.ParseResult Invalid
    static constexpr const int Invalid = 3;
    // Get static field: static public Newtonsoft.Json.Utilities.ParseResult Invalid
    static ::Newtonsoft::Json::Utilities::ParseResult _get_Invalid();
    // Set static field: static public Newtonsoft.Json.Utilities.ParseResult Invalid
    static void _set_Invalid(::Newtonsoft::Json::Utilities::ParseResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Utilities.ParseResult
  #pragma pack(pop)
  static check_size<sizeof(ParseResult), 0 + sizeof(int)> __Newtonsoft_Json_Utilities_ParseResultSizeCheck;
  static_assert(sizeof(ParseResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
