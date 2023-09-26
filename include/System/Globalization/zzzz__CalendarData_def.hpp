#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
class CalendarData;
}
// Type: System.Globalization::CalendarData
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3682))
// CS Name: System.Globalization.CalendarData
class CORDL_TYPE CalendarData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~CalendarData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CalendarData", modifiers: " const&", def_value: None }]
constexpr CalendarData(CalendarData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CalendarData", modifiers: "&&", def_value: None }]
constexpr CalendarData(CalendarData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CalendarData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CalendarData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CalendarData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CalendarData& operator=(CalendarData&& o) noexcept = default;
  constexpr CalendarData& operator=(CalendarData const& o) noexcept = default;
                


// Fields

/// @brief Field MAX_CALENDARS offset 0
static constexpr int32_t  MAX_CALENDARS{23};

 ::StringW __declspec(property(get=__get_sNativeName, put=__set_sNativeName))  sNativeName;

constexpr void __set_sNativeName(::StringW value) ;

constexpr ::StringW __get_sNativeName() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saShortDates, put=__set_saShortDates))  saShortDates;

constexpr void __set_saShortDates(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saShortDates() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saYearMonths, put=__set_saYearMonths))  saYearMonths;

constexpr void __set_saYearMonths(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saYearMonths() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saLongDates, put=__set_saLongDates))  saLongDates;

constexpr void __set_saLongDates(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saLongDates() const;

 ::StringW __declspec(property(get=__get_sMonthDay, put=__set_sMonthDay))  sMonthDay;

constexpr void __set_sMonthDay(::StringW value) ;

constexpr ::StringW __get_sMonthDay() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saEraNames, put=__set_saEraNames))  saEraNames;

constexpr void __set_saEraNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saEraNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saAbbrevEraNames, put=__set_saAbbrevEraNames))  saAbbrevEraNames;

constexpr void __set_saAbbrevEraNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saAbbrevEraNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saAbbrevEnglishEraNames, put=__set_saAbbrevEnglishEraNames))  saAbbrevEnglishEraNames;

constexpr void __set_saAbbrevEnglishEraNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saAbbrevEnglishEraNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saDayNames, put=__set_saDayNames))  saDayNames;

constexpr void __set_saDayNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saDayNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saAbbrevDayNames, put=__set_saAbbrevDayNames))  saAbbrevDayNames;

constexpr void __set_saAbbrevDayNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saAbbrevDayNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saSuperShortDayNames, put=__set_saSuperShortDayNames))  saSuperShortDayNames;

constexpr void __set_saSuperShortDayNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saSuperShortDayNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saMonthNames, put=__set_saMonthNames))  saMonthNames;

constexpr void __set_saMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saMonthNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saAbbrevMonthNames, put=__set_saAbbrevMonthNames))  saAbbrevMonthNames;

constexpr void __set_saAbbrevMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saAbbrevMonthNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saMonthGenitiveNames, put=__set_saMonthGenitiveNames))  saMonthGenitiveNames;

constexpr void __set_saMonthGenitiveNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saMonthGenitiveNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saAbbrevMonthGenitiveNames, put=__set_saAbbrevMonthGenitiveNames))  saAbbrevMonthGenitiveNames;

constexpr void __set_saAbbrevMonthGenitiveNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saAbbrevMonthGenitiveNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saLeapYearMonthNames, put=__set_saLeapYearMonthNames))  saLeapYearMonthNames;

constexpr void __set_saLeapYearMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saLeapYearMonthNames() const;

 int32_t __declspec(property(get=__get_iTwoDigitYearMax, put=__set_iTwoDigitYearMax))  iTwoDigitYearMax;

constexpr void __set_iTwoDigitYearMax(int32_t value) ;

constexpr int32_t __get_iTwoDigitYearMax() const;

 int32_t __declspec(property(get=__get_iCurrentEra, put=__set_iCurrentEra))  iCurrentEra;

constexpr void __set_iCurrentEra(int32_t value) ;

constexpr int32_t __get_iCurrentEra() const;

 bool __declspec(property(get=__get_bUseUserOverrides, put=__set_bUseUserOverrides))  bUseUserOverrides;

constexpr void __set_bUseUserOverrides(bool value) ;

constexpr bool __get_bUseUserOverrides() const;

static System::Globalization::CalendarData __declspec(property(get=__get_Invariant, put=__set_Invariant))  Invariant;

static void __set_Invariant(System::Globalization::CalendarData value) ;

static System::Globalization::CalendarData __get_Invariant() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_HEBREW_MONTH_NAMES, put=__set_HEBREW_MONTH_NAMES))  HEBREW_MONTH_NAMES;

static void __set_HEBREW_MONTH_NAMES(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_HEBREW_MONTH_NAMES() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_HEBREW_LEAP_MONTH_NAMES, put=__set_HEBREW_LEAP_MONTH_NAMES))  HEBREW_LEAP_MONTH_NAMES;

static void __set_HEBREW_LEAP_MONTH_NAMES(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_HEBREW_LEAP_MONTH_NAMES() ;


// Methods

// Ctor Parameters []
explicit CalendarData() ;

/// @brief Method .ctor addr 0x2424cf4 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "localeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "calendarId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bUseUserOverrides", ty: "bool", modifiers: "", def_value: None }]
explicit CalendarData(::StringW localeName, int32_t calendarId, bool bUseUserOverrides) ;

/// @brief Method .ctor addr 0x2426230 size 0x564 virtual false final false
 void _ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides) ;

/// @brief Method InitializeEraNames addr 0x2426850 size 0x3bc virtual false final false
 void InitializeEraNames(::StringW localeName, int32_t calendarId) ;

/// @brief Method GetJapaneseEraNames addr 0x2426ff8 size 0xf0 virtual false final false
static ::ArrayW<::StringW> GetJapaneseEraNames() ;

/// @brief Method GetJapaneseEnglishEraNames addr 0x2426f08 size 0xf0 virtual false final false
static ::ArrayW<::StringW> GetJapaneseEnglishEraNames() ;

/// @brief Method InitializeAbbreviatedEraNames addr 0x2426c0c size 0x2fc virtual false final false
 void InitializeAbbreviatedEraNames(::StringW localeName, int32_t calendarId) ;

/// @brief Method GetCalendarData addr 0x24245f4 size 0xa8 virtual false final false
static System::Globalization::CalendarData GetCalendarData(int32_t calendarId) ;

/// @brief Method CalendarIdToCultureName addr 0x24270e8 size 0xcc virtual false final false
static ::StringW CalendarIdToCultureName(int32_t calendarId) ;

/// @brief Method nativeGetTwoDigitYearMax addr 0x2424cec size 0x8 virtual false final false
static int32_t nativeGetTwoDigitYearMax(int32_t calID) ;

/// @brief Method nativeGetCalendarData addr 0x2426794 size 0xbc virtual false final false
static bool nativeGetCalendarData(System::Globalization::CalendarData data, ::StringW localeName, int32_t calendarId) ;

/// @brief Method fill_calendar_data addr 0x24271b4 size 0x4 virtual false final false
 bool fill_calendar_data(::StringW localeName, int32_t datetimeIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::CalendarData);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CalendarData, "System.Globalization", "CalendarData");
