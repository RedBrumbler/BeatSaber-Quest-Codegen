#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
struct SeekOrigin;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZInputStream;
}
// Type: Org.BouncyCastle.Utilities.Zlib::ZInputStream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1829))
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZInputStream
class CORDL_TYPE ZInputStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ZInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZInputStream", modifiers: " const&", def_value: None }]
constexpr ZInputStream(ZInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZInputStream", modifiers: "&&", def_value: None }]
constexpr ZInputStream(ZInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZInputStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr ZInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZInputStream& operator=(ZInputStream&& o) noexcept = default;
  constexpr ZInputStream& operator=(ZInputStream const& o) noexcept = default;
                


// Fields

/// @brief Field BufferSize offset 0
static constexpr int32_t  BufferSize{4096};

 Org::BouncyCastle::Utilities::Zlib::ZStream __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(Org::BouncyCastle::Utilities::Zlib::ZStream value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::ZStream __get_z() const;

 int32_t __declspec(property(get=__get_flushLevel, put=__set_flushLevel))  flushLevel;

constexpr void __set_flushLevel(int32_t value) ;

constexpr int32_t __get_flushLevel() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf1, put=__set_buf1))  buf1;

constexpr void __set_buf1(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf1() const;

 bool __declspec(property(get=__get_compress, put=__set_compress))  compress;

constexpr void __set_compress(bool value) ;

constexpr bool __get_compress() const;

 System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(System::IO::Stream value) ;

constexpr System::IO::Stream __get_input() const;

 bool __declspec(property(get=__get_closed, put=__set_closed))  closed;

constexpr void __set_closed(bool value) ;

constexpr bool __get_closed() const;

 bool __declspec(property(get=__get_nomoreinput, put=__set_nomoreinput))  nomoreinput;

constexpr void __set_nomoreinput(bool value) ;

constexpr bool __get_nomoreinput() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int32_t __declspec(property(get=get_FlushMode, put=set_FlushMode))  FlushMode;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 int64_t __declspec(property(get=get_TotalIn))  TotalIn;

 int64_t __declspec(property(get=get_TotalOut))  TotalOut;


// Methods

/// @brief Method GetDefaultZStream addr 0x10ecdf8 size 0x6c virtual false final false
static Org::BouncyCastle::Utilities::Zlib::ZStream GetDefaultZStream(bool nowrap) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit ZInputStream(System::IO::Stream input) ;

/// @brief Method .ctor addr 0x10ece64 size 0x30 virtual false final false
 void _ctor(System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
explicit ZInputStream(System::IO::Stream input, bool nowrap) ;

/// @brief Method .ctor addr 0x10ece94 size 0x30 virtual false final false
 void _ctor(System::IO::Stream input, bool nowrap) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "z", ty: "Org::BouncyCastle::Utilities::Zlib::ZStream", modifiers: "", def_value: None }]
explicit ZInputStream(System::IO::Stream input, Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method .ctor addr 0x10ecec4 size 0x120 virtual false final false
 void _ctor(System::IO::Stream input, Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }]
explicit ZInputStream(System::IO::Stream input, int32_t level) ;

/// @brief Method .ctor addr 0x10ecff0 size 0x8 virtual false final false
 void _ctor(System::IO::Stream input, int32_t level) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
explicit ZInputStream(System::IO::Stream input, int32_t level, bool nowrap) ;

/// @brief Method .ctor addr 0x10ecff8 size 0x114 virtual false final false
 void _ctor(System::IO::Stream input, int32_t level, bool nowrap) ;

/// @brief Method get_CanRead addr 0x10ed10c size 0x10 virtual true final true
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x10ed11c size 0x8 virtual true final true
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x10ed124 size 0x8 virtual true final true
 bool get_CanWrite() ;

/// @brief Method Close addr 0x10ed12c size 0x94 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x10ed1c0 size 0x4 virtual true final true
 void Flush() ;

/// @brief Method get_FlushMode addr 0x10ed1c4 size 0x8 virtual true final false
 int32_t get_FlushMode() ;

/// @brief Method set_FlushMode addr 0x10ed1cc size 0x8 virtual true final false
 void set_FlushMode(int32_t value) ;

/// @brief Method get_Length addr 0x10ed1d4 size 0x40 virtual true final true
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x10ed214 size 0x40 virtual true final true
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x10ed254 size 0x40 virtual true final true
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0x10ed294 size 0x1ec virtual true final false
 int32_t Read(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method ReadByte addr 0x10ed480 size 0x58 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Seek addr 0x10ed4d8 size 0x40 virtual true final true
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x10ed518 size 0x40 virtual true final true
 void SetLength(int64_t value) ;

/// @brief Method get_TotalIn addr 0x10ed558 size 0x1c virtual true final false
 int64_t get_TotalIn() ;

/// @brief Method get_TotalOut addr 0x10ed574 size 0x1c virtual true final false
 int64_t get_TotalOut() ;

/// @brief Method Write addr 0x10ed590 size 0x40 virtual true final true
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::ZInputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::ZInputStream, "Org.BouncyCastle.Utilities.Zlib", "ZInputStream");
