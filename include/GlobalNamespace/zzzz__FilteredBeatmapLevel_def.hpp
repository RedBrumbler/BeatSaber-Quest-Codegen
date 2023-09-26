#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
// Forward declare root types
namespace GlobalNamespace {
class FilteredBeatmapLevel;
}
namespace GlobalNamespace {
class GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData;
}
// Type: ::FilteredBeatmapLevelData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5755))
// CS Name: FilteredBeatmapLevel::FilteredBeatmapLevelData
class CORDL_TYPE GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelData
constexpr operator  GlobalNamespace::IBeatmapLevelData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData(GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData(GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData& operator=(GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData&& o) noexcept = default;
  constexpr GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData& operator=(GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=__get__difficultyBeatmapSets_k__BackingField, put=__set__difficultyBeatmapSets_k__BackingField))  _difficultyBeatmapSets_k__BackingField;

constexpr void __set__difficultyBeatmapSets_k__BackingField(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __get__difficultyBeatmapSets_k__BackingField() const;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=__get__beatmapLevelData, put=__set__beatmapLevelData))  _beatmapLevelData;

constexpr void __set__beatmapLevelData(GlobalNamespace::IBeatmapLevelData value) ;

constexpr GlobalNamespace::IBeatmapLevelData __get__beatmapLevelData() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_audioClip))  audioClip;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;


// Methods

/// @brief Method get_audioClip addr 0x2199b5c size 0xa0 virtual true final true
 UnityEngine::AudioClip get_audioClip() ;

/// @brief Method get_difficultyBeatmapSets addr 0x2199bfc size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> get_difficultyBeatmapSets() ;

// Ctor Parameters [CppParam { name: "beatmapLevelData", ty: "GlobalNamespace::IBeatmapLevelData", modifiers: "", def_value: None }, CppParam { name: "allowedBeatmapDifficultyMask", ty: "GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "notAllowedCharacteristics", ty: "System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: None }]
explicit GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData(GlobalNamespace::IBeatmapLevelData beatmapLevelData, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

/// @brief Method .ctor addr 0x21990b4 size 0xaa8 virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevelData beatmapLevelData, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FilteredBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5756))
// CS Name: FilteredBeatmapLevel
class CORDL_TYPE FilteredBeatmapLevel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FilteredBeatmapLevelData = GlobalNamespace::GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData;

/// @brief Convert operator to GlobalNamespace::IBeatmapLevel
constexpr operator  GlobalNamespace::IBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAssetSongAudioClipProvider
constexpr operator  GlobalNamespace::IAssetSongAudioClipProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IFilePathSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IFilePathSongPreviewAudioClipProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IFilePathSongAudioClipProvider
constexpr operator  GlobalNamespace::IFilePathSongAudioClipProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FilteredBeatmapLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "FilteredBeatmapLevel", modifiers: " const&", def_value: None }]
constexpr FilteredBeatmapLevel(FilteredBeatmapLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FilteredBeatmapLevel", modifiers: "&&", def_value: None }]
constexpr FilteredBeatmapLevel(FilteredBeatmapLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FilteredBeatmapLevel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FilteredBeatmapLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FilteredBeatmapLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FilteredBeatmapLevel& operator=(FilteredBeatmapLevel&& o) noexcept = default;
  constexpr FilteredBeatmapLevel& operator=(FilteredBeatmapLevel const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=__get__previewDifficultyBeatmapSets_k__BackingField, put=__set__previewDifficultyBeatmapSets_k__BackingField))  _previewDifficultyBeatmapSets_k__BackingField;

constexpr void __set__previewDifficultyBeatmapSets_k__BackingField(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __get__previewDifficultyBeatmapSets_k__BackingField() const;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=__get__beatmapLevelData_k__BackingField, put=__set__beatmapLevelData_k__BackingField))  _beatmapLevelData_k__BackingField;

constexpr void __set__beatmapLevelData_k__BackingField(GlobalNamespace::IBeatmapLevelData value) ;

constexpr GlobalNamespace::IBeatmapLevelData __get__beatmapLevelData_k__BackingField() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel))  _beatmapLevel;

constexpr void __set__beatmapLevel(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__beatmapLevel() const;


// Properties

 ::StringW __declspec(property(get=get_levelID))  levelID;

 ::StringW __declspec(property(get=get_songName))  songName;

 ::StringW __declspec(property(get=get_songSubName))  songSubName;

 ::StringW __declspec(property(get=get_songAuthorName))  songAuthorName;

 ::StringW __declspec(property(get=get_levelAuthorName))  levelAuthorName;

 float_t __declspec(property(get=get_beatsPerMinute))  beatsPerMinute;

 float_t __declspec(property(get=get_songTimeOffset))  songTimeOffset;

 float_t __declspec(property(get=get_shuffle))  shuffle;

 float_t __declspec(property(get=get_shufflePeriod))  shufflePeriod;

 float_t __declspec(property(get=get_previewStartTime))  previewStartTime;

 float_t __declspec(property(get=get_previewDuration))  previewDuration;

 float_t __declspec(property(get=get_songDuration))  songDuration;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo))  environmentInfo;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_allDirectionsEnvironmentInfo))  allDirectionsEnvironmentInfo;

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=get_environmentInfos))  environmentInfos;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=get_previewDifficultyBeatmapSets))  previewDifficultyBeatmapSets;

 UnityEngine::AudioClip __declspec(property(get=get_songPreviewAudioClip))  songPreviewAudioClip;

 UnityEngine::AudioClip __declspec(property(get=get_songAudioClip))  songAudioClip;

 ::StringW __declspec(property(get=get_songPreviewAudioClipPath))  songPreviewAudioClipPath;

 ::StringW __declspec(property(get=get_songAudioClipPath))  songAudioClipPath;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=get_beatmapLevelData))  beatmapLevelData;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_levelID addr 0x2198090 size 0xa0 virtual true final true
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x2198130 size 0xa4 virtual true final true
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21981d4 size 0xa4 virtual true final true
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x2198278 size 0xa4 virtual true final true
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x219831c size 0xa4 virtual true final true
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21983c0 size 0xa4 virtual true final true
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x2198464 size 0xa4 virtual true final true
 float_t get_songTimeOffset() ;

/// @brief Method get_shuffle addr 0x2198508 size 0xa4 virtual true final true
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21985ac size 0xa4 virtual true final true
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x2198650 size 0xa4 virtual true final true
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21986f4 size 0xa4 virtual true final true
 float_t get_previewDuration() ;

/// @brief Method get_songDuration addr 0x2198798 size 0xa4 virtual true final true
 float_t get_songDuration() ;

/// @brief Method get_environmentInfo addr 0x219883c size 0xa4 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x21988e0 size 0xa4 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x2198984 size 0xa4 virtual true final true
 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x2198a28 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method get_songPreviewAudioClip addr 0x2198a30 size 0xb4 virtual true final true
 UnityEngine::AudioClip get_songPreviewAudioClip() ;

/// @brief Method get_songAudioClip addr 0x2198ae4 size 0xb4 virtual true final true
 UnityEngine::AudioClip get_songAudioClip() ;

/// @brief Method get_songPreviewAudioClipPath addr 0x2198b98 size 0xd4 virtual true final true
 ::StringW get_songPreviewAudioClipPath() ;

/// @brief Method get_songAudioClipPath addr 0x2198c6c size 0xd4 virtual true final true
 ::StringW get_songAudioClipPath() ;

/// @brief Method GetCoverImageAsync addr 0x2198d40 size 0xac virtual true final true
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GetCoverImageAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method get_beatmapLevelData addr 0x2198dec size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelData get_beatmapLevelData() ;

/// @brief Method get_isEmpty addr 0x2198df4 size 0x124 virtual false final false
 bool get_isEmpty() ;

// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "allowedBeatmapDifficultyMask", ty: "GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "notAllowedCharacteristics", ty: "System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: None }]
explicit FilteredBeatmapLevel(GlobalNamespace::IBeatmapLevel beatmapLevel, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

/// @brief Method .ctor addr 0x2198f18 size 0x19c virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevel beatmapLevel, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FilteredBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredBeatmapLevel, "", "FilteredBeatmapLevel");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FilteredBeatmapLevel__FilteredBeatmapLevelData, "", "FilteredBeatmapLevel/FilteredBeatmapLevelData");
