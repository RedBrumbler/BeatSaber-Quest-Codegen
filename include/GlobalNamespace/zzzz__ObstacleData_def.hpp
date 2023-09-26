#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleData;
}
// Type: ::ObstacleData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14962))
// CS Name: ObstacleData
class CORDL_TYPE ObstacleData : public GlobalNamespace::BeatmapObjectData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ObstacleData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: " const&", def_value: None }]
constexpr ObstacleData(ObstacleData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "&&", def_value: None }]
constexpr ObstacleData(ObstacleData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleData(void* ptr) noexcept : GlobalNamespace::BeatmapObjectData(ptr) {
}


  constexpr ObstacleData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleData& operator=(ObstacleData&& o) noexcept = default;
  constexpr ObstacleData& operator=(ObstacleData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__lineIndex_k__BackingField, put=__set__lineIndex_k__BackingField))  _lineIndex_k__BackingField;

constexpr void __set__lineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__lineIndex_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__lineLayer_k__BackingField, put=__set__lineLayer_k__BackingField))  _lineLayer_k__BackingField;

constexpr void __set__lineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__lineLayer_k__BackingField() const;

 float_t __declspec(property(get=__get__duration_k__BackingField, put=__set__duration_k__BackingField))  _duration_k__BackingField;

constexpr void __set__duration_k__BackingField(float_t value) ;

constexpr float_t __get__duration_k__BackingField() const;

 int32_t __declspec(property(get=__get__width_k__BackingField, put=__set__width_k__BackingField))  _width_k__BackingField;

constexpr void __set__width_k__BackingField(int32_t value) ;

constexpr int32_t __get__width_k__BackingField() const;

 int32_t __declspec(property(get=__get__height_k__BackingField, put=__set__height_k__BackingField))  _height_k__BackingField;

constexpr void __set__height_k__BackingField(int32_t value) ;

constexpr int32_t __get__height_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_lineIndex, put=set_lineIndex))  lineIndex;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_lineLayer, put=set_lineLayer))  lineLayer;

 float_t __declspec(property(get=get_duration, put=set_duration))  duration;

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(get=get_height, put=set_height))  height;


// Methods

/// @brief Method get_lineIndex addr 0xda36b8 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method set_lineIndex addr 0xda36c0 size 0x8 virtual false final false
 void set_lineIndex(int32_t value) ;

/// @brief Method get_lineLayer addr 0xda36c8 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_lineLayer() ;

/// @brief Method set_lineLayer addr 0xda36d0 size 0x8 virtual false final false
 void set_lineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_duration addr 0xda36d8 size 0x8 virtual false final false
 float_t get_duration() ;

/// @brief Method set_duration addr 0xda36e0 size 0x8 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method get_width addr 0xda36e8 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method set_width addr 0xda36f0 size 0x8 virtual false final false
 void set_width(int32_t value) ;

/// @brief Method get_height addr 0xda36f8 size 0x8 virtual false final false
 int32_t get_height() ;

/// @brief Method set_height addr 0xda3700 size 0x8 virtual false final false
 void set_height(int32_t value) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
explicit ObstacleData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height) ;

/// @brief Method .ctor addr 0xda3708 size 0x68 virtual false final false
 void _ctor(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height) ;

/// @brief Method UpdateDuration addr 0xda3770 size 0x8 virtual false final false
 void UpdateDuration(float_t duration) ;

/// @brief Method GetCopy addr 0xda3778 size 0x9c virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method Mirror addr 0xda3814 size 0x18 virtual true final false
 void Mirror(int32_t lineCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleData, "", "ObstacleData");
