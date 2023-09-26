#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
// Forward declare root types
namespace Oculus::Platform {
class VoipOptions;
}
// Type: Oculus.Platform::VoipOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13393))
// CS Name: Oculus.Platform.VoipOptions
class CORDL_TYPE VoipOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VoipOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipOptions", modifiers: " const&", def_value: None }]
constexpr VoipOptions(VoipOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipOptions", modifiers: "&&", def_value: None }]
constexpr VoipOptions(VoipOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VoipOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VoipOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VoipOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VoipOptions& operator=(VoipOptions&& o) noexcept = default;
  constexpr VoipOptions& operator=(VoipOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit VoipOptions() ;

/// @brief Method .ctor addr 0x25cb154 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method SetBitrateForNewConnections addr 0x25cb1bc size 0x6c virtual false final false
 void SetBitrateForNewConnections(Oculus::Platform::VoipBitrate value) ;

/// @brief Method SetCreateNewConnectionUseDtx addr 0x25cb228 size 0x6c virtual false final false
 void SetCreateNewConnectionUseDtx(Oculus::Platform::VoipDtxState value) ;

/// @brief Method op_Explicit addr 0x25cb294 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::VoipOptions options) ;

/// @brief Method Finalize addr 0x25cb2ec size 0xd8 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::VoipOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipOptions, "Oculus.Platform", "VoipOptions");
