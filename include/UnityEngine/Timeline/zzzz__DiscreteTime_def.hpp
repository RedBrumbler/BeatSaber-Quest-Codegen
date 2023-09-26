#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IComparable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
// Type: UnityEngine.Timeline::DiscreteTime
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14107))
// CS Name: UnityEngine.Timeline.DiscreteTime
struct CORDL_TYPE DiscreteTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

// Ctor Parameters [CppParam { name: "m_DiscreteTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr DiscreteTime(int64_t m_DiscreteTime) noexcept;


                    constexpr DiscreteTime(DiscreteTime const&) = default;
                    constexpr DiscreteTime(DiscreteTime&&) = default;
                    constexpr DiscreteTime& operator=(DiscreteTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DiscreteTime& operator=(DiscreteTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DiscreteTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field k_Tick offset 0
static constexpr double_t  k_Tick{0.000000000001};

static UnityEngine::Timeline::DiscreteTime __declspec(property(get=__get_kMaxTime, put=__set_kMaxTime))  kMaxTime;

static void __set_kMaxTime(UnityEngine::Timeline::DiscreteTime value) ;

static UnityEngine::Timeline::DiscreteTime __get_kMaxTime() ;

 int64_t __declspec(property(get=__get_m_DiscreteTime, put=__set_m_DiscreteTime))  m_DiscreteTime;

constexpr void __set_m_DiscreteTime(int64_t value) ;

constexpr int64_t __get_m_DiscreteTime() const;


// Properties

static double_t __declspec(property(get=get_tickValue))  tickValue;


// Methods

/// @brief Method get_tickValue addr 0x2b01790 size 0xc virtual false final false
static double_t get_tickValue() ;

/// @brief Method .ctor addr 0x2b0179c size 0x8 virtual false final false
 void _ctor(UnityEngine::Timeline::DiscreteTime time) ;

/// @brief Method .ctor addr 0x2b017a4 size 0x8 virtual false final false
 void _ctor(int64_t time) ;

/// @brief Method .ctor addr 0x2b017ac size 0x68 virtual false final false
 void _ctor(double_t time) ;

/// @brief Method .ctor addr 0x2b018b8 size 0x68 virtual false final false
 void _ctor(float_t time) ;

/// @brief Method .ctor addr 0x2af3b98 size 0x68 virtual false final false
 void _ctor(int32_t time) ;

/// @brief Method .ctor addr 0x2b01a18 size 0x78 virtual false final false
 void _ctor(int32_t frame, double_t fps) ;

/// @brief Method OneTickBefore addr 0x2af1df8 size 0xc virtual false final false
 UnityEngine::Timeline::DiscreteTime OneTickBefore() ;

/// @brief Method OneTickAfter addr 0x2affce8 size 0xc virtual false final false
 UnityEngine::Timeline::DiscreteTime OneTickAfter() ;

/// @brief Method GetTick addr 0x2b01a90 size 0x8 virtual false final false
 int64_t GetTick() ;

/// @brief Method FromTicks addr 0x2b01a98 size 0x4 virtual false final false
static UnityEngine::Timeline::DiscreteTime FromTicks(int64_t ticks) ;

/// @brief Method CompareTo addr 0x2b01a9c size 0x8c virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2b01b28 size 0x10 virtual false final false
 bool Equals(UnityEngine::Timeline::DiscreteTime other) ;

/// @brief Method Equals addr 0x2b01b38 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method DoubleToDiscreteTime addr 0x2b01814 size 0xa4 virtual false final false
static int64_t DoubleToDiscreteTime(double_t time) ;

/// @brief Method FloatToDiscreteTime addr 0x2b01920 size 0xa4 virtual false final false
static int64_t FloatToDiscreteTime(float_t time) ;

/// @brief Method IntToDiscreteTime addr 0x2b019c4 size 0x54 virtual false final false
static int64_t IntToDiscreteTime(int32_t time) ;

/// @brief Method ToDouble addr 0x2b01bb0 size 0x14 virtual false final false
static double_t ToDouble(int64_t time) ;

/// @brief Method ToFloat addr 0x2b01bc4 size 0x64 virtual false final false
static float_t ToFloat(int64_t time) ;

/// @brief Method op_Explicit addr 0x2af1e04 size 0x60 virtual false final false
static double_t op_Explicit_double_t(UnityEngine::Timeline::DiscreteTime b) ;

/// @brief Method op_Explicit addr 0x2b01c28 size 0x54 virtual false final false
static float_t op_Explicit_float_t(UnityEngine::Timeline::DiscreteTime b) ;

/// @brief Method op_Explicit addr 0x2b01c7c size 0x4 virtual false final false
static int64_t op_Explicit_int64_t(UnityEngine::Timeline::DiscreteTime b) ;

/// @brief Method op_Explicit addr 0x2af1f1c size 0x1c virtual false final false
static UnityEngine::Timeline::DiscreteTime op_Explicit_UnityEngine__Timeline__DiscreteTime(double_t time) ;

/// @brief Method op_Explicit addr 0x2b01c80 size 0x1c virtual false final false
static UnityEngine::Timeline::DiscreteTime op_Explicit_UnityEngine__Timeline__DiscreteTime(float_t time) ;

/// @brief Method op_Implicit addr 0x2af1dcc size 0x20 virtual false final false
static UnityEngine::Timeline::DiscreteTime op_Implicit_UnityEngine__Timeline__DiscreteTime(int32_t time) ;

/// @brief Method op_Explicit addr 0x2b01c9c size 0x4 virtual false final false
static UnityEngine::Timeline::DiscreteTime op_Explicit_UnityEngine__Timeline__DiscreteTime(int64_t time) ;

/// @brief Method op_Equality addr 0x2b01ca0 size 0xc virtual false final false
static bool op_Equality(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_Inequality addr 0x2b01cac size 0x64 virtual false final false
static bool op_Inequality(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_GreaterThan addr 0x2b01d10 size 0xc virtual false final false
static bool op_GreaterThan(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_LessThan addr 0x2b01d1c size 0xc virtual false final false
static bool op_LessThan(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_LessThanOrEqual addr 0x2af1dec size 0xc virtual false final false
static bool op_LessThanOrEqual(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_GreaterThanOrEqual addr 0x2b01d28 size 0xc virtual false final false
static bool op_GreaterThanOrEqual(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_Addition addr 0x2b01d34 size 0x8 virtual false final false
static UnityEngine::Timeline::DiscreteTime op_Addition(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method op_Subtraction addr 0x2af66a8 size 0x8 virtual false final false
static UnityEngine::Timeline::DiscreteTime op_Subtraction(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method ToString addr 0x2b01d3c size 0x20 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2b01d5c size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Min addr 0x2b01d7c size 0x68 virtual false final false
static UnityEngine::Timeline::DiscreteTime Min(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method Max addr 0x2af3c60 size 0x68 virtual false final false
static UnityEngine::Timeline::DiscreteTime Max(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs) ;

/// @brief Method SnapToNearestTick addr 0x2b01de4 size 0x70 virtual false final false
static double_t SnapToNearestTick(double_t time) ;

/// @brief Method SnapToNearestTick addr 0x2b01e54 size 0x60 virtual false final false
static float_t SnapToNearestTick(float_t time) ;

/// @brief Method GetNearestTick addr 0x2b01eb4 size 0x5c virtual false final false
static int64_t GetNearestTick(double_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
