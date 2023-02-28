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
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Forward declaring type: TokenImpersonationLevel
  struct TokenImpersonationLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::TokenImpersonationLevel, "System.Security.Principal", "TokenImpersonationLevel");
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.TokenImpersonationLevel
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107D708
  struct TokenImpersonationLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TokenImpersonationLevel
    constexpr TokenImpersonationLevel(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Security.Principal.TokenImpersonationLevel Anonymous
    static constexpr const int Anonymous = 1;
    // Get static field: static public System.Security.Principal.TokenImpersonationLevel Anonymous
    static ::System::Security::Principal::TokenImpersonationLevel _get_Anonymous();
    // Set static field: static public System.Security.Principal.TokenImpersonationLevel Anonymous
    static void _set_Anonymous(::System::Security::Principal::TokenImpersonationLevel value);
    // static field const value: static public System.Security.Principal.TokenImpersonationLevel Delegation
    static constexpr const int Delegation = 4;
    // Get static field: static public System.Security.Principal.TokenImpersonationLevel Delegation
    static ::System::Security::Principal::TokenImpersonationLevel _get_Delegation();
    // Set static field: static public System.Security.Principal.TokenImpersonationLevel Delegation
    static void _set_Delegation(::System::Security::Principal::TokenImpersonationLevel value);
    // static field const value: static public System.Security.Principal.TokenImpersonationLevel Identification
    static constexpr const int Identification = 2;
    // Get static field: static public System.Security.Principal.TokenImpersonationLevel Identification
    static ::System::Security::Principal::TokenImpersonationLevel _get_Identification();
    // Set static field: static public System.Security.Principal.TokenImpersonationLevel Identification
    static void _set_Identification(::System::Security::Principal::TokenImpersonationLevel value);
    // static field const value: static public System.Security.Principal.TokenImpersonationLevel Impersonation
    static constexpr const int Impersonation = 3;
    // Get static field: static public System.Security.Principal.TokenImpersonationLevel Impersonation
    static ::System::Security::Principal::TokenImpersonationLevel _get_Impersonation();
    // Set static field: static public System.Security.Principal.TokenImpersonationLevel Impersonation
    static void _set_Impersonation(::System::Security::Principal::TokenImpersonationLevel value);
    // static field const value: static public System.Security.Principal.TokenImpersonationLevel None
    static constexpr const int None = 0;
    // Get static field: static public System.Security.Principal.TokenImpersonationLevel None
    static ::System::Security::Principal::TokenImpersonationLevel _get_None();
    // Set static field: static public System.Security.Principal.TokenImpersonationLevel None
    static void _set_None(::System::Security::Principal::TokenImpersonationLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Principal.TokenImpersonationLevel
  #pragma pack(pop)
  static check_size<sizeof(TokenImpersonationLevel), 0 + sizeof(int)> __System_Security_Principal_TokenImpersonationLevelSizeCheck;
  static_assert(sizeof(TokenImpersonationLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
