#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
namespace UnityEngine::TextCore::Text {
class UnicodeLineBreakingRules;
}
namespace UnityEngine {
class Font;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
struct UnityEngine__TextCore__Text__TextSettings__FontReferenceMap;
}
// Type: ::FontReferenceMap
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13515))
// CS Name: UnityEngine.TextCore.Text.TextSettings::FontReferenceMap
struct CORDL_TYPE UnityEngine__TextCore__Text__TextSettings__FontReferenceMap : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }]
constexpr UnityEngine__TextCore__Text__TextSettings__FontReferenceMap(UnityEngine::Font font, UnityEngine::TextCore::Text::FontAsset fontAsset) noexcept;


                    constexpr UnityEngine__TextCore__Text__TextSettings__FontReferenceMap(UnityEngine__TextCore__Text__TextSettings__FontReferenceMap const&) = default;
                    constexpr UnityEngine__TextCore__Text__TextSettings__FontReferenceMap(UnityEngine__TextCore__Text__TextSettings__FontReferenceMap&&) = default;
                    constexpr UnityEngine__TextCore__Text__TextSettings__FontReferenceMap& operator=(UnityEngine__TextCore__Text__TextSettings__FontReferenceMap const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TextCore__Text__TextSettings__FontReferenceMap& operator=(UnityEngine__TextCore__Text__TextSettings__FontReferenceMap&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextCore__Text__TextSettings__FontReferenceMap(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Font __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_font() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_fontAsset() const;


// Methods

/// @brief Method .ctor addr 0x2bfaeb8 size 0x8 virtual false final false
 void _ctor(UnityEngine::Font font, UnityEngine::TextCore::Text::FontAsset fontAsset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextSettings
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13516))
// CS Name: UnityEngine.TextCore.Text.TextSettings
class CORDL_TYPE TextSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
using FontReferenceMap = UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TextSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSettings", modifiers: " const&", def_value: None }]
constexpr TextSettings(TextSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSettings", modifiers: "&&", def_value: None }]
constexpr TextSettings(TextSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TextSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextSettings& operator=(TextSettings&& o) noexcept = default;
  constexpr TextSettings& operator=(TextSettings const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(::StringW value) ;

constexpr ::StringW __get_m_Version() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_m_DefaultFontAsset, put=__set_m_DefaultFontAsset))  m_DefaultFontAsset;

constexpr void __set_m_DefaultFontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_m_DefaultFontAsset() const;

 ::StringW __declspec(property(get=__get_m_DefaultFontAssetPath, put=__set_m_DefaultFontAssetPath))  m_DefaultFontAssetPath;

constexpr void __set_m_DefaultFontAssetPath(::StringW value) ;

constexpr ::StringW __get_m_DefaultFontAssetPath() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_m_FallbackFontAssets, put=__set_m_FallbackFontAssets))  m_FallbackFontAssets;

constexpr void __set_m_FallbackFontAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __get_m_FallbackFontAssets() const;

 bool __declspec(property(get=__get_m_MatchMaterialPreset, put=__set_m_MatchMaterialPreset))  m_MatchMaterialPreset;

constexpr void __set_m_MatchMaterialPreset(bool value) ;

constexpr bool __get_m_MatchMaterialPreset() const;

 int32_t __declspec(property(get=__get_m_MissingCharacterUnicode, put=__set_m_MissingCharacterUnicode))  m_MissingCharacterUnicode;

constexpr void __set_m_MissingCharacterUnicode(int32_t value) ;

constexpr int32_t __get_m_MissingCharacterUnicode() const;

 bool __declspec(property(get=__get_m_ClearDynamicDataOnBuild, put=__set_m_ClearDynamicDataOnBuild))  m_ClearDynamicDataOnBuild;

constexpr void __set_m_ClearDynamicDataOnBuild(bool value) ;

constexpr bool __get_m_ClearDynamicDataOnBuild() const;

 UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_m_DefaultSpriteAsset, put=__set_m_DefaultSpriteAsset))  m_DefaultSpriteAsset;

constexpr void __set_m_DefaultSpriteAsset(UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr UnityEngine::TextCore::Text::SpriteAsset __get_m_DefaultSpriteAsset() const;

 ::StringW __declspec(property(get=__get_m_DefaultSpriteAssetPath, put=__set_m_DefaultSpriteAssetPath))  m_DefaultSpriteAssetPath;

constexpr void __set_m_DefaultSpriteAssetPath(::StringW value) ;

constexpr ::StringW __get_m_DefaultSpriteAssetPath() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> __declspec(property(get=__get_m_FallbackSpriteAssets, put=__set_m_FallbackSpriteAssets))  m_FallbackSpriteAssets;

constexpr void __set_m_FallbackSpriteAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> __get_m_FallbackSpriteAssets() const;

 uint32_t __declspec(property(get=__get_m_MissingSpriteCharacterUnicode, put=__set_m_MissingSpriteCharacterUnicode))  m_MissingSpriteCharacterUnicode;

constexpr void __set_m_MissingSpriteCharacterUnicode(uint32_t value) ;

constexpr uint32_t __get_m_MissingSpriteCharacterUnicode() const;

 UnityEngine::TextCore::Text::TextStyleSheet __declspec(property(get=__get_m_DefaultStyleSheet, put=__set_m_DefaultStyleSheet))  m_DefaultStyleSheet;

constexpr void __set_m_DefaultStyleSheet(UnityEngine::TextCore::Text::TextStyleSheet value) ;

constexpr UnityEngine::TextCore::Text::TextStyleSheet __get_m_DefaultStyleSheet() const;

 ::StringW __declspec(property(get=__get_m_StyleSheetsResourcePath, put=__set_m_StyleSheetsResourcePath))  m_StyleSheetsResourcePath;

constexpr void __set_m_StyleSheetsResourcePath(::StringW value) ;

constexpr ::StringW __get_m_StyleSheetsResourcePath() const;

 ::StringW __declspec(property(get=__get_m_DefaultColorGradientPresetsPath, put=__set_m_DefaultColorGradientPresetsPath))  m_DefaultColorGradientPresetsPath;

constexpr void __set_m_DefaultColorGradientPresetsPath(::StringW value) ;

constexpr ::StringW __get_m_DefaultColorGradientPresetsPath() const;

 UnityEngine::TextCore::Text::UnicodeLineBreakingRules __declspec(property(get=__get_m_UnicodeLineBreakingRules, put=__set_m_UnicodeLineBreakingRules))  m_UnicodeLineBreakingRules;

constexpr void __set_m_UnicodeLineBreakingRules(UnityEngine::TextCore::Text::UnicodeLineBreakingRules value) ;

constexpr UnityEngine::TextCore::Text::UnicodeLineBreakingRules __get_m_UnicodeLineBreakingRules() const;

 bool __declspec(property(get=__get_m_DisplayWarnings, put=__set_m_DisplayWarnings))  m_DisplayWarnings;

constexpr void __set_m_DisplayWarnings(bool value) ;

constexpr bool __get_m_DisplayWarnings() const;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_m_FontLookup, put=__set_m_FontLookup))  m_FontLookup;

constexpr void __set_m_FontLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> __get_m_FontLookup() const;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap> __declspec(property(get=__get_m_FontReferences, put=__set_m_FontReferences))  m_FontReferences;

constexpr void __set_m_FontReferences(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap> __get_m_FontReferences() const;


// Properties

 ::StringW __declspec(property(get=get_version, put=set_version))  version;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=get_defaultFontAsset, put=set_defaultFontAsset))  defaultFontAsset;

 ::StringW __declspec(property(get=get_defaultFontAssetPath, put=set_defaultFontAssetPath))  defaultFontAssetPath;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=get_fallbackFontAssets, put=set_fallbackFontAssets))  fallbackFontAssets;

 bool __declspec(property(get=get_matchMaterialPreset, put=set_matchMaterialPreset))  matchMaterialPreset;

 int32_t __declspec(property(get=get_missingCharacterUnicode, put=set_missingCharacterUnicode))  missingCharacterUnicode;

 bool __declspec(property(get=get_clearDynamicDataOnBuild, put=set_clearDynamicDataOnBuild))  clearDynamicDataOnBuild;

 UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=get_defaultSpriteAsset, put=set_defaultSpriteAsset))  defaultSpriteAsset;

 ::StringW __declspec(property(get=get_defaultSpriteAssetPath, put=set_defaultSpriteAssetPath))  defaultSpriteAssetPath;

 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> __declspec(property(get=get_fallbackSpriteAssets, put=set_fallbackSpriteAssets))  fallbackSpriteAssets;

 uint32_t __declspec(property(get=get_missingSpriteCharacterUnicode, put=set_missingSpriteCharacterUnicode))  missingSpriteCharacterUnicode;

 UnityEngine::TextCore::Text::TextStyleSheet __declspec(property(get=get_defaultStyleSheet, put=set_defaultStyleSheet))  defaultStyleSheet;

 ::StringW __declspec(property(get=get_styleSheetsResourcePath, put=set_styleSheetsResourcePath))  styleSheetsResourcePath;

 ::StringW __declspec(property(get=get_defaultColorGradientPresetsPath, put=set_defaultColorGradientPresetsPath))  defaultColorGradientPresetsPath;

 UnityEngine::TextCore::Text::UnicodeLineBreakingRules __declspec(property(get=get_lineBreakingRules, put=set_lineBreakingRules))  lineBreakingRules;

 bool __declspec(property(get=get_displayWarnings, put=set_displayWarnings))  displayWarnings;


// Methods

/// @brief Method get_version addr 0x2bfa83c size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method set_version addr 0x2bfa844 size 0x8 virtual false final false
 void set_version(::StringW value) ;

/// @brief Method get_defaultFontAsset addr 0x2bfa84c size 0x8 virtual false final false
 UnityEngine::TextCore::Text::FontAsset get_defaultFontAsset() ;

/// @brief Method set_defaultFontAsset addr 0x2bfa854 size 0x8 virtual false final false
 void set_defaultFontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

/// @brief Method get_defaultFontAssetPath addr 0x2bfa85c size 0x8 virtual false final false
 ::StringW get_defaultFontAssetPath() ;

/// @brief Method set_defaultFontAssetPath addr 0x2bfa864 size 0x8 virtual false final false
 void set_defaultFontAssetPath(::StringW value) ;

/// @brief Method get_fallbackFontAssets addr 0x2bfa86c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> get_fallbackFontAssets() ;

/// @brief Method set_fallbackFontAssets addr 0x2bfa874 size 0x8 virtual false final false
 void set_fallbackFontAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value) ;

/// @brief Method get_matchMaterialPreset addr 0x2bfa87c size 0x8 virtual false final false
 bool get_matchMaterialPreset() ;

/// @brief Method set_matchMaterialPreset addr 0x2bfa884 size 0xc virtual false final false
 void set_matchMaterialPreset(bool value) ;

/// @brief Method get_missingCharacterUnicode addr 0x2bfa890 size 0x8 virtual false final false
 int32_t get_missingCharacterUnicode() ;

/// @brief Method set_missingCharacterUnicode addr 0x2bfa898 size 0x8 virtual false final false
 void set_missingCharacterUnicode(int32_t value) ;

/// @brief Method get_clearDynamicDataOnBuild addr 0x2bfa8a0 size 0x8 virtual false final false
 bool get_clearDynamicDataOnBuild() ;

/// @brief Method set_clearDynamicDataOnBuild addr 0x2bfa8a8 size 0xc virtual false final false
 void set_clearDynamicDataOnBuild(bool value) ;

/// @brief Method get_defaultSpriteAsset addr 0x2bfa8b4 size 0x8 virtual false final false
 UnityEngine::TextCore::Text::SpriteAsset get_defaultSpriteAsset() ;

/// @brief Method set_defaultSpriteAsset addr 0x2bfa8bc size 0x8 virtual false final false
 void set_defaultSpriteAsset(UnityEngine::TextCore::Text::SpriteAsset value) ;

/// @brief Method get_defaultSpriteAssetPath addr 0x2bfa8c4 size 0x8 virtual false final false
 ::StringW get_defaultSpriteAssetPath() ;

/// @brief Method set_defaultSpriteAssetPath addr 0x2bfa8cc size 0x8 virtual false final false
 void set_defaultSpriteAssetPath(::StringW value) ;

/// @brief Method get_fallbackSpriteAssets addr 0x2bfa8d4 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> get_fallbackSpriteAssets() ;

/// @brief Method set_fallbackSpriteAssets addr 0x2bfa8dc size 0x8 virtual false final false
 void set_fallbackSpriteAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> value) ;

/// @brief Method get_missingSpriteCharacterUnicode addr 0x2bfa8e4 size 0x8 virtual false final false
 uint32_t get_missingSpriteCharacterUnicode() ;

/// @brief Method set_missingSpriteCharacterUnicode addr 0x2bfa8ec size 0x8 virtual false final false
 void set_missingSpriteCharacterUnicode(uint32_t value) ;

/// @brief Method get_defaultStyleSheet addr 0x2bfa8f4 size 0x8 virtual false final false
 UnityEngine::TextCore::Text::TextStyleSheet get_defaultStyleSheet() ;

/// @brief Method set_defaultStyleSheet addr 0x2bfa8fc size 0x8 virtual false final false
 void set_defaultStyleSheet(UnityEngine::TextCore::Text::TextStyleSheet value) ;

/// @brief Method get_styleSheetsResourcePath addr 0x2bfa904 size 0x8 virtual false final false
 ::StringW get_styleSheetsResourcePath() ;

/// @brief Method set_styleSheetsResourcePath addr 0x2bfa90c size 0x8 virtual false final false
 void set_styleSheetsResourcePath(::StringW value) ;

/// @brief Method get_defaultColorGradientPresetsPath addr 0x2bfa914 size 0x8 virtual false final false
 ::StringW get_defaultColorGradientPresetsPath() ;

/// @brief Method set_defaultColorGradientPresetsPath addr 0x2bfa91c size 0x8 virtual false final false
 void set_defaultColorGradientPresetsPath(::StringW value) ;

/// @brief Method get_lineBreakingRules addr 0x2bfa924 size 0x84 virtual false final false
 UnityEngine::TextCore::Text::UnicodeLineBreakingRules get_lineBreakingRules() ;

/// @brief Method set_lineBreakingRules addr 0x2bfa9a8 size 0x8 virtual false final false
 void set_lineBreakingRules(UnityEngine::TextCore::Text::UnicodeLineBreakingRules value) ;

/// @brief Method get_displayWarnings addr 0x2bfa9b0 size 0x8 virtual false final false
 bool get_displayWarnings() ;

/// @brief Method set_displayWarnings addr 0x2bfa9b8 size 0xc virtual false final false
 void set_displayWarnings(bool value) ;

/// @brief Method InitializeFontReferenceLookup addr 0x2bfa9c4 size 0x1ec virtual false final false
 void InitializeFontReferenceLookup() ;

/// @brief Method GetCachedFontAssetInternal addr 0x2bfabb0 size 0x308 virtual false final false
 UnityEngine::TextCore::Text::FontAsset GetCachedFontAssetInternal(UnityEngine::Font font) ;

// Ctor Parameters []
explicit TextSettings() ;

/// @brief Method .ctor addr 0x2bfaec0 size 0x108 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextSettings, "UnityEngine.TextCore.Text", "TextSettings");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap, "UnityEngine.TextCore.Text", "TextSettings/FontReferenceMap");
