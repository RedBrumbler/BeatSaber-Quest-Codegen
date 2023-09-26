#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct NamespaceHandling;
}
// Type: System.Xml::NamespaceHandling
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11395))
// CS Name: System.Xml.NamespaceHandling
struct CORDL_TYPE NamespaceHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NamespaceHandling(int32_t value__) noexcept;


                    constexpr NamespaceHandling(NamespaceHandling const&) = default;
                    constexpr NamespaceHandling(NamespaceHandling&&) = default;
                    constexpr NamespaceHandling& operator=(NamespaceHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NamespaceHandling& operator=(NamespaceHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NamespaceHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NamespaceHandling_Unwrapped : int32_t {
__Default = 0,
__OmitDuplicates = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NamespaceHandling_Unwrapped () const noexcept {
return std::bit_cast<__NamespaceHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static System::Xml::NamespaceHandling const Default;

/// @brief Field OmitDuplicates offset 0
static System::Xml::NamespaceHandling const OmitDuplicates;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::NamespaceHandling, "System.Xml", "NamespaceHandling");
