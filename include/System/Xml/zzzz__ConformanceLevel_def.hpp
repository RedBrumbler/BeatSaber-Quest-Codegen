#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct ConformanceLevel;
}
// Type: System.Xml::ConformanceLevel
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11374))
// CS Name: System.Xml.ConformanceLevel
struct CORDL_TYPE ConformanceLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConformanceLevel(int32_t value__) noexcept;


                    constexpr ConformanceLevel(ConformanceLevel const&) = default;
                    constexpr ConformanceLevel(ConformanceLevel&&) = default;
                    constexpr ConformanceLevel& operator=(ConformanceLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConformanceLevel& operator=(ConformanceLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConformanceLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConformanceLevel_Unwrapped : int32_t {
__Auto = 0,
__Fragment = 1,
__Document = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConformanceLevel_Unwrapped () const noexcept {
return std::bit_cast<__ConformanceLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static System::Xml::ConformanceLevel const Auto;

/// @brief Field Fragment offset 0
static System::Xml::ConformanceLevel const Fragment;

/// @brief Field Document offset 0
static System::Xml::ConformanceLevel const Document;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ConformanceLevel, "System.Xml", "ConformanceLevel");
