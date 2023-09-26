#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class PracticeSettings;
}
// Type: ::PracticeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4782))
// CS Name: PracticeSettings
class CORDL_TYPE PracticeSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PracticeSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PracticeSettings", modifiers: " const&", def_value: None }]
constexpr PracticeSettings(PracticeSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PracticeSettings", modifiers: "&&", def_value: None }]
constexpr PracticeSettings(PracticeSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PracticeSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PracticeSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PracticeSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PracticeSettings& operator=(PracticeSettings&& o) noexcept = default;
  constexpr PracticeSettings& operator=(PracticeSettings const& o) noexcept = default;
                


// Fields

/// @brief Field kDelayBeforeStart offset 0
static constexpr float_t  kDelayBeforeStart{1};

 float_t __declspec(property(get=__get__startSongTime, put=__set__startSongTime))  _startSongTime;

constexpr void __set__startSongTime(float_t value) ;

constexpr float_t __get__startSongTime() const;

 float_t __declspec(property(get=__get__songSpeedMul, put=__set__songSpeedMul))  _songSpeedMul;

constexpr void __set__songSpeedMul(float_t value) ;

constexpr float_t __get__songSpeedMul() const;

 bool __declspec(property(get=__get__startInAdvanceAndClearNotes, put=__set__startInAdvanceAndClearNotes))  _startInAdvanceAndClearNotes;

constexpr void __set__startInAdvanceAndClearNotes(bool value) ;

constexpr bool __get__startInAdvanceAndClearNotes() const;


// Properties

 float_t __declspec(property(get=get_startSongTime, put=set_startSongTime))  startSongTime;

 float_t __declspec(property(get=get_songSpeedMul, put=set_songSpeedMul))  songSpeedMul;

 bool __declspec(property(get=get_startInAdvanceAndClearNotes, put=set_startInAdvanceAndClearNotes))  startInAdvanceAndClearNotes;

static GlobalNamespace::PracticeSettings __declspec(property(get=get_defaultPracticeSettings))  defaultPracticeSettings;


// Methods

/// @brief Method get_startSongTime addr 0x2264328 size 0x8 virtual false final false
 float_t get_startSongTime() ;

/// @brief Method set_startSongTime addr 0x2264330 size 0x8 virtual false final false
 void set_startSongTime(float_t value) ;

/// @brief Method get_songSpeedMul addr 0x2264338 size 0x8 virtual false final false
 float_t get_songSpeedMul() ;

/// @brief Method set_songSpeedMul addr 0x2264340 size 0x8 virtual false final false
 void set_songSpeedMul(float_t value) ;

/// @brief Method get_startInAdvanceAndClearNotes addr 0x2264348 size 0x8 virtual false final false
 bool get_startInAdvanceAndClearNotes() ;

/// @brief Method set_startInAdvanceAndClearNotes addr 0x2264350 size 0xc virtual false final false
 void set_startInAdvanceAndClearNotes(bool value) ;

/// @brief Method get_defaultPracticeSettings addr 0x226435c size 0x74 virtual false final false
static GlobalNamespace::PracticeSettings get_defaultPracticeSettings() ;

// Ctor Parameters []
explicit PracticeSettings() ;

/// @brief Method .ctor addr 0x2261064 size 0x38 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "practiceSettings", ty: "GlobalNamespace::PracticeSettings", modifiers: "", def_value: None }]
explicit PracticeSettings(GlobalNamespace::PracticeSettings practiceSettings) ;

/// @brief Method .ctor addr 0x22643e8 size 0x40 virtual false final false
 void _ctor(GlobalNamespace::PracticeSettings practiceSettings) ;

// Ctor Parameters [CppParam { name: "startSongTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songSpeedMul", ty: "float_t", modifiers: "", def_value: None }]
explicit PracticeSettings(float_t startSongTime, float_t songSpeedMul) ;

/// @brief Method .ctor addr 0x22605b0 size 0x40 virtual false final false
 void _ctor(float_t startSongTime, float_t songSpeedMul) ;

/// @brief Method ResetToDefault addr 0x22643d0 size 0x18 virtual false final false
 void ResetToDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PracticeSettings, "", "PracticeSettings");
