#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class Monitor;
}
// Type: System.Threading::Monitor
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2714))
// CS Name: System.Threading.Monitor
class CORDL_TYPE Monitor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Monitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: " const&", def_value: None }]
constexpr Monitor(Monitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "&&", def_value: None }]
constexpr Monitor(Monitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Monitor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Monitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Monitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Monitor& operator=(Monitor&& o) noexcept = default;
  constexpr Monitor& operator=(Monitor const& o) noexcept = default;
                


// Methods

/// @brief Method Enter addr 0x24d8aa8 size 0x4 virtual false final false
static void Enter(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Enter addr 0x24d5ea4 size 0x20 virtual false final false
static void Enter(::bs_hook::Il2CppWrapperType obj, ByRef<bool> lockTaken) ;

/// @brief Method ThrowLockTakenException addr 0x24dcd28 size 0x70 virtual false final false
static void ThrowLockTakenException() ;

/// @brief Method Exit addr 0x24d8aac size 0x4 virtual false final false
static void Exit(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Wait addr 0x24dcda4 size 0x60 virtual false final false
static bool Wait(::bs_hook::Il2CppWrapperType obj, int32_t millisecondsTimeout, bool exitContext) ;

/// @brief Method Wait addr 0x24d6674 size 0x8 virtual false final false
static bool Wait(::bs_hook::Il2CppWrapperType obj, int32_t millisecondsTimeout) ;

/// @brief Method Pulse addr 0x24d9b90 size 0x58 virtual false final false
static void Pulse(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method PulseAll addr 0x24d60dc size 0x58 virtual false final false
static void PulseAll(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Monitor_test_synchronised addr 0x24dcf84 size 0x4 virtual false final false
static bool Monitor_test_synchronised(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Monitor_pulse addr 0x24dcf88 size 0x4 virtual false final false
static void Monitor_pulse(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ObjPulse addr 0x24dcebc size 0x64 virtual false final false
static void ObjPulse(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Monitor_pulse_all addr 0x24dcf8c size 0x4 virtual false final false
static void Monitor_pulse_all(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ObjPulseAll addr 0x24dcf20 size 0x64 virtual false final false
static void ObjPulseAll(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Monitor_wait addr 0x24dcf90 size 0x4 virtual false final false
static bool Monitor_wait(::bs_hook::Il2CppWrapperType obj, int32_t ms) ;

/// @brief Method ObjWait addr 0x24dce04 size 0xb8 virtual false final false
static bool ObjWait(bool exitContext, int32_t millisecondsTimeout, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method try_enter_with_atomic_var addr 0x24dcf94 size 0x4 virtual false final false
static void try_enter_with_atomic_var(::bs_hook::Il2CppWrapperType obj, int32_t millisecondsTimeout, ByRef<bool> lockTaken) ;

/// @brief Method ReliableEnterTimeout addr 0x24dcf98 size 0x9c virtual false final false
static void ReliableEnterTimeout(::bs_hook::Il2CppWrapperType obj, int32_t timeout, ByRef<bool> lockTaken) ;

/// @brief Method ReliableEnter addr 0x24dcd98 size 0xc virtual false final false
static void ReliableEnter(::bs_hook::Il2CppWrapperType obj, ByRef<bool> lockTaken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::Monitor);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Monitor, "System.Threading", "Monitor");
