#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
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
class UnexceptionalStreamWriter;
}
// Type: System.IO::UnexceptionalStreamWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3621))
// CS Name: System.IO.UnexceptionalStreamWriter
class CORDL_TYPE UnexceptionalStreamWriter : public System::IO::StreamWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnexceptionalStreamWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamWriter", modifiers: " const&", def_value: None }]
constexpr UnexceptionalStreamWriter(UnexceptionalStreamWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamWriter", modifiers: "&&", def_value: None }]
constexpr UnexceptionalStreamWriter(UnexceptionalStreamWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnexceptionalStreamWriter(void* ptr) noexcept : System::IO::StreamWriter(ptr) {
}


  constexpr UnexceptionalStreamWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnexceptionalStreamWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnexceptionalStreamWriter& operator=(UnexceptionalStreamWriter&& o) noexcept = default;
  constexpr UnexceptionalStreamWriter& operator=(UnexceptionalStreamWriter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit UnexceptionalStreamWriter(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x240b2b8 size 0x78 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method Flush addr 0x240b330 size 0x84 virtual true final false
 void Flush() ;

/// @brief Method Write addr 0x240b3b4 size 0x84 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x240b438 size 0x84 virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x240b4bc size 0x84 virtual true final false
 void Write(::ArrayW<char16_t> value) ;

/// @brief Method Write addr 0x240b540 size 0x84 virtual true final false
 void Write(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::UnexceptionalStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnexceptionalStreamWriter, "System.IO", "UnexceptionalStreamWriter");
