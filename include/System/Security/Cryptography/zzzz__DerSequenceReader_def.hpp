#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Text {
class Encoding;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
struct System__Security__Cryptography__DerSequenceReader__DerTag;
}
namespace System::Security::Cryptography {
class DerSequenceReader;
}
namespace System::Security::Cryptography {
class System__Security__Cryptography__DerSequenceReader____c;
}
// Type: ::DerTag
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7839))
// CS Name: System.Security.Cryptography.DerSequenceReader::DerTag
struct CORDL_TYPE System__Security__Cryptography__DerSequenceReader__DerTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Security__Cryptography__DerSequenceReader__DerTag(uint8_t value__) noexcept;


                    constexpr System__Security__Cryptography__DerSequenceReader__DerTag(System__Security__Cryptography__DerSequenceReader__DerTag const&) = default;
                    constexpr System__Security__Cryptography__DerSequenceReader__DerTag(System__Security__Cryptography__DerSequenceReader__DerTag&&) = default;
                    constexpr System__Security__Cryptography__DerSequenceReader__DerTag& operator=(System__Security__Cryptography__DerSequenceReader__DerTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Security__Cryptography__DerSequenceReader__DerTag& operator=(System__Security__Cryptography__DerSequenceReader__DerTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__DerSequenceReader__DerTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Security__Cryptography__DerSequenceReader__DerTag_Unwrapped : uint8_t {
__Boolean = 1u,
__Integer = 2u,
__BitString = 3u,
__OctetString = 4u,
__Null = 5u,
__ObjectIdentifier = 6u,
__UTF8String = 12u,
__Sequence = 16u,
__Set = 17u,
__PrintableString = 19u,
__T61String = 20u,
__IA5String = 22u,
__UTCTime = 23u,
__GeneralizedTime = 24u,
__BMPString = 30u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Security__Cryptography__DerSequenceReader__DerTag_Unwrapped () const noexcept {
return std::bit_cast<__System__Security__Cryptography__DerSequenceReader__DerTag_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Boolean offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const Boolean;

/// @brief Field Integer offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const Integer;

/// @brief Field BitString offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const BitString;

/// @brief Field OctetString offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const OctetString;

/// @brief Field Null offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const Null;

/// @brief Field ObjectIdentifier offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const ObjectIdentifier;

/// @brief Field UTF8String offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const UTF8String;

/// @brief Field Sequence offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const Sequence;

/// @brief Field Set offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const Set;

/// @brief Field PrintableString offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const PrintableString;

/// @brief Field T61String offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const T61String;

/// @brief Field IA5String offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const IA5String;

/// @brief Field UTCTime offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const UTCTime;

/// @brief Field GeneralizedTime offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const GeneralizedTime;

/// @brief Field BMPString offset 0
static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag const BMPString;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: ::<>c
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7840))
// CS Name: System.Security.Cryptography.DerSequenceReader::<>c
class CORDL_TYPE System__Security__Cryptography__DerSequenceReader____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Security__Cryptography__DerSequenceReader____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Cryptography__DerSequenceReader____c", modifiers: " const&", def_value: None }]
constexpr System__Security__Cryptography__DerSequenceReader____c(System__Security__Cryptography__DerSequenceReader____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Cryptography__DerSequenceReader____c", modifiers: "&&", def_value: None }]
constexpr System__Security__Cryptography__DerSequenceReader____c(System__Security__Cryptography__DerSequenceReader____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Cryptography__DerSequenceReader____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__Cryptography__DerSequenceReader____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__Cryptography__DerSequenceReader____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__Cryptography__DerSequenceReader____c& operator=(System__Security__Cryptography__DerSequenceReader____c&& o) noexcept = default;
  constexpr System__Security__Cryptography__DerSequenceReader____c& operator=(System__Security__Cryptography__DerSequenceReader____c const& o) noexcept = default;
                


// Fields

static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c value) ;

static System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c __get___9() ;

static System::Func_1<System::Text::Encoding> __declspec(property(get=__get___9__45_0, put=__set___9__45_0))  __9__45_0;

static void __set___9__45_0(System::Func_1<System::Text::Encoding> value) ;

static System::Func_1<System::Text::Encoding> __get___9__45_0() ;

static System::Func_1<System::Text::Encoding> __declspec(property(get=__get___9__45_1, put=__set___9__45_1))  __9__45_1;

static void __set___9__45_1(System::Func_1<System::Text::Encoding> value) ;

static System::Func_1<System::Text::Encoding> __get___9__45_1() ;

static System::Func_1<System::Globalization::DateTimeFormatInfo> __declspec(property(get=__get___9__51_0, put=__set___9__51_0))  __9__51_0;

static void __set___9__51_0(System::Func_1<System::Globalization::DateTimeFormatInfo> value) ;

static System::Func_1<System::Globalization::DateTimeFormatInfo> __get___9__51_0() ;


// Methods

// Ctor Parameters []
explicit System__Security__Cryptography__DerSequenceReader____c() ;

/// @brief Method .ctor addr 0x28124a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReadT61String>b__45_0 addr 0x28124a8 size 0x64 virtual false final false
 System::Text::Encoding _ReadT61String_b__45_0() ;

/// @brief Method <ReadT61String>b__45_1 addr 0x281250c size 0x44 virtual false final false
 System::Text::Encoding _ReadT61String_b__45_1() ;

/// @brief Method <ReadTime>b__51_0 addr 0x2812550 size 0xcc virtual false final false
 System::Globalization::DateTimeFormatInfo _ReadTime_b__51_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
// Type: System.Security.Cryptography::DerSequenceReader
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7841))
// CS Name: System.Security.Cryptography.DerSequenceReader
class CORDL_TYPE DerSequenceReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c;

using DerTag = System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DerSequenceReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: " const&", def_value: None }]
constexpr DerSequenceReader(DerSequenceReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "&&", def_value: None }]
constexpr DerSequenceReader(DerSequenceReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerSequenceReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DerSequenceReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerSequenceReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerSequenceReader& operator=(DerSequenceReader&& o) noexcept = default;
  constexpr DerSequenceReader& operator=(DerSequenceReader const& o) noexcept = default;
                


// Fields

static System::Globalization::DateTimeFormatInfo __declspec(property(get=__get_s_validityDateTimeFormatInfo, put=__set_s_validityDateTimeFormatInfo))  s_validityDateTimeFormatInfo;

static void __set_s_validityDateTimeFormatInfo(System::Globalization::DateTimeFormatInfo value) ;

static System::Globalization::DateTimeFormatInfo __get_s_validityDateTimeFormatInfo() ;

static System::Text::Encoding __declspec(property(get=__get_s_utf8EncodingWithExceptionFallback, put=__set_s_utf8EncodingWithExceptionFallback))  s_utf8EncodingWithExceptionFallback;

static void __set_s_utf8EncodingWithExceptionFallback(System::Text::Encoding value) ;

static System::Text::Encoding __get_s_utf8EncodingWithExceptionFallback() ;

static System::Text::Encoding __declspec(property(get=__get_s_latin1Encoding, put=__set_s_latin1Encoding))  s_latin1Encoding;

static void __set_s_latin1Encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_s_latin1Encoding() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;

 int32_t __declspec(property(get=__get__end, put=__set__end))  _end;

constexpr void __set__end(int32_t value) ;

constexpr int32_t __get__end() const;

 int32_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int32_t value) ;

constexpr int32_t __get__position() const;

 int32_t __declspec(property(get=__get__ContentLength_k__BackingField, put=__set__ContentLength_k__BackingField))  _ContentLength_k__BackingField;

constexpr void __set__ContentLength_k__BackingField(int32_t value) ;

constexpr int32_t __get__ContentLength_k__BackingField() const;


// Properties

 int32_t __declspec(property(put=set_ContentLength))  ContentLength;

 bool __declspec(property(get=get_HasData))  HasData;


// Methods

/// @brief Method set_ContentLength addr 0x2810ee0 size 0x8 virtual false final false
 void set_ContentLength(int32_t value) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerSequenceReader(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x2810ee8 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerSequenceReader(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method .ctor addr 0x2810f0c size 0x14 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

// Ctor Parameters [CppParam { name: "tagToEat", ty: "System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerSequenceReader(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag tagToEat, ::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method .ctor addr 0x2810f20 size 0xf4 virtual false final false
 void _ctor(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag tagToEat, ::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method get_HasData addr 0x28110d0 size 0x10 virtual false final false
 bool get_HasData() ;

/// @brief Method PeekTag addr 0x28110e0 size 0x98 virtual false final false
 uint8_t PeekTag() ;

/// @brief Method SkipValue addr 0x2811178 size 0x50 virtual false final false
 void SkipValue() ;

/// @brief Method ReadNextEncodedValue addr 0x28111c8 size 0xb8 virtual false final false
 ::ArrayW<uint8_t> ReadNextEncodedValue() ;

/// @brief Method ReadBoolean addr 0x28113a0 size 0xcc virtual false final false
 bool ReadBoolean() ;

/// @brief Method ReadInteger addr 0x281146c size 0xb4 virtual false final false
 int32_t ReadInteger() ;

/// @brief Method ReadIntegerBytes addr 0x2811520 size 0x1c virtual false final false
 ::ArrayW<uint8_t> ReadIntegerBytes() ;

/// @brief Method ReadBitString addr 0x28115f0 size 0x148 virtual false final false
 ::ArrayW<uint8_t> ReadBitString() ;

/// @brief Method ReadOctetString addr 0x2811738 size 0x1c virtual false final false
 ::ArrayW<uint8_t> ReadOctetString() ;

/// @brief Method ReadOidAsString addr 0x2811754 size 0x2bc virtual false final false
 ::StringW ReadOidAsString() ;

/// @brief Method ReadUtf8String addr 0x2811a10 size 0x80 virtual false final false
 ::StringW ReadUtf8String() ;

/// @brief Method ReadCollectionWithTag addr 0x2811b08 size 0xd8 virtual false final false
 System::Security::Cryptography::DerSequenceReader ReadCollectionWithTag(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag expected) ;

/// @brief Method ReadSequence addr 0x2811c78 size 0x8 virtual false final false
 System::Security::Cryptography::DerSequenceReader ReadSequence() ;

/// @brief Method ReadSet addr 0x2811c80 size 0x8 virtual false final false
 System::Security::Cryptography::DerSequenceReader ReadSet() ;

/// @brief Method ReadPrintableString addr 0x2811c88 size 0x80 virtual false final false
 ::StringW ReadPrintableString() ;

/// @brief Method ReadIA5String addr 0x2811d08 size 0x80 virtual false final false
 ::StringW ReadIA5String() ;

/// @brief Method ReadT61String addr 0x2811d88 size 0x2d8 virtual false final false
 ::StringW ReadT61String() ;

/// @brief Method ReadX509Date addr 0x2812060 size 0x84 virtual false final false
 System::DateTime ReadX509Date() ;

/// @brief Method ReadUtcTime addr 0x28120e4 size 0x4c virtual false final false
 System::DateTime ReadUtcTime() ;

/// @brief Method ReadGeneralizedTime addr 0x2812130 size 0x4c virtual false final false
 System::DateTime ReadGeneralizedTime() ;

/// @brief Method ReadBMPString addr 0x28123bc size 0x80 virtual false final false
 ::StringW ReadBMPString() ;

/// @brief Method TrimTrailingNulls addr 0x2811a90 size 0x78 virtual false final false
static ::StringW TrimTrailingNulls(::StringW value) ;

/// @brief Method ReadTime addr 0x281217c size 0x240 virtual false final false
 System::DateTime ReadTime(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag timeTag, ::StringW formatString) ;

/// @brief Method ReadContentAsBytes addr 0x281153c size 0xb4 virtual false final false
 ::ArrayW<uint8_t> ReadContentAsBytes() ;

/// @brief Method EatTag addr 0x2811014 size 0x80 virtual false final false
 void EatTag(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag expected) ;

/// @brief Method CheckTag addr 0x2811be0 size 0x98 virtual false final false
static void CheckTag(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag expected, ::ArrayW<uint8_t> data, int32_t position) ;

/// @brief Method EatLength addr 0x2811094 size 0x3c virtual false final false
 int32_t EatLength() ;

/// @brief Method ScanContentLength addr 0x2811280 size 0x120 virtual false final false
static int32_t ScanContentLength(::ArrayW<uint8_t> data, int32_t offset, int32_t end, ByRef<int32_t> bytesConsumed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader__DerTag, "System.Security.Cryptography", "DerSequenceReader/DerTag");
NEED_NO_BOX(System::Security::Cryptography::DerSequenceReader);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DerSequenceReader, "System.Security.Cryptography", "DerSequenceReader");
NEED_NO_BOX(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::System__Security__Cryptography__DerSequenceReader____c, "System.Security.Cryptography", "DerSequenceReader/<>c");
