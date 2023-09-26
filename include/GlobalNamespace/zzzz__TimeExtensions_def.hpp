#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeExtensions;
}
// Type: ::TimeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13858))
// CS Name: TimeExtensions
class CORDL_TYPE TimeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeExtensions", modifiers: " const&", def_value: None }]
constexpr TimeExtensions(TimeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeExtensions", modifiers: "&&", def_value: None }]
constexpr TimeExtensions(TimeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeExtensions& operator=(TimeExtensions&& o) noexcept = default;
  constexpr TimeExtensions& operator=(TimeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method MinSecDurationText addr 0x1fb74dc size 0x1cc virtual false final false
static ::StringW MinSecDurationText(float_t duration) ;

/// @brief Method MinSecMillisecDurationText addr 0x1fb7754 size 0xf4 virtual false final false
static ::StringW MinSecMillisecDurationText(float_t duration) ;

/// @brief Method OneBeatDuration addr 0x1fb7880 size 0x1c virtual false final false
static float_t OneBeatDuration(float_t bpm) ;

/// @brief Method TimeToBeat addr 0x1fb789c size 0x14 virtual false final false
static float_t TimeToBeat(float_t time, float_t bpm) ;

/// @brief Method SecondsToMinutes addr 0x1fb78b0 size 0x10 virtual false final false
static float_t SecondsToMinutes(float_t seconds) ;

/// @brief Method SecondsToDays addr 0x1fb78c0 size 0x20 virtual false final false
static int32_t SecondsToDays(int32_t time) ;

/// @brief Method SecondsToHours addr 0x1fb78e0 size 0x20 virtual false final false
static int32_t SecondsToHours(int32_t time) ;

/// @brief Method SecondsToMinutes addr 0x1fb7900 size 0x20 virtual false final false
static int32_t SecondsToMinutes(int32_t time) ;

/// @brief Method DaysToSeconds addr 0x1fb7920 size 0x10 virtual false final false
static int32_t DaysToSeconds(int32_t days) ;

/// @brief Method HoursToSeconds addr 0x1fb7930 size 0xc virtual false final false
static int32_t HoursToSeconds(int32_t hours) ;

/// @brief Method MinutesToSeconds addr 0x1fb793c size 0xc virtual false final false
static int32_t MinutesToSeconds(int32_t minutes) ;

/// @brief Method Hours addr 0x1fb7948 size 0x80 virtual false final false
static int32_t Hours(float_t time) ;

/// @brief Method Minutes addr 0x1fb76a8 size 0x7c virtual false final false
static int32_t Minutes(float_t time) ;

/// @brief Method Seconds addr 0x1fb7724 size 0x30 virtual false final false
static int32_t Seconds(float_t time) ;

/// @brief Method Milliseconds addr 0x1fb7848 size 0x38 virtual false final false
static int32_t Milliseconds(float_t time) ;

/// @brief Method TotalDays addr 0x1fb79c8 size 0x38 virtual false final false
static int32_t TotalDays(float_t time) ;

/// @brief Method TotalHours addr 0x1fb7a00 size 0x3c virtual false final false
static int32_t TotalHours(float_t time) ;

/// @brief Method TotalMinutes addr 0x1fb7a3c size 0x3c virtual false final false
static int32_t TotalMinutes(float_t time) ;

/// @brief Method TotalSeconds addr 0x1fb7a78 size 0x1c virtual false final false
static int32_t TotalSeconds(float_t time) ;

/// @brief Method ToUnixTime addr 0x1fb7a94 size 0xcc virtual false final false
static int64_t ToUnixTime(System::DateTime dateTime) ;

/// @brief Method AsUnixTime addr 0x1fb7b60 size 0xc8 virtual false final false
static System::DateTime AsUnixTime(int64_t unixTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeExtensions, "", "TimeExtensions");
