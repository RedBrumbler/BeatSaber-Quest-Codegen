#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementSection;
}
// Type: System.Net.Configuration::ConnectionManagementSection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16094))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8438))
// CS Name: System.Net.Configuration.ConnectionManagementSection
class CORDL_TYPE ConnectionManagementSection : public System::Configuration::ConfigurationSection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectionManagementSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementSection", modifiers: " const&", def_value: None }]
constexpr ConnectionManagementSection(ConnectionManagementSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementSection", modifiers: "&&", def_value: None }]
constexpr ConnectionManagementSection(ConnectionManagementSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionManagementSection(void* ptr) noexcept : System::Configuration::ConfigurationSection(ptr) {
}


  constexpr ConnectionManagementSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionManagementSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionManagementSection& operator=(ConnectionManagementSection&& o) noexcept = default;
  constexpr ConnectionManagementSection& operator=(ConnectionManagementSection const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit ConnectionManagementSection() ;

/// @brief Method .ctor addr 0x27e2418 size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27e2450 size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::ConnectionManagementSection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::ConnectionManagementSection, "System.Net.Configuration", "ConnectionManagementSection");
