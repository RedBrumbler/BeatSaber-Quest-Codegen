#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class TextAsset;
}
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
// Forward declare root types
namespace Polyglot {
class LocalizationAsset;
}
// Type: Polyglot::LocalizationAsset
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15556))
// CS Name: Polyglot.LocalizationAsset
class CORDL_TYPE LocalizationAsset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalizationAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationAsset", modifiers: " const&", def_value: None }]
constexpr LocalizationAsset(LocalizationAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationAsset", modifiers: "&&", def_value: None }]
constexpr LocalizationAsset(LocalizationAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizationAsset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalizationAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizationAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizationAsset& operator=(LocalizationAsset&& o) noexcept = default;
  constexpr LocalizationAsset& operator=(LocalizationAsset const& o) noexcept = default;
                


// Fields

 UnityEngine::TextAsset __declspec(property(get=__get_textAsset, put=__set_textAsset))  textAsset;

constexpr void __set_textAsset(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_textAsset() const;

 Polyglot::GoogleDriveDownloadFormat __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(Polyglot::GoogleDriveDownloadFormat value) ;

constexpr Polyglot::GoogleDriveDownloadFormat __get_format() const;


// Properties

 UnityEngine::TextAsset __declspec(property(get=get_TextAsset, put=set_TextAsset))  TextAsset;

 Polyglot::GoogleDriveDownloadFormat __declspec(property(get=get_Format, put=set_Format))  Format;


// Methods

/// @brief Method get_TextAsset addr 0x26a2a14 size 0x8 virtual false final false
 UnityEngine::TextAsset get_TextAsset() ;

/// @brief Method set_TextAsset addr 0x26a2a1c size 0x8 virtual false final false
 void set_TextAsset(UnityEngine::TextAsset value) ;

/// @brief Method get_Format addr 0x26a2a24 size 0x8 virtual false final false
 Polyglot::GoogleDriveDownloadFormat get_Format() ;

/// @brief Method set_Format addr 0x26a2a2c size 0x8 virtual false final false
 void set_Format(Polyglot::GoogleDriveDownloadFormat value) ;

// Ctor Parameters []
explicit LocalizationAsset() ;

/// @brief Method .ctor addr 0x26a2a34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizationAsset);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationAsset, "Polyglot", "LocalizationAsset");
