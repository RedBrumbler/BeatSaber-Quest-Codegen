#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFilterParams;
}
// Type: ::LevelFilterParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4420))
// CS Name: LevelFilterParams
class CORDL_TYPE LevelFilterParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~LevelFilterParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelFilterParams", modifiers: " const&", def_value: None }]
constexpr LevelFilterParams(LevelFilterParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelFilterParams", modifiers: "&&", def_value: None }]
constexpr LevelFilterParams(LevelFilterParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelFilterParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelFilterParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelFilterParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelFilterParams& operator=(LevelFilterParams&& o) noexcept = default;
  constexpr LevelFilterParams& operator=(LevelFilterParams const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__filterByLevelIds_k__BackingField, put=__set__filterByLevelIds_k__BackingField))  _filterByLevelIds_k__BackingField;

constexpr void __set__filterByLevelIds_k__BackingField(bool value) ;

constexpr bool __get__filterByLevelIds_k__BackingField() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__beatmapLevelIds_k__BackingField, put=__set__beatmapLevelIds_k__BackingField))  _beatmapLevelIds_k__BackingField;

constexpr void __set__beatmapLevelIds_k__BackingField(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__beatmapLevelIds_k__BackingField() const;

 bool __declspec(property(get=__get__filterByOwned_k__BackingField, put=__set__filterByOwned_k__BackingField))  _filterByOwned_k__BackingField;

constexpr void __set__filterByOwned_k__BackingField(bool value) ;

constexpr bool __get__filterByOwned_k__BackingField() const;

 bool __declspec(property(get=__get__filterByNotOwned_k__BackingField, put=__set__filterByNotOwned_k__BackingField))  _filterByNotOwned_k__BackingField;

constexpr void __set__filterByNotOwned_k__BackingField(bool value) ;

constexpr bool __get__filterByNotOwned_k__BackingField() const;

 ::StringW __declspec(property(get=__get__searchText_k__BackingField, put=__set__searchText_k__BackingField))  _searchText_k__BackingField;

constexpr void __set__searchText_k__BackingField(::StringW value) ;

constexpr ::StringW __get__searchText_k__BackingField() const;

 bool __declspec(property(get=__get__filterByDifficulty_k__BackingField, put=__set__filterByDifficulty_k__BackingField))  _filterByDifficulty_k__BackingField;

constexpr void __set__filterByDifficulty_k__BackingField(bool value) ;

constexpr bool __get__filterByDifficulty_k__BackingField() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get__filteredDifficulty_k__BackingField, put=__set__filteredDifficulty_k__BackingField))  _filteredDifficulty_k__BackingField;

constexpr void __set__filteredDifficulty_k__BackingField(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get__filteredDifficulty_k__BackingField() const;

 bool __declspec(property(get=__get__filterBySongPacks_k__BackingField, put=__set__filterBySongPacks_k__BackingField))  _filterBySongPacks_k__BackingField;

constexpr void __set__filterBySongPacks_k__BackingField(bool value) ;

constexpr bool __get__filterBySongPacks_k__BackingField() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get__filteredSongPacks_k__BackingField, put=__set__filteredSongPacks_k__BackingField))  _filteredSongPacks_k__BackingField;

constexpr void __set__filteredSongPacks_k__BackingField(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get__filteredSongPacks_k__BackingField() const;

 bool __declspec(property(get=__get__filterByCharacteristic_k__BackingField, put=__set__filterByCharacteristic_k__BackingField))  _filterByCharacteristic_k__BackingField;

constexpr void __set__filterByCharacteristic_k__BackingField(bool value) ;

constexpr bool __get__filterByCharacteristic_k__BackingField() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__filteredCharacteristic_k__BackingField, put=__set__filteredCharacteristic_k__BackingField))  _filteredCharacteristic_k__BackingField;

constexpr void __set__filteredCharacteristic_k__BackingField(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__filteredCharacteristic_k__BackingField() const;

 bool __declspec(property(get=__get__filterByNotPlayedYet_k__BackingField, put=__set__filterByNotPlayedYet_k__BackingField))  _filterByNotPlayedYet_k__BackingField;

constexpr void __set__filterByNotPlayedYet_k__BackingField(bool value) ;

constexpr bool __get__filterByNotPlayedYet_k__BackingField() const;

 bool __declspec(property(get=__get__filterByMinBpm_k__BackingField, put=__set__filterByMinBpm_k__BackingField))  _filterByMinBpm_k__BackingField;

constexpr void __set__filterByMinBpm_k__BackingField(bool value) ;

constexpr bool __get__filterByMinBpm_k__BackingField() const;

 float_t __declspec(property(get=__get__filteredMinBpm_k__BackingField, put=__set__filteredMinBpm_k__BackingField))  _filteredMinBpm_k__BackingField;

constexpr void __set__filteredMinBpm_k__BackingField(float_t value) ;

constexpr float_t __get__filteredMinBpm_k__BackingField() const;

 bool __declspec(property(get=__get__filterByMaxBpm_k__BackingField, put=__set__filterByMaxBpm_k__BackingField))  _filterByMaxBpm_k__BackingField;

constexpr void __set__filterByMaxBpm_k__BackingField(bool value) ;

constexpr bool __get__filterByMaxBpm_k__BackingField() const;

 float_t __declspec(property(get=__get__filteredMaxBpm_k__BackingField, put=__set__filteredMaxBpm_k__BackingField))  _filteredMaxBpm_k__BackingField;

constexpr void __set__filteredMaxBpm_k__BackingField(float_t value) ;

constexpr float_t __get__filteredMaxBpm_k__BackingField() const;

 System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get__currentFilteredLevels_k__BackingField, put=__set__currentFilteredLevels_k__BackingField))  _currentFilteredLevels_k__BackingField;

constexpr void __set__currentFilteredLevels_k__BackingField(System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> __get__currentFilteredLevels_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentSearchTextLength_k__BackingField, put=__set__currentSearchTextLength_k__BackingField))  _currentSearchTextLength_k__BackingField;

constexpr void __set__currentSearchTextLength_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentSearchTextLength_k__BackingField() const;

static ::ArrayW<float_t> __declspec(property(get=__get_bpmValues, put=__set_bpmValues))  bpmValues;

static void __set_bpmValues(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_bpmValues() ;


// Properties

 bool __declspec(property(get=get_filterByLevelIds, put=set_filterByLevelIds))  filterByLevelIds;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=get_beatmapLevelIds, put=set_beatmapLevelIds))  beatmapLevelIds;

 bool __declspec(property(get=get_filterByOwned, put=set_filterByOwned))  filterByOwned;

 bool __declspec(property(get=get_filterByNotOwned, put=set_filterByNotOwned))  filterByNotOwned;

 ::StringW __declspec(property(get=get_searchText, put=set_searchText))  searchText;

 bool __declspec(property(get=get_filterByDifficulty, put=set_filterByDifficulty))  filterByDifficulty;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=get_filteredDifficulty, put=set_filteredDifficulty))  filteredDifficulty;

 bool __declspec(property(get=get_filterBySongPacks, put=set_filterBySongPacks))  filterBySongPacks;

 GlobalNamespace::SongPackMask __declspec(property(get=get_filteredSongPacks, put=set_filteredSongPacks))  filteredSongPacks;

 bool __declspec(property(get=get_filterByCharacteristic, put=set_filterByCharacteristic))  filterByCharacteristic;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_filteredCharacteristic, put=set_filteredCharacteristic))  filteredCharacteristic;

 bool __declspec(property(get=get_filterByNotPlayedYet, put=set_filterByNotPlayedYet))  filterByNotPlayedYet;

 bool __declspec(property(get=get_filterByMinBpm, put=set_filterByMinBpm))  filterByMinBpm;

 float_t __declspec(property(get=get_filteredMinBpm, put=set_filteredMinBpm))  filteredMinBpm;

 bool __declspec(property(get=get_filterByMaxBpm, put=set_filterByMaxBpm))  filterByMaxBpm;

 float_t __declspec(property(get=get_filteredMaxBpm, put=set_filteredMaxBpm))  filteredMaxBpm;

 System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=get_currentFilteredLevels, put=set_currentFilteredLevels))  currentFilteredLevels;

 int32_t __declspec(property(get=get_currentSearchTextLength, put=set_currentSearchTextLength))  currentSearchTextLength;


// Methods

/// @brief Method get_filterByLevelIds addr 0x2224264 size 0x8 virtual false final false
 bool get_filterByLevelIds() ;

/// @brief Method set_filterByLevelIds addr 0x222426c size 0xc virtual false final false
 void set_filterByLevelIds(bool value) ;

/// @brief Method get_beatmapLevelIds addr 0x2224278 size 0x8 virtual false final false
 System::Collections::Generic::HashSet_1<::StringW> get_beatmapLevelIds() ;

/// @brief Method set_beatmapLevelIds addr 0x2224280 size 0x8 virtual false final false
 void set_beatmapLevelIds(System::Collections::Generic::HashSet_1<::StringW> value) ;

/// @brief Method get_filterByOwned addr 0x2224288 size 0x8 virtual false final false
 bool get_filterByOwned() ;

/// @brief Method set_filterByOwned addr 0x2224290 size 0xc virtual false final false
 void set_filterByOwned(bool value) ;

/// @brief Method get_filterByNotOwned addr 0x222429c size 0x8 virtual false final false
 bool get_filterByNotOwned() ;

/// @brief Method set_filterByNotOwned addr 0x22242a4 size 0xc virtual false final false
 void set_filterByNotOwned(bool value) ;

/// @brief Method get_searchText addr 0x22242b0 size 0x8 virtual false final false
 ::StringW get_searchText() ;

/// @brief Method set_searchText addr 0x22242b8 size 0x8 virtual false final false
 void set_searchText(::StringW value) ;

/// @brief Method get_filterByDifficulty addr 0x22242c0 size 0x8 virtual false final false
 bool get_filterByDifficulty() ;

/// @brief Method set_filterByDifficulty addr 0x22242c8 size 0xc virtual false final false
 void set_filterByDifficulty(bool value) ;

/// @brief Method get_filteredDifficulty addr 0x22242d4 size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficultyMask get_filteredDifficulty() ;

/// @brief Method set_filteredDifficulty addr 0x22242dc size 0x8 virtual false final false
 void set_filteredDifficulty(GlobalNamespace::BeatmapDifficultyMask value) ;

/// @brief Method get_filterBySongPacks addr 0x22242e4 size 0x8 virtual false final false
 bool get_filterBySongPacks() ;

/// @brief Method set_filterBySongPacks addr 0x22242ec size 0xc virtual false final false
 void set_filterBySongPacks(bool value) ;

/// @brief Method get_filteredSongPacks addr 0x22242f8 size 0xc virtual false final false
 GlobalNamespace::SongPackMask get_filteredSongPacks() ;

/// @brief Method set_filteredSongPacks addr 0x2224304 size 0x8 virtual false final false
 void set_filteredSongPacks(GlobalNamespace::SongPackMask value) ;

/// @brief Method get_filterByCharacteristic addr 0x222430c size 0x8 virtual false final false
 bool get_filterByCharacteristic() ;

/// @brief Method set_filterByCharacteristic addr 0x2224314 size 0xc virtual false final false
 void set_filterByCharacteristic(bool value) ;

/// @brief Method get_filteredCharacteristic addr 0x2224320 size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_filteredCharacteristic() ;

/// @brief Method set_filteredCharacteristic addr 0x2224328 size 0x8 virtual false final false
 void set_filteredCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

/// @brief Method get_filterByNotPlayedYet addr 0x2224330 size 0x8 virtual false final false
 bool get_filterByNotPlayedYet() ;

/// @brief Method set_filterByNotPlayedYet addr 0x2224338 size 0xc virtual false final false
 void set_filterByNotPlayedYet(bool value) ;

/// @brief Method get_filterByMinBpm addr 0x2224344 size 0x8 virtual false final false
 bool get_filterByMinBpm() ;

/// @brief Method set_filterByMinBpm addr 0x222434c size 0xc virtual false final false
 void set_filterByMinBpm(bool value) ;

/// @brief Method get_filteredMinBpm addr 0x2224358 size 0x8 virtual false final false
 float_t get_filteredMinBpm() ;

/// @brief Method set_filteredMinBpm addr 0x2224360 size 0x8 virtual false final false
 void set_filteredMinBpm(float_t value) ;

/// @brief Method get_filterByMaxBpm addr 0x2224368 size 0x8 virtual false final false
 bool get_filterByMaxBpm() ;

/// @brief Method set_filterByMaxBpm addr 0x2224370 size 0xc virtual false final false
 void set_filterByMaxBpm(bool value) ;

/// @brief Method get_filteredMaxBpm addr 0x222437c size 0x8 virtual false final false
 float_t get_filteredMaxBpm() ;

/// @brief Method set_filteredMaxBpm addr 0x2224384 size 0x8 virtual false final false
 void set_filteredMaxBpm(float_t value) ;

/// @brief Method get_currentFilteredLevels addr 0x222438c size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> get_currentFilteredLevels() ;

/// @brief Method set_currentFilteredLevels addr 0x2224394 size 0x8 virtual false final false
 void set_currentFilteredLevels(System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method get_currentSearchTextLength addr 0x222439c size 0x8 virtual false final false
 int32_t get_currentSearchTextLength() ;

/// @brief Method set_currentSearchTextLength addr 0x22243a4 size 0x8 virtual false final false
 void set_currentSearchTextLength(int32_t value) ;

// Ctor Parameters []
explicit LevelFilterParams() ;

/// @brief Method .ctor addr 0x22243ac size 0x118 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "filterByLevelIds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelIds", ty: "System::Collections::Generic::HashSet_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "filterByOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filterByNotOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filterByDifficulty", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filteredDifficulty", ty: "GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "filterByCharacteristic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filteredCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "filterBySongPacks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filteredSongPacks", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "filterByNotPlayedYet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filterByMinBpm", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filteredMinBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "filterByMaxBpm", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "filteredMaxBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "currentFilteredLevels", ty: "System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: None }, CppParam { name: "currentSearchTextLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit LevelFilterParams(bool filterByLevelIds, System::Collections::Generic::HashSet_1<::StringW> beatmapLevelIds, ::StringW searchText, bool filterByOwned, bool filterByNotOwned, bool filterByDifficulty, GlobalNamespace::BeatmapDifficultyMask filteredDifficulty, bool filterByCharacteristic, GlobalNamespace::BeatmapCharacteristicSO filteredCharacteristic, bool filterBySongPacks, GlobalNamespace::SongPackMask filteredSongPacks, bool filterByNotPlayedYet, bool filterByMinBpm, float_t filteredMinBpm, bool filterByMaxBpm, float_t filteredMaxBpm, System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> currentFilteredLevels, int32_t currentSearchTextLength) ;

/// @brief Method .ctor addr 0x22244c4 size 0x124 virtual false final false
 void _ctor(bool filterByLevelIds, System::Collections::Generic::HashSet_1<::StringW> beatmapLevelIds, ::StringW searchText, bool filterByOwned, bool filterByNotOwned, bool filterByDifficulty, GlobalNamespace::BeatmapDifficultyMask filteredDifficulty, bool filterByCharacteristic, GlobalNamespace::BeatmapCharacteristicSO filteredCharacteristic, bool filterBySongPacks, GlobalNamespace::SongPackMask filteredSongPacks, bool filterByNotPlayedYet, bool filterByMinBpm, float_t filteredMinBpm, bool filterByMaxBpm, float_t filteredMaxBpm, System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> currentFilteredLevels, int32_t currentSearchTextLength) ;

/// @brief Method IsWithoutFilter addr 0x22245e8 size 0x5c virtual false final false
 bool IsWithoutFilter(bool ignoreFilterBySongs) ;

// Ctor Parameters [CppParam { name: "beatmapLevelIds", ty: "System::Collections::Generic::HashSet_1<::StringW>", modifiers: "", def_value: None }]
explicit LevelFilterParams(System::Collections::Generic::HashSet_1<::StringW> beatmapLevelIds) ;

/// @brief Method .ctor addr 0x2224644 size 0x2c virtual false final false
 void _ctor(System::Collections::Generic::HashSet_1<::StringW> beatmapLevelIds) ;

// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }]
explicit LevelFilterParams(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method .ctor addr 0x2224670 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method NoFilter addr 0x222469c size 0x58 virtual false final false
static GlobalNamespace::LevelFilterParams NoFilter() ;

/// @brief Method ByBeatmapLevelIds addr 0x22246f4 size 0x68 virtual false final false
static GlobalNamespace::LevelFilterParams ByBeatmapLevelIds(System::Collections::Generic::HashSet_1<::StringW> beatmapLevelIds) ;

/// @brief Method ByBeatmapCharacteristic addr 0x222475c size 0x68 virtual false final false
static GlobalNamespace::LevelFilterParams ByBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method ClearCurrentFilteredLevels addr 0x22247c4 size 0x74 virtual false final false
 void ClearCurrentFilteredLevels() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelFilterParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFilterParams, "", "LevelFilterParams");
