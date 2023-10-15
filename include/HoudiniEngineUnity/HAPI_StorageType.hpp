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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_StorageType
  struct HAPI_StorageType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_StorageType, "HoudiniEngineUnity", "HAPI_StorageType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_StorageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_StorageType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_StorageType
    constexpr HAPI_StorageType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INVALID
    static constexpr const int HAPI_STORAGETYPE_INVALID = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INVALID
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INVALID
    static void _set_HAPI_STORAGETYPE_INVALID(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT
    static constexpr const int HAPI_STORAGETYPE_INT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_INT();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT
    static void _set_HAPI_STORAGETYPE_INT(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT64
    static constexpr const int HAPI_STORAGETYPE_INT64 = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT64
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_INT64();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT64
    static void _set_HAPI_STORAGETYPE_INT64(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_FLOAT
    static constexpr const int HAPI_STORAGETYPE_FLOAT = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_FLOAT
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_FLOAT();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_FLOAT
    static void _set_HAPI_STORAGETYPE_FLOAT(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_FLOAT64
    static constexpr const int HAPI_STORAGETYPE_FLOAT64 = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_FLOAT64
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_FLOAT64();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_FLOAT64
    static void _set_HAPI_STORAGETYPE_FLOAT64(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_STRING
    static constexpr const int HAPI_STORAGETYPE_STRING = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_STRING
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_STRING();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_STRING
    static void _set_HAPI_STORAGETYPE_STRING(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_UINT8
    static constexpr const int HAPI_STORAGETYPE_UINT8 = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_UINT8
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_UINT8();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_UINT8
    static void _set_HAPI_STORAGETYPE_UINT8(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT8
    static constexpr const int HAPI_STORAGETYPE_INT8 = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT8
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_INT8();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT8
    static void _set_HAPI_STORAGETYPE_INT8(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT16
    static constexpr const int HAPI_STORAGETYPE_INT16 = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT16
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_INT16();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_INT16
    static void _set_HAPI_STORAGETYPE_INT16(::HoudiniEngineUnity::HAPI_StorageType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_MAX
    static constexpr const int HAPI_STORAGETYPE_MAX = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_MAX
    static ::HoudiniEngineUnity::HAPI_StorageType _get_HAPI_STORAGETYPE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_StorageType HAPI_STORAGETYPE_MAX
    static void _set_HAPI_STORAGETYPE_MAX(::HoudiniEngineUnity::HAPI_StorageType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_StorageType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_StorageType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_StorageTypeSizeCheck;
  static_assert(sizeof(HAPI_StorageType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"