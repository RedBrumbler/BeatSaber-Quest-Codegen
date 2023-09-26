#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::Linq {
struct SaveOptions;
}
// Type: System.Xml.Linq::SaveOptions
namespace System::Xml::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15447))
// CS Name: System.Xml.Linq.SaveOptions
struct CORDL_TYPE SaveOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SaveOptions(int32_t value__) noexcept;


                    constexpr SaveOptions(SaveOptions const&) = default;
                    constexpr SaveOptions(SaveOptions&&) = default;
                    constexpr SaveOptions& operator=(SaveOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SaveOptions& operator=(SaveOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SaveOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SaveOptions_Unwrapped : int32_t {
__None = 0,
__DisableFormatting = 1,
__OmitDuplicateNamespaces = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SaveOptions_Unwrapped () const noexcept {
return std::bit_cast<__SaveOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Xml::Linq::SaveOptions const None;

/// @brief Field DisableFormatting offset 0
static System::Xml::Linq::SaveOptions const DisableFormatting;

/// @brief Field OmitDuplicateNamespaces offset 0
static System::Xml::Linq::SaveOptions const OmitDuplicateNamespaces;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::SaveOptions, "System.Xml.Linq", "SaveOptions");
