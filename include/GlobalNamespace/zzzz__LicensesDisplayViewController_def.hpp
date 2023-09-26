#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace HMUI {
class TextPageScrollView;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class LicensesDisplayViewController;
}
// Type: ::LicensesDisplayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5790))
// CS Name: LicensesDisplayViewController
class CORDL_TYPE LicensesDisplayViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~LicensesDisplayViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LicensesDisplayViewController", modifiers: " const&", def_value: None }]
constexpr LicensesDisplayViewController(LicensesDisplayViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LicensesDisplayViewController", modifiers: "&&", def_value: None }]
constexpr LicensesDisplayViewController(LicensesDisplayViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LicensesDisplayViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr LicensesDisplayViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LicensesDisplayViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LicensesDisplayViewController& operator=(LicensesDisplayViewController&& o) noexcept = default;
  constexpr LicensesDisplayViewController& operator=(LicensesDisplayViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 UnityEngine::TextAsset __declspec(property(get=__get__textAsset, put=__set__textAsset))  _textAsset;

constexpr void __set__textAsset(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get__textAsset() const;


// Methods

/// @brief Method DidActivate addr 0x21a7f7c size 0x44 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit LicensesDisplayViewController() ;

/// @brief Method .ctor addr 0x21a7fc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LicensesDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LicensesDisplayViewController, "", "LicensesDisplayViewController");
