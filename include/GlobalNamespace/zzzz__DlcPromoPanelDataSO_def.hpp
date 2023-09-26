#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo;
}
// Type: ::MusicPackPromoInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5926))
// CS Name: DlcPromoPanelDataSO::MusicPackPromoInfo
class CORDL_TYPE GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo(GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo(GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo& operator=(GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo&& o) noexcept = default;
  constexpr GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo& operator=(GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PreviewBeatmapLevelPackSO __declspec(property(get=__get__beatmapLevelPack, put=__set__beatmapLevelPack))  _beatmapLevelPack;

constexpr void __set__beatmapLevelPack(GlobalNamespace::PreviewBeatmapLevelPackSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelPackSO __get__beatmapLevelPack() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel))  _beatmapLevel;

constexpr void __set__beatmapLevel(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get__beatmapLevel() const;

 UnityEngine::Sprite __declspec(property(get=__get__bannerImage, put=__set__bannerImage))  _bannerImage;

constexpr void __set__bannerImage(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__bannerImage() const;

 ::StringW __declspec(property(get=__get__bannerPromoText, put=__set__bannerPromoText))  _bannerPromoText;

constexpr void __set__bannerPromoText(::StringW value) ;

constexpr ::StringW __get__bannerPromoText() const;

 float_t __declspec(property(get=__get__bannerPromoTextPosition, put=__set__bannerPromoTextPosition))  _bannerPromoTextPosition;

constexpr void __set__bannerPromoTextPosition(float_t value) ;

constexpr float_t __get__bannerPromoTextPosition() const;


// Properties

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=get_previewBeatmapLevelPack))  previewBeatmapLevelPack;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_previewBeatmapLevel))  previewBeatmapLevel;

 UnityEngine::Sprite __declspec(property(get=get_bannerImage))  bannerImage;

 ::StringW __declspec(property(get=get_bannerPromoText))  bannerPromoText;

 float_t __declspec(property(get=get_bannerPromoTextPosition))  bannerPromoTextPosition;


// Methods

/// @brief Method get_previewBeatmapLevelPack addr 0x21c9444 size 0x8 virtual false final false
 GlobalNamespace::IBeatmapLevelPack get_previewBeatmapLevelPack() ;

/// @brief Method get_previewBeatmapLevel addr 0x21c944c size 0x8 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_previewBeatmapLevel() ;

/// @brief Method get_bannerImage addr 0x21c9454 size 0x8 virtual false final false
 UnityEngine::Sprite get_bannerImage() ;

/// @brief Method get_bannerPromoText addr 0x21c945c size 0x8 virtual false final false
 ::StringW get_bannerPromoText() ;

/// @brief Method get_bannerPromoTextPosition addr 0x21c9464 size 0x8 virtual false final false
 float_t get_bannerPromoTextPosition() ;

// Ctor Parameters []
explicit GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo() ;

/// @brief Method .ctor addr 0x21c946c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DlcPromoPanelDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5927))
// CS Name: DlcPromoPanelDataSO
class CORDL_TYPE DlcPromoPanelDataSO : public UnityEngine::ScriptableObject {
public:
// Declarations
using MusicPackPromoInfo = GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DlcPromoPanelDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelDataSO", modifiers: " const&", def_value: None }]
constexpr DlcPromoPanelDataSO(DlcPromoPanelDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelDataSO", modifiers: "&&", def_value: None }]
constexpr DlcPromoPanelDataSO(DlcPromoPanelDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DlcPromoPanelDataSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr DlcPromoPanelDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DlcPromoPanelDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DlcPromoPanelDataSO& operator=(DlcPromoPanelDataSO&& o) noexcept = default;
  constexpr DlcPromoPanelDataSO& operator=(DlcPromoPanelDataSO const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__defaultMusicPackPromoIndex, put=__set__defaultMusicPackPromoIndex))  _defaultMusicPackPromoIndex;

constexpr void __set__defaultMusicPackPromoIndex(int32_t value) ;

constexpr int32_t __get__defaultMusicPackPromoIndex() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __declspec(property(get=__get__musicPackPromoInfos, put=__set__musicPackPromoInfos))  _musicPackPromoInfos;

constexpr void __set__musicPackPromoInfos(::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __get__musicPackPromoInfos() const;

 int32_t __declspec(property(get=__get__cutOffTest, put=__set__cutOffTest))  _cutOffTest;

constexpr void __set__cutOffTest(int32_t value) ;

constexpr int32_t __get__cutOffTest() const;

 int32_t __declspec(property(get=__get__minNumberOfNotOwnedPacks, put=__set__minNumberOfNotOwnedPacks))  _minNumberOfNotOwnedPacks;

constexpr void __set__minNumberOfNotOwnedPacks(int32_t value) ;

constexpr int32_t __get__minNumberOfNotOwnedPacks() const;


// Properties

 int32_t __declspec(property(get=get_cutOffTest))  cutOffTest;

 int32_t __declspec(property(get=get_minNumberOfNotOwnedPacks))  minNumberOfNotOwnedPacks;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __declspec(property(get=get_musicPackPromoInfos))  musicPackPromoInfos;

 GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo __declspec(property(get=get_defaultMusicPackPromo))  defaultMusicPackPromo;


// Methods

/// @brief Method get_cutOffTest addr 0x21c93e8 size 0x8 virtual false final false
 int32_t get_cutOffTest() ;

/// @brief Method get_minNumberOfNotOwnedPacks addr 0x21c93f0 size 0x8 virtual false final false
 int32_t get_minNumberOfNotOwnedPacks() ;

/// @brief Method get_musicPackPromoInfos addr 0x21c93f8 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> get_musicPackPromoInfos() ;

/// @brief Method get_defaultMusicPackPromo addr 0x21c9400 size 0x34 virtual false final false
 GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo get_defaultMusicPackPromo() ;

// Ctor Parameters []
explicit DlcPromoPanelDataSO() ;

/// @brief Method .ctor addr 0x21c9434 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DlcPromoPanelDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoPanelDataSO, "", "DlcPromoPanelDataSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo, "", "DlcPromoPanelDataSO/MusicPackPromoInfo");
