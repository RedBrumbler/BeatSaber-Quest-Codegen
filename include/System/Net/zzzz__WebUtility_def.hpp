#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
namespace System::IO {
class TextWriter;
}
namespace System::Net::Configuration {
struct UnicodeDecodingConformance;
}
// Forward declare root types
namespace System::Net {
class System__Net__WebUtility__UrlDecoder;
}
namespace System::Net {
class WebUtility;
}
// Type: ::UrlDecoder
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7968))
// CS Name: System.Net.WebUtility::UrlDecoder
class CORDL_TYPE System__Net__WebUtility__UrlDecoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Net__WebUtility__UrlDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebUtility__UrlDecoder", modifiers: " const&", def_value: None }]
constexpr System__Net__WebUtility__UrlDecoder(System__Net__WebUtility__UrlDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebUtility__UrlDecoder", modifiers: "&&", def_value: None }]
constexpr System__Net__WebUtility__UrlDecoder(System__Net__WebUtility__UrlDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebUtility__UrlDecoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebUtility__UrlDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebUtility__UrlDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebUtility__UrlDecoder& operator=(System__Net__WebUtility__UrlDecoder&& o) noexcept = default;
  constexpr System__Net__WebUtility__UrlDecoder& operator=(System__Net__WebUtility__UrlDecoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__bufferSize, put=__set__bufferSize))  _bufferSize;

constexpr void __set__bufferSize(int32_t value) ;

constexpr int32_t __get__bufferSize() const;

 int32_t __declspec(property(get=__get__numChars, put=__set__numChars))  _numChars;

constexpr void __set__numChars(int32_t value) ;

constexpr int32_t __get__numChars() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__charBuffer, put=__set__charBuffer))  _charBuffer;

constexpr void __set__charBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__charBuffer() const;

 int32_t __declspec(property(get=__get__numBytes, put=__set__numBytes))  _numBytes;

constexpr void __set__numBytes(int32_t value) ;

constexpr int32_t __get__numBytes() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer))  _byteBuffer;

constexpr void __set__byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__byteBuffer() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;


// Methods

/// @brief Method FlushBytes addr 0x28447c4 size 0x60 virtual false final false
 void FlushBytes() ;

// Ctor Parameters [CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit System__Net__WebUtility__UrlDecoder(int32_t bufferSize, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x2844450 size 0x74 virtual false final false
 void _ctor(int32_t bufferSize, System::Text::Encoding encoding) ;

/// @brief Method AddChar addr 0x28445ac size 0x60 virtual false final false
 void AddChar(char16_t ch) ;

/// @brief Method AddByte addr 0x2844514 size 0x98 virtual false final false
 void AddByte(uint8_t b) ;

/// @brief Method GetString addr 0x284460c size 0x88 virtual false final false
 ::StringW GetString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebUtility
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7969))
// CS Name: System.Net.WebUtility
class CORDL_TYPE WebUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UrlDecoder = System::Net::System__Net__WebUtility__UrlDecoder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: " const&", def_value: None }]
constexpr WebUtility(WebUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "&&", def_value: None }]
constexpr WebUtility(WebUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebUtility& operator=(WebUtility&& o) noexcept = default;
  constexpr WebUtility& operator=(WebUtility const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get__htmlEntityEndingChars, put=__set__htmlEntityEndingChars))  _htmlEntityEndingChars;

static void __set__htmlEntityEndingChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get__htmlEntityEndingChars() ;

static System::Net::Configuration::UnicodeDecodingConformance __declspec(property(get=__get__htmlDecodeConformance, put=__set__htmlDecodeConformance))  _htmlDecodeConformance;

static void __set__htmlDecodeConformance(System::Net::Configuration::UnicodeDecodingConformance value) ;

static System::Net::Configuration::UnicodeDecodingConformance __get__htmlDecodeConformance() ;

static System::Net::Configuration::UnicodeEncodingConformance __declspec(property(get=__get__htmlEncodeConformance, put=__set__htmlEncodeConformance))  _htmlEncodeConformance;

static void __set__htmlEncodeConformance(System::Net::Configuration::UnicodeEncodingConformance value) ;

static System::Net::Configuration::UnicodeEncodingConformance __get__htmlEncodeConformance() ;


// Properties

static System::Net::Configuration::UnicodeEncodingConformance __declspec(property(get=get_HtmlEncodeConformance))  HtmlEncodeConformance;


// Methods

/// @brief Method HtmlEncode addr 0x2843a88 size 0x120 virtual false final false
static ::StringW HtmlEncode(::StringW value) ;

/// @brief Method HtmlEncode addr 0x2843cf0 size 0x3b4 virtual false final false
static void HtmlEncode(::StringW value, System::IO::TextWriter output) ;

/// @brief Method IndexOfHtmlEncodingChars addr 0x2843ba8 size 0x148 virtual false final false
static int32_t IndexOfHtmlEncodingChars(::StringW s, int32_t startPos) ;

/// @brief Method get_HtmlEncodeConformance addr 0x28440a4 size 0xe4 virtual false final false
static System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance() ;

/// @brief Method UrlDecodeInternal addr 0x2844240 size 0x210 virtual false final false
static ::StringW UrlDecodeInternal(::StringW value, System::Text::Encoding encoding) ;

/// @brief Method UrlDecode addr 0x2844694 size 0x7c virtual false final false
static ::StringW UrlDecode(::StringW encodedValue) ;

/// @brief Method GetNextUnicodeScalarValueFromUtf16Surrogate addr 0x2844188 size 0xb8 virtual false final false
static int32_t GetNextUnicodeScalarValueFromUtf16Surrogate(ByRef<void*> pch, ByRef<int32_t> charsRemaining) ;

/// @brief Method HexToInt addr 0x28444c4 size 0x50 virtual false final false
static int32_t HexToInt(char16_t h) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::System__Net__WebUtility__UrlDecoder);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebUtility__UrlDecoder, "System.Net", "WebUtility/UrlDecoder");
NEED_NO_BOX(System::Net::WebUtility);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebUtility, "System.Net", "WebUtility");
