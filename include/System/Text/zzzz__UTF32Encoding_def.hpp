#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class DecoderNLS;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class System__Text__UTF32Encoding__UTF32Decoder;
}
namespace System::Text {
class UTF32Encoding;
}
// Type: ::UTF32Decoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2831))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2851))
// CS Name: System.Text.UTF32Encoding::UTF32Decoder
class CORDL_TYPE System__Text__UTF32Encoding__UTF32Decoder : public System::Text::DecoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Text__UTF32Encoding__UTF32Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF32Encoding__UTF32Decoder", modifiers: " const&", def_value: None }]
constexpr System__Text__UTF32Encoding__UTF32Decoder(System__Text__UTF32Encoding__UTF32Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF32Encoding__UTF32Decoder", modifiers: "&&", def_value: None }]
constexpr System__Text__UTF32Encoding__UTF32Decoder(System__Text__UTF32Encoding__UTF32Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__UTF32Encoding__UTF32Decoder(void* ptr) noexcept : System::Text::DecoderNLS(ptr) {
}


  constexpr System__Text__UTF32Encoding__UTF32Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__UTF32Encoding__UTF32Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__UTF32Encoding__UTF32Decoder& operator=(System__Text__UTF32Encoding__UTF32Decoder&& o) noexcept = default;
  constexpr System__Text__UTF32Encoding__UTF32Decoder& operator=(System__Text__UTF32Encoding__UTF32Decoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_iChar, put=__set_iChar))  iChar;

constexpr void __set_iChar(int32_t value) ;

constexpr int32_t __get_iChar() const;

 int32_t __declspec(property(get=__get_readByteCount, put=__set_readByteCount))  readByteCount;

constexpr void __set_readByteCount(int32_t value) ;

constexpr int32_t __get_readByteCount() const;


// Properties

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UTF32Encoding", modifiers: "", def_value: None }]
explicit System__Text__UTF32Encoding__UTF32Decoder(System::Text::UTF32Encoding encoding) ;

/// @brief Method .ctor addr 0x230b208 size 0x8 virtual false final false
 void _ctor(System::Text::UTF32Encoding encoding) ;

/// @brief Method Reset addr 0x230b940 size 0x20 virtual true final false
 void Reset() ;

/// @brief Method get_HasState addr 0x230b960 size 0x10 virtual true final false
 bool get_HasState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: System.Text::UTF32Encoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2852))
// CS Name: System.Text.UTF32Encoding
class CORDL_TYPE UTF32Encoding : public System::Text::Encoding {
public:
// Declarations
using UTF32Decoder = System::Text::System__Text__UTF32Encoding__UTF32Decoder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UTF32Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding", modifiers: " const&", def_value: None }]
constexpr UTF32Encoding(UTF32Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding", modifiers: "&&", def_value: None }]
constexpr UTF32Encoding(UTF32Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UTF32Encoding(void* ptr) noexcept : System::Text::Encoding(ptr) {
}


  constexpr UTF32Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UTF32Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UTF32Encoding& operator=(UTF32Encoding&& o) noexcept = default;
  constexpr UTF32Encoding& operator=(UTF32Encoding const& o) noexcept = default;
                


// Fields

static System::Text::UTF32Encoding __declspec(property(get=__get_s_default, put=__set_s_default))  s_default;

static void __set_s_default(System::Text::UTF32Encoding value) ;

static System::Text::UTF32Encoding __get_s_default() ;

static System::Text::UTF32Encoding __declspec(property(get=__get_s_bigEndianDefault, put=__set_s_bigEndianDefault))  s_bigEndianDefault;

static void __set_s_bigEndianDefault(System::Text::UTF32Encoding value) ;

static System::Text::UTF32Encoding __get_s_bigEndianDefault() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_bigEndianPreamble, put=__set_s_bigEndianPreamble))  s_bigEndianPreamble;

static void __set_s_bigEndianPreamble(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_bigEndianPreamble() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_littleEndianPreamble, put=__set_s_littleEndianPreamble))  s_littleEndianPreamble;

static void __set_s_littleEndianPreamble(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_littleEndianPreamble() ;

 bool __declspec(property(get=__get__emitUTF32ByteOrderMark, put=__set__emitUTF32ByteOrderMark))  _emitUTF32ByteOrderMark;

constexpr void __set__emitUTF32ByteOrderMark(bool value) ;

constexpr bool __get__emitUTF32ByteOrderMark() const;

 bool __declspec(property(get=__get__isThrowException, put=__set__isThrowException))  _isThrowException;

constexpr void __set__isThrowException(bool value) ;

constexpr bool __get__isThrowException() const;

 bool __declspec(property(get=__get__bigEndian, put=__set__bigEndian))  _bigEndian;

constexpr void __set__bigEndian(bool value) ;

constexpr bool __get__bigEndian() const;


// Properties

 System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_Preamble))  Preamble;


// Methods

// Ctor Parameters []
explicit UTF32Encoding() ;

/// @brief Method .ctor addr 0x2309170 size 0x28 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "byteOrderMark", ty: "bool", modifiers: "", def_value: None }]
explicit UTF32Encoding(bool bigEndian, bool byteOrderMark) ;

/// @brief Method .ctor addr 0x2309208 size 0x40 virtual false final false
 void _ctor(bool bigEndian, bool byteOrderMark) ;

// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "byteOrderMark", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "throwOnInvalidCharacters", ty: "bool", modifiers: "", def_value: None }]
explicit UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) ;

/// @brief Method .ctor addr 0x2309198 size 0x70 virtual false final false
 void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) ;

/// @brief Method SetDefaultFallbacks addr 0x2309248 size 0xd4 virtual true final false
 void SetDefaultFallbacks() ;

/// @brief Method GetByteCount addr 0x230931c size 0x184 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x23094a0 size 0x90 virtual true final false
 int32_t GetByteCount(::StringW s) ;

/// @brief Method GetByteCount addr 0x2309530 size 0xd8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetBytes addr 0x2309608 size 0x260 virtual true final false
 int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x2309868 size 0x27c virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x2309ae4 size 0x100 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x2309be4 size 0x184 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x2309d68 size 0xd8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetChars addr 0x2309e40 size 0x27c virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x230a0bc size 0x100 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetString addr 0x230a1bc size 0x1c8 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x230a384 size 0x2d8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS encoder) ;

/// @brief Method GetBytes addr 0x230a65c size 0x3c8 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder) ;

/// @brief Method GetCharCount addr 0x230aa40 size 0x348 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetChars addr 0x230ad88 size 0x3fc virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetSurrogate addr 0x230aa24 size 0x1c virtual false final false
 uint32_t GetSurrogate(char16_t cHigh, char16_t cLow) ;

/// @brief Method GetHighSurrogate addr 0x230b184 size 0x14 virtual false final false
 char16_t GetHighSurrogate(uint32_t iChar) ;

/// @brief Method GetLowSurrogate addr 0x230b198 size 0xc virtual false final false
 char16_t GetLowSurrogate(uint32_t iChar) ;

/// @brief Method GetDecoder addr 0x230b1a4 size 0x64 virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method GetEncoder addr 0x230b210 size 0x64 virtual true final false
 System::Text::Encoder GetEncoder() ;

/// @brief Method GetMaxByteCount addr 0x230b274 size 0x108 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x230b37c size 0xd0 virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method GetPreamble addr 0x230b44c size 0x104 virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

/// @brief Method get_Preamble addr 0x230b550 size 0x170 virtual true final false
 System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

/// @brief Method Equals addr 0x230b6c0 size 0xc4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x230b784 size 0x7c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::System__Text__UTF32Encoding__UTF32Decoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__UTF32Encoding__UTF32Decoder, "System.Text", "UTF32Encoding/UTF32Decoder");
NEED_NO_BOX(System::Text::UTF32Encoding);
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF32Encoding, "System.Text", "UTF32Encoding");
