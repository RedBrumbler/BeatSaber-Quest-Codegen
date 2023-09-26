#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
// Type: ::PlayerOverallStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4738))
// CS Name: PlayerAllOverallStatsData::PlayerOverallStatsData
class CORDL_TYPE GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData(GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData(GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData& operator=(GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData& operator=(GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__goodCutsCount_k__BackingField, put=__set__goodCutsCount_k__BackingField))  _goodCutsCount_k__BackingField;

constexpr void __set__goodCutsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__goodCutsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__badCutsCount_k__BackingField, put=__set__badCutsCount_k__BackingField))  _badCutsCount_k__BackingField;

constexpr void __set__badCutsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__badCutsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__missedCutsCount_k__BackingField, put=__set__missedCutsCount_k__BackingField))  _missedCutsCount_k__BackingField;

constexpr void __set__missedCutsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__missedCutsCount_k__BackingField() const;

 int64_t __declspec(property(get=__get__totalScore_k__BackingField, put=__set__totalScore_k__BackingField))  _totalScore_k__BackingField;

constexpr void __set__totalScore_k__BackingField(int64_t value) ;

constexpr int64_t __get__totalScore_k__BackingField() const;

 int32_t __declspec(property(get=__get__playedLevelsCount_k__BackingField, put=__set__playedLevelsCount_k__BackingField))  _playedLevelsCount_k__BackingField;

constexpr void __set__playedLevelsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__playedLevelsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__clearedLevelsCount_k__BackingField, put=__set__clearedLevelsCount_k__BackingField))  _clearedLevelsCount_k__BackingField;

constexpr void __set__clearedLevelsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__clearedLevelsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__failedLevelsCount_k__BackingField, put=__set__failedLevelsCount_k__BackingField))  _failedLevelsCount_k__BackingField;

constexpr void __set__failedLevelsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__failedLevelsCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__fullComboCount_k__BackingField, put=__set__fullComboCount_k__BackingField))  _fullComboCount_k__BackingField;

constexpr void __set__fullComboCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__fullComboCount_k__BackingField() const;

 float_t __declspec(property(get=__get__timePlayed_k__BackingField, put=__set__timePlayed_k__BackingField))  _timePlayed_k__BackingField;

constexpr void __set__timePlayed_k__BackingField(float_t value) ;

constexpr float_t __get__timePlayed_k__BackingField() const;

 int32_t __declspec(property(get=__get__handDistanceTravelled_k__BackingField, put=__set__handDistanceTravelled_k__BackingField))  _handDistanceTravelled_k__BackingField;

constexpr void __set__handDistanceTravelled_k__BackingField(int32_t value) ;

constexpr int32_t __get__handDistanceTravelled_k__BackingField() const;

 int64_t __declspec(property(get=__get__totalCutScore_k__BackingField, put=__set__totalCutScore_k__BackingField))  _totalCutScore_k__BackingField;

constexpr void __set__totalCutScore_k__BackingField(int64_t value) ;

constexpr int64_t __get__totalCutScore_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_goodCutsCount, put=set_goodCutsCount))  goodCutsCount;

 int32_t __declspec(property(get=get_badCutsCount, put=set_badCutsCount))  badCutsCount;

 int32_t __declspec(property(get=get_missedCutsCount, put=set_missedCutsCount))  missedCutsCount;

 int64_t __declspec(property(get=get_totalScore, put=set_totalScore))  totalScore;

 int32_t __declspec(property(get=get_playedLevelsCount, put=set_playedLevelsCount))  playedLevelsCount;

 int32_t __declspec(property(get=get_clearedLevelsCount, put=set_clearedLevelsCount))  clearedLevelsCount;

 int32_t __declspec(property(get=get_failedLevelsCount, put=set_failedLevelsCount))  failedLevelsCount;

 int32_t __declspec(property(get=get_fullComboCount, put=set_fullComboCount))  fullComboCount;

 float_t __declspec(property(get=get_timePlayed, put=set_timePlayed))  timePlayed;

 int32_t __declspec(property(get=get_handDistanceTravelled, put=set_handDistanceTravelled))  handDistanceTravelled;

 int64_t __declspec(property(get=get_totalCutScore, put=set_totalCutScore))  totalCutScore;


// Methods

/// @brief Method get_goodCutsCount addr 0x225a5e4 size 0x8 virtual false final false
 int32_t get_goodCutsCount() ;

/// @brief Method set_goodCutsCount addr 0x225a5ec size 0x8 virtual false final false
 void set_goodCutsCount(int32_t value) ;

/// @brief Method get_badCutsCount addr 0x225a5f4 size 0x8 virtual false final false
 int32_t get_badCutsCount() ;

/// @brief Method set_badCutsCount addr 0x225a5fc size 0x8 virtual false final false
 void set_badCutsCount(int32_t value) ;

/// @brief Method get_missedCutsCount addr 0x225a604 size 0x8 virtual false final false
 int32_t get_missedCutsCount() ;

/// @brief Method set_missedCutsCount addr 0x225a60c size 0x8 virtual false final false
 void set_missedCutsCount(int32_t value) ;

/// @brief Method get_totalScore addr 0x225a614 size 0x8 virtual false final false
 int64_t get_totalScore() ;

/// @brief Method set_totalScore addr 0x225a61c size 0x8 virtual false final false
 void set_totalScore(int64_t value) ;

/// @brief Method get_playedLevelsCount addr 0x225a624 size 0x8 virtual false final false
 int32_t get_playedLevelsCount() ;

/// @brief Method set_playedLevelsCount addr 0x225a62c size 0x8 virtual false final false
 void set_playedLevelsCount(int32_t value) ;

/// @brief Method get_clearedLevelsCount addr 0x225a634 size 0x8 virtual false final false
 int32_t get_clearedLevelsCount() ;

/// @brief Method set_clearedLevelsCount addr 0x225a63c size 0x8 virtual false final false
 void set_clearedLevelsCount(int32_t value) ;

/// @brief Method get_failedLevelsCount addr 0x225a644 size 0x8 virtual false final false
 int32_t get_failedLevelsCount() ;

/// @brief Method set_failedLevelsCount addr 0x225a64c size 0x8 virtual false final false
 void set_failedLevelsCount(int32_t value) ;

/// @brief Method get_fullComboCount addr 0x225a654 size 0x8 virtual false final false
 int32_t get_fullComboCount() ;

/// @brief Method set_fullComboCount addr 0x225a65c size 0x8 virtual false final false
 void set_fullComboCount(int32_t value) ;

/// @brief Method get_timePlayed addr 0x225a664 size 0x8 virtual false final false
 float_t get_timePlayed() ;

/// @brief Method set_timePlayed addr 0x225a66c size 0x8 virtual false final false
 void set_timePlayed(float_t value) ;

/// @brief Method get_handDistanceTravelled addr 0x225a674 size 0x8 virtual false final false
 int32_t get_handDistanceTravelled() ;

/// @brief Method set_handDistanceTravelled addr 0x225a67c size 0x8 virtual false final false
 void set_handDistanceTravelled(int32_t value) ;

/// @brief Method get_totalCutScore addr 0x225a684 size 0x8 virtual false final false
 int64_t get_totalCutScore() ;

/// @brief Method set_totalCutScore addr 0x225a68c size 0x8 virtual false final false
 void set_totalCutScore(int64_t value) ;

// Ctor Parameters []
explicit GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData() ;

/// @brief Method .ctor addr 0x225a360 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalScore", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "playedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clearedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "failedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullComboCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "handDistanceTravelled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCutScore", ty: "int64_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore) ;

/// @brief Method .ctor addr 0x225a694 size 0x94 virtual false final false
 void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore) ;

/// @brief Method op_Addition addr 0x2259d20 size 0x120 virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData op_Addition(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData a, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData b) ;

/// @brief Method UpdateWithLevelCompletionResults addr 0x225a400 size 0x114 virtual false final false
 void UpdateWithLevelCompletionResults(GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerAllOverallStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4739))
// CS Name: PlayerAllOverallStatsData
class CORDL_TYPE PlayerAllOverallStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PlayerOverallStatsData = GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PlayerAllOverallStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData", modifiers: " const&", def_value: None }]
constexpr PlayerAllOverallStatsData(PlayerAllOverallStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
constexpr PlayerAllOverallStatsData(PlayerAllOverallStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerAllOverallStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerAllOverallStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerAllOverallStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerAllOverallStatsData& operator=(PlayerAllOverallStatsData&& o) noexcept = default;
  constexpr PlayerAllOverallStatsData& operator=(PlayerAllOverallStatsData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=__get__campaignOverallStatsData_k__BackingField, put=__set__campaignOverallStatsData_k__BackingField))  _campaignOverallStatsData_k__BackingField;

constexpr void __set__campaignOverallStatsData_k__BackingField(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __get__campaignOverallStatsData_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=__get__soloFreePlayOverallStatsData_k__BackingField, put=__set__soloFreePlayOverallStatsData_k__BackingField))  _soloFreePlayOverallStatsData_k__BackingField;

constexpr void __set__soloFreePlayOverallStatsData_k__BackingField(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __get__soloFreePlayOverallStatsData_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=__get__partyFreePlayOverallStatsData_k__BackingField, put=__set__partyFreePlayOverallStatsData_k__BackingField))  _partyFreePlayOverallStatsData_k__BackingField;

constexpr void __set__partyFreePlayOverallStatsData_k__BackingField(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __get__partyFreePlayOverallStatsData_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=__get__onlinePlayOverallStatsData_k__BackingField, put=__set__onlinePlayOverallStatsData_k__BackingField))  _onlinePlayOverallStatsData_k__BackingField;

constexpr void __set__onlinePlayOverallStatsData_k__BackingField(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __get__onlinePlayOverallStatsData_k__BackingField() const;

 System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_didUpdateSoloFreePlayOverallStatsDataEvent, put=__set_didUpdateSoloFreePlayOverallStatsDataEvent))  didUpdateSoloFreePlayOverallStatsDataEvent;

constexpr void __set_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> __get_didUpdateSoloFreePlayOverallStatsDataEvent() const;

 System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_didUpdatePartyFreePlayOverallStatsDataEvent, put=__set_didUpdatePartyFreePlayOverallStatsDataEvent))  didUpdatePartyFreePlayOverallStatsDataEvent;

constexpr void __set_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> __get_didUpdatePartyFreePlayOverallStatsDataEvent() const;

 System::Action_2<GlobalNamespace::MissionCompletionResults,GlobalNamespace::MissionNode> __declspec(property(get=__get_didUpdateCampaignOverallStatsDataEvent, put=__set_didUpdateCampaignOverallStatsDataEvent))  didUpdateCampaignOverallStatsDataEvent;

constexpr void __set_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults,GlobalNamespace::MissionNode> value) ;

constexpr System::Action_2<GlobalNamespace::MissionCompletionResults,GlobalNamespace::MissionNode> __get_didUpdateCampaignOverallStatsDataEvent() const;


// Properties

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=get_allOverallStatsData))  allOverallStatsData;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=get_campaignOverallStatsData, put=set_campaignOverallStatsData))  campaignOverallStatsData;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=get_soloFreePlayOverallStatsData, put=set_soloFreePlayOverallStatsData))  soloFreePlayOverallStatsData;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=get_partyFreePlayOverallStatsData, put=set_partyFreePlayOverallStatsData))  partyFreePlayOverallStatsData;

 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData __declspec(property(get=get_onlinePlayOverallStatsData, put=set_onlinePlayOverallStatsData))  onlinePlayOverallStatsData;


// Methods

/// @brief Method get_allOverallStatsData addr 0x2259cf8 size 0x28 virtual false final false
 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData get_allOverallStatsData() ;

/// @brief Method get_campaignOverallStatsData addr 0x2259e40 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData get_campaignOverallStatsData() ;

/// @brief Method set_campaignOverallStatsData addr 0x2259e48 size 0x8 virtual false final false
 void set_campaignOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

/// @brief Method get_soloFreePlayOverallStatsData addr 0x2259e50 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData get_soloFreePlayOverallStatsData() ;

/// @brief Method set_soloFreePlayOverallStatsData addr 0x2259e58 size 0x8 virtual false final false
 void set_soloFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

/// @brief Method get_partyFreePlayOverallStatsData addr 0x2259e60 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData get_partyFreePlayOverallStatsData() ;

/// @brief Method set_partyFreePlayOverallStatsData addr 0x2259e68 size 0x8 virtual false final false
 void set_partyFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

/// @brief Method get_onlinePlayOverallStatsData addr 0x2259e70 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData get_onlinePlayOverallStatsData() ;

/// @brief Method set_onlinePlayOverallStatsData addr 0x2259e78 size 0x8 virtual false final false
 void set_onlinePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData value) ;

/// @brief Method add_didUpdateSoloFreePlayOverallStatsDataEvent addr 0x2259e80 size 0xb0 virtual false final false
 void add_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_didUpdateSoloFreePlayOverallStatsDataEvent addr 0x2259f30 size 0xb0 virtual false final false
 void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method add_didUpdatePartyFreePlayOverallStatsDataEvent addr 0x2259fe0 size 0xb0 virtual false final false
 void add_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_didUpdatePartyFreePlayOverallStatsDataEvent addr 0x225a090 size 0xb0 virtual false final false
 void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method add_didUpdateCampaignOverallStatsDataEvent addr 0x225a140 size 0xb0 virtual false final false
 void add_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults,GlobalNamespace::MissionNode> value) ;

/// @brief Method remove_didUpdateCampaignOverallStatsDataEvent addr 0x225a1f0 size 0xb0 virtual false final false
 void remove_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults,GlobalNamespace::MissionNode> value) ;

// Ctor Parameters []
explicit PlayerAllOverallStatsData() ;

/// @brief Method .ctor addr 0x225a2a0 size 0xc0 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "campaignOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "soloFreePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "partyFreePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "onlinePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData", modifiers: "", def_value: None }]
explicit PlayerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData partyFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData onlinePlayOverallStatsData) ;

/// @brief Method .ctor addr 0x225a368 size 0x40 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData partyFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData onlinePlayOverallStatsData) ;

/// @brief Method UpdateSoloFreePlayOverallStatsData addr 0x225a3a8 size 0x58 virtual false final false
 void UpdateSoloFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method UpdatePartyFreePlayOverallStatsData addr 0x225a514 size 0x58 virtual false final false
 void UpdatePartyFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method UpdateCampaignOverallStatsData addr 0x225a56c size 0x60 virtual false final false
 void UpdateCampaignOverallStatsData(GlobalNamespace::MissionCompletionResults missionCompletionResults, GlobalNamespace::MissionNode missionNode) ;

/// @brief Method UpdateOnlinePlayOverallStatsData addr 0x225a5cc size 0x18 virtual false final false
 void UpdateOnlinePlayOverallStatsData(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData, "", "PlayerAllOverallStatsData/PlayerOverallStatsData");
NEED_NO_BOX(GlobalNamespace::PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerAllOverallStatsData, "", "PlayerAllOverallStatsData");
