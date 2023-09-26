#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonContainerType;
}
// Type: Newtonsoft.Json::JsonContainerType
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11767))
// CS Name: Newtonsoft.Json.JsonContainerType
struct CORDL_TYPE JsonContainerType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JsonContainerType(int32_t value__) noexcept;


                    constexpr JsonContainerType(JsonContainerType const&) = default;
                    constexpr JsonContainerType(JsonContainerType&&) = default;
                    constexpr JsonContainerType& operator=(JsonContainerType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JsonContainerType& operator=(JsonContainerType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JsonContainerType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __JsonContainerType_Unwrapped : int32_t {
__None = 0,
__Object = 1,
__Array = 2,
__Constructor = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonContainerType_Unwrapped () const noexcept {
return std::bit_cast<__JsonContainerType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Newtonsoft::Json::JsonContainerType const None;

/// @brief Field Object offset 0
static Newtonsoft::Json::JsonContainerType const Object;

/// @brief Field Array offset 0
static Newtonsoft::Json::JsonContainerType const Array;

/// @brief Field Constructor offset 0
static Newtonsoft::Json::JsonContainerType const Constructor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonContainerType, "Newtonsoft.Json", "JsonContainerType");
