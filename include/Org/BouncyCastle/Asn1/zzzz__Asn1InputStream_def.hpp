#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Type: Org.BouncyCastle.Asn1::Asn1InputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(453))
// CS Name: Org.BouncyCastle.Asn1.Asn1InputStream
class CORDL_TYPE Asn1InputStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Asn1InputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: " const&", def_value: None }]
constexpr Asn1InputStream(Asn1InputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "&&", def_value: None }]
constexpr Asn1InputStream(Asn1InputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1InputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::FilterStream(ptr) {
}


  constexpr Asn1InputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1InputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1InputStream& operator=(Asn1InputStream&& o) noexcept = default;
  constexpr Asn1InputStream& operator=(Asn1InputStream const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(int32_t value) ;

constexpr int32_t __get_limit() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_tmpBuffers, put=__set_tmpBuffers))  tmpBuffers;

constexpr void __set_tmpBuffers(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_tmpBuffers() const;


// Properties

 int32_t __declspec(property(get=get_Limit))  Limit;


// Methods

/// @brief Method FindLimit addr 0x1136c54 size 0x130 virtual false final false
static int32_t FindLimit(System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit Asn1InputStream(System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x1136d84 size 0x30 virtual false final false
 void _ctor(System::IO::Stream inputStream) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }]
explicit Asn1InputStream(System::IO::Stream inputStream, int32_t limit) ;

/// @brief Method .ctor addr 0x1136db4 size 0x70 virtual false final false
 void _ctor(System::IO::Stream inputStream, int32_t limit) ;

// Ctor Parameters [CppParam { name: "input", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Asn1InputStream(::ArrayW<uint8_t> input) ;

/// @brief Method .ctor addr 0x1136e24 size 0x80 virtual false final false
 void _ctor(::ArrayW<uint8_t> input) ;

/// @brief Method BuildObject addr 0x1136ea4 size 0x490 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object BuildObject(int32_t tag, int32_t tagNo, int32_t length) ;

/// @brief Method ReadVector addr 0x1138378 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1EncodableVector ReadVector(Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn) ;

/// @brief Method CreateDerSequence addr 0x11388e0 size 0x80 virtual true final false
 Org::BouncyCastle::Asn1::DerSequence CreateDerSequence(Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn) ;

/// @brief Method CreateDerSet addr 0x11389ec size 0x84 virtual true final false
 Org::BouncyCastle::Asn1::DerSet CreateDerSet(Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn) ;

/// @brief Method ReadObject addr 0x1138468 size 0x478 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object ReadObject() ;

/// @brief Method get_Limit addr 0x113950c size 0x8 virtual true final false
 int32_t get_Limit() ;

/// @brief Method ReadTagNumber addr 0x1138b0c size 0x100 virtual false final false
static int32_t ReadTagNumber(System::IO::Stream s, int32_t tag) ;

/// @brief Method ReadLength addr 0x1138c0c size 0x2f0 virtual false final false
static int32_t ReadLength(System::IO::Stream s, int32_t limit, bool isParsing) ;

/// @brief Method GetBuffer addr 0x1139514 size 0xe8 virtual false final false
static ::ArrayW<uint8_t> GetBuffer(Org::BouncyCastle::Asn1::DefiniteLengthInputStream defIn, ::ArrayW<::ArrayW<uint8_t>> tmpBuffers) ;

/// @brief Method GetBmpCharBuffer addr 0x11399a0 size 0x310 virtual false final false
static ::ArrayW<char16_t> GetBmpCharBuffer(Org::BouncyCastle::Asn1::DefiniteLengthInputStream defIn) ;

/// @brief Method CreatePrimitiveDerObject addr 0x1137db4 size 0x5c4 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object CreatePrimitiveDerObject(int32_t tagNo, Org::BouncyCastle::Asn1::DefiniteLengthInputStream defIn, ::ArrayW<::ArrayW<uint8_t>> tmpBuffers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1InputStream, "Org.BouncyCastle.Asn1", "Asn1InputStream");
