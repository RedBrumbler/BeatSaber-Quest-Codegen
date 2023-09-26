#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsNetworkInterface;
}
// Type: System.Net.NetworkInformation::MacOsNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8162))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8150))
// CS Name: System.Net.NetworkInformation.MacOsNetworkInterface
class CORDL_TYPE MacOsNetworkInterface : public System::Net::NetworkInformation::UnixNetworkInterface {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MacOsNetworkInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterface", modifiers: " const&", def_value: None }]
constexpr MacOsNetworkInterface(MacOsNetworkInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterface", modifiers: "&&", def_value: None }]
constexpr MacOsNetworkInterface(MacOsNetworkInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacOsNetworkInterface(void* ptr) noexcept : System::Net::NetworkInformation::UnixNetworkInterface(ptr) {
}


  constexpr MacOsNetworkInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacOsNetworkInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacOsNetworkInterface& operator=(MacOsNetworkInterface&& o) noexcept = default;
  constexpr MacOsNetworkInterface& operator=(MacOsNetworkInterface const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__ifa_flags, put=__set__ifa_flags))  _ifa_flags;

constexpr void __set__ifa_flags(uint32_t value) ;

constexpr uint32_t __get__ifa_flags() const;


// Properties

 System::Net::NetworkInformation::OperationalStatus __declspec(property(get=get_OperationalStatus))  OperationalStatus;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }]
explicit MacOsNetworkInterface(::StringW name, uint32_t ifa_flags) ;

/// @brief Method .ctor addr 0x288fc54 size 0x24 virtual false final false
 void _ctor(::StringW name, uint32_t ifa_flags) ;

/// @brief Method GetIPProperties addr 0x288fc78 size 0x74 virtual true final false
 System::Net::NetworkInformation::IPInterfaceProperties GetIPProperties() ;

/// @brief Method get_OperationalStatus addr 0x288fcec size 0x14 virtual true final false
 System::Net::NetworkInformation::OperationalStatus get_OperationalStatus() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::MacOsNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsNetworkInterface, "System.Net.NetworkInformation", "MacOsNetworkInterface");
