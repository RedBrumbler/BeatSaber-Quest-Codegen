#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace Mono {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
// Type: Mono::ValueTuple`4
namespace Mono {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2246))
// CS Name: Mono.ValueTuple`4
struct CORDL_TYPE ValueTuple_4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }]
constexpr ValueTuple_4(T1 Item1, T2 Item2, T3 Item3, T4 Item4) noexcept;


                    constexpr ValueTuple_4(ValueTuple_4 const&) = default;
                    constexpr ValueTuple_4(ValueTuple_4&&) = default;
                    constexpr ValueTuple_4& operator=(ValueTuple_4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_4& operator=(ValueTuple_4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(T1 value) ;

constexpr T1 __get_Item1() const;

 T2 __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(T2 value) ;

constexpr T2 __get_Item2() const;

 T3 __declspec(property(get=__get_Item3, put=__set_Item3))  Item3;

constexpr void __set_Item3(T3 value) ;

constexpr T3 __get_Item3() const;

 T4 __declspec(property(get=__get_Item4, put=__set_Item4))  Item4;

constexpr void __set_Item4(T4 value) ;

constexpr T4 __get_Item4() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Mono::ValueTuple_4, "Mono", "ValueTuple`4");
