#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyBeatmapSet;
}
// Type: ::DifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4417))
// CS Name: DifficultyBeatmapSet
class CORDL_TYPE DifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr operator  GlobalNamespace::IDifficultyBeatmapSet() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr DifficultyBeatmapSet(DifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr DifficultyBeatmapSet(DifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DifficultyBeatmapSet& operator=(DifficultyBeatmapSet&& o) noexcept = default;
  constexpr DifficultyBeatmapSet& operator=(DifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic_k__BackingField, put=__set__beatmapCharacteristic_k__BackingField))  _beatmapCharacteristic_k__BackingField;

constexpr void __set__beatmapCharacteristic_k__BackingField(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic_k__BackingField() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps_k__BackingField, put=__set__difficultyBeatmaps_k__BackingField))  _difficultyBeatmaps_k__BackingField;

constexpr void __set__difficultyBeatmaps_k__BackingField(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __get__difficultyBeatmaps_k__BackingField() const;


// Properties

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristic addr 0x2224228 size 0x8 virtual true final true
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_difficultyBeatmaps addr 0x2224230 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> get_difficultyBeatmaps() ;

// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmaps", ty: "System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>", modifiers: "", def_value: None }]
explicit DifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method .ctor addr 0x2224238 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSet, "", "DifficultyBeatmapSet");
