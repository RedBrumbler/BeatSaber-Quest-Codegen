#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace TMPro {
class ITweenValue;
}
// Forward declare root types
namespace TMPro {
struct TMPro__ColorTween__ColorTweenMode;
}
namespace TMPro {
class TMPro__ColorTween__ColorTweenCallback;
}
namespace TMPro {
struct ColorTween;
}
// Type: ::ColorTweenMode
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12299))
// CS Name: TMPro.ColorTween::ColorTweenMode
struct CORDL_TYPE TMPro__ColorTween__ColorTweenMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__ColorTween__ColorTweenMode(int32_t value__) noexcept;


                    constexpr TMPro__ColorTween__ColorTweenMode(TMPro__ColorTween__ColorTweenMode const&) = default;
                    constexpr TMPro__ColorTween__ColorTweenMode(TMPro__ColorTween__ColorTweenMode&&) = default;
                    constexpr TMPro__ColorTween__ColorTweenMode& operator=(TMPro__ColorTween__ColorTweenMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__ColorTween__ColorTweenMode& operator=(TMPro__ColorTween__ColorTweenMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__ColorTween__ColorTweenMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__ColorTween__ColorTweenMode_Unwrapped : int32_t {
__All = 0,
__RGB = 1,
__Alpha = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__ColorTween__ColorTweenMode_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__ColorTween__ColorTweenMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static TMPro::TMPro__ColorTween__ColorTweenMode const All;

/// @brief Field RGB offset 0
static TMPro::TMPro__ColorTween__ColorTweenMode const RGB;

/// @brief Field Alpha offset 0
static TMPro::TMPro__ColorTween__ColorTweenMode const Alpha;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::ColorTweenCallback
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10211)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10420), inst: 280 }), TypeDefinitionIndex(TypeDefinitionIndex(10420))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12300))
// CS Name: TMPro.ColorTween::ColorTweenCallback
class CORDL_TYPE TMPro__ColorTween__ColorTweenCallback : public UnityEngine::Events::UnityEvent_1<UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__ColorTween__ColorTweenCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__ColorTween__ColorTweenCallback", modifiers: " const&", def_value: None }]
constexpr TMPro__ColorTween__ColorTweenCallback(TMPro__ColorTween__ColorTweenCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__ColorTween__ColorTweenCallback", modifiers: "&&", def_value: None }]
constexpr TMPro__ColorTween__ColorTweenCallback(TMPro__ColorTween__ColorTweenCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__ColorTween__ColorTweenCallback(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::Color>(ptr) {
}


  constexpr TMPro__ColorTween__ColorTweenCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__ColorTween__ColorTweenCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__ColorTween__ColorTweenCallback& operator=(TMPro__ColorTween__ColorTweenCallback&& o) noexcept = default;
  constexpr TMPro__ColorTween__ColorTweenCallback& operator=(TMPro__ColorTween__ColorTweenCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TMPro__ColorTween__ColorTweenCallback() ;

/// @brief Method .ctor addr 0x2a9aacc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::ColorTween
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12301))
// CS Name: TMPro.ColorTween
struct CORDL_TYPE ColorTween : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ColorTweenCallback = TMPro::TMPro__ColorTween__ColorTweenCallback;

using ColorTweenMode = TMPro::TMPro__ColorTween__ColorTweenMode;

/// @brief Convert operator to TMPro::ITweenValue
constexpr operator  TMPro::ITweenValue() const;

// Ctor Parameters [CppParam { name: "m_Target", ty: "TMPro::TMPro__ColorTween__ColorTweenCallback", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_TargetColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_TweenMode", ty: "TMPro::TMPro__ColorTween__ColorTweenMode", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
constexpr ColorTween(TMPro::TMPro__ColorTween__ColorTweenCallback m_Target, UnityEngine::Color m_StartColor, UnityEngine::Color m_TargetColor, TMPro::TMPro__ColorTween__ColorTweenMode m_TweenMode, float_t m_Duration, bool m_IgnoreTimeScale) noexcept;


                    constexpr ColorTween(ColorTween const&) = default;
                    constexpr ColorTween(ColorTween&&) = default;
                    constexpr ColorTween& operator=(ColorTween const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorTween& operator=(ColorTween&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorTween(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TMPro::TMPro__ColorTween__ColorTweenCallback __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(TMPro::TMPro__ColorTween__ColorTweenCallback value) ;

constexpr TMPro::TMPro__ColorTween__ColorTweenCallback __get_m_Target() const;

 UnityEngine::Color __declspec(property(get=__get_m_StartColor, put=__set_m_StartColor))  m_StartColor;

constexpr void __set_m_StartColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_StartColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_TargetColor, put=__set_m_TargetColor))  m_TargetColor;

constexpr void __set_m_TargetColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_TargetColor() const;

 TMPro::TMPro__ColorTween__ColorTweenMode __declspec(property(get=__get_m_TweenMode, put=__set_m_TweenMode))  m_TweenMode;

constexpr void __set_m_TweenMode(TMPro::TMPro__ColorTween__ColorTweenMode value) ;

constexpr TMPro::TMPro__ColorTween__ColorTweenMode __get_m_TweenMode() const;

 float_t __declspec(property(get=__get_m_Duration, put=__set_m_Duration))  m_Duration;

constexpr void __set_m_Duration(float_t value) ;

constexpr float_t __get_m_Duration() const;

 bool __declspec(property(get=__get_m_IgnoreTimeScale, put=__set_m_IgnoreTimeScale))  m_IgnoreTimeScale;

constexpr void __set_m_IgnoreTimeScale(bool value) ;

constexpr bool __get_m_IgnoreTimeScale() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_startColor, put=set_startColor))  startColor;

 UnityEngine::Color __declspec(property(get=get_targetColor, put=set_targetColor))  targetColor;

 TMPro::TMPro__ColorTween__ColorTweenMode __declspec(property(get=get_tweenMode, put=set_tweenMode))  tweenMode;

 float_t __declspec(property(get=get_duration, put=set_duration))  duration;

 bool __declspec(property(get=get_ignoreTimeScale, put=set_ignoreTimeScale))  ignoreTimeScale;


// Methods

/// @brief Method get_startColor addr 0x2a9a8f4 size 0xc virtual false final false
 UnityEngine::Color get_startColor() ;

/// @brief Method set_startColor addr 0x2a9a900 size 0xc virtual false final false
 void set_startColor(UnityEngine::Color value) ;

/// @brief Method get_targetColor addr 0x2a9a90c size 0xc virtual false final false
 UnityEngine::Color get_targetColor() ;

/// @brief Method set_targetColor addr 0x2a9a918 size 0xc virtual false final false
 void set_targetColor(UnityEngine::Color value) ;

/// @brief Method get_tweenMode addr 0x2a9a924 size 0x8 virtual false final false
 TMPro::TMPro__ColorTween__ColorTweenMode get_tweenMode() ;

/// @brief Method set_tweenMode addr 0x2a9a92c size 0x8 virtual false final false
 void set_tweenMode(TMPro::TMPro__ColorTween__ColorTweenMode value) ;

/// @brief Method get_duration addr 0x2a9a934 size 0x8 virtual true final true
 float_t get_duration() ;

/// @brief Method set_duration addr 0x2a9a93c size 0x8 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method get_ignoreTimeScale addr 0x2a9a944 size 0x8 virtual true final true
 bool get_ignoreTimeScale() ;

/// @brief Method set_ignoreTimeScale addr 0x2a9a94c size 0xc virtual false final false
 void set_ignoreTimeScale(bool value) ;

/// @brief Method TweenValue addr 0x2a9a958 size 0xdc virtual true final true
 void TweenValue(float_t floatPercentage) ;

/// @brief Method AddOnChangedCallback addr 0x2a9aa44 size 0x88 virtual false final false
 void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<UnityEngine::Color> callback) ;

/// @brief Method GetIgnoreTimescale addr 0x2a9ab14 size 0x8 virtual false final false
 bool GetIgnoreTimescale() ;

/// @brief Method GetDuration addr 0x2a9ab1c size 0x8 virtual false final false
 float_t GetDuration() ;

/// @brief Method ValidTarget addr 0x2a9aa34 size 0x10 virtual true final true
 bool ValidTarget() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__ColorTween__ColorTweenMode, "TMPro", "ColorTween/ColorTweenMode");
NEED_NO_BOX(TMPro::TMPro__ColorTween__ColorTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__ColorTween__ColorTweenCallback, "TMPro", "ColorTween/ColorTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(TMPro::ColorTween, "TMPro", "ColorTween");
