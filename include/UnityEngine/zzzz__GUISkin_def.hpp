#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUISettings;
}
// Forward declare root types
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class UnityEngine__GUISkin__SkinChangedDelegate;
}
// Type: ::SkinChangedDelegate
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14800))
// CS Name: UnityEngine.GUISkin::SkinChangedDelegate
class CORDL_TYPE UnityEngine__GUISkin__SkinChangedDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__GUISkin__SkinChangedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__GUISkin__SkinChangedDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__GUISkin__SkinChangedDelegate(UnityEngine__GUISkin__SkinChangedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__GUISkin__SkinChangedDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__GUISkin__SkinChangedDelegate(UnityEngine__GUISkin__SkinChangedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__GUISkin__SkinChangedDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__GUISkin__SkinChangedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__GUISkin__SkinChangedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__GUISkin__SkinChangedDelegate& operator=(UnityEngine__GUISkin__SkinChangedDelegate&& o) noexcept = default;
  constexpr UnityEngine__GUISkin__SkinChangedDelegate& operator=(UnityEngine__GUISkin__SkinChangedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__GUISkin__SkinChangedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2bc3c60 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2bc3d1c size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::GUISkin
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14801))
// CS Name: UnityEngine.GUISkin
class CORDL_TYPE GUISkin : public UnityEngine::ScriptableObject {
public:
// Declarations
using SkinChangedDelegate = UnityEngine::UnityEngine__GUISkin__SkinChangedDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~GUISkin() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUISkin", modifiers: " const&", def_value: None }]
constexpr GUISkin(GUISkin const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUISkin", modifiers: "&&", def_value: None }]
constexpr GUISkin(GUISkin&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUISkin(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr GUISkin& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUISkin& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUISkin& operator=(GUISkin&& o) noexcept = default;
  constexpr GUISkin& operator=(GUISkin const& o) noexcept = default;
                


// Fields

 UnityEngine::Font __declspec(property(get=__get_m_Font, put=__set_m_Font))  m_Font;

constexpr void __set_m_Font(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_m_Font() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_box, put=__set_m_box))  m_box;

constexpr void __set_m_box(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_box() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_button, put=__set_m_button))  m_button;

constexpr void __set_m_button(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_button() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_toggle, put=__set_m_toggle))  m_toggle;

constexpr void __set_m_toggle(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_toggle() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_label, put=__set_m_label))  m_label;

constexpr void __set_m_label(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_label() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_textField, put=__set_m_textField))  m_textField;

constexpr void __set_m_textField(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_textField() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_textArea, put=__set_m_textArea))  m_textArea;

constexpr void __set_m_textArea(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_textArea() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_window, put=__set_m_window))  m_window;

constexpr void __set_m_window(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_window() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalSlider, put=__set_m_horizontalSlider))  m_horizontalSlider;

constexpr void __set_m_horizontalSlider(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalSlider() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalSliderThumb, put=__set_m_horizontalSliderThumb))  m_horizontalSliderThumb;

constexpr void __set_m_horizontalSliderThumb(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalSliderThumb() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalSliderThumbExtent, put=__set_m_horizontalSliderThumbExtent))  m_horizontalSliderThumbExtent;

constexpr void __set_m_horizontalSliderThumbExtent(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalSliderThumbExtent() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalSlider, put=__set_m_verticalSlider))  m_verticalSlider;

constexpr void __set_m_verticalSlider(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalSlider() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalSliderThumb, put=__set_m_verticalSliderThumb))  m_verticalSliderThumb;

constexpr void __set_m_verticalSliderThumb(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalSliderThumb() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalSliderThumbExtent, put=__set_m_verticalSliderThumbExtent))  m_verticalSliderThumbExtent;

constexpr void __set_m_verticalSliderThumbExtent(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalSliderThumbExtent() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_SliderMixed, put=__set_m_SliderMixed))  m_SliderMixed;

constexpr void __set_m_SliderMixed(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_SliderMixed() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalScrollbar, put=__set_m_horizontalScrollbar))  m_horizontalScrollbar;

constexpr void __set_m_horizontalScrollbar(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalScrollbar() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalScrollbarThumb, put=__set_m_horizontalScrollbarThumb))  m_horizontalScrollbarThumb;

constexpr void __set_m_horizontalScrollbarThumb(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalScrollbarThumb() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalScrollbarLeftButton, put=__set_m_horizontalScrollbarLeftButton))  m_horizontalScrollbarLeftButton;

constexpr void __set_m_horizontalScrollbarLeftButton(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalScrollbarLeftButton() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_horizontalScrollbarRightButton, put=__set_m_horizontalScrollbarRightButton))  m_horizontalScrollbarRightButton;

constexpr void __set_m_horizontalScrollbarRightButton(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_horizontalScrollbarRightButton() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalScrollbar, put=__set_m_verticalScrollbar))  m_verticalScrollbar;

constexpr void __set_m_verticalScrollbar(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalScrollbar() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalScrollbarThumb, put=__set_m_verticalScrollbarThumb))  m_verticalScrollbarThumb;

constexpr void __set_m_verticalScrollbarThumb(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalScrollbarThumb() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalScrollbarUpButton, put=__set_m_verticalScrollbarUpButton))  m_verticalScrollbarUpButton;

constexpr void __set_m_verticalScrollbarUpButton(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalScrollbarUpButton() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_verticalScrollbarDownButton, put=__set_m_verticalScrollbarDownButton))  m_verticalScrollbarDownButton;

constexpr void __set_m_verticalScrollbarDownButton(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_verticalScrollbarDownButton() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_ScrollView, put=__set_m_ScrollView))  m_ScrollView;

constexpr void __set_m_ScrollView(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_ScrollView() const;

 ::ArrayW<UnityEngine::GUIStyle> __declspec(property(get=__get_m_CustomStyles, put=__set_m_CustomStyles))  m_CustomStyles;

constexpr void __set_m_CustomStyles(::ArrayW<UnityEngine::GUIStyle> value) ;

constexpr ::ArrayW<UnityEngine::GUIStyle> __get_m_CustomStyles() const;

 UnityEngine::GUISettings __declspec(property(get=__get_m_Settings, put=__set_m_Settings))  m_Settings;

constexpr void __set_m_Settings(UnityEngine::GUISettings value) ;

constexpr UnityEngine::GUISettings __get_m_Settings() const;

static UnityEngine::GUIStyle __declspec(property(get=__get_ms_Error, put=__set_ms_Error))  ms_Error;

static void __set_ms_Error(UnityEngine::GUIStyle value) ;

static UnityEngine::GUIStyle __get_ms_Error() ;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::GUIStyle> __declspec(property(get=__get_m_Styles, put=__set_m_Styles))  m_Styles;

constexpr void __set_m_Styles(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::GUIStyle> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::GUIStyle> __get_m_Styles() const;

static UnityEngine::UnityEngine__GUISkin__SkinChangedDelegate __declspec(property(get=__get_m_SkinChanged, put=__set_m_SkinChanged))  m_SkinChanged;

static void __set_m_SkinChanged(UnityEngine::UnityEngine__GUISkin__SkinChangedDelegate value) ;

static UnityEngine::UnityEngine__GUISkin__SkinChangedDelegate __get_m_SkinChanged() ;

static UnityEngine::GUISkin __declspec(property(get=__get_current, put=__set_current))  current;

static void __set_current(UnityEngine::GUISkin value) ;

static UnityEngine::GUISkin __get_current() ;


// Properties

 UnityEngine::Font __declspec(property(get=get_font, put=set_font))  font;

 UnityEngine::GUIStyle __declspec(property(get=get_box, put=set_box))  box;

 UnityEngine::GUIStyle __declspec(property(get=get_label, put=set_label))  label;

 UnityEngine::GUIStyle __declspec(property(get=get_textField, put=set_textField))  textField;

 UnityEngine::GUIStyle __declspec(property(get=get_textArea, put=set_textArea))  textArea;

 UnityEngine::GUIStyle __declspec(property(get=get_button, put=set_button))  button;

 UnityEngine::GUIStyle __declspec(property(get=get_toggle, put=set_toggle))  toggle;

 UnityEngine::GUIStyle __declspec(property(get=get_window, put=set_window))  window;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalSlider, put=set_horizontalSlider))  horizontalSlider;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalSliderThumb, put=set_horizontalSliderThumb))  horizontalSliderThumb;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalSliderThumbExtent, put=set_horizontalSliderThumbExtent))  horizontalSliderThumbExtent;

 UnityEngine::GUIStyle __declspec(property(get=get_sliderMixed, put=set_sliderMixed))  sliderMixed;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalSlider, put=set_verticalSlider))  verticalSlider;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalSliderThumb, put=set_verticalSliderThumb))  verticalSliderThumb;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalSliderThumbExtent, put=set_verticalSliderThumbExtent))  verticalSliderThumbExtent;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalScrollbar, put=set_horizontalScrollbar))  horizontalScrollbar;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalScrollbarThumb, put=set_horizontalScrollbarThumb))  horizontalScrollbarThumb;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalScrollbarLeftButton, put=set_horizontalScrollbarLeftButton))  horizontalScrollbarLeftButton;

 UnityEngine::GUIStyle __declspec(property(get=get_horizontalScrollbarRightButton, put=set_horizontalScrollbarRightButton))  horizontalScrollbarRightButton;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalScrollbar, put=set_verticalScrollbar))  verticalScrollbar;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalScrollbarThumb, put=set_verticalScrollbarThumb))  verticalScrollbarThumb;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalScrollbarUpButton, put=set_verticalScrollbarUpButton))  verticalScrollbarUpButton;

 UnityEngine::GUIStyle __declspec(property(get=get_verticalScrollbarDownButton, put=set_verticalScrollbarDownButton))  verticalScrollbarDownButton;

 UnityEngine::GUIStyle __declspec(property(get=get_scrollView, put=set_scrollView))  scrollView;

 ::ArrayW<UnityEngine::GUIStyle> __declspec(property(get=get_customStyles, put=set_customStyles))  customStyles;

 UnityEngine::GUISettings __declspec(property(get=get_settings))  settings;

static UnityEngine::GUIStyle __declspec(property(get=get_error))  error;


// Methods

// Ctor Parameters []
explicit GUISkin() ;

/// @brief Method .ctor addr 0x2bc2878 size 0xb4 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2bc292c size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method CleanupRoots addr 0x2bc29ac size 0x4c virtual false final false
static void CleanupRoots() ;

/// @brief Method get_font addr 0x2bc29f8 size 0x8 virtual false final false
 UnityEngine::Font get_font() ;

/// @brief Method set_font addr 0x2bc2a00 size 0xcc virtual false final false
 void set_font(UnityEngine::Font value) ;

/// @brief Method get_box addr 0x2bb6e84 size 0x8 virtual false final false
 UnityEngine::GUIStyle get_box() ;

/// @brief Method set_box addr 0x2bc2acc size 0x8 virtual false final false
 void set_box(UnityEngine::GUIStyle value) ;

/// @brief Method get_label addr 0x2bb6ab0 size 0x8 virtual false final false
 UnityEngine::GUIStyle get_label() ;

/// @brief Method set_label addr 0x2bc2ad4 size 0x8 virtual false final false
 void set_label(UnityEngine::GUIStyle value) ;

/// @brief Method get_textField addr 0x2bc2adc size 0x8 virtual false final false
 UnityEngine::GUIStyle get_textField() ;

/// @brief Method set_textField addr 0x2bc2ae4 size 0x8 virtual false final false
 void set_textField(UnityEngine::GUIStyle value) ;

/// @brief Method get_textArea addr 0x2bc2aec size 0x8 virtual false final false
 UnityEngine::GUIStyle get_textArea() ;

/// @brief Method set_textArea addr 0x2bc2af4 size 0x8 virtual false final false
 void set_textArea(UnityEngine::GUIStyle value) ;

/// @brief Method get_button addr 0x2bc2afc size 0x8 virtual false final false
 UnityEngine::GUIStyle get_button() ;

/// @brief Method set_button addr 0x2bc2b04 size 0x8 virtual false final false
 void set_button(UnityEngine::GUIStyle value) ;

/// @brief Method get_toggle addr 0x2bc2b0c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_toggle() ;

/// @brief Method set_toggle addr 0x2bc2b14 size 0x8 virtual false final false
 void set_toggle(UnityEngine::GUIStyle value) ;

/// @brief Method get_window addr 0x2bc2b1c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_window() ;

/// @brief Method set_window addr 0x2bc2b24 size 0x8 virtual false final false
 void set_window(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalSlider addr 0x2bc2b2c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalSlider() ;

/// @brief Method set_horizontalSlider addr 0x2bc2b34 size 0x8 virtual false final false
 void set_horizontalSlider(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalSliderThumb addr 0x2bc2b3c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalSliderThumb() ;

/// @brief Method set_horizontalSliderThumb addr 0x2bc2b44 size 0x8 virtual false final false
 void set_horizontalSliderThumb(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalSliderThumbExtent addr 0x2bc2b4c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalSliderThumbExtent() ;

/// @brief Method set_horizontalSliderThumbExtent addr 0x2bc2b54 size 0x8 virtual false final false
 void set_horizontalSliderThumbExtent(UnityEngine::GUIStyle value) ;

/// @brief Method get_sliderMixed addr 0x2bc2b5c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_sliderMixed() ;

/// @brief Method set_sliderMixed addr 0x2bc2b64 size 0x8 virtual false final false
 void set_sliderMixed(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalSlider addr 0x2bc2b6c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalSlider() ;

/// @brief Method set_verticalSlider addr 0x2bc2b74 size 0x8 virtual false final false
 void set_verticalSlider(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalSliderThumb addr 0x2bc2b7c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalSliderThumb() ;

/// @brief Method set_verticalSliderThumb addr 0x2bc2b84 size 0x8 virtual false final false
 void set_verticalSliderThumb(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalSliderThumbExtent addr 0x2bc2b8c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalSliderThumbExtent() ;

/// @brief Method set_verticalSliderThumbExtent addr 0x2bc2b94 size 0x8 virtual false final false
 void set_verticalSliderThumbExtent(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalScrollbar addr 0x2bc2b9c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalScrollbar() ;

/// @brief Method set_horizontalScrollbar addr 0x2bc2ba4 size 0x8 virtual false final false
 void set_horizontalScrollbar(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalScrollbarThumb addr 0x2bc2bac size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalScrollbarThumb() ;

/// @brief Method set_horizontalScrollbarThumb addr 0x2bc2bb4 size 0x8 virtual false final false
 void set_horizontalScrollbarThumb(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalScrollbarLeftButton addr 0x2bc2bbc size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalScrollbarLeftButton() ;

/// @brief Method set_horizontalScrollbarLeftButton addr 0x2bc2bc4 size 0x8 virtual false final false
 void set_horizontalScrollbarLeftButton(UnityEngine::GUIStyle value) ;

/// @brief Method get_horizontalScrollbarRightButton addr 0x2bc2bcc size 0x8 virtual false final false
 UnityEngine::GUIStyle get_horizontalScrollbarRightButton() ;

/// @brief Method set_horizontalScrollbarRightButton addr 0x2bc2bd4 size 0x8 virtual false final false
 void set_horizontalScrollbarRightButton(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalScrollbar addr 0x2bc2bdc size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalScrollbar() ;

/// @brief Method set_verticalScrollbar addr 0x2bc2be4 size 0x8 virtual false final false
 void set_verticalScrollbar(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalScrollbarThumb addr 0x2bc2bec size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalScrollbarThumb() ;

/// @brief Method set_verticalScrollbarThumb addr 0x2bc2bf4 size 0x8 virtual false final false
 void set_verticalScrollbarThumb(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalScrollbarUpButton addr 0x2bc2bfc size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalScrollbarUpButton() ;

/// @brief Method set_verticalScrollbarUpButton addr 0x2bc2c04 size 0x8 virtual false final false
 void set_verticalScrollbarUpButton(UnityEngine::GUIStyle value) ;

/// @brief Method get_verticalScrollbarDownButton addr 0x2bc2c0c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_verticalScrollbarDownButton() ;

/// @brief Method set_verticalScrollbarDownButton addr 0x2bc2c14 size 0x8 virtual false final false
 void set_verticalScrollbarDownButton(UnityEngine::GUIStyle value) ;

/// @brief Method get_scrollView addr 0x2bc2c1c size 0x8 virtual false final false
 UnityEngine::GUIStyle get_scrollView() ;

/// @brief Method set_scrollView addr 0x2bc2c24 size 0x8 virtual false final false
 void set_scrollView(UnityEngine::GUIStyle value) ;

/// @brief Method get_customStyles addr 0x2bc2c2c size 0x8 virtual false final false
 ::ArrayW<UnityEngine::GUIStyle> get_customStyles() ;

/// @brief Method set_customStyles addr 0x2bc2c34 size 0x8 virtual false final false
 void set_customStyles(::ArrayW<UnityEngine::GUIStyle> value) ;

/// @brief Method get_settings addr 0x2bc2c3c size 0x8 virtual false final false
 UnityEngine::GUISettings get_settings() ;

/// @brief Method get_error addr 0x2bc2c44 size 0xc4 virtual false final false
static UnityEngine::GUIStyle get_error() ;

/// @brief Method Apply addr 0x2bc2930 size 0x7c virtual false final false
 void Apply() ;

/// @brief Method BuildStyleCache addr 0x2bc2d08 size 0xb44 virtual false final false
 void BuildStyleCache() ;

/// @brief Method GetStyle addr 0x2bc384c size 0x2cc virtual false final false
 UnityEngine::GUIStyle GetStyle(::StringW styleName) ;

/// @brief Method FindStyle addr 0x2bc3b18 size 0x88 virtual false final false
 UnityEngine::GUIStyle FindStyle(::StringW styleName) ;

/// @brief Method MakeCurrent addr 0x2bb6740 size 0xb4 virtual false final false
 void MakeCurrent() ;

/// @brief Method GetEnumerator addr 0x2bc3ba0 size 0xc0 virtual false final false
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUISkin);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISkin, "UnityEngine", "GUISkin");
NEED_NO_BOX(UnityEngine::UnityEngine__GUISkin__SkinChangedDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__GUISkin__SkinChangedDelegate, "UnityEngine", "GUISkin/SkinChangedDelegate");
