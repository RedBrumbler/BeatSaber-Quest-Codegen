#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct TextGenerationSettings;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
class FontData;
}
namespace UnityEngine {
class TextGenerator;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
// Forward declare root types
namespace UnityEngine::UI {
class Text;
}
// Type: UnityEngine.UI::Text
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13057))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13086))
// CS Name: UnityEngine.UI.Text
class CORDL_TYPE Text : public UnityEngine::UI::MaskableGraphic {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr operator  UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~Text() = default;

// Ctor Parameters [CppParam { name: "", ty: "Text", modifiers: " const&", def_value: None }]
constexpr Text(Text const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Text", modifiers: "&&", def_value: None }]
constexpr Text(Text&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Text(void* ptr) noexcept : UnityEngine::UI::MaskableGraphic(ptr) {
}


  constexpr Text& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Text& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Text& operator=(Text&& o) noexcept = default;
  constexpr Text& operator=(Text const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::FontData __declspec(property(get=__get_m_FontData, put=__set_m_FontData))  m_FontData;

constexpr void __set_m_FontData(UnityEngine::UI::FontData value) ;

constexpr UnityEngine::UI::FontData __get_m_FontData() const;

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 UnityEngine::TextGenerator __declspec(property(get=__get_m_TextCache, put=__set_m_TextCache))  m_TextCache;

constexpr void __set_m_TextCache(UnityEngine::TextGenerator value) ;

constexpr UnityEngine::TextGenerator __get_m_TextCache() const;

 UnityEngine::TextGenerator __declspec(property(get=__get_m_TextCacheForLayout, put=__set_m_TextCacheForLayout))  m_TextCacheForLayout;

constexpr void __set_m_TextCacheForLayout(UnityEngine::TextGenerator value) ;

constexpr UnityEngine::TextGenerator __get_m_TextCacheForLayout() const;

static UnityEngine::Material __declspec(property(get=__get_s_DefaultText, put=__set_s_DefaultText))  s_DefaultText;

static void __set_s_DefaultText(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_DefaultText() ;

 bool __declspec(property(get=__get_m_DisableFontTextureRebuiltCallback, put=__set_m_DisableFontTextureRebuiltCallback))  m_DisableFontTextureRebuiltCallback;

constexpr void __set_m_DisableFontTextureRebuiltCallback(bool value) ;

constexpr bool __get_m_DisableFontTextureRebuiltCallback() const;

 ::ArrayW<UnityEngine::UIVertex> __declspec(property(get=__get_m_TempVerts, put=__set_m_TempVerts))  m_TempVerts;

constexpr void __set_m_TempVerts(::ArrayW<UnityEngine::UIVertex> value) ;

constexpr ::ArrayW<UnityEngine::UIVertex> __get_m_TempVerts() const;


// Properties

 UnityEngine::TextGenerator __declspec(property(get=get_cachedTextGenerator))  cachedTextGenerator;

 UnityEngine::TextGenerator __declspec(property(get=get_cachedTextGeneratorForLayout))  cachedTextGeneratorForLayout;

 UnityEngine::Texture __declspec(property(get=get_mainTexture))  mainTexture;

 UnityEngine::Font __declspec(property(get=get_font, put=set_font))  font;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(get=get_supportRichText, put=set_supportRichText))  supportRichText;

 bool __declspec(property(get=get_resizeTextForBestFit, put=set_resizeTextForBestFit))  resizeTextForBestFit;

 int32_t __declspec(property(get=get_resizeTextMinSize, put=set_resizeTextMinSize))  resizeTextMinSize;

 int32_t __declspec(property(get=get_resizeTextMaxSize, put=set_resizeTextMaxSize))  resizeTextMaxSize;

 UnityEngine::TextAnchor __declspec(property(get=get_alignment, put=set_alignment))  alignment;

 bool __declspec(property(get=get_alignByGeometry, put=set_alignByGeometry))  alignByGeometry;

 int32_t __declspec(property(get=get_fontSize, put=set_fontSize))  fontSize;

 UnityEngine::HorizontalWrapMode __declspec(property(get=get_horizontalOverflow, put=set_horizontalOverflow))  horizontalOverflow;

 UnityEngine::VerticalWrapMode __declspec(property(get=get_verticalOverflow, put=set_verticalOverflow))  verticalOverflow;

 float_t __declspec(property(get=get_lineSpacing, put=set_lineSpacing))  lineSpacing;

 UnityEngine::FontStyle __declspec(property(get=get_fontStyle, put=set_fontStyle))  fontStyle;

 float_t __declspec(property(get=get_pixelsPerUnit))  pixelsPerUnit;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

// Ctor Parameters []
explicit Text() ;

/// @brief Method .ctor addr 0x2c42b1c size 0x98 virtual false final false
 void _ctor() ;

/// @brief Method get_cachedTextGenerator addr 0x2c42bb4 size 0x98 virtual false final false
 UnityEngine::TextGenerator get_cachedTextGenerator() ;

/// @brief Method get_cachedTextGeneratorForLayout addr 0x2c42c4c size 0x6c virtual false final false
 UnityEngine::TextGenerator get_cachedTextGeneratorForLayout() ;

/// @brief Method get_mainTexture addr 0x2c42cb8 size 0x1a8 virtual true final false
 UnityEngine::Texture get_mainTexture() ;

/// @brief Method FontTextureChanged addr 0x2c42e7c size 0x10c virtual false final false
 void FontTextureChanged() ;

/// @brief Method get_font addr 0x2c42e60 size 0x1c virtual false final false
 UnityEngine::Font get_font() ;

/// @brief Method set_font addr 0x2c42f88 size 0x10c virtual false final false
 void set_font(UnityEngine::Font value) ;

/// @brief Method get_text addr 0x2c43094 size 0x8 virtual true final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2c4309c size 0xc8 virtual true final false
 void set_text(::StringW value) ;

/// @brief Method get_supportRichText addr 0x2c43164 size 0x1c virtual false final false
 bool get_supportRichText() ;

/// @brief Method set_supportRichText addr 0x2c43180 size 0x60 virtual false final false
 void set_supportRichText(bool value) ;

/// @brief Method get_resizeTextForBestFit addr 0x2c431e0 size 0x1c virtual false final false
 bool get_resizeTextForBestFit() ;

/// @brief Method set_resizeTextForBestFit addr 0x2c431fc size 0x60 virtual false final false
 void set_resizeTextForBestFit(bool value) ;

/// @brief Method get_resizeTextMinSize addr 0x2c4325c size 0x1c virtual false final false
 int32_t get_resizeTextMinSize() ;

/// @brief Method set_resizeTextMinSize addr 0x2c43278 size 0x54 virtual false final false
 void set_resizeTextMinSize(int32_t value) ;

/// @brief Method get_resizeTextMaxSize addr 0x2c432cc size 0x1c virtual false final false
 int32_t get_resizeTextMaxSize() ;

/// @brief Method set_resizeTextMaxSize addr 0x2c432e8 size 0x54 virtual false final false
 void set_resizeTextMaxSize(int32_t value) ;

/// @brief Method get_alignment addr 0x2c4333c size 0x1c virtual false final false
 UnityEngine::TextAnchor get_alignment() ;

/// @brief Method set_alignment addr 0x2c43358 size 0x54 virtual false final false
 void set_alignment(UnityEngine::TextAnchor value) ;

/// @brief Method get_alignByGeometry addr 0x2c433ac size 0x1c virtual false final false
 bool get_alignByGeometry() ;

/// @brief Method set_alignByGeometry addr 0x2c433c8 size 0x48 virtual false final false
 void set_alignByGeometry(bool value) ;

/// @brief Method get_fontSize addr 0x2c43410 size 0x1c virtual false final false
 int32_t get_fontSize() ;

/// @brief Method set_fontSize addr 0x2c4342c size 0x54 virtual false final false
 void set_fontSize(int32_t value) ;

/// @brief Method get_horizontalOverflow addr 0x2c43480 size 0x1c virtual false final false
 UnityEngine::HorizontalWrapMode get_horizontalOverflow() ;

/// @brief Method set_horizontalOverflow addr 0x2c4349c size 0x54 virtual false final false
 void set_horizontalOverflow(UnityEngine::HorizontalWrapMode value) ;

/// @brief Method get_verticalOverflow addr 0x2c434f0 size 0x1c virtual false final false
 UnityEngine::VerticalWrapMode get_verticalOverflow() ;

/// @brief Method set_verticalOverflow addr 0x2c4350c size 0x54 virtual false final false
 void set_verticalOverflow(UnityEngine::VerticalWrapMode value) ;

/// @brief Method get_lineSpacing addr 0x2c43560 size 0x1c virtual false final false
 float_t get_lineSpacing() ;

/// @brief Method set_lineSpacing addr 0x2c4357c size 0x54 virtual false final false
 void set_lineSpacing(float_t value) ;

/// @brief Method get_fontStyle addr 0x2c435d0 size 0x1c virtual false final false
 UnityEngine::FontStyle get_fontStyle() ;

/// @brief Method set_fontStyle addr 0x2c435ec size 0x54 virtual false final false
 void set_fontStyle(UnityEngine::FontStyle value) ;

/// @brief Method get_pixelsPerUnit addr 0x2c43640 size 0x148 virtual false final false
 float_t get_pixelsPerUnit() ;

/// @brief Method OnEnable addr 0x2c43788 size 0x7c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c43804 size 0x64 virtual true final false
 void OnDisable() ;

/// @brief Method UpdateGeometry addr 0x2c43868 size 0x88 virtual true final false
 void UpdateGeometry() ;

/// @brief Method AssignDefaultFont addr 0x2c438f0 size 0x70 virtual false final false
 void AssignDefaultFont() ;

/// @brief Method AssignDefaultFontIfNecessary addr 0x2c43960 size 0xbc virtual false final false
 void AssignDefaultFontIfNecessary() ;

/// @brief Method GetGenerationSettings addr 0x2c43a1c size 0x1ec virtual false final false
 UnityEngine::TextGenerationSettings GetGenerationSettings(UnityEngine::Vector2 extents) ;

/// @brief Method GetTextAnchorPivot addr 0x2c43c08 size 0x6c virtual false final false
static UnityEngine::Vector2 GetTextAnchorPivot(UnityEngine::TextAnchor anchor) ;

/// @brief Method OnPopulateMesh addr 0x2c43c74 size 0x5f0 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2c44374 size 0x4 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2c44378 size 0x4 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2c4437c size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x2c44384 size 0xdc virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x2c44460 size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x2c44468 size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x2c44470 size 0xc8 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x2c44538 size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x2c44540 size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Text);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Text, "UnityEngine.UI", "Text");
