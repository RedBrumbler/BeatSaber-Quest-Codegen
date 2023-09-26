#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Decoder;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class System__IO__StreamReader__NullStreamReader;
}
// Type: System.IO::StreamReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3569))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3565))
// CS Name: System.IO.StreamReader
class CORDL_TYPE StreamReader : public System::IO::TextReader {
public:
// Declarations
using NullStreamReader = System::IO::System__IO__StreamReader__NullStreamReader;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~StreamReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: " const&", def_value: None }]
constexpr StreamReader(StreamReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "&&", def_value: None }]
constexpr StreamReader(StreamReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamReader(void* ptr) noexcept : System::IO::TextReader(ptr) {
}


  constexpr StreamReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamReader& operator=(StreamReader&& o) noexcept = default;
  constexpr StreamReader& operator=(StreamReader const& o) noexcept = default;
                


// Fields

static System::IO::StreamReader __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::StreamReader value) ;

static System::IO::StreamReader __get_Null() ;

 System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__stream() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;

 System::Text::Decoder __declspec(property(get=__get__decoder, put=__set__decoder))  _decoder;

constexpr void __set__decoder(System::Text::Decoder value) ;

constexpr System::Text::Decoder __get__decoder() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer))  _byteBuffer;

constexpr void __set__byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__byteBuffer() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__charBuffer, put=__set__charBuffer))  _charBuffer;

constexpr void __set__charBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__charBuffer() const;

 int32_t __declspec(property(get=__get__charPos, put=__set__charPos))  _charPos;

constexpr void __set__charPos(int32_t value) ;

constexpr int32_t __get__charPos() const;

 int32_t __declspec(property(get=__get__charLen, put=__set__charLen))  _charLen;

constexpr void __set__charLen(int32_t value) ;

constexpr int32_t __get__charLen() const;

 int32_t __declspec(property(get=__get__byteLen, put=__set__byteLen))  _byteLen;

constexpr void __set__byteLen(int32_t value) ;

constexpr int32_t __get__byteLen() const;

 int32_t __declspec(property(get=__get__bytePos, put=__set__bytePos))  _bytePos;

constexpr void __set__bytePos(int32_t value) ;

constexpr int32_t __get__bytePos() const;

 int32_t __declspec(property(get=__get__maxCharsPerBuffer, put=__set__maxCharsPerBuffer))  _maxCharsPerBuffer;

constexpr void __set__maxCharsPerBuffer(int32_t value) ;

constexpr int32_t __get__maxCharsPerBuffer() const;

 bool __declspec(property(get=__get__detectEncoding, put=__set__detectEncoding))  _detectEncoding;

constexpr void __set__detectEncoding(bool value) ;

constexpr bool __get__detectEncoding() const;

 bool __declspec(property(get=__get__checkPreamble, put=__set__checkPreamble))  _checkPreamble;

constexpr void __set__checkPreamble(bool value) ;

constexpr bool __get__checkPreamble() const;

 bool __declspec(property(get=__get__isBlocked, put=__set__isBlocked))  _isBlocked;

constexpr void __set__isBlocked(bool value) ;

constexpr bool __get__isBlocked() const;

 bool __declspec(property(get=__get__closable, put=__set__closable))  _closable;

constexpr void __set__closable(bool value) ;

constexpr bool __get__closable() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__asyncReadTask, put=__set__asyncReadTask))  _asyncReadTask;

constexpr void __set__asyncReadTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__asyncReadTask() const;


// Properties

 System::Text::Encoding __declspec(property(get=get_CurrentEncoding))  CurrentEncoding;

 System::IO::Stream __declspec(property(get=get_BaseStream))  BaseStream;

 bool __declspec(property(get=get_LeaveOpen))  LeaveOpen;

 bool __declspec(property(get=get_EndOfStream))  EndOfStream;


// Methods

/// @brief Method CheckAsyncTaskInProgress addr 0x23ca5cc size 0x64 virtual false final false
 void CheckAsyncTaskInProgress() ;

/// @brief Method ThrowAsyncIOInProgress addr 0x23ca630 size 0x50 virtual false final false
static void ThrowAsyncIOInProgress() ;

// Ctor Parameters []
explicit StreamReader() ;

/// @brief Method .ctor addr 0x23ca680 size 0xbc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit StreamReader(System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x23ca744 size 0x3c virtual false final false
 void _ctor(System::IO::Stream stream) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "detectEncodingFromByteOrderMarks", ty: "bool", modifiers: "", def_value: None }]
explicit StreamReader(System::IO::Stream stream, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x23ca780 size 0x40 virtual false final false
 void _ctor(System::IO::Stream stream, bool detectEncodingFromByteOrderMarks) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit StreamReader(System::IO::Stream stream, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x23ca9e8 size 0x10 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "detectEncodingFromByteOrderMarks", ty: "bool", modifiers: "", def_value: None }]
explicit StreamReader(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x23ca9f8 size 0x10 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "detectEncodingFromByteOrderMarks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }]
explicit StreamReader(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) ;

/// @brief Method .ctor addr 0x23ca7c0 size 0x228 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
explicit StreamReader(::StringW path) ;

/// @brief Method .ctor addr 0x23cab30 size 0x38 virtual false final false
 void _ctor(::StringW path) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "detectEncodingFromByteOrderMarks", ty: "bool", modifiers: "", def_value: None }]
explicit StreamReader(::StringW path, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x23cab68 size 0x3c virtual false final false
 void _ctor(::StringW path, bool detectEncodingFromByteOrderMarks) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit StreamReader(::StringW path, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x23cadf0 size 0xc virtual false final false
 void _ctor(::StringW path, System::Text::Encoding encoding) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "detectEncodingFromByteOrderMarks", ty: "bool", modifiers: "", def_value: None }]
explicit StreamReader(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x23cadfc size 0xc virtual false final false
 void _ctor(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "detectEncodingFromByteOrderMarks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit StreamReader(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x23caba4 size 0x24c virtual false final false
 void _ctor(::StringW path, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize) ;

/// @brief Method Init addr 0x23caa08 size 0x128 virtual false final false
 void Init(System::IO::Stream stream, System::Text::Encoding encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen) ;

/// @brief Method Init addr 0x23cae08 size 0x10 virtual false final false
 void Init(System::IO::Stream stream) ;

/// @brief Method Close addr 0x23cae18 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23cae28 size 0xd0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_CurrentEncoding addr 0x23caf08 size 0x8 virtual true final false
 System::Text::Encoding get_CurrentEncoding() ;

/// @brief Method get_BaseStream addr 0x23caf10 size 0x8 virtual true final false
 System::IO::Stream get_BaseStream() ;

/// @brief Method get_LeaveOpen addr 0x23caef8 size 0x10 virtual false final false
 bool get_LeaveOpen() ;

/// @brief Method get_EndOfStream addr 0x23caf18 size 0x9c virtual false final false
 bool get_EndOfStream() ;

/// @brief Method Peek addr 0x23cafb4 size 0xc8 virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x23cb07c size 0xc8 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x23cb144 size 0x1c0 virtual true final false
 int32_t Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method ReadSpan addr 0x23cb304 size 0x268 virtual false final false
 int32_t ReadSpan(System::Span_1<char16_t> buffer) ;

/// @brief Method ReadToEnd addr 0x23cb87c size 0x11c virtual true final false
 ::StringW ReadToEnd() ;

/// @brief Method CompressBuffer addr 0x23cb998 size 0x44 virtual false final false
 void CompressBuffer(int32_t n) ;

/// @brief Method DetectEncoding addr 0x23cb9dc size 0x2b8 virtual false final false
 void DetectEncoding() ;

/// @brief Method IsPreamble addr 0x23cbc94 size 0x130 virtual false final false
 bool IsPreamble() ;

/// @brief Method ReadBuffer addr 0x23cbdc4 size 0x16c virtual true final false
 int32_t ReadBuffer() ;

/// @brief Method ReadBuffer addr 0x23cb56c size 0x310 virtual false final false
 int32_t ReadBuffer(System::Span_1<char16_t> userBuffer, ByRef<bool> readToUserBuffer) ;

/// @brief Method ReadLine addr 0x23cbf30 size 0x260 virtual true final false
 ::StringW ReadLine() ;

/// @brief Method DataAvailable addr 0x23cc190 size 0x10 virtual false final false
 bool DataAvailable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::NullStreamReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3564))
// CS Name: System.IO.StreamReader::NullStreamReader
class CORDL_TYPE System__IO__StreamReader__NullStreamReader : public System::IO::StreamReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~System__IO__StreamReader__NullStreamReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__StreamReader__NullStreamReader", modifiers: " const&", def_value: None }]
constexpr System__IO__StreamReader__NullStreamReader(System__IO__StreamReader__NullStreamReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__StreamReader__NullStreamReader", modifiers: "&&", def_value: None }]
constexpr System__IO__StreamReader__NullStreamReader(System__IO__StreamReader__NullStreamReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__StreamReader__NullStreamReader(void* ptr) noexcept : System::IO::StreamReader(ptr) {
}


  constexpr System__IO__StreamReader__NullStreamReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__StreamReader__NullStreamReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__StreamReader__NullStreamReader& operator=(System__IO__StreamReader__NullStreamReader&& o) noexcept = default;
  constexpr System__IO__StreamReader__NullStreamReader& operator=(System__IO__StreamReader__NullStreamReader const& o) noexcept = default;
                


// Properties

 System::IO::Stream __declspec(property(get=get_BaseStream))  BaseStream;

 System::Text::Encoding __declspec(property(get=get_CurrentEncoding))  CurrentEncoding;


// Methods

// Ctor Parameters []
explicit System__IO__StreamReader__NullStreamReader() ;

/// @brief Method .ctor addr 0x23cc214 size 0x94 virtual false final false
 void _ctor() ;

/// @brief Method get_BaseStream addr 0x23cc2a8 size 0x58 virtual true final false
 System::IO::Stream get_BaseStream() ;

/// @brief Method get_CurrentEncoding addr 0x23cc300 size 0x8 virtual true final false
 System::Text::Encoding get_CurrentEncoding() ;

/// @brief Method Dispose addr 0x23cc308 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Peek addr 0x23cc30c size 0x8 virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x23cc314 size 0x8 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x23cc31c size 0x8 virtual true final false
 int32_t Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method ReadLine addr 0x23cc324 size 0x8 virtual true final false
 ::StringW ReadLine() ;

/// @brief Method ReadToEnd addr 0x23cc32c size 0x48 virtual true final false
 ::StringW ReadToEnd() ;

/// @brief Method ReadBuffer addr 0x23cc374 size 0x8 virtual true final false
 int32_t ReadBuffer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::StreamReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader, "System.IO", "StreamReader");
NEED_NO_BOX(System::IO::System__IO__StreamReader__NullStreamReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__StreamReader__NullStreamReader, "System.IO", "StreamReader/NullStreamReader");
