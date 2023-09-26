#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerOctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator;
}
// Type: ::ChunkEnumerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(480))
// CS Name: Org.BouncyCastle.Asn1.BerOctetString::ChunkEnumerator
class CORDL_TYPE Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator(Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator(Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator& operator=(Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator& operator=(Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_octets, put=__set_octets))  octets;

constexpr void __set_octets(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_octets() const;

 int32_t __declspec(property(get=__get_chunkSize, put=__set_chunkSize))  chunkSize;

constexpr void __set_chunkSize(int32_t value) ;

constexpr int32_t __get_chunkSize() const;

 Org::BouncyCastle::Asn1::DerOctetString __declspec(property(get=__get_currentChunk, put=__set_currentChunk))  currentChunk;

constexpr void __set_currentChunk(Org::BouncyCastle::Asn1::DerOctetString value) ;

constexpr Org::BouncyCastle::Asn1::DerOctetString __get_currentChunk() const;

 int32_t __declspec(property(get=__get_nextChunkPos, put=__set_nextChunkPos))  nextChunkPos;

constexpr void __set_nextChunkPos(int32_t value) ;

constexpr int32_t __get_nextChunkPos() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "octets", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator(::ArrayW<uint8_t> octets, int32_t chunkSize) ;

/// @brief Method .ctor addr 0x113f6d4 size 0x38 virtual false final false
 void _ctor(::ArrayW<uint8_t> octets, int32_t chunkSize) ;

/// @brief Method get_Current addr 0x113fb40 size 0x50 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x113fb90 size 0x12c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x113fcbc size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::BerOctetString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(481))
// CS Name: Org.BouncyCastle.Asn1.BerOctetString
class CORDL_TYPE BerOctetString : public Org::BouncyCastle::Asn1::DerOctetString {
public:
// Declarations
using ChunkEnumerator = Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BerOctetString() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOctetString", modifiers: " const&", def_value: None }]
constexpr BerOctetString(BerOctetString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOctetString", modifiers: "&&", def_value: None }]
constexpr BerOctetString(BerOctetString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerOctetString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerOctetString(ptr) {
}


  constexpr BerOctetString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerOctetString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerOctetString& operator=(BerOctetString&& o) noexcept = default;
  constexpr BerOctetString& operator=(BerOctetString const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_DefaultChunkSize, put=__set_DefaultChunkSize))  DefaultChunkSize;

static void __set_DefaultChunkSize(int32_t value) ;

static int32_t __get_DefaultChunkSize() ;

 int32_t __declspec(property(get=__get_chunkSize, put=__set_chunkSize))  chunkSize;

constexpr void __set_chunkSize(int32_t value) ;

constexpr int32_t __get_chunkSize() const;

 ::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> __declspec(property(get=__get_octs, put=__set_octs))  octs;

constexpr void __set_octs(::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> __get_octs() const;


// Methods

/// @brief Method FromSequence addr 0x113a254 size 0x12c virtual false final false
static Org::BouncyCastle::Asn1::BerOctetString FromSequence(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method ToBytes addr 0x113f1c8 size 0xd8 virtual false final false
static ::ArrayW<uint8_t> ToBytes(::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs) ;

/// @brief Method ToOctetStringArray addr 0x113f2a0 size 0x1ec virtual false final false
static ::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> ToOctetStringArray(System::Collections::IEnumerable e) ;

// Ctor Parameters [CppParam { name: "e", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit BerOctetString(System::Collections::IEnumerable e) ;

/// @brief Method .ctor addr 0x113f48c size 0x6c virtual false final false
 void _ctor(System::Collections::IEnumerable e) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BerOctetString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x113f4f8 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "octs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString>", modifiers: "", def_value: None }]
explicit BerOctetString(::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs) ;

/// @brief Method .ctor addr 0x1137a50 size 0x70 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerOctetString(::ArrayW<uint8_t> str, int32_t chunkSize) ;

/// @brief Method .ctor addr 0x113f574 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> str, int32_t chunkSize) ;

// Ctor Parameters [CppParam { name: "octs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString>", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerOctetString(::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs, int32_t chunkSize) ;

/// @brief Method .ctor addr 0x113f59c size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs, int32_t chunkSize) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "octs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString>", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerOctetString(::ArrayW<uint8_t> str, ::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs, int32_t chunkSize) ;

/// @brief Method .ctor addr 0x113f618 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint8_t> str, ::ArrayW<Org::BouncyCastle::Asn1::Asn1OctetString> octs, int32_t chunkSize) ;

/// @brief Method GetEnumerator addr 0x113f644 size 0x90 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method GetObjects addr 0x113f70c size 0x4 virtual false final false
 System::Collections::IEnumerator GetObjects() ;

/// @brief Method Encode addr 0x113f710 size 0x3e4 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerOctetString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerOctetString, "Org.BouncyCastle.Asn1", "BerOctetString");
NEED_NO_BOX(Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__BerOctetString__ChunkEnumerator, "Org.BouncyCastle.Asn1", "BerOctetString/ChunkEnumerator");
