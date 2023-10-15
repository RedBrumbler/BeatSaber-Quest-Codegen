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
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AceFlags
  struct AceFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceFlags, "System.Security.AccessControl", "AceFlags");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.AceFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct AceFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: AceFlags
    constexpr AceFlags(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.AccessControl.AceFlags None
    static constexpr const uint8_t None = 0u;
    // Get static field: static public System.Security.AccessControl.AceFlags None
    static ::System::Security::AccessControl::AceFlags _get_None();
    // Set static field: static public System.Security.AccessControl.AceFlags None
    static void _set_None(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags ObjectInherit
    static constexpr const uint8_t ObjectInherit = 1u;
    // Get static field: static public System.Security.AccessControl.AceFlags ObjectInherit
    static ::System::Security::AccessControl::AceFlags _get_ObjectInherit();
    // Set static field: static public System.Security.AccessControl.AceFlags ObjectInherit
    static void _set_ObjectInherit(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags ContainerInherit
    static constexpr const uint8_t ContainerInherit = 2u;
    // Get static field: static public System.Security.AccessControl.AceFlags ContainerInherit
    static ::System::Security::AccessControl::AceFlags _get_ContainerInherit();
    // Set static field: static public System.Security.AccessControl.AceFlags ContainerInherit
    static void _set_ContainerInherit(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags NoPropagateInherit
    static constexpr const uint8_t NoPropagateInherit = 4u;
    // Get static field: static public System.Security.AccessControl.AceFlags NoPropagateInherit
    static ::System::Security::AccessControl::AceFlags _get_NoPropagateInherit();
    // Set static field: static public System.Security.AccessControl.AceFlags NoPropagateInherit
    static void _set_NoPropagateInherit(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags InheritOnly
    static constexpr const uint8_t InheritOnly = 8u;
    // Get static field: static public System.Security.AccessControl.AceFlags InheritOnly
    static ::System::Security::AccessControl::AceFlags _get_InheritOnly();
    // Set static field: static public System.Security.AccessControl.AceFlags InheritOnly
    static void _set_InheritOnly(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags InheritanceFlags
    static constexpr const uint8_t InheritanceFlags = 15u;
    // Get static field: static public System.Security.AccessControl.AceFlags InheritanceFlags
    static ::System::Security::AccessControl::AceFlags _get_InheritanceFlags();
    // Set static field: static public System.Security.AccessControl.AceFlags InheritanceFlags
    static void _set_InheritanceFlags(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags Inherited
    static constexpr const uint8_t Inherited = 16u;
    // Get static field: static public System.Security.AccessControl.AceFlags Inherited
    static ::System::Security::AccessControl::AceFlags _get_Inherited();
    // Set static field: static public System.Security.AccessControl.AceFlags Inherited
    static void _set_Inherited(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags SuccessfulAccess
    static constexpr const uint8_t SuccessfulAccess = 64u;
    // Get static field: static public System.Security.AccessControl.AceFlags SuccessfulAccess
    static ::System::Security::AccessControl::AceFlags _get_SuccessfulAccess();
    // Set static field: static public System.Security.AccessControl.AceFlags SuccessfulAccess
    static void _set_SuccessfulAccess(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags FailedAccess
    static constexpr const uint8_t FailedAccess = 128u;
    // Get static field: static public System.Security.AccessControl.AceFlags FailedAccess
    static ::System::Security::AccessControl::AceFlags _get_FailedAccess();
    // Set static field: static public System.Security.AccessControl.AceFlags FailedAccess
    static void _set_FailedAccess(::System::Security::AccessControl::AceFlags value);
    // static field const value: static public System.Security.AccessControl.AceFlags AuditFlags
    static constexpr const uint8_t AuditFlags = 192u;
    // Get static field: static public System.Security.AccessControl.AceFlags AuditFlags
    static ::System::Security::AccessControl::AceFlags _get_AuditFlags();
    // Set static field: static public System.Security.AccessControl.AceFlags AuditFlags
    static void _set_AuditFlags(::System::Security::AccessControl::AceFlags value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // System.Security.AccessControl.AceFlags
  #pragma pack(pop)
  static check_size<sizeof(AceFlags), 0 + sizeof(uint8_t)> __System_Security_AccessControl_AceFlagsSizeCheck;
  static_assert(sizeof(AceFlags) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"