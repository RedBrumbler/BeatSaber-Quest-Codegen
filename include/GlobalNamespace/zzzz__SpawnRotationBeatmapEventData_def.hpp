#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
// Type: ::SpawnRotationEventType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14941))
// CS Name: SpawnRotationBeatmapEventData::SpawnRotationEventType
struct CORDL_TYPE GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType(GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType const&) = default;
                    constexpr GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType(GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType&&) = default;
                    constexpr GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType& operator=(GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType& operator=(GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped : int32_t {
__Early = 1,
__Late = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Early offset 0
static GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType const Early;

/// @brief Field Late offset 0
static GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType const Late;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpawnRotationBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14932))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14942))
// CS Name: SpawnRotationBeatmapEventData
class CORDL_TYPE SpawnRotationBeatmapEventData : public GlobalNamespace::BeatmapEventData {
public:
// Declarations
using SpawnRotationEventType = GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SpawnRotationBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr SpawnRotationBeatmapEventData(SpawnRotationBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr SpawnRotationBeatmapEventData(SpawnRotationBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpawnRotationBeatmapEventData(void* ptr) noexcept : GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr SpawnRotationBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpawnRotationBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpawnRotationBeatmapEventData& operator=(SpawnRotationBeatmapEventData&& o) noexcept = default;
  constexpr SpawnRotationBeatmapEventData& operator=(SpawnRotationBeatmapEventData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(float_t value) ;

constexpr float_t __get__rotation_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType __declspec(property(get=__get_spawnRotationEventType, put=__set_spawnRotationEventType))  spawnRotationEventType;

constexpr void __set_spawnRotationEventType(GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType value) ;

constexpr GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType __get_spawnRotationEventType() const;

 float_t __declspec(property(get=__get__deltaRotation, put=__set__deltaRotation))  _deltaRotation;

constexpr void __set__deltaRotation(float_t value) ;

constexpr float_t __get__deltaRotation() const;

static GlobalNamespace::BeatmapEventData __declspec(property(get=__get__defaultCopy, put=__set__defaultCopy))  _defaultCopy;

static void __set__defaultCopy(GlobalNamespace::BeatmapEventData value) ;

static GlobalNamespace::BeatmapEventData __get__defaultCopy() ;


// Properties

 int32_t __declspec(property(get=get_subtypeGroupIdentifier))  subtypeGroupIdentifier;

 float_t __declspec(property(get=get_rotation, put=set_rotation))  rotation;


// Methods

/// @brief Method get_subtypeGroupIdentifier addr 0xda1568 size 0x8 virtual true final false
 int32_t get_subtypeGroupIdentifier() ;

/// @brief Method get_rotation addr 0xda1570 size 0x8 virtual false final false
 float_t get_rotation() ;

/// @brief Method set_rotation addr 0xda1578 size 0x8 virtual false final false
 void set_rotation(float_t value) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spawnRotationEventType", ty: "GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType", modifiers: "", def_value: None }, CppParam { name: "deltaRotation", ty: "float_t", modifiers: "", def_value: None }]
explicit SpawnRotationBeatmapEventData(float_t time, GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType, float_t deltaRotation) ;

/// @brief Method .ctor addr 0xda1580 size 0x58 virtual false final false
 void _ctor(float_t time, GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType, float_t deltaRotation) ;

/// @brief Method Mirror addr 0xda15d8 size 0x1c virtual false final false
 void Mirror() ;

/// @brief Method GetCopy addr 0xda15f4 size 0xa0 virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method RecalculateRotationFromPreviousEvent addr 0xda1694 size 0x24 virtual false final false
 void RecalculateRotationFromPreviousEvent(GlobalNamespace::SpawnRotationBeatmapEventData previousSpawnRotationBeatmapEventData) ;

/// @brief Method SetFirstRotationEventRotation addr 0xda16b8 size 0xc virtual false final false
 void SetFirstRotationEventRotation() ;

/// @brief Method GetDefault addr 0xda16c4 size 0x58 virtual true final false
 GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType, "", "SpawnRotationBeatmapEventData/SpawnRotationEventType");
NEED_NO_BOX(GlobalNamespace::SpawnRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationBeatmapEventData, "", "SpawnRotationBeatmapEventData");
