#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class ShorthandApplicator;
}
// Type: UnityEngine.UIElements.StyleSheets::ShorthandApplicator
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7579))
// CS Name: UnityEngine.UIElements.StyleSheets.ShorthandApplicator
class CORDL_TYPE ShorthandApplicator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ShorthandApplicator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShorthandApplicator", modifiers: " const&", def_value: None }]
constexpr ShorthandApplicator(ShorthandApplicator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShorthandApplicator", modifiers: "&&", def_value: None }]
constexpr ShorthandApplicator(ShorthandApplicator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShorthandApplicator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShorthandApplicator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShorthandApplicator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShorthandApplicator& operator=(ShorthandApplicator&& o) noexcept = default;
  constexpr ShorthandApplicator& operator=(ShorthandApplicator const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=__get_s_TransitionDelayList, put=__set_s_TransitionDelayList))  s_TransitionDelayList;

static void __set_s_TransitionDelayList(System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __get_s_TransitionDelayList() ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=__get_s_TransitionDurationList, put=__set_s_TransitionDurationList))  s_TransitionDurationList;

static void __set_s_TransitionDurationList(System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __get_s_TransitionDurationList() ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __declspec(property(get=__get_s_TransitionPropertyList, put=__set_s_TransitionPropertyList))  s_TransitionPropertyList;

static void __set_s_TransitionPropertyList(System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __get_s_TransitionPropertyList() ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> __declspec(property(get=__get_s_TransitionTimingFunctionList, put=__set_s_TransitionTimingFunctionList))  s_TransitionTimingFunctionList;

static void __set_s_TransitionTimingFunctionList(System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> __get_s_TransitionTimingFunctionList() ;


// Methods

/// @brief Method CompileFlexShorthand addr 0x2c9f494 size 0x1e8 virtual false final false
static bool CompileFlexShorthand(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<float_t> grow, ByRef<float_t> shrink, ByRef<UnityEngine::UIElements::Length> basis) ;

/// @brief Method CompileBorderRadius addr 0x2c9f990 size 0x148 virtual false final false
static void CompileBorderRadius(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::Length> top, ByRef<UnityEngine::UIElements::Length> right, ByRef<UnityEngine::UIElements::Length> bottom, ByRef<UnityEngine::UIElements::Length> left) ;

/// @brief Method CompileBoxArea addr 0x2c9fad8 size 0x15c virtual false final false
static void CompileBoxArea(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::Length> top, ByRef<UnityEngine::UIElements::Length> right, ByRef<UnityEngine::UIElements::Length> bottom, ByRef<UnityEngine::UIElements::Length> left) ;

/// @brief Method CompileBoxArea addr 0x2c9fc34 size 0xb8 virtual false final false
static void CompileBoxArea(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<float_t> top, ByRef<float_t> right, ByRef<float_t> bottom, ByRef<float_t> left) ;

/// @brief Method CompileBoxArea addr 0x2c9fcec size 0x168 virtual false final false
static void CompileBoxArea(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::Color> top, ByRef<UnityEngine::Color> right, ByRef<UnityEngine::Color> bottom, ByRef<UnityEngine::Color> left) ;

/// @brief Method CompileTextOutline addr 0x2c9ff58 size 0xa0 virtual false final false
static void CompileTextOutline(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::Color> outlineColor, ByRef<float_t> outlineWidth) ;

/// @brief Method CompileTransition addr 0x2c9fff8 size 0x694 virtual false final false
static void CompileTransition(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue>> outDelay, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue>> outDuration, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName>> outProperty, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction>> outTimingFunction) ;

/// @brief Method ApplyBorderColor addr 0x2ca0784 size 0xf4 virtual false final false
static void ApplyBorderColor(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyBorderRadius addr 0x2ca0878 size 0xf0 virtual false final false
static void ApplyBorderRadius(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyBorderWidth addr 0x2ca0968 size 0xec virtual false final false
static void ApplyBorderWidth(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyFlex addr 0x2ca0a54 size 0xd0 virtual false final false
static void ApplyFlex(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyMargin addr 0x2ca0b24 size 0xf0 virtual false final false
static void ApplyMargin(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyPadding addr 0x2ca0c14 size 0xf0 virtual false final false
static void ApplyPadding(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyTransition addr 0x2ca0d04 size 0x150 virtual false final false
static void ApplyTransition(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method ApplyUnityTextOutline addr 0x2ca0e54 size 0xb8 virtual false final false
static void ApplyUnityTextOutline(UnityEngine::UIElements::StyleSheets::StylePropertyReader reader, ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::ShorthandApplicator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::ShorthandApplicator, "UnityEngine.UIElements.StyleSheets", "ShorthandApplicator");
