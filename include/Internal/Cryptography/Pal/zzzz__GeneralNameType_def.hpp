#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Internal::Cryptography::Pal {
struct GeneralNameType;
}
// Type: Internal.Cryptography.Pal::GeneralNameType
namespace Internal::Cryptography::Pal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7725))
// CS Name: Internal.Cryptography.Pal.GeneralNameType
struct CORDL_TYPE GeneralNameType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GeneralNameType(int32_t value__) noexcept;


                    constexpr GeneralNameType(GeneralNameType const&) = default;
                    constexpr GeneralNameType(GeneralNameType&&) = default;
                    constexpr GeneralNameType& operator=(GeneralNameType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GeneralNameType& operator=(GeneralNameType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GeneralNameType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GeneralNameType_Unwrapped : int32_t {
__OtherName = 0,
__Rfc822Name = 1,
__Email = 1,
__DnsName = 2,
__X400Address = 3,
__DirectoryName = 4,
__EdiPartyName = 5,
__UniformResourceIdentifier = 6,
__IPAddress = 7,
__RegisteredId = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GeneralNameType_Unwrapped () const noexcept {
return std::bit_cast<__GeneralNameType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OtherName offset 0
static Internal::Cryptography::Pal::GeneralNameType const OtherName;

/// @brief Field Rfc822Name offset 0
static Internal::Cryptography::Pal::GeneralNameType const Rfc822Name;

/// @brief Field Email offset 0
static Internal::Cryptography::Pal::GeneralNameType const Email;

/// @brief Field DnsName offset 0
static Internal::Cryptography::Pal::GeneralNameType const DnsName;

/// @brief Field X400Address offset 0
static Internal::Cryptography::Pal::GeneralNameType const X400Address;

/// @brief Field DirectoryName offset 0
static Internal::Cryptography::Pal::GeneralNameType const DirectoryName;

/// @brief Field EdiPartyName offset 0
static Internal::Cryptography::Pal::GeneralNameType const EdiPartyName;

/// @brief Field UniformResourceIdentifier offset 0
static Internal::Cryptography::Pal::GeneralNameType const UniformResourceIdentifier;

/// @brief Field IPAddress offset 0
static Internal::Cryptography::Pal::GeneralNameType const IPAddress;

/// @brief Field RegisteredId offset 0
static Internal::Cryptography::Pal::GeneralNameType const RegisteredId;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Internal::Cryptography::Pal
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::Pal::GeneralNameType, "Internal.Cryptography.Pal", "GeneralNameType");
