#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__ScoringType;
}
namespace GlobalNamespace {
class NoteData;
}
// Type: ::GameplayType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14958))
// CS Name: NoteData::GameplayType
struct CORDL_TYPE GlobalNamespace__NoteData__GameplayType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NoteData__GameplayType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NoteData__GameplayType(GlobalNamespace__NoteData__GameplayType const&) = default;
                    constexpr GlobalNamespace__NoteData__GameplayType(GlobalNamespace__NoteData__GameplayType&&) = default;
                    constexpr GlobalNamespace__NoteData__GameplayType& operator=(GlobalNamespace__NoteData__GameplayType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NoteData__GameplayType& operator=(GlobalNamespace__NoteData__GameplayType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteData__GameplayType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NoteData__GameplayType_Unwrapped : int32_t {
__Normal = 0,
__Bomb = 1,
__BurstSliderHead = 2,
__BurstSliderElement = 3,
__BurstSliderElementFill = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NoteData__GameplayType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NoteData__GameplayType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__NoteData__GameplayType const Normal;

/// @brief Field Bomb offset 0
static GlobalNamespace::GlobalNamespace__NoteData__GameplayType const Bomb;

/// @brief Field BurstSliderHead offset 0
static GlobalNamespace::GlobalNamespace__NoteData__GameplayType const BurstSliderHead;

/// @brief Field BurstSliderElement offset 0
static GlobalNamespace::GlobalNamespace__NoteData__GameplayType const BurstSliderElement;

/// @brief Field BurstSliderElementFill offset 0
static GlobalNamespace::GlobalNamespace__NoteData__GameplayType const BurstSliderElementFill;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoringType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14959))
// CS Name: NoteData::ScoringType
struct CORDL_TYPE GlobalNamespace__NoteData__ScoringType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NoteData__ScoringType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NoteData__ScoringType(GlobalNamespace__NoteData__ScoringType const&) = default;
                    constexpr GlobalNamespace__NoteData__ScoringType(GlobalNamespace__NoteData__ScoringType&&) = default;
                    constexpr GlobalNamespace__NoteData__ScoringType& operator=(GlobalNamespace__NoteData__ScoringType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NoteData__ScoringType& operator=(GlobalNamespace__NoteData__ScoringType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteData__ScoringType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NoteData__ScoringType_Unwrapped : int32_t {
__Ignore = -1,
__NoScore = 0,
__Normal = 1,
__SliderHead = 2,
__SliderTail = 3,
__BurstSliderHead = 4,
__BurstSliderElement = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NoteData__ScoringType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NoteData__ScoringType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ignore offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const Ignore;

/// @brief Field NoScore offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const NoScore;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const Normal;

/// @brief Field SliderHead offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const SliderHead;

/// @brief Field SliderTail offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const SliderTail;

/// @brief Field BurstSliderHead offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const BurstSliderHead;

/// @brief Field BurstSliderElement offset 0
static GlobalNamespace::GlobalNamespace__NoteData__ScoringType const BurstSliderElement;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14960))
// CS Name: NoteData
class CORDL_TYPE NoteData : public GlobalNamespace::BeatmapObjectData {
public:
// Declarations
using ScoringType = GlobalNamespace::GlobalNamespace__NoteData__ScoringType;

using GameplayType = GlobalNamespace::GlobalNamespace__NoteData__GameplayType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~NoteData() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: " const&", def_value: None }]
constexpr NoteData(NoteData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "&&", def_value: None }]
constexpr NoteData(NoteData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteData(void* ptr) noexcept : GlobalNamespace::BeatmapObjectData(ptr) {
}


  constexpr NoteData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteData& operator=(NoteData&& o) noexcept = default;
  constexpr NoteData& operator=(NoteData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get__gameplayType_k__BackingField, put=__set__gameplayType_k__BackingField))  _gameplayType_k__BackingField;

constexpr void __set__gameplayType_k__BackingField(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType __get__gameplayType_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__NoteData__ScoringType __declspec(property(get=__get__scoringType_k__BackingField, put=__set__scoringType_k__BackingField))  _scoringType_k__BackingField;

constexpr void __set__scoringType_k__BackingField(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType __get__scoringType_k__BackingField() const;

 GlobalNamespace::ColorType __declspec(property(get=__get__colorType_k__BackingField, put=__set__colorType_k__BackingField))  _colorType_k__BackingField;

constexpr void __set__colorType_k__BackingField(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get__colorType_k__BackingField() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get__cutDirection_k__BackingField, put=__set__cutDirection_k__BackingField))  _cutDirection_k__BackingField;

constexpr void __set__cutDirection_k__BackingField(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get__cutDirection_k__BackingField() const;

 float_t __declspec(property(get=__get__timeToNextColorNote_k__BackingField, put=__set__timeToNextColorNote_k__BackingField))  _timeToNextColorNote_k__BackingField;

constexpr void __set__timeToNextColorNote_k__BackingField(float_t value) ;

constexpr float_t __get__timeToNextColorNote_k__BackingField() const;

 float_t __declspec(property(get=__get__timeToPrevColorNote_k__BackingField, put=__set__timeToPrevColorNote_k__BackingField))  _timeToPrevColorNote_k__BackingField;

constexpr void __set__timeToPrevColorNote_k__BackingField(float_t value) ;

constexpr float_t __get__timeToPrevColorNote_k__BackingField() const;

 int32_t __declspec(property(get=__get__lineIndex_k__BackingField, put=__set__lineIndex_k__BackingField))  _lineIndex_k__BackingField;

constexpr void __set__lineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__lineIndex_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__noteLineLayer_k__BackingField, put=__set__noteLineLayer_k__BackingField))  _noteLineLayer_k__BackingField;

constexpr void __set__noteLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__noteLineLayer_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__beforeJumpNoteLineLayer_k__BackingField, put=__set__beforeJumpNoteLineLayer_k__BackingField))  _beforeJumpNoteLineLayer_k__BackingField;

constexpr void __set__beforeJumpNoteLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__beforeJumpNoteLineLayer_k__BackingField() const;

 int32_t __declspec(property(get=__get__flipLineIndex_k__BackingField, put=__set__flipLineIndex_k__BackingField))  _flipLineIndex_k__BackingField;

constexpr void __set__flipLineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__flipLineIndex_k__BackingField() const;

 float_t __declspec(property(get=__get__flipYSide_k__BackingField, put=__set__flipYSide_k__BackingField))  _flipYSide_k__BackingField;

constexpr void __set__flipYSide_k__BackingField(float_t value) ;

constexpr float_t __get__flipYSide_k__BackingField() const;

 float_t __declspec(property(get=__get__cutDirectionAngleOffset_k__BackingField, put=__set__cutDirectionAngleOffset_k__BackingField))  _cutDirectionAngleOffset_k__BackingField;

constexpr void __set__cutDirectionAngleOffset_k__BackingField(float_t value) ;

constexpr float_t __get__cutDirectionAngleOffset_k__BackingField() const;

 float_t __declspec(property(get=__get__cutSfxVolumeMultiplier_k__BackingField, put=__set__cutSfxVolumeMultiplier_k__BackingField))  _cutSfxVolumeMultiplier_k__BackingField;

constexpr void __set__cutSfxVolumeMultiplier_k__BackingField(float_t value) ;

constexpr float_t __get__cutSfxVolumeMultiplier_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_subtypeGroupIdentifier))  subtypeGroupIdentifier;

 GlobalNamespace::GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType, put=set_gameplayType))  gameplayType;

 GlobalNamespace::GlobalNamespace__NoteData__ScoringType __declspec(property(get=get_scoringType, put=set_scoringType))  scoringType;

 GlobalNamespace::ColorType __declspec(property(get=get_colorType, put=set_colorType))  colorType;

 GlobalNamespace::NoteCutDirection __declspec(property(get=get_cutDirection, put=set_cutDirection))  cutDirection;

 float_t __declspec(property(get=get_timeToNextColorNote, put=set_timeToNextColorNote))  timeToNextColorNote;

 float_t __declspec(property(get=get_timeToPrevColorNote, put=set_timeToPrevColorNote))  timeToPrevColorNote;

 int32_t __declspec(property(get=get_lineIndex, put=set_lineIndex))  lineIndex;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_noteLineLayer, put=set_noteLineLayer))  noteLineLayer;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_beforeJumpNoteLineLayer, put=set_beforeJumpNoteLineLayer))  beforeJumpNoteLineLayer;

 int32_t __declspec(property(get=get_flipLineIndex, put=set_flipLineIndex))  flipLineIndex;

 float_t __declspec(property(get=get_flipYSide, put=set_flipYSide))  flipYSide;

 float_t __declspec(property(get=get_cutDirectionAngleOffset, put=set_cutDirectionAngleOffset))  cutDirectionAngleOffset;

 float_t __declspec(property(get=get_cutSfxVolumeMultiplier, put=set_cutSfxVolumeMultiplier))  cutSfxVolumeMultiplier;


// Methods

/// @brief Method get_subtypeGroupIdentifier addr 0xda2dcc size 0x8 virtual true final false
 int32_t get_subtypeGroupIdentifier() ;

/// @brief Method get_gameplayType addr 0xda2dd4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

/// @brief Method set_gameplayType addr 0xda2ddc size 0x8 virtual false final false
 void set_gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value) ;

/// @brief Method get_scoringType addr 0xda2de4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__NoteData__ScoringType get_scoringType() ;

/// @brief Method set_scoringType addr 0xda2dec size 0x8 virtual false final false
 void set_scoringType(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value) ;

/// @brief Method get_colorType addr 0xda2df4 size 0x8 virtual false final false
 GlobalNamespace::ColorType get_colorType() ;

/// @brief Method set_colorType addr 0xda2dfc size 0x8 virtual false final false
 void set_colorType(GlobalNamespace::ColorType value) ;

/// @brief Method get_cutDirection addr 0xda2e04 size 0x8 virtual false final false
 GlobalNamespace::NoteCutDirection get_cutDirection() ;

/// @brief Method set_cutDirection addr 0xda2e0c size 0x8 virtual false final false
 void set_cutDirection(GlobalNamespace::NoteCutDirection value) ;

/// @brief Method get_timeToNextColorNote addr 0xda2e14 size 0x8 virtual false final false
 float_t get_timeToNextColorNote() ;

/// @brief Method set_timeToNextColorNote addr 0xda2e1c size 0x8 virtual false final false
 void set_timeToNextColorNote(float_t value) ;

/// @brief Method get_timeToPrevColorNote addr 0xda2e24 size 0x8 virtual false final false
 float_t get_timeToPrevColorNote() ;

/// @brief Method set_timeToPrevColorNote addr 0xda2e2c size 0x8 virtual false final false
 void set_timeToPrevColorNote(float_t value) ;

/// @brief Method get_lineIndex addr 0xda2e34 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method set_lineIndex addr 0xda2e3c size 0x8 virtual false final false
 void set_lineIndex(int32_t value) ;

/// @brief Method get_noteLineLayer addr 0xda2e44 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_noteLineLayer() ;

/// @brief Method set_noteLineLayer addr 0xda2e4c size 0x8 virtual false final false
 void set_noteLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_beforeJumpNoteLineLayer addr 0xda2e54 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_beforeJumpNoteLineLayer() ;

/// @brief Method set_beforeJumpNoteLineLayer addr 0xda2e5c size 0x8 virtual false final false
 void set_beforeJumpNoteLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_flipLineIndex addr 0xda2e64 size 0x8 virtual false final false
 int32_t get_flipLineIndex() ;

/// @brief Method set_flipLineIndex addr 0xda2e6c size 0x8 virtual false final false
 void set_flipLineIndex(int32_t value) ;

/// @brief Method get_flipYSide addr 0xda2e74 size 0x8 virtual false final false
 float_t get_flipYSide() ;

/// @brief Method set_flipYSide addr 0xda2e7c size 0x8 virtual false final false
 void set_flipYSide(float_t value) ;

/// @brief Method get_cutDirectionAngleOffset addr 0xda2e84 size 0x8 virtual false final false
 float_t get_cutDirectionAngleOffset() ;

/// @brief Method set_cutDirectionAngleOffset addr 0xda2e8c size 0x8 virtual false final false
 void set_cutDirectionAngleOffset(float_t value) ;

/// @brief Method get_cutSfxVolumeMultiplier addr 0xda2e94 size 0x8 virtual false final false
 float_t get_cutSfxVolumeMultiplier() ;

/// @brief Method set_cutSfxVolumeMultiplier addr 0xda2e9c size 0x8 virtual false final false
 void set_cutSfxVolumeMultiplier(float_t value) ;

/// @brief Method GetCopy addr 0xda2ea4 size 0xcc virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "beforeJumpNoteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "gameplayType", ty: "GlobalNamespace::GlobalNamespace__NoteData__GameplayType", modifiers: "", def_value: None }, CppParam { name: "scoringType", ty: "GlobalNamespace::GlobalNamespace__NoteData__ScoringType", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "GlobalNamespace::ColorType", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "timeToNextColorNote", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeToPrevColorNote", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flipLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flipYSide", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutDirectionAngleOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutSfxVolumeMultiplier", ty: "float_t", modifiers: "", def_value: None }]
explicit NoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) ;

/// @brief Method .ctor addr 0xda2f70 size 0xb4 virtual false final false
 void _ctor(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) ;

/// @brief Method CreateBombNoteData addr 0xda3028 size 0xb4 virtual false final false
static GlobalNamespace::NoteData CreateBombNoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method CreateBasicNoteData addr 0xda30dc size 0xc0 virtual false final false
static GlobalNamespace::NoteData CreateBasicNoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method CreateBurstSliderNoteData addr 0xda319c size 0xcc virtual false final false
static GlobalNamespace::NoteData CreateBurstSliderNoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t cutSfxVolumeMultiplier) ;

/// @brief Method CopyWith addr 0xda3268 size 0x2cc virtual false final false
 GlobalNamespace::NoteData CopyWith(System::Nullable_1<float_t> time, System::Nullable_1<int32_t> lineIndex, System::Nullable_1<GlobalNamespace::NoteLineLayer> noteLineLayer, System::Nullable_1<GlobalNamespace::NoteLineLayer> beforeJumpNoteLineLayer, System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__GameplayType> gameplayType, System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> scoringType, System::Nullable_1<GlobalNamespace::ColorType> colorType, System::Nullable_1<GlobalNamespace::NoteCutDirection> cutDirection, System::Nullable_1<float_t> timeToNextColorNote, System::Nullable_1<float_t> timeToPrevColorNote, System::Nullable_1<int32_t> flipLineIndex, System::Nullable_1<float_t> flipYSide, System::Nullable_1<float_t> cutDirectionAngleOffset, System::Nullable_1<float_t> cutSfxVolumeMultiplier) ;

/// @brief Method SetBeforeJumpNoteLineLayer addr 0xda3534 size 0x8 virtual false final false
 void SetBeforeJumpNoteLineLayer(GlobalNamespace::NoteLineLayer lineLayer) ;

/// @brief Method ChangeToBurstSliderHead addr 0xda353c size 0x10 virtual false final false
 void ChangeToBurstSliderHead() ;

/// @brief Method ChangeToGameNote addr 0xda354c size 0x10 virtual false final false
 void ChangeToGameNote() ;

/// @brief Method ChangeToSliderHead addr 0xda355c size 0xc virtual false final false
 void ChangeToSliderHead() ;

/// @brief Method ChangeToSliderTail addr 0xda3568 size 0xc virtual false final false
 void ChangeToSliderTail() ;

/// @brief Method SetNoteFlipToNote addr 0xda3574 size 0x6c virtual false final false
 void SetNoteFlipToNote(GlobalNamespace::NoteData targetNote) ;

/// @brief Method SetCutDirectionAngleOffset addr 0xda35e0 size 0x8 virtual false final false
 void SetCutDirectionAngleOffset(float_t cutDirectionAngleOffset) ;

/// @brief Method ResetNoteFlip addr 0xda35e8 size 0xc virtual false final false
 void ResetNoteFlip() ;

/// @brief Method Mirror addr 0xda35f4 size 0x64 virtual true final false
 void Mirror(int32_t lineCount) ;

/// @brief Method SetNoteToAnyCutDirection addr 0xda3658 size 0xc virtual false final false
 void SetNoteToAnyCutDirection() ;

/// @brief Method ChangeNoteCutDirection addr 0xda3664 size 0x8 virtual false final false
 void ChangeNoteCutDirection(GlobalNamespace::NoteCutDirection newCutDirection) ;

/// @brief Method TransformNoteAOrBToRandomType addr 0xda366c size 0x4c virtual false final false
 void TransformNoteAOrBToRandomType() ;

/// @brief Method SubtypeIdentifier addr 0xda3024 size 0x4 virtual false final false
static int32_t SubtypeIdentifier(GlobalNamespace::ColorType colorType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteData__GameplayType, "", "NoteData/GameplayType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteData__ScoringType, "", "NoteData/ScoringType");
NEED_NO_BOX(GlobalNamespace::NoteData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteData, "", "NoteData");
