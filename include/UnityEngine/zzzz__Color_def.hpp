#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct Color;
}
// Type: UnityEngine::Color
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10211))
// CS Name: UnityEngine.Color
struct CORDL_TYPE Color : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Color>
constexpr operator  System::IEquatable_1<UnityEngine::Color>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
constexpr Color(float_t r, float_t g, float_t b, float_t a) noexcept;


                    constexpr Color(Color const&) = default;
                    constexpr Color(Color&&) = default;
                    constexpr Color& operator=(Color const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Color& operator=(Color&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Color(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;

 float_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(float_t value) ;

constexpr float_t __get_g() const;

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;

 float_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(float_t value) ;

constexpr float_t __get_a() const;


// Properties

static UnityEngine::Color __declspec(property(get=get_red))  red;

static UnityEngine::Color __declspec(property(get=get_green))  green;

static UnityEngine::Color __declspec(property(get=get_blue))  blue;

static UnityEngine::Color __declspec(property(get=get_white))  white;

static UnityEngine::Color __declspec(property(get=get_black))  black;

static UnityEngine::Color __declspec(property(get=get_yellow))  yellow;

static UnityEngine::Color __declspec(property(get=get_cyan))  cyan;

static UnityEngine::Color __declspec(property(get=get_magenta))  magenta;

static UnityEngine::Color __declspec(property(get=get_gray))  gray;

static UnityEngine::Color __declspec(property(get=get_grey))  grey;

static UnityEngine::Color __declspec(property(get=get_clear))  clear;

 float_t __declspec(property(get=get_grayscale))  grayscale;

 UnityEngine::Color __declspec(property(get=get_linear))  linear;

 float_t __declspec(property(get=get_maxColorComponent))  maxColorComponent;

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x2b952ac size 0xc virtual false final false
 void _ctor(float_t r, float_t g, float_t b, float_t a) ;

/// @brief Method .ctor addr 0x2b952b8 size 0x14 virtual false final false
 void _ctor(float_t r, float_t g, float_t b) ;

/// @brief Method ToString addr 0x2b952cc size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b954e0 size 0x8 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2b952d8 size 0x208 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method GetHashCode addr 0x2b954e8 size 0x84 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b9556c size 0xd4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b95640 size 0x80 virtual true final true
 bool Equals(UnityEngine::Color other) ;

/// @brief Method op_Addition addr 0x2b956c0 size 0x14 virtual false final false
static UnityEngine::Color op_Addition(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method op_Subtraction addr 0x2b956d4 size 0x14 virtual false final false
static UnityEngine::Color op_Subtraction(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method op_Multiply addr 0x2b956e8 size 0x14 virtual false final false
static UnityEngine::Color op_Multiply(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method op_Multiply addr 0x2b956fc size 0x14 virtual false final false
static UnityEngine::Color op_Multiply(UnityEngine::Color a, float_t b) ;

/// @brief Method op_Multiply addr 0x2b95710 size 0x18 virtual false final false
static UnityEngine::Color op_Multiply(float_t b, UnityEngine::Color a) ;

/// @brief Method op_Division addr 0x2b95728 size 0x14 virtual false final false
static UnityEngine::Color op_Division(UnityEngine::Color a, float_t b) ;

/// @brief Method op_Equality addr 0x2b9573c size 0x40 virtual false final false
static bool op_Equality(UnityEngine::Color lhs, UnityEngine::Color rhs) ;

/// @brief Method op_Inequality addr 0x2b9577c size 0x40 virtual false final false
static bool op_Inequality(UnityEngine::Color lhs, UnityEngine::Color rhs) ;

/// @brief Method Lerp addr 0x2b957bc size 0x4c virtual false final false
static UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float_t t) ;

/// @brief Method LerpUnclamped addr 0x2b95808 size 0x38 virtual false final false
static UnityEngine::Color LerpUnclamped(UnityEngine::Color a, UnityEngine::Color b, float_t t) ;

/// @brief Method RGBMultiplied addr 0x2b95840 size 0x1c virtual false final false
 UnityEngine::Color RGBMultiplied(float_t multiplier) ;

/// @brief Method get_red addr 0x2b9585c size 0x14 virtual false final false
static UnityEngine::Color get_red() ;

/// @brief Method get_green addr 0x2b95870 size 0x14 virtual false final false
static UnityEngine::Color get_green() ;

/// @brief Method get_blue addr 0x2b95884 size 0x14 virtual false final false
static UnityEngine::Color get_blue() ;

/// @brief Method get_white addr 0x2b95898 size 0x14 virtual false final false
static UnityEngine::Color get_white() ;

/// @brief Method get_black addr 0x2b958ac size 0x14 virtual false final false
static UnityEngine::Color get_black() ;

/// @brief Method get_yellow addr 0x2b958c0 size 0x1c virtual false final false
static UnityEngine::Color get_yellow() ;

/// @brief Method get_cyan addr 0x2b958dc size 0x14 virtual false final false
static UnityEngine::Color get_cyan() ;

/// @brief Method get_magenta addr 0x2b958f0 size 0x14 virtual false final false
static UnityEngine::Color get_magenta() ;

/// @brief Method get_gray addr 0x2b95904 size 0x14 virtual false final false
static UnityEngine::Color get_gray() ;

/// @brief Method get_grey addr 0x2b95918 size 0x14 virtual false final false
static UnityEngine::Color get_grey() ;

/// @brief Method get_clear addr 0x2b9592c size 0x14 virtual false final false
static UnityEngine::Color get_clear() ;

/// @brief Method get_grayscale addr 0x2b95940 size 0x38 virtual false final false
 float_t get_grayscale() ;

/// @brief Method get_linear addr 0x2b95978 size 0xb0 virtual false final false
 UnityEngine::Color get_linear() ;

/// @brief Method get_maxColorComponent addr 0x2b95a60 size 0x1c virtual false final false
 float_t get_maxColorComponent() ;

/// @brief Method op_Implicit addr 0x2b95a7c size 0x4 virtual false final false
static UnityEngine::Vector4 op_Implicit_UnityEngine__Vector4(UnityEngine::Color c) ;

/// @brief Method op_Implicit addr 0x2b95a80 size 0x4 virtual false final false
static UnityEngine::Color op_Implicit_UnityEngine__Color(UnityEngine::Vector4 v) ;

/// @brief Method get_Item addr 0x2b95a84 size 0xd8 virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b95b5c size 0xd8 virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method RGBToHSV addr 0x2b95c34 size 0x114 virtual false final false
static void RGBToHSV(UnityEngine::Color rgbColor, ByRef<float_t> H, ByRef<float_t> S, ByRef<float_t> V) ;

/// @brief Method RGBToHSVHelper addr 0x2b95d48 size 0x70 virtual false final false
static void RGBToHSVHelper(float_t offset, float_t dominantcolor, float_t colorone, float_t colortwo, ByRef<float_t> H, ByRef<float_t> S, ByRef<float_t> V) ;

/// @brief Method HSVToRGB addr 0x2b95db8 size 0x8 virtual false final false
static UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V) ;

/// @brief Method HSVToRGB addr 0x2b95dc0 size 0x14c virtual false final false
static UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V, bool hdr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color, "UnityEngine", "Color");
