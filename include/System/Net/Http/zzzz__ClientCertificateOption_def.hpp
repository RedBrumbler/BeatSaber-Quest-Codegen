#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Http {
struct ClientCertificateOption;
}
// Type: System.Net.Http::ClientCertificateOption
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14821))
// CS Name: System.Net.Http.ClientCertificateOption
struct CORDL_TYPE ClientCertificateOption : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClientCertificateOption(int32_t value__) noexcept;


                    constexpr ClientCertificateOption(ClientCertificateOption const&) = default;
                    constexpr ClientCertificateOption(ClientCertificateOption&&) = default;
                    constexpr ClientCertificateOption& operator=(ClientCertificateOption const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ClientCertificateOption& operator=(ClientCertificateOption&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ClientCertificateOption(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ClientCertificateOption_Unwrapped : int32_t {
__Manual = 0,
__Automatic = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientCertificateOption_Unwrapped () const noexcept {
return std::bit_cast<__ClientCertificateOption_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Manual offset 0
static System::Net::Http::ClientCertificateOption const Manual;

/// @brief Field Automatic offset 0
static System::Net::Http::ClientCertificateOption const Automatic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::ClientCertificateOption, "System.Net.Http", "ClientCertificateOption");
