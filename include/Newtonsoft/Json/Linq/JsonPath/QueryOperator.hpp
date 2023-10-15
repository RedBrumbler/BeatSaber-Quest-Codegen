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
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Forward declaring type: QueryOperator
  struct QueryOperator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryOperator, "Newtonsoft.Json.Linq.JsonPath", "QueryOperator");
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JsonPath.QueryOperator
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  struct QueryOperator/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: QueryOperator
    constexpr QueryOperator(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator None
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_None();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator None
    static void _set_None(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Equals
    static constexpr const int Equals = 1;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Equals
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_Equals();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Equals
    static void _set_Equals(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator NotEquals
    static constexpr const int NotEquals = 2;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator NotEquals
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_NotEquals();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator NotEquals
    static void _set_NotEquals(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Exists
    static constexpr const int Exists = 3;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Exists
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_Exists();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Exists
    static void _set_Exists(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator LessThan
    static constexpr const int LessThan = 4;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator LessThan
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_LessThan();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator LessThan
    static void _set_LessThan(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator LessThanOrEquals
    static constexpr const int LessThanOrEquals = 5;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator LessThanOrEquals
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_LessThanOrEquals();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator LessThanOrEquals
    static void _set_LessThanOrEquals(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator GreaterThan
    static constexpr const int GreaterThan = 6;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator GreaterThan
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_GreaterThan();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator GreaterThan
    static void _set_GreaterThan(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator GreaterThanOrEquals
    static constexpr const int GreaterThanOrEquals = 7;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator GreaterThanOrEquals
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_GreaterThanOrEquals();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator GreaterThanOrEquals
    static void _set_GreaterThanOrEquals(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator And
    static constexpr const int And = 8;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator And
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_And();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator And
    static void _set_And(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // static field const value: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Or
    static constexpr const int Or = 9;
    // Get static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Or
    static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator _get_Or();
    // Set static field: static public Newtonsoft.Json.Linq.JsonPath.QueryOperator Or
    static void _set_Or(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Linq.JsonPath.QueryOperator
  #pragma pack(pop)
  static check_size<sizeof(QueryOperator), 0 + sizeof(int)> __Newtonsoft_Json_Linq_JsonPath_QueryOperatorSizeCheck;
  static_assert(sizeof(QueryOperator) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"