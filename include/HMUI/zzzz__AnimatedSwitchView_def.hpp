#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HMUI {
class ToggleWithCallbacks;
}
namespace HMUI {
struct HMUI__ToggleWithCallbacks__SelectionState;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class RectTransform;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace HMUI {
struct HMUI__AnimatedSwitchView__AnimationState;
}
namespace HMUI {
class AnimatedSwitchView;
}
namespace HMUI {
class HMUI__AnimatedSwitchView__ColorBlock;
}
namespace HMUI {
class HMUI__AnimatedSwitchView__GetColorDelegate;
}
namespace HMUI {
class HMUI__AnimatedSwitchView____c;
}
// Type: ::ColorBlock
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13684))
// CS Name: HMUI.AnimatedSwitchView::ColorBlock
class CORDL_TYPE HMUI__AnimatedSwitchView__ColorBlock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~HMUI__AnimatedSwitchView__ColorBlock() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__AnimatedSwitchView__ColorBlock", modifiers: " const&", def_value: None }]
constexpr HMUI__AnimatedSwitchView__ColorBlock(HMUI__AnimatedSwitchView__ColorBlock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__AnimatedSwitchView__ColorBlock", modifiers: "&&", def_value: None }]
constexpr HMUI__AnimatedSwitchView__ColorBlock(HMUI__AnimatedSwitchView__ColorBlock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__AnimatedSwitchView__ColorBlock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__AnimatedSwitchView__ColorBlock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__AnimatedSwitchView__ColorBlock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__AnimatedSwitchView__ColorBlock& operator=(HMUI__AnimatedSwitchView__ColorBlock&& o) noexcept = default;
  constexpr HMUI__AnimatedSwitchView__ColorBlock& operator=(HMUI__AnimatedSwitchView__ColorBlock const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_knobColor, put=__set_knobColor))  knobColor;

constexpr void __set_knobColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_knobColor() const;

 UnityEngine::Color __declspec(property(get=__get_knobColor0, put=__set_knobColor0))  knobColor0;

constexpr void __set_knobColor0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_knobColor0() const;

 UnityEngine::Color __declspec(property(get=__get_knobColor1, put=__set_knobColor1))  knobColor1;

constexpr void __set_knobColor1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_knobColor1() const;

 UnityEngine::Color __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor))  backgroundColor;

constexpr void __set_backgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_backgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get_backgroundColor0, put=__set_backgroundColor0))  backgroundColor0;

constexpr void __set_backgroundColor0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_backgroundColor0() const;

 UnityEngine::Color __declspec(property(get=__get_backgroundColor1, put=__set_backgroundColor1))  backgroundColor1;

constexpr void __set_backgroundColor1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_backgroundColor1() const;


// Methods

// Ctor Parameters []
explicit HMUI__AnimatedSwitchView__ColorBlock() ;

/// @brief Method .ctor addr 0x1ff5e78 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::AnimationState
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13685))
// CS Name: HMUI.AnimatedSwitchView::AnimationState
struct CORDL_TYPE HMUI__AnimatedSwitchView__AnimationState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__AnimatedSwitchView__AnimationState(int32_t value__) noexcept;


                    constexpr HMUI__AnimatedSwitchView__AnimationState(HMUI__AnimatedSwitchView__AnimationState const&) = default;
                    constexpr HMUI__AnimatedSwitchView__AnimationState(HMUI__AnimatedSwitchView__AnimationState&&) = default;
                    constexpr HMUI__AnimatedSwitchView__AnimationState& operator=(HMUI__AnimatedSwitchView__AnimationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__AnimatedSwitchView__AnimationState& operator=(HMUI__AnimatedSwitchView__AnimationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__AnimatedSwitchView__AnimationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__AnimatedSwitchView__AnimationState_Unwrapped : int32_t {
__Idle = 0,
__SwitchingOn = 1,
__SwitchingOff = 2,
__HighlightingOn = 4,
__HighlightingOff = 8,
__DisablingOn = 16,
__DisablingOff = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__AnimatedSwitchView__AnimationState_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__AnimatedSwitchView__AnimationState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Idle offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const Idle;

/// @brief Field SwitchingOn offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const SwitchingOn;

/// @brief Field SwitchingOff offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const SwitchingOff;

/// @brief Field HighlightingOn offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const HighlightingOn;

/// @brief Field HighlightingOff offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const HighlightingOff;

/// @brief Field DisablingOn offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const DisablingOn;

/// @brief Field DisablingOff offset 0
static HMUI::HMUI__AnimatedSwitchView__AnimationState const DisablingOff;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::GetColorDelegate
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13686))
// CS Name: HMUI.AnimatedSwitchView::GetColorDelegate
class CORDL_TYPE HMUI__AnimatedSwitchView__GetColorDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HMUI__AnimatedSwitchView__GetColorDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__AnimatedSwitchView__GetColorDelegate", modifiers: " const&", def_value: None }]
constexpr HMUI__AnimatedSwitchView__GetColorDelegate(HMUI__AnimatedSwitchView__GetColorDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__AnimatedSwitchView__GetColorDelegate", modifiers: "&&", def_value: None }]
constexpr HMUI__AnimatedSwitchView__GetColorDelegate(HMUI__AnimatedSwitchView__GetColorDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__AnimatedSwitchView__GetColorDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HMUI__AnimatedSwitchView__GetColorDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__AnimatedSwitchView__GetColorDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__AnimatedSwitchView__GetColorDelegate& operator=(HMUI__AnimatedSwitchView__GetColorDelegate&& o) noexcept = default;
  constexpr HMUI__AnimatedSwitchView__GetColorDelegate& operator=(HMUI__AnimatedSwitchView__GetColorDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HMUI__AnimatedSwitchView__GetColorDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x1ff5ab8 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x1ff5e90 size 0x14 virtual true final false
 UnityEngine::Color Invoke(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

/// @brief Method BeginInvoke addr 0x1ff5ea4 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x1ff5ec4 size 0x2c virtual true final false
 UnityEngine::Color EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13687))
// CS Name: HMUI.AnimatedSwitchView::<>c
class CORDL_TYPE HMUI__AnimatedSwitchView____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HMUI__AnimatedSwitchView____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__AnimatedSwitchView____c", modifiers: " const&", def_value: None }]
constexpr HMUI__AnimatedSwitchView____c(HMUI__AnimatedSwitchView____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__AnimatedSwitchView____c", modifiers: "&&", def_value: None }]
constexpr HMUI__AnimatedSwitchView____c(HMUI__AnimatedSwitchView____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__AnimatedSwitchView____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__AnimatedSwitchView____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__AnimatedSwitchView____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__AnimatedSwitchView____c& operator=(HMUI__AnimatedSwitchView____c&& o) noexcept = default;
  constexpr HMUI__AnimatedSwitchView____c& operator=(HMUI__AnimatedSwitchView____c const& o) noexcept = default;
                


// Fields

static HMUI::HMUI__AnimatedSwitchView____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HMUI::HMUI__AnimatedSwitchView____c value) ;

static HMUI::HMUI__AnimatedSwitchView____c __get___9() ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __declspec(property(get=__get___9__31_0, put=__set___9__31_0))  __9__31_0;

static void __set___9__31_0(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate value) ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __get___9__31_0() ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __declspec(property(get=__get___9__31_1, put=__set___9__31_1))  __9__31_1;

static void __set___9__31_1(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate value) ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __get___9__31_1() ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __declspec(property(get=__get___9__31_2, put=__set___9__31_2))  __9__31_2;

static void __set___9__31_2(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate value) ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __get___9__31_2() ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __declspec(property(get=__get___9__31_3, put=__set___9__31_3))  __9__31_3;

static void __set___9__31_3(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate value) ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __get___9__31_3() ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __declspec(property(get=__get___9__31_4, put=__set___9__31_4))  __9__31_4;

static void __set___9__31_4(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate value) ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __get___9__31_4() ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __declspec(property(get=__get___9__31_5, put=__set___9__31_5))  __9__31_5;

static void __set___9__31_5(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate value) ;

static HMUI::HMUI__AnimatedSwitchView__GetColorDelegate __get___9__31_5() ;


// Methods

// Ctor Parameters []
explicit HMUI__AnimatedSwitchView____c() ;

/// @brief Method .ctor addr 0x1ff5f54 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LerpColors>b__31_0 addr 0x1ff5f5c size 0x1c virtual false final false
 UnityEngine::Color _LerpColors_b__31_0(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

/// @brief Method <LerpColors>b__31_1 addr 0x1ff5f78 size 0x1c virtual false final false
 UnityEngine::Color _LerpColors_b__31_1(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

/// @brief Method <LerpColors>b__31_2 addr 0x1ff5f94 size 0x1c virtual false final false
 UnityEngine::Color _LerpColors_b__31_2(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

/// @brief Method <LerpColors>b__31_3 addr 0x1ff5fb0 size 0x1c virtual false final false
 UnityEngine::Color _LerpColors_b__31_3(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

/// @brief Method <LerpColors>b__31_4 addr 0x1ff5fcc size 0x1c virtual false final false
 UnityEngine::Color _LerpColors_b__31_4(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

/// @brief Method <LerpColors>b__31_5 addr 0x1ff5fe8 size 0x1c virtual false final false
 UnityEngine::Color _LerpColors_b__31_5(HMUI::HMUI__AnimatedSwitchView__ColorBlock colorBlock) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::AnimatedSwitchView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13688))
// CS Name: HMUI.AnimatedSwitchView
class CORDL_TYPE AnimatedSwitchView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = HMUI::HMUI__AnimatedSwitchView____c;

using GetColorDelegate = HMUI::HMUI__AnimatedSwitchView__GetColorDelegate;

using AnimationState = HMUI::HMUI__AnimatedSwitchView__AnimationState;

using ColorBlock = HMUI::HMUI__AnimatedSwitchView__ColorBlock;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~AnimatedSwitchView() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView", modifiers: " const&", def_value: None }]
constexpr AnimatedSwitchView(AnimatedSwitchView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView", modifiers: "&&", def_value: None }]
constexpr AnimatedSwitchView(AnimatedSwitchView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatedSwitchView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnimatedSwitchView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatedSwitchView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatedSwitchView& operator=(AnimatedSwitchView&& o) noexcept = default;
  constexpr AnimatedSwitchView& operator=(AnimatedSwitchView const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__knobRectTransform, put=__set__knobRectTransform))  _knobRectTransform;

constexpr void __set__knobRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__knobRectTransform() const;

 HMUI::ImageView __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage))  _backgroundImage;

constexpr void __set__backgroundImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__backgroundImage() const;

 HMUI::ImageView __declspec(property(get=__get__knobImage, put=__set__knobImage))  _knobImage;

constexpr void __set__knobImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__knobImage() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__onText, put=__set__onText))  _onText;

constexpr void __set__onText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__onText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__offText, put=__set__offText))  _offText;

constexpr void __set__offText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__offText() const;

 float_t __declspec(property(get=__get__switchAnimationSmooth, put=__set__switchAnimationSmooth))  _switchAnimationSmooth;

constexpr void __set__switchAnimationSmooth(float_t value) ;

constexpr float_t __get__switchAnimationSmooth() const;

 float_t __declspec(property(get=__get__disableAnimationDuration, put=__set__disableAnimationDuration))  _disableAnimationDuration;

constexpr void __set__disableAnimationDuration(float_t value) ;

constexpr float_t __get__disableAnimationDuration() const;

 float_t __declspec(property(get=__get__highlightAnimationDuration, put=__set__highlightAnimationDuration))  _highlightAnimationDuration;

constexpr void __set__highlightAnimationDuration(float_t value) ;

constexpr float_t __get__highlightAnimationDuration() const;

 float_t __declspec(property(get=__get__horizontalStretchAmount, put=__set__horizontalStretchAmount))  _horizontalStretchAmount;

constexpr void __set__horizontalStretchAmount(float_t value) ;

constexpr float_t __get__horizontalStretchAmount() const;

 float_t __declspec(property(get=__get__verticalStretchAmount, put=__set__verticalStretchAmount))  _verticalStretchAmount;

constexpr void __set__verticalStretchAmount(float_t value) ;

constexpr float_t __get__verticalStretchAmount() const;

 HMUI::HMUI__AnimatedSwitchView__ColorBlock __declspec(property(get=__get__onColors, put=__set__onColors))  _onColors;

constexpr void __set__onColors(HMUI::HMUI__AnimatedSwitchView__ColorBlock value) ;

constexpr HMUI::HMUI__AnimatedSwitchView__ColorBlock __get__onColors() const;

 HMUI::HMUI__AnimatedSwitchView__ColorBlock __declspec(property(get=__get__offColors, put=__set__offColors))  _offColors;

constexpr void __set__offColors(HMUI::HMUI__AnimatedSwitchView__ColorBlock value) ;

constexpr HMUI::HMUI__AnimatedSwitchView__ColorBlock __get__offColors() const;

 HMUI::HMUI__AnimatedSwitchView__ColorBlock __declspec(property(get=__get__onHighlightedColors, put=__set__onHighlightedColors))  _onHighlightedColors;

constexpr void __set__onHighlightedColors(HMUI::HMUI__AnimatedSwitchView__ColorBlock value) ;

constexpr HMUI::HMUI__AnimatedSwitchView__ColorBlock __get__onHighlightedColors() const;

 HMUI::HMUI__AnimatedSwitchView__ColorBlock __declspec(property(get=__get__offHighlightedColors, put=__set__offHighlightedColors))  _offHighlightedColors;

constexpr void __set__offHighlightedColors(HMUI::HMUI__AnimatedSwitchView__ColorBlock value) ;

constexpr HMUI::HMUI__AnimatedSwitchView__ColorBlock __get__offHighlightedColors() const;

 HMUI::HMUI__AnimatedSwitchView__ColorBlock __declspec(property(get=__get__disabledColors, put=__set__disabledColors))  _disabledColors;

constexpr void __set__disabledColors(HMUI::HMUI__AnimatedSwitchView__ColorBlock value) ;

constexpr HMUI::HMUI__AnimatedSwitchView__ColorBlock __get__disabledColors() const;

 HMUI::HMUI__AnimatedSwitchView__AnimationState __declspec(property(get=__get__animationState, put=__set__animationState))  _animationState;

constexpr void __set__animationState(HMUI::HMUI__AnimatedSwitchView__AnimationState value) ;

constexpr HMUI::HMUI__AnimatedSwitchView__AnimationState __get__animationState() const;

 float_t __declspec(property(get=__get__switchAmount, put=__set__switchAmount))  _switchAmount;

constexpr void __set__switchAmount(float_t value) ;

constexpr float_t __get__switchAmount() const;

 float_t __declspec(property(get=__get__highlightAmount, put=__set__highlightAmount))  _highlightAmount;

constexpr void __set__highlightAmount(float_t value) ;

constexpr float_t __get__highlightAmount() const;

 float_t __declspec(property(get=__get__disabledAmount, put=__set__disabledAmount))  _disabledAmount;

constexpr void __set__disabledAmount(float_t value) ;

constexpr float_t __get__disabledAmount() const;

 float_t __declspec(property(get=__get__originalKnobWidth, put=__set__originalKnobWidth))  _originalKnobWidth;

constexpr void __set__originalKnobWidth(float_t value) ;

constexpr float_t __get__originalKnobWidth() const;

 float_t __declspec(property(get=__get__originalKnobHeight, put=__set__originalKnobHeight))  _originalKnobHeight;

constexpr void __set__originalKnobHeight(float_t value) ;

constexpr float_t __get__originalKnobHeight() const;

 HMUI::ToggleWithCallbacks __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(HMUI::ToggleWithCallbacks value) ;

constexpr HMUI::ToggleWithCallbacks __get__toggle() const;


// Methods

/// @brief Method Awake addr 0x1ff4f08 size 0x50 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1ff4f58 size 0x1a0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1ff5650 size 0x150 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x1ff57a0 size 0x298 virtual false final false
 void Update() ;

/// @brief Method LerpPosition addr 0x1ff55ec size 0x64 virtual false final false
 void LerpPosition(float_t switchAmount) ;

/// @brief Method LerpStretch addr 0x1ff5a38 size 0x80 virtual false final false
 void LerpStretch(float_t switchAmount) ;

/// @brief Method LerpColors addr 0x1ff50f8 size 0x4f4 virtual false final false
 void LerpColors(float_t switchAmount, float_t highlightAmount, float_t disabledAmount) ;

/// @brief Method LerpColor addr 0x1ff5be4 size 0x1ac virtual false final false
 UnityEngine::Color LerpColor(float_t switchAmount, float_t highlightAmount, float_t disabledAmount, HMUI::HMUI__AnimatedSwitchView__GetColorDelegate getColorDelegate) ;

/// @brief Method HandleOnValueChanged addr 0x1ff5dd0 size 0x28 virtual false final false
 void HandleOnValueChanged(bool value) ;

/// @brief Method HandleStateDidChange addr 0x1ff5df8 size 0x60 virtual false final false
 void HandleStateDidChange(HMUI::HMUI__ToggleWithCallbacks__SelectionState selectionState) ;

// Ctor Parameters []
explicit AnimatedSwitchView() ;

/// @brief Method .ctor addr 0x1ff5e58 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__AnimatedSwitchView__AnimationState, "HMUI", "AnimatedSwitchView/AnimationState");
NEED_NO_BOX(HMUI::AnimatedSwitchView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView, "HMUI", "AnimatedSwitchView");
NEED_NO_BOX(HMUI::HMUI__AnimatedSwitchView__ColorBlock);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__AnimatedSwitchView__ColorBlock, "HMUI", "AnimatedSwitchView/ColorBlock");
NEED_NO_BOX(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__AnimatedSwitchView__GetColorDelegate, "HMUI", "AnimatedSwitchView/GetColorDelegate");
NEED_NO_BOX(HMUI::HMUI__AnimatedSwitchView____c);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__AnimatedSwitchView____c, "HMUI", "AnimatedSwitchView/<>c");
