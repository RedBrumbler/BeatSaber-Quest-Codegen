#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Http {
struct HttpCompletionOption;
}
// Type: System.Net.Http::HttpCompletionOption
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14825))
// CS Name: System.Net.Http.HttpCompletionOption
struct CORDL_TYPE HttpCompletionOption : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HttpCompletionOption(int32_t value__) noexcept;


                    constexpr HttpCompletionOption(HttpCompletionOption const&) = default;
                    constexpr HttpCompletionOption(HttpCompletionOption&&) = default;
                    constexpr HttpCompletionOption& operator=(HttpCompletionOption const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HttpCompletionOption& operator=(HttpCompletionOption&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HttpCompletionOption(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HttpCompletionOption_Unwrapped : int32_t {
__ResponseContentRead = 0,
__ResponseHeadersRead = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpCompletionOption_Unwrapped () const noexcept {
return std::bit_cast<__HttpCompletionOption_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ResponseContentRead offset 0
static System::Net::Http::HttpCompletionOption const ResponseContentRead;

/// @brief Field ResponseHeadersRead offset 0
static System::Net::Http::HttpCompletionOption const ResponseHeadersRead;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpCompletionOption, "System.Net.Http", "HttpCompletionOption");
