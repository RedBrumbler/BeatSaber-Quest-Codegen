#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SliderData__Type;
}
namespace GlobalNamespace {
class SliderData;
}
// Type: ::Type
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14965))
// CS Name: SliderData::Type
struct CORDL_TYPE GlobalNamespace__SliderData__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SliderData__Type(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SliderData__Type(GlobalNamespace__SliderData__Type const&) = default;
                    constexpr GlobalNamespace__SliderData__Type(GlobalNamespace__SliderData__Type&&) = default;
                    constexpr GlobalNamespace__SliderData__Type& operator=(GlobalNamespace__SliderData__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SliderData__Type& operator=(GlobalNamespace__SliderData__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderData__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SliderData__Type_Unwrapped : int32_t {
__Normal = 0,
__Burst = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SliderData__Type_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SliderData__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__SliderData__Type const Normal;

/// @brief Field Burst offset 0
static GlobalNamespace::GlobalNamespace__SliderData__Type const Burst;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14966))
// CS Name: SliderData
class CORDL_TYPE SliderData : public GlobalNamespace::BeatmapObjectData {
public:
// Declarations
using Type = GlobalNamespace::GlobalNamespace__SliderData__Type;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SliderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderData", modifiers: " const&", def_value: None }]
constexpr SliderData(SliderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderData", modifiers: "&&", def_value: None }]
constexpr SliderData(SliderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderData(void* ptr) noexcept : GlobalNamespace::BeatmapObjectData(ptr) {
}


  constexpr SliderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderData& operator=(SliderData&& o) noexcept = default;
  constexpr SliderData& operator=(SliderData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorType __declspec(property(get=__get__colorType_k__BackingField, put=__set__colorType_k__BackingField))  _colorType_k__BackingField;

constexpr void __set__colorType_k__BackingField(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get__colorType_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__SliderData__Type __declspec(property(get=__get__sliderType_k__BackingField, put=__set__sliderType_k__BackingField))  _sliderType_k__BackingField;

constexpr void __set__sliderType_k__BackingField(GlobalNamespace::GlobalNamespace__SliderData__Type value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderData__Type __get__sliderType_k__BackingField() const;

 bool __declspec(property(get=__get__hasHeadNote_k__BackingField, put=__set__hasHeadNote_k__BackingField))  _hasHeadNote_k__BackingField;

constexpr void __set__hasHeadNote_k__BackingField(bool value) ;

constexpr bool __get__hasHeadNote_k__BackingField() const;

 float_t __declspec(property(get=__get__headControlPointLengthMultiplier_k__BackingField, put=__set__headControlPointLengthMultiplier_k__BackingField))  _headControlPointLengthMultiplier_k__BackingField;

constexpr void __set__headControlPointLengthMultiplier_k__BackingField(float_t value) ;

constexpr float_t __get__headControlPointLengthMultiplier_k__BackingField() const;

 int32_t __declspec(property(get=__get__headLineIndex_k__BackingField, put=__set__headLineIndex_k__BackingField))  _headLineIndex_k__BackingField;

constexpr void __set__headLineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__headLineIndex_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__headLineLayer_k__BackingField, put=__set__headLineLayer_k__BackingField))  _headLineLayer_k__BackingField;

constexpr void __set__headLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__headLineLayer_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__headBeforeJumpLineLayer_k__BackingField, put=__set__headBeforeJumpLineLayer_k__BackingField))  _headBeforeJumpLineLayer_k__BackingField;

constexpr void __set__headBeforeJumpLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__headBeforeJumpLineLayer_k__BackingField() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get__headCutDirection_k__BackingField, put=__set__headCutDirection_k__BackingField))  _headCutDirection_k__BackingField;

constexpr void __set__headCutDirection_k__BackingField(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get__headCutDirection_k__BackingField() const;

 float_t __declspec(property(get=__get__headCutDirectionAngleOffset_k__BackingField, put=__set__headCutDirectionAngleOffset_k__BackingField))  _headCutDirectionAngleOffset_k__BackingField;

constexpr void __set__headCutDirectionAngleOffset_k__BackingField(float_t value) ;

constexpr float_t __get__headCutDirectionAngleOffset_k__BackingField() const;

 bool __declspec(property(get=__get__hasTailNote_k__BackingField, put=__set__hasTailNote_k__BackingField))  _hasTailNote_k__BackingField;

constexpr void __set__hasTailNote_k__BackingField(bool value) ;

constexpr bool __get__hasTailNote_k__BackingField() const;

 float_t __declspec(property(get=__get__tailTime_k__BackingField, put=__set__tailTime_k__BackingField))  _tailTime_k__BackingField;

constexpr void __set__tailTime_k__BackingField(float_t value) ;

constexpr float_t __get__tailTime_k__BackingField() const;

 int32_t __declspec(property(get=__get__tailLineIndex_k__BackingField, put=__set__tailLineIndex_k__BackingField))  _tailLineIndex_k__BackingField;

constexpr void __set__tailLineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__tailLineIndex_k__BackingField() const;

 float_t __declspec(property(get=__get__tailControlPointLengthMultiplier_k__BackingField, put=__set__tailControlPointLengthMultiplier_k__BackingField))  _tailControlPointLengthMultiplier_k__BackingField;

constexpr void __set__tailControlPointLengthMultiplier_k__BackingField(float_t value) ;

constexpr float_t __get__tailControlPointLengthMultiplier_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__tailLineLayer_k__BackingField, put=__set__tailLineLayer_k__BackingField))  _tailLineLayer_k__BackingField;

constexpr void __set__tailLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__tailLineLayer_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__tailBeforeJumpLineLayer_k__BackingField, put=__set__tailBeforeJumpLineLayer_k__BackingField))  _tailBeforeJumpLineLayer_k__BackingField;

constexpr void __set__tailBeforeJumpLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__tailBeforeJumpLineLayer_k__BackingField() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get__tailCutDirection_k__BackingField, put=__set__tailCutDirection_k__BackingField))  _tailCutDirection_k__BackingField;

constexpr void __set__tailCutDirection_k__BackingField(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get__tailCutDirection_k__BackingField() const;

 float_t __declspec(property(get=__get__tailCutDirectionAngleOffset_k__BackingField, put=__set__tailCutDirectionAngleOffset_k__BackingField))  _tailCutDirectionAngleOffset_k__BackingField;

constexpr void __set__tailCutDirectionAngleOffset_k__BackingField(float_t value) ;

constexpr float_t __get__tailCutDirectionAngleOffset_k__BackingField() const;

 GlobalNamespace::SliderMidAnchorMode __declspec(property(get=__get__midAnchorMode_k__BackingField, put=__set__midAnchorMode_k__BackingField))  _midAnchorMode_k__BackingField;

constexpr void __set__midAnchorMode_k__BackingField(GlobalNamespace::SliderMidAnchorMode value) ;

constexpr GlobalNamespace::SliderMidAnchorMode __get__midAnchorMode_k__BackingField() const;

 int32_t __declspec(property(get=__get__sliceCount_k__BackingField, put=__set__sliceCount_k__BackingField))  _sliceCount_k__BackingField;

constexpr void __set__sliceCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__sliceCount_k__BackingField() const;

 float_t __declspec(property(get=__get__squishAmount_k__BackingField, put=__set__squishAmount_k__BackingField))  _squishAmount_k__BackingField;

constexpr void __set__squishAmount_k__BackingField(float_t value) ;

constexpr float_t __get__squishAmount_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_subtypeGroupIdentifier))  subtypeGroupIdentifier;

 GlobalNamespace::ColorType __declspec(property(get=get_colorType, put=set_colorType))  colorType;

 GlobalNamespace::GlobalNamespace__SliderData__Type __declspec(property(get=get_sliderType, put=set_sliderType))  sliderType;

 bool __declspec(property(get=get_hasHeadNote, put=set_hasHeadNote))  hasHeadNote;

 float_t __declspec(property(get=get_headControlPointLengthMultiplier, put=set_headControlPointLengthMultiplier))  headControlPointLengthMultiplier;

 int32_t __declspec(property(get=get_headLineIndex, put=set_headLineIndex))  headLineIndex;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_headLineLayer, put=set_headLineLayer))  headLineLayer;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_headBeforeJumpLineLayer, put=set_headBeforeJumpLineLayer))  headBeforeJumpLineLayer;

 GlobalNamespace::NoteCutDirection __declspec(property(get=get_headCutDirection, put=set_headCutDirection))  headCutDirection;

 float_t __declspec(property(get=get_headCutDirectionAngleOffset, put=set_headCutDirectionAngleOffset))  headCutDirectionAngleOffset;

 bool __declspec(property(get=get_hasTailNote, put=set_hasTailNote))  hasTailNote;

 float_t __declspec(property(get=get_tailTime, put=set_tailTime))  tailTime;

 int32_t __declspec(property(get=get_tailLineIndex, put=set_tailLineIndex))  tailLineIndex;

 float_t __declspec(property(get=get_tailControlPointLengthMultiplier, put=set_tailControlPointLengthMultiplier))  tailControlPointLengthMultiplier;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_tailLineLayer, put=set_tailLineLayer))  tailLineLayer;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_tailBeforeJumpLineLayer, put=set_tailBeforeJumpLineLayer))  tailBeforeJumpLineLayer;

 GlobalNamespace::NoteCutDirection __declspec(property(get=get_tailCutDirection, put=set_tailCutDirection))  tailCutDirection;

 float_t __declspec(property(get=get_tailCutDirectionAngleOffset, put=set_tailCutDirectionAngleOffset))  tailCutDirectionAngleOffset;

 GlobalNamespace::SliderMidAnchorMode __declspec(property(get=get_midAnchorMode, put=set_midAnchorMode))  midAnchorMode;

 int32_t __declspec(property(get=get_sliceCount, put=set_sliceCount))  sliceCount;

 float_t __declspec(property(get=get_squishAmount, put=set_squishAmount))  squishAmount;


// Methods

/// @brief Method get_subtypeGroupIdentifier addr 0xda3848 size 0x8 virtual true final false
 int32_t get_subtypeGroupIdentifier() ;

/// @brief Method get_colorType addr 0xda3850 size 0x8 virtual false final false
 GlobalNamespace::ColorType get_colorType() ;

/// @brief Method set_colorType addr 0xda3858 size 0x8 virtual false final false
 void set_colorType(GlobalNamespace::ColorType value) ;

/// @brief Method get_sliderType addr 0xda3860 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__SliderData__Type get_sliderType() ;

/// @brief Method set_sliderType addr 0xda3868 size 0x8 virtual false final false
 void set_sliderType(GlobalNamespace::GlobalNamespace__SliderData__Type value) ;

/// @brief Method get_hasHeadNote addr 0xda3870 size 0x8 virtual false final false
 bool get_hasHeadNote() ;

/// @brief Method set_hasHeadNote addr 0xda3878 size 0xc virtual false final false
 void set_hasHeadNote(bool value) ;

/// @brief Method get_headControlPointLengthMultiplier addr 0xda3884 size 0x8 virtual false final false
 float_t get_headControlPointLengthMultiplier() ;

/// @brief Method set_headControlPointLengthMultiplier addr 0xda388c size 0x8 virtual false final false
 void set_headControlPointLengthMultiplier(float_t value) ;

/// @brief Method get_headLineIndex addr 0xda3894 size 0x8 virtual false final false
 int32_t get_headLineIndex() ;

/// @brief Method set_headLineIndex addr 0xda389c size 0x8 virtual false final false
 void set_headLineIndex(int32_t value) ;

/// @brief Method get_headLineLayer addr 0xda38a4 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_headLineLayer() ;

/// @brief Method set_headLineLayer addr 0xda38ac size 0x8 virtual false final false
 void set_headLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_headBeforeJumpLineLayer addr 0xda38b4 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_headBeforeJumpLineLayer() ;

/// @brief Method set_headBeforeJumpLineLayer addr 0xda38bc size 0x8 virtual false final false
 void set_headBeforeJumpLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_headCutDirection addr 0xda38c4 size 0x8 virtual false final false
 GlobalNamespace::NoteCutDirection get_headCutDirection() ;

/// @brief Method set_headCutDirection addr 0xda38cc size 0x8 virtual false final false
 void set_headCutDirection(GlobalNamespace::NoteCutDirection value) ;

/// @brief Method get_headCutDirectionAngleOffset addr 0xda38d4 size 0x8 virtual false final false
 float_t get_headCutDirectionAngleOffset() ;

/// @brief Method set_headCutDirectionAngleOffset addr 0xda38dc size 0x8 virtual false final false
 void set_headCutDirectionAngleOffset(float_t value) ;

/// @brief Method get_hasTailNote addr 0xda38e4 size 0x8 virtual false final false
 bool get_hasTailNote() ;

/// @brief Method set_hasTailNote addr 0xda38ec size 0xc virtual false final false
 void set_hasTailNote(bool value) ;

/// @brief Method get_tailTime addr 0xda38f8 size 0x8 virtual false final false
 float_t get_tailTime() ;

/// @brief Method set_tailTime addr 0xda3900 size 0x8 virtual false final false
 void set_tailTime(float_t value) ;

/// @brief Method get_tailLineIndex addr 0xda3908 size 0x8 virtual false final false
 int32_t get_tailLineIndex() ;

/// @brief Method set_tailLineIndex addr 0xda3910 size 0x8 virtual false final false
 void set_tailLineIndex(int32_t value) ;

/// @brief Method get_tailControlPointLengthMultiplier addr 0xda3918 size 0x8 virtual false final false
 float_t get_tailControlPointLengthMultiplier() ;

/// @brief Method set_tailControlPointLengthMultiplier addr 0xda3920 size 0x8 virtual false final false
 void set_tailControlPointLengthMultiplier(float_t value) ;

/// @brief Method get_tailLineLayer addr 0xda3928 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_tailLineLayer() ;

/// @brief Method set_tailLineLayer addr 0xda3930 size 0x8 virtual false final false
 void set_tailLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_tailBeforeJumpLineLayer addr 0xda3938 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_tailBeforeJumpLineLayer() ;

/// @brief Method set_tailBeforeJumpLineLayer addr 0xda3940 size 0x8 virtual false final false
 void set_tailBeforeJumpLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_tailCutDirection addr 0xda3948 size 0x8 virtual false final false
 GlobalNamespace::NoteCutDirection get_tailCutDirection() ;

/// @brief Method set_tailCutDirection addr 0xda3950 size 0x8 virtual false final false
 void set_tailCutDirection(GlobalNamespace::NoteCutDirection value) ;

/// @brief Method get_tailCutDirectionAngleOffset addr 0xda3958 size 0x8 virtual false final false
 float_t get_tailCutDirectionAngleOffset() ;

/// @brief Method set_tailCutDirectionAngleOffset addr 0xda3960 size 0x8 virtual false final false
 void set_tailCutDirectionAngleOffset(float_t value) ;

/// @brief Method get_midAnchorMode addr 0xda3968 size 0x8 virtual false final false
 GlobalNamespace::SliderMidAnchorMode get_midAnchorMode() ;

/// @brief Method set_midAnchorMode addr 0xda3970 size 0x8 virtual false final false
 void set_midAnchorMode(GlobalNamespace::SliderMidAnchorMode value) ;

/// @brief Method get_sliceCount addr 0xda3978 size 0x8 virtual false final false
 int32_t get_sliceCount() ;

/// @brief Method set_sliceCount addr 0xda3980 size 0x8 virtual false final false
 void set_sliceCount(int32_t value) ;

/// @brief Method get_squishAmount addr 0xda3988 size 0x8 virtual false final false
 float_t get_squishAmount() ;

/// @brief Method set_squishAmount addr 0xda3990 size 0x8 virtual false final false
 void set_squishAmount(float_t value) ;

/// @brief Method GetCopy addr 0xda3998 size 0x15c virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

// Ctor Parameters [CppParam { name: "sliderType", ty: "GlobalNamespace::GlobalNamespace__SliderData__Type", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "GlobalNamespace::ColorType", modifiers: "", def_value: None }, CppParam { name: "hasHeadNote", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "headTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "headBeforeJumpLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "headControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "headCutDirectionAngleOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "hasTailNote", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tailTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "tailBeforeJumpLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "tailControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "tailCutDirectionAngleOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "midAnchorMode", ty: "GlobalNamespace::SliderMidAnchorMode", modifiers: "", def_value: None }, CppParam { name: "sliceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "squishAmount", ty: "float_t", modifiers: "", def_value: None }]
explicit SliderData(GlobalNamespace::GlobalNamespace__SliderData__Type sliderType, GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount) ;

/// @brief Method .ctor addr 0xda3af4 size 0x148 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__SliderData__Type sliderType, GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount) ;

/// @brief Method CreateSliderData addr 0xda3c40 size 0x11c virtual false final false
static GlobalNamespace::SliderData CreateSliderData(GlobalNamespace::ColorType colorType, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, GlobalNamespace::SliderMidAnchorMode midAnchorMode) ;

/// @brief Method CreateBurstSliderData addr 0xda3d5c size 0x118 virtual false final false
static GlobalNamespace::SliderData CreateBurstSliderData(GlobalNamespace::ColorType colorType, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, int32_t sliceCount, float_t squishAmount) ;

/// @brief Method Mirror addr 0xda3e74 size 0x8c virtual true final false
 void Mirror(int32_t lineCount) ;

/// @brief Method SetHasHeadNote addr 0xda3f1c size 0xc virtual false final false
 void SetHasHeadNote(bool hasHeadNote) ;

/// @brief Method SetHasTailNote addr 0xda3f28 size 0xc virtual false final false
 void SetHasTailNote(bool hasTailNote) ;

/// @brief Method SetHeadBeforeJumpLineLayer addr 0xda3f34 size 0x8 virtual false final false
 void SetHeadBeforeJumpLineLayer(GlobalNamespace::NoteLineLayer lineLayer) ;

/// @brief Method SetTailBeforeJumpLineLayer addr 0xda3f3c size 0x8 virtual false final false
 void SetTailBeforeJumpLineLayer(GlobalNamespace::NoteLineLayer lineLayer) ;

/// @brief Method SetCutDirectionAngleOffset addr 0xda3f44 size 0xc virtual false final false
 void SetCutDirectionAngleOffset(float_t headCutDirectionAngleOffset, float_t tailCutDirectionAngleOffset) ;

/// @brief Method SubtypeIdentifier addr 0xda3c3c size 0x4 virtual false final false
static int32_t SubtypeIdentifier(GlobalNamespace::ColorType colorType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderData__Type, "", "SliderData/Type");
NEED_NO_BOX(GlobalNamespace::SliderData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderData, "", "SliderData");
