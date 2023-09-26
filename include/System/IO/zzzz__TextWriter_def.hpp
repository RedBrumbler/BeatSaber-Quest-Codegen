#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::IO {
class System__IO__TextWriter__NullTextWriter;
}
namespace System::IO {
class System__IO__TextWriter__SyncTextWriter;
}
namespace System::IO {
class TextWriter;
}
// Type: System.IO::TextWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3572))
// CS Name: System.IO.TextWriter
class CORDL_TYPE TextWriter : public System::MarshalByRefObject {
public:
// Declarations
using SyncTextWriter = System::IO::System__IO__TextWriter__SyncTextWriter;

using NullTextWriter = System::IO::System__IO__TextWriter__NullTextWriter;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: " const&", def_value: None }]
constexpr TextWriter(TextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "&&", def_value: None }]
constexpr TextWriter(TextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextWriter(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr TextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextWriter& operator=(TextWriter&& o) noexcept = default;
  constexpr TextWriter& operator=(TextWriter const& o) noexcept = default;
                


// Fields

static System::IO::TextWriter __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::TextWriter value) ;

static System::IO::TextWriter __get_Null() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_s_coreNewLine, put=__set_s_coreNewLine))  s_coreNewLine;

static void __set_s_coreNewLine(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_coreNewLine() ;

 ::ArrayW<char16_t> __declspec(property(get=__get_CoreNewLine, put=__set_CoreNewLine))  CoreNewLine;

constexpr void __set_CoreNewLine(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_CoreNewLine() const;

 ::StringW __declspec(property(get=__get_CoreNewLineStr, put=__set_CoreNewLineStr))  CoreNewLineStr;

constexpr void __set_CoreNewLineStr(::StringW value) ;

constexpr ::StringW __get_CoreNewLineStr() const;

 System::IFormatProvider __declspec(property(get=__get__internalFormatProvider, put=__set__internalFormatProvider))  _internalFormatProvider;

constexpr void __set__internalFormatProvider(System::IFormatProvider value) ;

constexpr System::IFormatProvider __get__internalFormatProvider() const;


// Properties

 System::IFormatProvider __declspec(property(get=get_FormatProvider))  FormatProvider;

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_NewLine))  NewLine;


// Methods

// Ctor Parameters []
explicit TextWriter() ;

/// @brief Method .ctor addr 0x23cccd8 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "formatProvider", ty: "System::IFormatProvider", modifiers: "", def_value: None }]
explicit TextWriter(System::IFormatProvider formatProvider) ;

/// @brief Method .ctor addr 0x23cc53c size 0x88 virtual false final false
 void _ctor(System::IFormatProvider formatProvider) ;

/// @brief Method get_FormatProvider addr 0x23ce814 size 0x68 virtual true final false
 System::IFormatProvider get_FormatProvider() ;

/// @brief Method Close addr 0x23ce87c size 0x6c virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23ce8e8 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x23ce8ec size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Flush addr 0x23ce958 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method get_Encoding addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method get_NewLine addr 0x23ce95c size 0x8 virtual true final false
 ::StringW get_NewLine() ;

/// @brief Method Write addr 0x23ce964 size 0x4 virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x23ce968 size 0x20 virtual true final false
 void Write(::ArrayW<char16_t> buffer) ;

/// @brief Method Write addr 0x23ce988 size 0x1b4 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x23ceb3c size 0x38 virtual true final false
 void Write(::StringW value) ;

/// @brief Method Write addr 0x23ceb74 size 0x6c virtual true final false
 void Write(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method WriteLine addr 0x23cebe0 size 0x14 virtual true final false
 void WriteLine() ;

/// @brief Method WriteLine addr 0x23cebf4 size 0x30 virtual true final false
 void WriteLine(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteLine addr 0x23cec24 size 0x3c virtual true final false
 void WriteLine(::StringW value) ;

/// @brief Method WriteLine addr 0x23cec60 size 0x6c virtual true final false
 void WriteLine(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method Synchronized addr 0x23ceccc size 0xc0 virtual false final false
static System::IO::TextWriter Synchronized(System::IO::TextWriter writer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::NullTextWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3570))
// CS Name: System.IO.TextWriter::NullTextWriter
class CORDL_TYPE System__IO__TextWriter__NullTextWriter : public System::IO::TextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__IO__TextWriter__NullTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__TextWriter__NullTextWriter", modifiers: " const&", def_value: None }]
constexpr System__IO__TextWriter__NullTextWriter(System__IO__TextWriter__NullTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__TextWriter__NullTextWriter", modifiers: "&&", def_value: None }]
constexpr System__IO__TextWriter__NullTextWriter(System__IO__TextWriter__NullTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__TextWriter__NullTextWriter(void* ptr) noexcept : System::IO::TextWriter(ptr) {
}


  constexpr System__IO__TextWriter__NullTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__TextWriter__NullTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__TextWriter__NullTextWriter& operator=(System__IO__TextWriter__NullTextWriter&& o) noexcept = default;
  constexpr System__IO__TextWriter__NullTextWriter& operator=(System__IO__TextWriter__NullTextWriter const& o) noexcept = default;
                


// Properties

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;


// Methods

// Ctor Parameters []
explicit System__IO__TextWriter__NullTextWriter() ;

/// @brief Method .ctor addr 0x23cee9c size 0x8c virtual false final false
 void _ctor() ;

/// @brief Method get_Encoding addr 0x23cef28 size 0x8 virtual true final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method Write addr 0x23cef30 size 0x4 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x23cef34 size 0x4 virtual true final false
 void Write(::StringW value) ;

/// @brief Method WriteLine addr 0x23cef38 size 0x4 virtual true final false
 void WriteLine() ;

/// @brief Method WriteLine addr 0x23cef3c size 0x4 virtual true final false
 void WriteLine(::StringW value) ;

/// @brief Method Write addr 0x23cef40 size 0x4 virtual true final false
 void Write(char16_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::SyncTextWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3571))
// CS Name: System.IO.TextWriter::SyncTextWriter
class CORDL_TYPE System__IO__TextWriter__SyncTextWriter : public System::IO::TextWriter {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__IO__TextWriter__SyncTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__TextWriter__SyncTextWriter", modifiers: " const&", def_value: None }]
constexpr System__IO__TextWriter__SyncTextWriter(System__IO__TextWriter__SyncTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__TextWriter__SyncTextWriter", modifiers: "&&", def_value: None }]
constexpr System__IO__TextWriter__SyncTextWriter(System__IO__TextWriter__SyncTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__TextWriter__SyncTextWriter(void* ptr) noexcept : System::IO::TextWriter(ptr) {
}


  constexpr System__IO__TextWriter__SyncTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__TextWriter__SyncTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__TextWriter__SyncTextWriter& operator=(System__IO__TextWriter__SyncTextWriter&& o) noexcept = default;
  constexpr System__IO__TextWriter__SyncTextWriter& operator=(System__IO__TextWriter__SyncTextWriter const& o) noexcept = default;
                


// Fields

 System::IO::TextWriter __declspec(property(get=__get__out, put=__set__out))  _out;

constexpr void __set__out(System::IO::TextWriter value) ;

constexpr System::IO::TextWriter __get__out() const;


// Properties

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;

 System::IFormatProvider __declspec(property(get=get_FormatProvider))  FormatProvider;

 ::StringW __declspec(property(get=get_NewLine))  NewLine;


// Methods

// Ctor Parameters [CppParam { name: "t", ty: "System::IO::TextWriter", modifiers: "", def_value: None }]
explicit System__IO__TextWriter__SyncTextWriter(System::IO::TextWriter t) ;

/// @brief Method .ctor addr 0x23ced8c size 0x7c virtual false final false
 void _ctor(System::IO::TextWriter t) ;

/// @brief Method get_Encoding addr 0x23cef44 size 0x20 virtual true final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method get_FormatProvider addr 0x23cef64 size 0x20 virtual true final false
 System::IFormatProvider get_FormatProvider() ;

/// @brief Method get_NewLine addr 0x23cef84 size 0x20 virtual true final false
 ::StringW get_NewLine() ;

/// @brief Method Close addr 0x23cefa4 size 0x20 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23cefc4 size 0xb4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x23cf078 size 0x20 virtual true final false
 void Flush() ;

/// @brief Method Write addr 0x23cf098 size 0x24 virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x23cf0bc size 0x24 virtual true final false
 void Write(::ArrayW<char16_t> buffer) ;

/// @brief Method Write addr 0x23cf0e0 size 0x24 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x23cf104 size 0x24 virtual true final false
 void Write(::StringW value) ;

/// @brief Method Write addr 0x23cf128 size 0x24 virtual true final false
 void Write(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method WriteLine addr 0x23cf14c size 0x24 virtual true final false
 void WriteLine() ;

/// @brief Method WriteLine addr 0x23cf170 size 0x24 virtual true final false
 void WriteLine(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteLine addr 0x23cf194 size 0x24 virtual true final false
 void WriteLine(::StringW value) ;

/// @brief Method WriteLine addr 0x23cf1b8 size 0x24 virtual true final false
 void WriteLine(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::System__IO__TextWriter__NullTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__TextWriter__NullTextWriter, "System.IO", "TextWriter/NullTextWriter");
NEED_NO_BOX(System::IO::System__IO__TextWriter__SyncTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__TextWriter__SyncTextWriter, "System.IO", "TextWriter/SyncTextWriter");
NEED_NO_BOX(System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextWriter, "System.IO", "TextWriter");
