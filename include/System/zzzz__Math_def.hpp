#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct MidpointRounding;
}
// Forward declare root types
namespace System {
class Math;
}
// Type: System::Math
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2434))
// CS Name: System.Math
class CORDL_TYPE Math : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Math() = default;

// Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: " const&", def_value: None }]
constexpr Math(Math const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None }]
constexpr Math(Math&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Math(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Math& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Math& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Math& operator=(Math&& o) noexcept = default;
  constexpr Math& operator=(Math const& o) noexcept = default;
                


// Fields

static double_t __declspec(property(get=__get_doubleRoundLimit, put=__set_doubleRoundLimit))  doubleRoundLimit;

static void __set_doubleRoundLimit(double_t value) ;

static double_t __get_doubleRoundLimit() ;

static ::ArrayW<double_t> __declspec(property(get=__get_roundPower10Double, put=__set_roundPower10Double))  roundPower10Double;

static void __set_roundPower10Double(::ArrayW<double_t> value) ;

static ::ArrayW<double_t> __get_roundPower10Double() ;


// Methods

/// @brief Method Abs addr 0x24740e4 size 0x5c virtual false final false
static int32_t Abs(int32_t value) ;

/// @brief Method ThrowAbsOverflow addr 0x2474140 size 0x50 virtual false final false
static void ThrowAbsOverflow() ;

/// @brief Method DivRem addr 0x2474190 size 0x14 virtual false final false
static int32_t DivRem(int32_t a, int32_t b, ByRef<int32_t> result) ;

/// @brief Method Clamp addr 0x24741a4 size 0xa4 virtual false final false
static int32_t Clamp(int32_t value, int32_t min, int32_t max) ;

/// @brief Method Log addr 0x2474248 size 0x150 virtual false final false
static double_t Log(double_t a, double_t newBase) ;

/// @brief Method Max addr 0x2474398 size 0x10 virtual false final false
static uint8_t Max(uint8_t val1, uint8_t val2) ;

/// @brief Method Max addr 0x24743a8 size 0x78 virtual false final false
static double_t Max(double_t val1, double_t val2) ;

/// @brief Method Max addr 0x2474420 size 0xc virtual false final false
static int32_t Max(int32_t val1, int32_t val2) ;

/// @brief Method Max addr 0x247442c size 0xc virtual false final false
static int64_t Max(int64_t val1, int64_t val2) ;

/// @brief Method Max addr 0x2474438 size 0x78 virtual false final false
static float_t Max(float_t val1, float_t val2) ;

/// @brief Method Max addr 0x24744b0 size 0xc virtual false final false
static uint32_t Max(uint32_t val1, uint32_t val2) ;

/// @brief Method Min addr 0x24744bc size 0x78 virtual false final false
static double_t Min(double_t val1, double_t val2) ;

/// @brief Method Min addr 0x2474534 size 0xc virtual false final false
static int32_t Min(int32_t val1, int32_t val2) ;

/// @brief Method Min addr 0x2474540 size 0xc virtual false final false
static int64_t Min(int64_t val1, int64_t val2) ;

/// @brief Method Min addr 0x247454c size 0x78 virtual false final false
static float_t Min(float_t val1, float_t val2) ;

/// @brief Method Min addr 0x24745c4 size 0xc virtual false final false
static uint32_t Min(uint32_t val1, uint32_t val2) ;

/// @brief Method Round addr 0x24745d0 size 0x84 virtual false final false
static double_t Round(double_t a) ;

/// @brief Method Round addr 0x2474654 size 0x2ac virtual false final false
static double_t Round(double_t value, int32_t digits, System::MidpointRounding mode) ;

/// @brief Method Sign addr 0x2474904 size 0x7c virtual false final false
static int32_t Sign(double_t value) ;

/// @brief Method Sign addr 0x2474980 size 0x14 virtual false final false
static int32_t Sign(int64_t value) ;

/// @brief Method ThrowMinMaxException addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void ThrowMinMaxException(T min, T max) ;

/// @brief Method Abs addr 0x2474994 size 0x8 virtual false final false
static double_t Abs(double_t value) ;

/// @brief Method Abs addr 0x247499c size 0x8 virtual false final false
static float_t Abs(float_t value) ;

/// @brief Method Acos addr 0x24749a4 size 0x4 virtual false final false
static double_t Acos(double_t d) ;

/// @brief Method Asin addr 0x24749a8 size 0x4 virtual false final false
static double_t Asin(double_t d) ;

/// @brief Method Atan addr 0x24749ac size 0x4 virtual false final false
static double_t Atan(double_t d) ;

/// @brief Method Atan2 addr 0x24749b0 size 0x4 virtual false final false
static double_t Atan2(double_t y, double_t x) ;

/// @brief Method Ceiling addr 0x24749b4 size 0x8 virtual false final false
static double_t Ceiling(double_t a) ;

/// @brief Method Cos addr 0x24749bc size 0x4 virtual false final false
static double_t Cos(double_t d) ;

/// @brief Method Floor addr 0x24749c0 size 0x8 virtual false final false
static double_t Floor(double_t d) ;

/// @brief Method Log addr 0x24749c8 size 0x4 virtual false final false
static double_t Log(double_t d) ;

/// @brief Method Log10 addr 0x24749cc size 0x4 virtual false final false
static double_t Log10(double_t d) ;

/// @brief Method Pow addr 0x24749d0 size 0x4 virtual false final false
static double_t Pow(double_t x, double_t y) ;

/// @brief Method Sin addr 0x24749d4 size 0x4 virtual false final false
static double_t Sin(double_t a) ;

/// @brief Method Sqrt addr 0x24749d8 size 0x8 virtual false final false
static double_t Sqrt(double_t d) ;

/// @brief Method Tan addr 0x24749e0 size 0x4 virtual false final false
static double_t Tan(double_t a) ;

/// @brief Method ModF addr 0x2474900 size 0x4 virtual false final false
static double_t ModF(double_t x, void* intptr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Math);
DEFINE_IL2CPP_ARG_TYPE(System::Math, "System", "Math");
