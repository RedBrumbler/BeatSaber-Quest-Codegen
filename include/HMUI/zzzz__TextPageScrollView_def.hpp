#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class TextPageScrollView;
}
// Type: HMUI::TextPageScrollView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13718))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13740))
// CS Name: HMUI.TextPageScrollView
class CORDL_TYPE TextPageScrollView : public HMUI::ScrollView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~TextPageScrollView() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: " const&", def_value: None }]
constexpr TextPageScrollView(TextPageScrollView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "&&", def_value: None }]
constexpr TextPageScrollView(TextPageScrollView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextPageScrollView(void* ptr) noexcept : HMUI::ScrollView(ptr) {
}


  constexpr TextPageScrollView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextPageScrollView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextPageScrollView& operator=(TextPageScrollView&& o) noexcept = default;
  constexpr TextPageScrollView& operator=(TextPageScrollView const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;


// Methods

/// @brief Method SetText addr 0x20107a4 size 0x68 virtual false final false
 void SetText(::StringW text) ;

// Ctor Parameters []
explicit TextPageScrollView() ;

/// @brief Method .ctor addr 0x201080c size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::TextPageScrollView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextPageScrollView, "HMUI", "TextPageScrollView");
