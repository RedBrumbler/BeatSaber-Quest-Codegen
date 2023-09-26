#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace Zenject {
class IInitializable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class VRPlatformEventsDebugger;
}
// Type: ::VRPlatformEventsDebugger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13960))
// CS Name: VRPlatformEventsDebugger
class CORDL_TYPE VRPlatformEventsDebugger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IInitializable
constexpr operator  Zenject::IInitializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VRPlatformEventsDebugger() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRPlatformEventsDebugger", modifiers: " const&", def_value: None }]
constexpr VRPlatformEventsDebugger(VRPlatformEventsDebugger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRPlatformEventsDebugger", modifiers: "&&", def_value: None }]
constexpr VRPlatformEventsDebugger(VRPlatformEventsDebugger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRPlatformEventsDebugger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VRPlatformEventsDebugger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRPlatformEventsDebugger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRPlatformEventsDebugger& operator=(VRPlatformEventsDebugger&& o) noexcept = default;
  constexpr VRPlatformEventsDebugger& operator=(VRPlatformEventsDebugger const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;


// Properties

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;


// Methods

/// @brief Method get_loggerPrefix addr 0x1fc9c50 size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method Initialize addr 0x1fc9c90 size 0x400 virtual true final true
 void Initialize() ;

/// @brief Method Dispose addr 0x1fca090 size 0x404 virtual true final true
 void Dispose() ;

/// @brief Method HandleInputFocusWasCaptured addr 0x1fca494 size 0x4 virtual false final false
 void HandleInputFocusWasCaptured() ;

/// @brief Method HandleInputFocusWasReleased addr 0x1fca498 size 0x4 virtual false final false
 void HandleInputFocusWasReleased() ;

/// @brief Method HandleHMDUnmounted addr 0x1fca49c size 0x4 virtual false final false
 void HandleHMDUnmounted() ;

/// @brief Method HandleHMDMounted addr 0x1fca4a0 size 0x4 virtual false final false
 void HandleHMDMounted() ;

/// @brief Method HandleVRFocusWasCaptured addr 0x1fca4a4 size 0x4 virtual false final false
 void HandleVRFocusWasCaptured() ;

/// @brief Method HandleVRFocusWasReleased addr 0x1fca4a8 size 0x4 virtual false final false
 void HandleVRFocusWasReleased() ;

// Ctor Parameters []
explicit VRPlatformEventsDebugger() ;

/// @brief Method .ctor addr 0x1fca4ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VRPlatformEventsDebugger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRPlatformEventsDebugger, "", "VRPlatformEventsDebugger");
