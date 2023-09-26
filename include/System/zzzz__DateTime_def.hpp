#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTimeKind;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class ISpanFormattable;
}
namespace System {
struct TypeCode;
}
namespace System::Globalization {
class Calendar;
}
namespace System {
class IConvertible;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IComparable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System {
struct DateTime;
}
// Type: System::DateTime
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2368))
// CS Name: System.DateTime
struct CORDL_TYPE DateTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

/// @brief Convert operator to System::IComparable_1<System::DateTime>
constexpr operator  System::IComparable_1<System::DateTime>() const;

/// @brief Convert operator to System::IEquatable_1<System::DateTime>
constexpr operator  System::IEquatable_1<System::DateTime>() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "_dateData", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DateTime(uint64_t _dateData) noexcept;


                    constexpr DateTime(DateTime const&) = default;
                    constexpr DateTime(DateTime&&) = default;
                    constexpr DateTime& operator=(DateTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTime& operator=(DateTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field TicksPerMillisecond offset 0
static constexpr int64_t  TicksPerMillisecond{10000};

/// @brief Field TicksPerSecond offset 0
static constexpr int64_t  TicksPerSecond{10000000};

/// @brief Field TicksPerMinute offset 0
static constexpr int64_t  TicksPerMinute{600000000};

/// @brief Field TicksPerHour offset 0
static constexpr int64_t  TicksPerHour{36000000000};

/// @brief Field TicksPerDay offset 0
static constexpr int64_t  TicksPerDay{864000000000};

/// @brief Field MillisPerSecond offset 0
static constexpr int32_t  MillisPerSecond{1000};

/// @brief Field MillisPerMinute offset 0
static constexpr int32_t  MillisPerMinute{60000};

/// @brief Field MillisPerHour offset 0
static constexpr int32_t  MillisPerHour{3600000};

/// @brief Field MillisPerDay offset 0
static constexpr int32_t  MillisPerDay{86400000};

/// @brief Field DaysPerYear offset 0
static constexpr int32_t  DaysPerYear{365};

/// @brief Field DaysPer4Years offset 0
static constexpr int32_t  DaysPer4Years{1461};

/// @brief Field DaysPer100Years offset 0
static constexpr int32_t  DaysPer100Years{36524};

/// @brief Field DaysPer400Years offset 0
static constexpr int32_t  DaysPer400Years{146097};

/// @brief Field DaysTo1601 offset 0
static constexpr int32_t  DaysTo1601{584388};

/// @brief Field DaysTo1899 offset 0
static constexpr int32_t  DaysTo1899{693593};

/// @brief Field DaysTo1970 offset 0
static constexpr int32_t  DaysTo1970{719162};

/// @brief Field DaysTo10000 offset 0
static constexpr int32_t  DaysTo10000{3652059};

/// @brief Field MinTicks offset 0
static constexpr int64_t  MinTicks{0};

/// @brief Field MaxTicks offset 0
static constexpr int64_t  MaxTicks{3155378975999999999};

/// @brief Field MaxMillis offset 0
static constexpr int64_t  MaxMillis{315537897600000};

/// @brief Field UnixEpochTicks offset 0
static constexpr int64_t  UnixEpochTicks{621355968000000000};

/// @brief Field FileTimeOffset offset 0
static constexpr int64_t  FileTimeOffset{504911232000000000};

/// @brief Field DoubleDateOffset offset 0
static constexpr int64_t  DoubleDateOffset{599264352000000000};

/// @brief Field OADateMinAsTicks offset 0
static constexpr int64_t  OADateMinAsTicks{31241376000000000};

/// @brief Field OADateMinAsDouble offset 0
static constexpr double_t  OADateMinAsDouble{-657435};

/// @brief Field OADateMaxAsDouble offset 0
static constexpr double_t  OADateMaxAsDouble{2958466};

/// @brief Field DatePartYear offset 0
static constexpr int32_t  DatePartYear{0};

/// @brief Field DatePartDayOfYear offset 0
static constexpr int32_t  DatePartDayOfYear{1};

/// @brief Field DatePartMonth offset 0
static constexpr int32_t  DatePartMonth{2};

/// @brief Field DatePartDay offset 0
static constexpr int32_t  DatePartDay{3};

static ::ArrayW<int32_t> __declspec(property(get=__get_s_daysToMonth365, put=__set_s_daysToMonth365))  s_daysToMonth365;

static void __set_s_daysToMonth365(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_daysToMonth365() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_daysToMonth366, put=__set_s_daysToMonth366))  s_daysToMonth366;

static void __set_s_daysToMonth366(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_daysToMonth366() ;

static System::DateTime __declspec(property(get=__get_MinValue, put=__set_MinValue))  MinValue;

static void __set_MinValue(System::DateTime value) ;

static System::DateTime __get_MinValue() ;

static System::DateTime __declspec(property(get=__get_MaxValue, put=__set_MaxValue))  MaxValue;

static void __set_MaxValue(System::DateTime value) ;

static System::DateTime __get_MaxValue() ;

static System::DateTime __declspec(property(get=__get_UnixEpoch, put=__set_UnixEpoch))  UnixEpoch;

static void __set_UnixEpoch(System::DateTime value) ;

static System::DateTime __get_UnixEpoch() ;

/// @brief Field TicksMask offset 0
static constexpr uint64_t  TicksMask{4611686018427387903u};

/// @brief Field FlagsMask offset 0
static constexpr uint64_t  FlagsMask{13835058055282163712u};

/// @brief Field LocalMask offset 0
static constexpr uint64_t  LocalMask{9223372036854775808u};

/// @brief Field TicksCeiling offset 0
static constexpr int64_t  TicksCeiling{4611686018427387904};

/// @brief Field KindUnspecified offset 0
static constexpr uint64_t  KindUnspecified{0u};

/// @brief Field KindUtc offset 0
static constexpr uint64_t  KindUtc{4611686018427387904u};

/// @brief Field KindLocal offset 0
static constexpr uint64_t  KindLocal{9223372036854775808u};

/// @brief Field KindLocalAmbiguousDst offset 0
static constexpr uint64_t  KindLocalAmbiguousDst{13835058055282163712u};

/// @brief Field KindShift offset 0
static constexpr int32_t  KindShift{62};

/// @brief Field TicksField offset 0
static constexpr ::ConstString  TicksField{u"ticks"};

/// @brief Field DateDataField offset 0
static constexpr ::ConstString  DateDataField{u"dateData"};

 uint64_t __declspec(property(get=__get__dateData, put=__set__dateData))  _dateData;

constexpr void __set__dateData(uint64_t value) ;

constexpr uint64_t __get__dateData() const;


// Properties

 int64_t __declspec(property(get=get_InternalTicks))  InternalTicks;

 uint64_t __declspec(property(get=get_InternalKind))  InternalKind;

 System::DateTime __declspec(property(get=get_Date))  Date;

 int32_t __declspec(property(get=get_Day))  Day;

 System::DayOfWeek __declspec(property(get=get_DayOfWeek))  DayOfWeek;

 int32_t __declspec(property(get=get_Hour))  Hour;

 System::DateTimeKind __declspec(property(get=get_Kind))  Kind;

 int32_t __declspec(property(get=get_Millisecond))  Millisecond;

 int32_t __declspec(property(get=get_Minute))  Minute;

 int32_t __declspec(property(get=get_Month))  Month;

static System::DateTime __declspec(property(get=get_Now))  Now;

 int32_t __declspec(property(get=get_Second))  Second;

 int64_t __declspec(property(get=get_Ticks))  Ticks;

 System::TimeSpan __declspec(property(get=get_TimeOfDay))  TimeOfDay;

 int32_t __declspec(property(get=get_Year))  Year;

static System::DateTime __declspec(property(get=get_UtcNow))  UtcNow;


// Methods

/// @brief Method .ctor addr 0x24535e0 size 0x90 virtual false final false
 void _ctor(int64_t ticks) ;

/// @brief Method .ctor addr 0x2453670 size 0x8 virtual false final false
 void _ctor(uint64_t dateData) ;

/// @brief Method .ctor addr 0x2453678 size 0xe8 virtual false final false
 void _ctor(int64_t ticks, System::DateTimeKind kind) ;

/// @brief Method .ctor addr 0x2453760 size 0xa4 virtual false final false
 void _ctor(int64_t ticks, System::DateTimeKind kind, bool isAmbiguousDst) ;

/// @brief Method .ctor addr 0x2453804 size 0x80 virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day) ;

/// @brief Method .ctor addr 0x2453a30 size 0xac virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second) ;

/// @brief Method .ctor addr 0x2453bb4 size 0x11c virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, System::DateTimeKind kind) ;

/// @brief Method .ctor addr 0x2453cd0 size 0x1d8 virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond) ;

/// @brief Method .ctor addr 0x2453ea8 size 0x234 virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, System::DateTimeKind kind) ;

/// @brief Method .ctor addr 0x24540dc size 0x1a8 virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, System::Globalization::Calendar calendar) ;

/// @brief Method .ctor addr 0x2454290 size 0x2a8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_InternalTicks addr 0x2454538 size 0xc virtual false final false
 int64_t get_InternalTicks() ;

/// @brief Method get_InternalKind addr 0x2454544 size 0xc virtual false final false
 uint64_t get_InternalKind() ;

/// @brief Method Add addr 0x2454550 size 0x4 virtual false final false
 System::DateTime Add(System::TimeSpan value) ;

/// @brief Method Add addr 0x2454604 size 0xd4 virtual false final false
 System::DateTime Add(double_t value, int32_t scale) ;

/// @brief Method AddDays addr 0x24546d8 size 0xc virtual false final false
 System::DateTime AddDays(double_t value) ;

/// @brief Method AddMilliseconds addr 0x24546e4 size 0x8 virtual false final false
 System::DateTime AddMilliseconds(double_t value) ;

/// @brief Method AddMonths addr 0x24546ec size 0x244 virtual false final false
 System::DateTime AddMonths(int32_t months) ;

/// @brief Method AddSeconds addr 0x2454c4c size 0x8 virtual false final false
 System::DateTime AddSeconds(double_t value) ;

/// @brief Method AddTicks addr 0x2454554 size 0xb0 virtual false final false
 System::DateTime AddTicks(int64_t value) ;

/// @brief Method AddYears addr 0x2454c54 size 0x88 virtual false final false
 System::DateTime AddYears(int32_t value) ;

/// @brief Method Compare addr 0x2454cdc size 0x20 virtual false final false
static int32_t Compare(System::DateTime t1, System::DateTime t2) ;

/// @brief Method CompareTo addr 0x2454cfc size 0x100 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x2454dfc size 0x74 virtual true final true
 int32_t CompareTo(System::DateTime value) ;

/// @brief Method DateToTicks addr 0x2453884 size 0x1ac virtual false final false
static int64_t DateToTicks(int32_t year, int32_t month, int32_t day) ;

/// @brief Method TimeToTicks addr 0x2453adc size 0xd8 virtual false final false
static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second) ;

/// @brief Method DaysInMonth addr 0x2454b1c size 0x130 virtual false final false
static int32_t DaysInMonth(int32_t year, int32_t month) ;

/// @brief Method Equals addr 0x2454f3c size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Equals addr 0x2454fb8 size 0x14 virtual true final true
 bool Equals(System::DateTime value) ;

/// @brief Method FromBinary addr 0x2454fcc size 0x234 virtual false final false
static System::DateTime FromBinary(int64_t dateData) ;

/// @brief Method FromBinaryRaw addr 0x2455200 size 0x88 virtual false final false
static System::DateTime FromBinaryRaw(int64_t dateData) ;

/// @brief Method FromFileTime addr 0x2455288 size 0x74 virtual false final false
static System::DateTime FromFileTime(int64_t fileTime) ;

/// @brief Method FromFileTimeUtc addr 0x24552fc size 0xb0 virtual false final false
static System::DateTime FromFileTimeUtc(int64_t fileTime) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x24553b4 size 0xd0 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SpecifyKind addr 0x2455484 size 0x24 virtual false final false
static System::DateTime SpecifyKind(System::DateTime value, System::DateTimeKind kind) ;

/// @brief Method get_Date addr 0x24554a8 size 0x3c virtual false final false
 System::DateTime get_Date() ;

/// @brief Method GetDatePart addr 0x24554e4 size 0x1f0 virtual false final false
 int32_t GetDatePart(int32_t part) ;

/// @brief Method GetDatePart addr 0x2454930 size 0x1ec virtual false final false
 void GetDatePart(ByRef<int32_t> year, ByRef<int32_t> month, ByRef<int32_t> day) ;

/// @brief Method get_Day addr 0x24556d4 size 0x8 virtual false final false
 int32_t get_Day() ;

/// @brief Method get_DayOfWeek addr 0x24556dc size 0x4c virtual false final false
 System::DayOfWeek get_DayOfWeek() ;

/// @brief Method GetHashCode addr 0x2455728 size 0x10 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_Hour addr 0x2455738 size 0x3c virtual false final false
 int32_t get_Hour() ;

/// @brief Method IsAmbiguousDaylightSavingTime addr 0x2455774 size 0x14 virtual false final false
 bool IsAmbiguousDaylightSavingTime() ;

/// @brief Method get_Kind addr 0x2452f78 size 0x28 virtual false final false
 System::DateTimeKind get_Kind() ;

/// @brief Method get_Millisecond addr 0x2455788 size 0x48 virtual false final false
 int32_t get_Millisecond() ;

/// @brief Method get_Minute addr 0x24557d0 size 0x3c virtual false final false
 int32_t get_Minute() ;

/// @brief Method get_Month addr 0x245580c size 0x8 virtual false final false
 int32_t get_Month() ;

/// @brief Method get_Now addr 0x2455814 size 0xf4 virtual false final false
static System::DateTime get_Now() ;

/// @brief Method get_Second addr 0x245596c size 0x3c virtual false final false
 int32_t get_Second() ;

/// @brief Method get_Ticks addr 0x2454284 size 0xc virtual false final false
 int64_t get_Ticks() ;

/// @brief Method get_TimeOfDay addr 0x24559a8 size 0x34 virtual false final false
 System::TimeSpan get_TimeOfDay() ;

/// @brief Method get_Year addr 0x2452ebc size 0x8 virtual false final false
 int32_t get_Year() ;

/// @brief Method IsLeapYear addr 0x2454e70 size 0xcc virtual false final false
static bool IsLeapYear(int32_t year) ;

/// @brief Method Parse addr 0x24559dc size 0xf4 virtual false final false
static System::DateTime Parse(::StringW s, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x2455bc0 size 0x130 virtual false final false
static System::DateTime Parse(::StringW s, System::IFormatProvider provider, System::Globalization::DateTimeStyles styles) ;

/// @brief Method ParseExact addr 0x2455cf0 size 0x164 virtual false final false
static System::DateTime ParseExact(::StringW s, ::StringW format, System::IFormatProvider provider) ;

/// @brief Method ParseExact addr 0x2455f5c size 0x1a0 virtual false final false
static System::DateTime ParseExact(::StringW s, ::StringW format, System::IFormatProvider provider, System::Globalization::DateTimeStyles style) ;

/// @brief Method Subtract addr 0x24560fc size 0x14 virtual false final false
 System::TimeSpan Subtract(System::DateTime value) ;

/// @brief Method ToLocalTime addr 0x24553ac size 0x8 virtual false final false
 System::DateTime ToLocalTime() ;

/// @brief Method ToLocalTime addr 0x2456110 size 0x154 virtual false final false
 System::DateTime ToLocalTime(bool throwOnOverflow) ;

/// @brief Method ToString addr 0x2456264 size 0x60 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x245633c size 0x6c virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x24563a8 size 0x6c virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x2456414 size 0x70 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x2456484 size 0xa0 virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method ToUniversalTime addr 0x24565dc size 0x60 virtual false final false
 System::DateTime ToUniversalTime() ;

/// @brief Method TryParse addr 0x245663c size 0x144 virtual false final false
static bool TryParse(::StringW s, System::IFormatProvider provider, System::Globalization::DateTimeStyles styles, ByRef<System::DateTime> result) ;

/// @brief Method TryParseExact addr 0x2456898 size 0x190 virtual false final false
static bool TryParseExact(::StringW s, ::StringW format, System::IFormatProvider provider, System::Globalization::DateTimeStyles style, ByRef<System::DateTime> result) ;

/// @brief Method op_Addition addr 0x2456b58 size 0xa4 virtual false final false
static System::DateTime op_Addition(System::DateTime d, System::TimeSpan t) ;

/// @brief Method op_Subtraction addr 0x2456bfc size 0x9c virtual false final false
static System::DateTime op_Subtraction(System::DateTime d, System::TimeSpan t) ;

/// @brief Method op_Subtraction addr 0x2456c98 size 0x10 virtual false final false
static System::TimeSpan op_Subtraction(System::DateTime d1, System::DateTime d2) ;

/// @brief Method op_Equality addr 0x2456ca8 size 0x10 virtual false final false
static bool op_Equality(System::DateTime d1, System::DateTime d2) ;

/// @brief Method op_Inequality addr 0x2456cb8 size 0x10 virtual false final false
static bool op_Inequality(System::DateTime d1, System::DateTime d2) ;

/// @brief Method op_LessThan addr 0x2456cc8 size 0x14 virtual false final false
static bool op_LessThan(System::DateTime t1, System::DateTime t2) ;

/// @brief Method op_LessThanOrEqual addr 0x2456cdc size 0x14 virtual false final false
static bool op_LessThanOrEqual(System::DateTime t1, System::DateTime t2) ;

/// @brief Method op_GreaterThan addr 0x2456cf0 size 0x14 virtual false final false
static bool op_GreaterThan(System::DateTime t1, System::DateTime t2) ;

/// @brief Method op_GreaterThanOrEqual addr 0x2456d04 size 0x14 virtual false final false
static bool op_GreaterThanOrEqual(System::DateTime t1, System::DateTime t2) ;

/// @brief Method GetTypeCode addr 0x2456d18 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x2456d20 size 0x8c virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x2456dac size 0x8c virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x2456e38 size 0x8c virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x2456ec4 size 0x8c virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x2456f50 size 0x8c virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x2456fdc size 0x8c virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x2457068 size 0x8c virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x24570f4 size 0x8c virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x2457180 size 0x8c virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x245720c size 0x8c virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2457298 size 0x8c virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x2457324 size 0x8c virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x24573b0 size 0x8c virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x245743c size 0x8 virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x2457444 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

/// @brief Method TryCreate addr 0x24574f0 size 0x1f0 virtual false final false
static bool TryCreate(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ByRef<System::DateTime> result) ;

/// @brief Method get_UtcNow addr 0x2455908 size 0x64 virtual false final false
static System::DateTime get_UtcNow() ;

/// @brief Method GetSystemTimeAsFileTime addr 0x24576e0 size 0x4 virtual false final false
static int64_t GetSystemTimeAsFileTime() ;

/// @brief Method ToBinaryRaw addr 0x24576e4 size 0x8 virtual false final false
 int64_t ToBinaryRaw() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DateTime, "System", "DateTime");
