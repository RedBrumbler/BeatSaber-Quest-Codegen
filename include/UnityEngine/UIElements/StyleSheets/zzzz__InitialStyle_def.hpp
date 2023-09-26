#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class InitialStyle;
}
// Type: UnityEngine.UIElements.StyleSheets::InitialStyle
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7604))
// CS Name: UnityEngine.UIElements.StyleSheets.InitialStyle
class CORDL_TYPE InitialStyle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InitialStyle() = default;

// Ctor Parameters [CppParam { name: "", ty: "InitialStyle", modifiers: " const&", def_value: None }]
constexpr InitialStyle(InitialStyle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InitialStyle", modifiers: "&&", def_value: None }]
constexpr InitialStyle(InitialStyle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InitialStyle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InitialStyle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InitialStyle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InitialStyle& operator=(InitialStyle&& o) noexcept = default;
  constexpr InitialStyle& operator=(InitialStyle const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ComputedStyle __declspec(property(get=__get_s_InitialStyle, put=__set_s_InitialStyle))  s_InitialStyle;

static void __set_s_InitialStyle(UnityEngine::UIElements::ComputedStyle value) ;

static UnityEngine::UIElements::ComputedStyle __get_s_InitialStyle() ;


// Properties

static UnityEngine::UIElements::Align __declspec(property(get=get_alignContent))  alignContent;

static UnityEngine::UIElements::Align __declspec(property(get=get_alignItems))  alignItems;

static UnityEngine::UIElements::Align __declspec(property(get=get_alignSelf))  alignSelf;

static UnityEngine::Color __declspec(property(get=get_backgroundColor))  backgroundColor;

static UnityEngine::UIElements::Background __declspec(property(get=get_backgroundImage))  backgroundImage;

static UnityEngine::Color __declspec(property(get=get_borderBottomColor))  borderBottomColor;

static UnityEngine::UIElements::Length __declspec(property(get=get_borderBottomLeftRadius))  borderBottomLeftRadius;

static UnityEngine::UIElements::Length __declspec(property(get=get_borderBottomRightRadius))  borderBottomRightRadius;

static float_t __declspec(property(get=get_borderBottomWidth))  borderBottomWidth;

static UnityEngine::Color __declspec(property(get=get_borderLeftColor))  borderLeftColor;

static float_t __declspec(property(get=get_borderLeftWidth))  borderLeftWidth;

static UnityEngine::Color __declspec(property(get=get_borderRightColor))  borderRightColor;

static float_t __declspec(property(get=get_borderRightWidth))  borderRightWidth;

static UnityEngine::Color __declspec(property(get=get_borderTopColor))  borderTopColor;

static UnityEngine::UIElements::Length __declspec(property(get=get_borderTopLeftRadius))  borderTopLeftRadius;

static UnityEngine::UIElements::Length __declspec(property(get=get_borderTopRightRadius))  borderTopRightRadius;

static float_t __declspec(property(get=get_borderTopWidth))  borderTopWidth;

static UnityEngine::UIElements::Length __declspec(property(get=get_bottom))  bottom;

static UnityEngine::Color __declspec(property(get=get_color))  color;

static UnityEngine::UIElements::Cursor __declspec(property(get=get_cursor))  cursor;

static UnityEngine::UIElements::DisplayStyle __declspec(property(get=get_display))  display;

static UnityEngine::UIElements::Length __declspec(property(get=get_flexBasis))  flexBasis;

static UnityEngine::UIElements::FlexDirection __declspec(property(get=get_flexDirection))  flexDirection;

static float_t __declspec(property(get=get_flexGrow))  flexGrow;

static float_t __declspec(property(get=get_flexShrink))  flexShrink;

static UnityEngine::UIElements::Wrap __declspec(property(get=get_flexWrap))  flexWrap;

static UnityEngine::UIElements::Length __declspec(property(get=get_fontSize))  fontSize;

static UnityEngine::UIElements::Length __declspec(property(get=get_height))  height;

static UnityEngine::UIElements::Justify __declspec(property(get=get_justifyContent))  justifyContent;

static UnityEngine::UIElements::Length __declspec(property(get=get_left))  left;

static UnityEngine::UIElements::Length __declspec(property(get=get_letterSpacing))  letterSpacing;

static UnityEngine::UIElements::Length __declspec(property(get=get_marginBottom))  marginBottom;

static UnityEngine::UIElements::Length __declspec(property(get=get_marginLeft))  marginLeft;

static UnityEngine::UIElements::Length __declspec(property(get=get_marginRight))  marginRight;

static UnityEngine::UIElements::Length __declspec(property(get=get_marginTop))  marginTop;

static UnityEngine::UIElements::Length __declspec(property(get=get_maxHeight))  maxHeight;

static UnityEngine::UIElements::Length __declspec(property(get=get_maxWidth))  maxWidth;

static UnityEngine::UIElements::Length __declspec(property(get=get_minHeight))  minHeight;

static UnityEngine::UIElements::Length __declspec(property(get=get_minWidth))  minWidth;

static float_t __declspec(property(get=get_opacity))  opacity;

static UnityEngine::UIElements::OverflowInternal __declspec(property(get=get_overflow))  overflow;

static UnityEngine::UIElements::Length __declspec(property(get=get_paddingBottom))  paddingBottom;

static UnityEngine::UIElements::Length __declspec(property(get=get_paddingLeft))  paddingLeft;

static UnityEngine::UIElements::Length __declspec(property(get=get_paddingRight))  paddingRight;

static UnityEngine::UIElements::Length __declspec(property(get=get_paddingTop))  paddingTop;

static UnityEngine::UIElements::Position __declspec(property(get=get_position))  position;

static UnityEngine::UIElements::Length __declspec(property(get=get_right))  right;

static UnityEngine::UIElements::Rotate __declspec(property(get=get_rotate))  rotate;

static UnityEngine::UIElements::Scale __declspec(property(get=get_scale))  scale;

static UnityEngine::UIElements::TextOverflow __declspec(property(get=get_textOverflow))  textOverflow;

static UnityEngine::UIElements::TextShadow __declspec(property(get=get_textShadow))  textShadow;

static UnityEngine::UIElements::Length __declspec(property(get=get_top))  top;

static UnityEngine::UIElements::TransformOrigin __declspec(property(get=get_transformOrigin))  transformOrigin;

static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=get_transitionDelay))  transitionDelay;

static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> __declspec(property(get=get_transitionDuration))  transitionDuration;

static System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> __declspec(property(get=get_transitionProperty))  transitionProperty;

static System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> __declspec(property(get=get_transitionTimingFunction))  transitionTimingFunction;

static UnityEngine::UIElements::Translate __declspec(property(get=get_translate))  translate;

static UnityEngine::Color __declspec(property(get=get_unityBackgroundImageTintColor))  unityBackgroundImageTintColor;

static UnityEngine::ScaleMode __declspec(property(get=get_unityBackgroundScaleMode))  unityBackgroundScaleMode;

static UnityEngine::Font __declspec(property(get=get_unityFont))  unityFont;

static UnityEngine::UIElements::FontDefinition __declspec(property(get=get_unityFontDefinition))  unityFontDefinition;

static UnityEngine::FontStyle __declspec(property(get=get_unityFontStyleAndWeight))  unityFontStyleAndWeight;

static UnityEngine::UIElements::OverflowClipBox __declspec(property(get=get_unityOverflowClipBox))  unityOverflowClipBox;

static UnityEngine::UIElements::Length __declspec(property(get=get_unityParagraphSpacing))  unityParagraphSpacing;

static int32_t __declspec(property(get=get_unitySliceBottom))  unitySliceBottom;

static int32_t __declspec(property(get=get_unitySliceLeft))  unitySliceLeft;

static int32_t __declspec(property(get=get_unitySliceRight))  unitySliceRight;

static int32_t __declspec(property(get=get_unitySliceTop))  unitySliceTop;

static UnityEngine::TextAnchor __declspec(property(get=get_unityTextAlign))  unityTextAlign;

static UnityEngine::Color __declspec(property(get=get_unityTextOutlineColor))  unityTextOutlineColor;

static float_t __declspec(property(get=get_unityTextOutlineWidth))  unityTextOutlineWidth;

static UnityEngine::UIElements::TextOverflowPosition __declspec(property(get=get_unityTextOverflowPosition))  unityTextOverflowPosition;

static UnityEngine::UIElements::Visibility __declspec(property(get=get_visibility))  visibility;

static UnityEngine::UIElements::WhiteSpace __declspec(property(get=get_whiteSpace))  whiteSpace;

static UnityEngine::UIElements::Length __declspec(property(get=get_width))  width;

static UnityEngine::UIElements::Length __declspec(property(get=get_wordSpacing))  wordSpacing;


// Methods

/// @brief Method Get addr 0x2cad14c size 0x54 virtual false final false
static ByRef<UnityEngine::UIElements::ComputedStyle> Get() ;

/// @brief Method Acquire addr 0x2cad1a0 size 0xac virtual false final false
static UnityEngine::UIElements::ComputedStyle Acquire() ;

/// @brief Method get_alignContent addr 0x2cadf98 size 0x78 virtual false final false
static UnityEngine::UIElements::Align get_alignContent() ;

/// @brief Method get_alignItems addr 0x2cae010 size 0x78 virtual false final false
static UnityEngine::UIElements::Align get_alignItems() ;

/// @brief Method get_alignSelf addr 0x2cae088 size 0x78 virtual false final false
static UnityEngine::UIElements::Align get_alignSelf() ;

/// @brief Method get_backgroundColor addr 0x2cae100 size 0x7c virtual false final false
static UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundImage addr 0x2cae17c size 0x80 virtual false final false
static UnityEngine::UIElements::Background get_backgroundImage() ;

/// @brief Method get_borderBottomColor addr 0x2cae1fc size 0x7c virtual false final false
static UnityEngine::Color get_borderBottomColor() ;

/// @brief Method get_borderBottomLeftRadius addr 0x2cae278 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_borderBottomLeftRadius() ;

/// @brief Method get_borderBottomRightRadius addr 0x2cae2f0 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_borderBottomRightRadius() ;

/// @brief Method get_borderBottomWidth addr 0x2cae368 size 0x78 virtual false final false
static float_t get_borderBottomWidth() ;

/// @brief Method get_borderLeftColor addr 0x2cae3e0 size 0x7c virtual false final false
static UnityEngine::Color get_borderLeftColor() ;

/// @brief Method get_borderLeftWidth addr 0x2cae45c size 0x78 virtual false final false
static float_t get_borderLeftWidth() ;

/// @brief Method get_borderRightColor addr 0x2cae4d4 size 0x7c virtual false final false
static UnityEngine::Color get_borderRightColor() ;

/// @brief Method get_borderRightWidth addr 0x2cae550 size 0x78 virtual false final false
static float_t get_borderRightWidth() ;

/// @brief Method get_borderTopColor addr 0x2cae5c8 size 0x7c virtual false final false
static UnityEngine::Color get_borderTopColor() ;

/// @brief Method get_borderTopLeftRadius addr 0x2cae644 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_borderTopLeftRadius() ;

/// @brief Method get_borderTopRightRadius addr 0x2cae6bc size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_borderTopRightRadius() ;

/// @brief Method get_borderTopWidth addr 0x2cae734 size 0x78 virtual false final false
static float_t get_borderTopWidth() ;

/// @brief Method get_bottom addr 0x2cae7ac size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_bottom() ;

/// @brief Method get_color addr 0x2cae824 size 0x78 virtual false final false
static UnityEngine::Color get_color() ;

/// @brief Method get_cursor addr 0x2cae89c size 0x88 virtual false final false
static UnityEngine::UIElements::Cursor get_cursor() ;

/// @brief Method get_display addr 0x2cae924 size 0x78 virtual false final false
static UnityEngine::UIElements::DisplayStyle get_display() ;

/// @brief Method get_flexBasis addr 0x2cae99c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_flexBasis() ;

/// @brief Method get_flexDirection addr 0x2caea14 size 0x78 virtual false final false
static UnityEngine::UIElements::FlexDirection get_flexDirection() ;

/// @brief Method get_flexGrow addr 0x2caea8c size 0x78 virtual false final false
static float_t get_flexGrow() ;

/// @brief Method get_flexShrink addr 0x2caeb04 size 0x78 virtual false final false
static float_t get_flexShrink() ;

/// @brief Method get_flexWrap addr 0x2caeb7c size 0x78 virtual false final false
static UnityEngine::UIElements::Wrap get_flexWrap() ;

/// @brief Method get_fontSize addr 0x2caebf4 size 0x74 virtual false final false
static UnityEngine::UIElements::Length get_fontSize() ;

/// @brief Method get_height addr 0x2caec68 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_height() ;

/// @brief Method get_justifyContent addr 0x2caece0 size 0x78 virtual false final false
static UnityEngine::UIElements::Justify get_justifyContent() ;

/// @brief Method get_left addr 0x2caed58 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_left() ;

/// @brief Method get_letterSpacing addr 0x2caedd0 size 0x74 virtual false final false
static UnityEngine::UIElements::Length get_letterSpacing() ;

/// @brief Method get_marginBottom addr 0x2caee44 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_marginBottom() ;

/// @brief Method get_marginLeft addr 0x2caeebc size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_marginLeft() ;

/// @brief Method get_marginRight addr 0x2caef34 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_marginRight() ;

/// @brief Method get_marginTop addr 0x2caefac size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_marginTop() ;

/// @brief Method get_maxHeight addr 0x2caf024 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_maxHeight() ;

/// @brief Method get_maxWidth addr 0x2caf09c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_maxWidth() ;

/// @brief Method get_minHeight addr 0x2caf114 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_minHeight() ;

/// @brief Method get_minWidth addr 0x2caf18c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_minWidth() ;

/// @brief Method get_opacity addr 0x2caf204 size 0x78 virtual false final false
static float_t get_opacity() ;

/// @brief Method get_overflow addr 0x2caf27c size 0x78 virtual false final false
static UnityEngine::UIElements::OverflowInternal get_overflow() ;

/// @brief Method get_paddingBottom addr 0x2caf2f4 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_paddingBottom() ;

/// @brief Method get_paddingLeft addr 0x2caf36c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_paddingLeft() ;

/// @brief Method get_paddingRight addr 0x2caf3e4 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_paddingRight() ;

/// @brief Method get_paddingTop addr 0x2caf45c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_paddingTop() ;

/// @brief Method get_position addr 0x2caf4d4 size 0x78 virtual false final false
static UnityEngine::UIElements::Position get_position() ;

/// @brief Method get_right addr 0x2caf54c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_right() ;

/// @brief Method get_rotate addr 0x2caf5c4 size 0x88 virtual false final false
static UnityEngine::UIElements::Rotate get_rotate() ;

/// @brief Method get_scale addr 0x2caf64c size 0x7c virtual false final false
static UnityEngine::UIElements::Scale get_scale() ;

/// @brief Method get_textOverflow addr 0x2caf6c8 size 0x78 virtual false final false
static UnityEngine::UIElements::TextOverflow get_textOverflow() ;

/// @brief Method get_textShadow addr 0x2caf740 size 0x84 virtual false final false
static UnityEngine::UIElements::TextShadow get_textShadow() ;

/// @brief Method get_top addr 0x2caf7c4 size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_top() ;

/// @brief Method get_transformOrigin addr 0x2caf83c size 0x88 virtual false final false
static UnityEngine::UIElements::TransformOrigin get_transformOrigin() ;

/// @brief Method get_transitionDelay addr 0x2caf8c4 size 0x78 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> get_transitionDelay() ;

/// @brief Method get_transitionDuration addr 0x2caf93c size 0x78 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> get_transitionDuration() ;

/// @brief Method get_transitionProperty addr 0x2caf9b4 size 0x78 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> get_transitionProperty() ;

/// @brief Method get_transitionTimingFunction addr 0x2cafa2c size 0x78 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> get_transitionTimingFunction() ;

/// @brief Method get_translate addr 0x2cafaa4 size 0x88 virtual false final false
static UnityEngine::UIElements::Translate get_translate() ;

/// @brief Method get_unityBackgroundImageTintColor addr 0x2cafb2c size 0x7c virtual false final false
static UnityEngine::Color get_unityBackgroundImageTintColor() ;

/// @brief Method get_unityBackgroundScaleMode addr 0x2cafba8 size 0x78 virtual false final false
static UnityEngine::ScaleMode get_unityBackgroundScaleMode() ;

/// @brief Method get_unityFont addr 0x2cafc20 size 0x74 virtual false final false
static UnityEngine::Font get_unityFont() ;

/// @brief Method get_unityFontDefinition addr 0x2cafc94 size 0x78 virtual false final false
static UnityEngine::UIElements::FontDefinition get_unityFontDefinition() ;

/// @brief Method get_unityFontStyleAndWeight addr 0x2cafd0c size 0x74 virtual false final false
static UnityEngine::FontStyle get_unityFontStyleAndWeight() ;

/// @brief Method get_unityOverflowClipBox addr 0x2cafd80 size 0x78 virtual false final false
static UnityEngine::UIElements::OverflowClipBox get_unityOverflowClipBox() ;

/// @brief Method get_unityParagraphSpacing addr 0x2cafdf8 size 0x74 virtual false final false
static UnityEngine::UIElements::Length get_unityParagraphSpacing() ;

/// @brief Method get_unitySliceBottom addr 0x2cafe6c size 0x78 virtual false final false
static int32_t get_unitySliceBottom() ;

/// @brief Method get_unitySliceLeft addr 0x2cafee4 size 0x78 virtual false final false
static int32_t get_unitySliceLeft() ;

/// @brief Method get_unitySliceRight addr 0x2caff5c size 0x78 virtual false final false
static int32_t get_unitySliceRight() ;

/// @brief Method get_unitySliceTop addr 0x2caffd4 size 0x78 virtual false final false
static int32_t get_unitySliceTop() ;

/// @brief Method get_unityTextAlign addr 0x2cb004c size 0x74 virtual false final false
static UnityEngine::TextAnchor get_unityTextAlign() ;

/// @brief Method get_unityTextOutlineColor addr 0x2cb00c0 size 0x78 virtual false final false
static UnityEngine::Color get_unityTextOutlineColor() ;

/// @brief Method get_unityTextOutlineWidth addr 0x2cb0138 size 0x74 virtual false final false
static float_t get_unityTextOutlineWidth() ;

/// @brief Method get_unityTextOverflowPosition addr 0x2cb01ac size 0x78 virtual false final false
static UnityEngine::UIElements::TextOverflowPosition get_unityTextOverflowPosition() ;

/// @brief Method get_visibility addr 0x2cb0224 size 0x74 virtual false final false
static UnityEngine::UIElements::Visibility get_visibility() ;

/// @brief Method get_whiteSpace addr 0x2cb0298 size 0x74 virtual false final false
static UnityEngine::UIElements::WhiteSpace get_whiteSpace() ;

/// @brief Method get_width addr 0x2cb030c size 0x78 virtual false final false
static UnityEngine::UIElements::Length get_width() ;

/// @brief Method get_wordSpacing addr 0x2cb0384 size 0x74 virtual false final false
static UnityEngine::UIElements::Length get_wordSpacing() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::InitialStyle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::InitialStyle, "UnityEngine.UIElements.StyleSheets", "InitialStyle");
