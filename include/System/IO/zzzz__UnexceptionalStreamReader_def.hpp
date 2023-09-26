#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class UnexceptionalStreamReader;
}
// Type: System.IO::UnexceptionalStreamReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3620))
// CS Name: System.IO.UnexceptionalStreamReader
class CORDL_TYPE UnexceptionalStreamReader : public System::IO::StreamReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~UnexceptionalStreamReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamReader", modifiers: " const&", def_value: None }]
constexpr UnexceptionalStreamReader(UnexceptionalStreamReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamReader", modifiers: "&&", def_value: None }]
constexpr UnexceptionalStreamReader(UnexceptionalStreamReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnexceptionalStreamReader(void* ptr) noexcept : System::IO::StreamReader(ptr) {
}


  constexpr UnexceptionalStreamReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnexceptionalStreamReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnexceptionalStreamReader& operator=(UnexceptionalStreamReader&& o) noexcept = default;
  constexpr UnexceptionalStreamReader& operator=(UnexceptionalStreamReader const& o) noexcept = default;
                


// Fields

static ::ArrayW<bool> __declspec(property(get=__get_newline, put=__set_newline))  newline;

static void __set_newline(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_newline() ;

static char16_t __declspec(property(get=__get_newlineChar, put=__set_newlineChar))  newlineChar;

static void __set_newlineChar(char16_t value) ;

static char16_t __get_newlineChar() ;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit UnexceptionalStreamReader(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x240abf8 size 0x70 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method Peek addr 0x240ac68 size 0x88 virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x240acf0 size 0x88 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x240ad78 size 0x298 virtual true final false
 int32_t Read(ByRef<::ArrayW<char16_t>> dest_buffer, int32_t index, int32_t count) ;

/// @brief Method CheckEOL addr 0x240b010 size 0x198 virtual false final false
 bool CheckEOL(char16_t current) ;

/// @brief Method ReadLine addr 0x240b1a8 size 0x88 virtual true final false
 ::StringW ReadLine() ;

/// @brief Method ReadToEnd addr 0x240b230 size 0x88 virtual true final false
 ::StringW ReadToEnd() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::UnexceptionalStreamReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnexceptionalStreamReader, "System.IO", "UnexceptionalStreamReader");
