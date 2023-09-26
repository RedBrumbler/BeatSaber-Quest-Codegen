#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MockPlayerSettings_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class MockServerSettings;
}
// Type: ::MockServerSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5288))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5291))
// CS Name: MockServerSettings
class CORDL_TYPE MockServerSettings : public GlobalNamespace::MockPlayerSettings {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MockServerSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockServerSettings", modifiers: " const&", def_value: None }]
constexpr MockServerSettings(MockServerSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockServerSettings", modifiers: "&&", def_value: None }]
constexpr MockServerSettings(MockServerSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockServerSettings(void* ptr) noexcept : GlobalNamespace::MockPlayerSettings(ptr) {
}


  constexpr MockServerSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockServerSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockServerSettings& operator=(MockServerSettings&& o) noexcept = default;
  constexpr MockServerSettings& operator=(MockServerSettings const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MockServerSettings() ;

/// @brief Method .ctor addr 0x212733c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockServerSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockServerSettings, "", "MockServerSettings");
