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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CryptoStreamMode
  struct CryptoStreamMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoStreamMode, "System.Security.Cryptography", "CryptoStreamMode");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptoStreamMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107D8E0
  struct CryptoStreamMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CryptoStreamMode
    constexpr CryptoStreamMode(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Security.Cryptography.CryptoStreamMode Read
    static constexpr const int Read = 0;
    // Get static field: static public System.Security.Cryptography.CryptoStreamMode Read
    static ::System::Security::Cryptography::CryptoStreamMode _get_Read();
    // Set static field: static public System.Security.Cryptography.CryptoStreamMode Read
    static void _set_Read(::System::Security::Cryptography::CryptoStreamMode value);
    // static field const value: static public System.Security.Cryptography.CryptoStreamMode Write
    static constexpr const int Write = 1;
    // Get static field: static public System.Security.Cryptography.CryptoStreamMode Write
    static ::System::Security::Cryptography::CryptoStreamMode _get_Write();
    // Set static field: static public System.Security.Cryptography.CryptoStreamMode Write
    static void _set_Write(::System::Security::Cryptography::CryptoStreamMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.CryptoStreamMode
  #pragma pack(pop)
  static check_size<sizeof(CryptoStreamMode), 0 + sizeof(int)> __System_Security_Cryptography_CryptoStreamModeSizeCheck;
  static_assert(sizeof(CryptoStreamMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
