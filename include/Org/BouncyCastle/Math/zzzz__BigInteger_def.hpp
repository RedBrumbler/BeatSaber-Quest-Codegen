#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections {
class IList;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Type: Org.BouncyCastle.Math::BigInteger
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1601))
// CS Name: Org.BouncyCastle.Math.BigInteger
class CORDL_TYPE BigInteger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BigInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: " const&", def_value: None }]
constexpr BigInteger(BigInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None }]
constexpr BigInteger(BigInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BigInteger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BigInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BigInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BigInteger& operator=(BigInteger&& o) noexcept = default;
  constexpr BigInteger& operator=(BigInteger const& o) noexcept = default;
                


// Fields

/// @brief Field IMASK offset 0
static constexpr int64_t  IMASK{4294967295};

/// @brief Field UIMASK offset 0
static constexpr uint64_t  UIMASK{4294967295u};

/// @brief Field chunk2 offset 0
static constexpr int32_t  chunk2{1};

/// @brief Field chunk8 offset 0
static constexpr int32_t  chunk8{1};

/// @brief Field chunk10 offset 0
static constexpr int32_t  chunk10{19};

/// @brief Field chunk16 offset 0
static constexpr int32_t  chunk16{16};

/// @brief Field BitsPerByte offset 0
static constexpr int32_t  BitsPerByte{8};

/// @brief Field BitsPerInt offset 0
static constexpr int32_t  BitsPerInt{32};

/// @brief Field BytesPerInt offset 0
static constexpr int32_t  BytesPerInt{4};

static ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_primeLists, put=__set_primeLists))  primeLists;

static void __set_primeLists(::ArrayW<::ArrayW<int32_t>> value) ;

static ::ArrayW<::ArrayW<int32_t>> __get_primeLists() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_primeProducts, put=__set_primeProducts))  primeProducts;

static void __set_primeProducts(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_primeProducts() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_ZeroMagnitude, put=__set_ZeroMagnitude))  ZeroMagnitude;

static void __set_ZeroMagnitude(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_ZeroMagnitude() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ZeroEncoding, put=__set_ZeroEncoding))  ZeroEncoding;

static void __set_ZeroEncoding(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ZeroEncoding() ;

static ::ArrayW<Org::BouncyCastle::Math::BigInteger> __declspec(property(get=__get_SMALL_CONSTANTS, put=__set_SMALL_CONSTANTS))  SMALL_CONSTANTS;

static void __set_SMALL_CONSTANTS(::ArrayW<Org::BouncyCastle::Math::BigInteger> value) ;

static ::ArrayW<Org::BouncyCastle::Math::BigInteger> __get_SMALL_CONSTANTS() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Zero() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_One, put=__set_One))  One;

static void __set_One(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_One() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Two, put=__set_Two))  Two;

static void __set_Two(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Two() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Three, put=__set_Three))  Three;

static void __set_Three(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Three() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Four, put=__set_Four))  Four;

static void __set_Four(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Four() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Ten, put=__set_Ten))  Ten;

static void __set_Ten(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Ten() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_BitLengthTable, put=__set_BitLengthTable))  BitLengthTable;

static void __set_BitLengthTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_BitLengthTable() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix2, put=__set_radix2))  radix2;

static void __set_radix2(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix2() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix2E, put=__set_radix2E))  radix2E;

static void __set_radix2E(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix2E() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix8, put=__set_radix8))  radix8;

static void __set_radix8(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix8() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix8E, put=__set_radix8E))  radix8E;

static void __set_radix8E(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix8E() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix10, put=__set_radix10))  radix10;

static void __set_radix10(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix10() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix10E, put=__set_radix10E))  radix10E;

static void __set_radix10E(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix10E() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix16, put=__set_radix16))  radix16;

static void __set_radix16(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix16() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_radix16E, put=__set_radix16E))  radix16E;

static void __set_radix16E(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_radix16E() ;

static Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_RandomSource, put=__set_RandomSource))  RandomSource;

static void __set_RandomSource(Org::BouncyCastle::Security::SecureRandom value) ;

static Org::BouncyCastle::Security::SecureRandom __get_RandomSource() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_ExpWindowThresholds, put=__set_ExpWindowThresholds))  ExpWindowThresholds;

static void __set_ExpWindowThresholds(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_ExpWindowThresholds() ;

 ::ArrayW<int32_t> __declspec(property(get=__get_magnitude, put=__set_magnitude))  magnitude;

constexpr void __set_magnitude(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_magnitude() const;

 int32_t __declspec(property(get=__get_sign, put=__set_sign))  sign;

constexpr void __set_sign(int32_t value) ;

constexpr int32_t __get_sign() const;

 int32_t __declspec(property(get=__get_nBits, put=__set_nBits))  nBits;

constexpr void __set_nBits(int32_t value) ;

constexpr int32_t __get_nBits() const;

 int32_t __declspec(property(get=__get_nBitLength, put=__set_nBitLength))  nBitLength;

constexpr void __set_nBitLength(int32_t value) ;

constexpr int32_t __get_nBitLength() const;

 int32_t __declspec(property(get=__get_mQuote, put=__set_mQuote))  mQuote;

constexpr void __set_mQuote(int32_t value) ;

constexpr int32_t __get_mQuote() const;


// Properties

 int32_t __declspec(property(get=get_BitCount))  BitCount;

 int32_t __declspec(property(get=get_BitLength))  BitLength;

 int32_t __declspec(property(get=get_IntValue))  IntValue;

 int32_t __declspec(property(get=get_IntValueExact))  IntValueExact;

 int64_t __declspec(property(get=get_LongValue))  LongValue;

 int64_t __declspec(property(get=get_LongValueExact))  LongValueExact;

 int32_t __declspec(property(get=get_SignValue))  SignValue;


// Methods

/// @brief Method GetByteLength addr 0x1013128 size 0x18 virtual false final false
static int32_t GetByteLength(int32_t nBits) ;

/// @brief Method Arbitrary addr 0x1013140 size 0x7c virtual false final false
static Org::BouncyCastle::Math::BigInteger Arbitrary(int32_t sizeInBits) ;

// Ctor Parameters [CppParam { name: "signum", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mag", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "checkMag", ty: "bool", modifiers: "", def_value: None }]
explicit BigInteger(int32_t signum, ::ArrayW<int32_t> mag, bool checkMag) ;

/// @brief Method .ctor addr 0x1012c3c size 0x138 virtual false final false
 void _ctor(int32_t signum, ::ArrayW<int32_t> mag, bool checkMag) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit BigInteger(::StringW value) ;

/// @brief Method .ctor addr 0x101335c size 0x8 virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None }]
explicit BigInteger(::StringW str, int32_t radix) ;

/// @brief Method .ctor addr 0x1013364 size 0x4e8 virtual false final false
 void _ctor(::StringW str, int32_t radix) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BigInteger(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x1013bc8 size 0x1c virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit BigInteger(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

/// @brief Method .ctor addr 0x1013be4 size 0x264 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

/// @brief Method MakeMagnitude addr 0x1013e48 size 0x1a0 virtual false final false
static ::ArrayW<int32_t> MakeMagnitude(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

// Ctor Parameters [CppParam { name: "sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BigInteger(int32_t sign, ::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x100faec size 0x1c virtual false final false
 void _ctor(int32_t sign, ::ArrayW<uint8_t> bytes) ;

// Ctor Parameters [CppParam { name: "sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit BigInteger(int32_t sign, ::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

/// @brief Method .ctor addr 0x1013fe8 size 0x138 virtual false final false
 void _ctor(int32_t sign, ::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

// Ctor Parameters [CppParam { name: "sizeInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "System::Random", modifiers: "", def_value: None }]
explicit BigInteger(int32_t sizeInBits, System::Random random) ;

/// @brief Method .ctor addr 0x10131bc size 0x1a0 virtual false final false
 void _ctor(int32_t sizeInBits, System::Random random) ;

// Ctor Parameters [CppParam { name: "bitLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certainty", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "System::Random", modifiers: "", def_value: None }]
explicit BigInteger(int32_t bitLength, int32_t certainty, System::Random random) ;

/// @brief Method .ctor addr 0x1014120 size 0x310 virtual false final false
 void _ctor(int32_t bitLength, int32_t certainty, System::Random random) ;

/// @brief Method Abs addr 0x1014618 size 0x10 virtual false final false
 Org::BouncyCastle::Math::BigInteger Abs() ;

/// @brief Method AddMagnitudes addr 0x101469c size 0xa4 virtual false final false
static ::ArrayW<int32_t> AddMagnitudes(::ArrayW<int32_t> a, ::ArrayW<int32_t> b) ;

/// @brief Method Add addr 0x1013b3c size 0x8c virtual false final false
 Org::BouncyCastle::Math::BigInteger Add(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method AddToMagnitude addr 0x101489c size 0x16c virtual false final false
 Org::BouncyCastle::Math::BigInteger AddToMagnitude(::ArrayW<int32_t> magToAdd) ;

/// @brief Method And addr 0x1014a08 size 0x274 virtual false final false
 Org::BouncyCastle::Math::BigInteger And(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method AndNot addr 0x1014c94 size 0x28 virtual false final false
 Org::BouncyCastle::Math::BigInteger AndNot(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method get_BitCount addr 0x1014cbc size 0x104 virtual false final false
 int32_t get_BitCount() ;

/// @brief Method BitCnt addr 0x1014dc0 size 0x34 virtual false final false
static int32_t BitCnt(int32_t i) ;

/// @brief Method CalcBitLength addr 0x1014df4 size 0x104 virtual false final false
static int32_t CalcBitLength(int32_t sign, int32_t indx, ::ArrayW<int32_t> mag) ;

/// @brief Method get_BitLength addr 0x100d1c4 size 0x84 virtual false final false
 int32_t get_BitLength() ;

/// @brief Method BitLen addr 0x1014ef8 size 0x124 virtual false final false
static int32_t BitLen(int32_t w) ;

/// @brief Method QuickPow2Check addr 0x101501c size 0x24 virtual false final false
 bool QuickPow2Check() ;

/// @brief Method CompareTo addr 0x1015040 size 0x84 virtual false final false
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CompareTo addr 0x1015170 size 0xdc virtual false final false
static int32_t CompareTo(int32_t xIndx, ::ArrayW<int32_t> x, int32_t yIndx, ::ArrayW<int32_t> y) ;

/// @brief Method CompareNoLeadingZeroes addr 0x101524c size 0x8c virtual false final false
static int32_t CompareNoLeadingZeroes(int32_t xIndx, ::ArrayW<int32_t> x, int32_t yIndx, ::ArrayW<int32_t> y) ;

/// @brief Method CompareTo addr 0x10150c4 size 0xac virtual false final false
 int32_t CompareTo(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method Divide addr 0x10152d8 size 0x48c virtual false final false
 ::ArrayW<int32_t> Divide(::ArrayW<int32_t> x, ::ArrayW<int32_t> y) ;

/// @brief Method Divide addr 0x1015b2c size 0x1e8 virtual false final false
 Org::BouncyCastle::Math::BigInteger Divide(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method DivideAndRemainder addr 0x1015d14 size 0x310 virtual false final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> DivideAndRemainder(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method Equals addr 0x1016178 size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsEqualMagnitude addr 0x101622c size 0x80 virtual false final false
 bool IsEqualMagnitude(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method Gcd addr 0x10162ac size 0x70 virtual false final false
 Org::BouncyCastle::Math::BigInteger Gcd(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method GetHashCode addr 0x10163ac size 0x58 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Inc addr 0x1016404 size 0x100 virtual false final false
 Org::BouncyCastle::Math::BigInteger Inc() ;

/// @brief Method get_IntValue addr 0x100d248 size 0x4c virtual false final false
 int32_t get_IntValue() ;

/// @brief Method get_IntValueExact addr 0x10165c0 size 0x6c virtual false final false
 int32_t get_IntValueExact() ;

/// @brief Method IsProbablePrime addr 0x101662c size 0x8 virtual false final false
 bool IsProbablePrime(int32_t certainty) ;

/// @brief Method IsProbablePrime addr 0x1016634 size 0x120 virtual false final false
 bool IsProbablePrime(int32_t certainty, bool randomlySelected) ;

/// @brief Method CheckProbablePrime addr 0x1014430 size 0x1e8 virtual false final false
 bool CheckProbablePrime(int32_t certainty, System::Random random, bool randomlySelected) ;

/// @brief Method RabinMillerTest addr 0x1016b70 size 0x8 virtual false final false
 bool RabinMillerTest(int32_t certainty, System::Random random) ;

/// @brief Method RabinMillerTest addr 0x1016890 size 0x2e0 virtual false final false
 bool RabinMillerTest(int32_t certainty, System::Random random, bool randomlySelected) ;

/// @brief Method get_LongValue addr 0x100d558 size 0x6c virtual false final false
 int64_t get_LongValue() ;

/// @brief Method get_LongValueExact addr 0x101745c size 0x6c virtual false final false
 int64_t get_LongValueExact() ;

/// @brief Method Max addr 0x10174c8 size 0x28 virtual false final false
 Org::BouncyCastle::Math::BigInteger Max(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method Min addr 0x10174f0 size 0x28 virtual false final false
 Org::BouncyCastle::Math::BigInteger Min(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method Mod addr 0x101631c size 0x90 virtual false final false
 Org::BouncyCastle::Math::BigInteger Mod(Org::BouncyCastle::Math::BigInteger m) ;

/// @brief Method ModInverse addr 0x1017518 size 0x160 virtual false final false
 Org::BouncyCastle::Math::BigInteger ModInverse(Org::BouncyCastle::Math::BigInteger m) ;

/// @brief Method ModInversePow2 addr 0x1017678 size 0x204 virtual false final false
 Org::BouncyCastle::Math::BigInteger ModInversePow2(Org::BouncyCastle::Math::BigInteger m) ;

/// @brief Method ModInverse32 addr 0x10179c8 size 0x30 virtual false final false
static int32_t ModInverse32(int32_t d) ;

/// @brief Method ModInverse64 addr 0x1017990 size 0x38 virtual false final false
static int64_t ModInverse64(int64_t d) ;

/// @brief Method ExtEuclid addr 0x101787c size 0x114 virtual false final false
static Org::BouncyCastle::Math::BigInteger ExtEuclid(Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, ByRef<Org::BouncyCastle::Math::BigInteger> u1Out) ;

/// @brief Method ZeroOut addr 0x10179f8 size 0x20 virtual false final false
static void ZeroOut(::ArrayW<int32_t> x) ;

/// @brief Method ModPow addr 0x1017a18 size 0x218 virtual false final false
 Org::BouncyCastle::Math::BigInteger ModPow(Org::BouncyCastle::Math::BigInteger e, Org::BouncyCastle::Math::BigInteger m) ;

/// @brief Method ModPowBarrett addr 0x1017c30 size 0x438 virtual false final false
static Org::BouncyCastle::Math::BigInteger ModPowBarrett(Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger e, Org::BouncyCastle::Math::BigInteger m) ;

/// @brief Method ReduceBarrett addr 0x1018194 size 0x114 virtual false final false
static Org::BouncyCastle::Math::BigInteger ReduceBarrett(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger m, Org::BouncyCastle::Math::BigInteger mr, Org::BouncyCastle::Math::BigInteger yu) ;

/// @brief Method ModPowMonty addr 0x1016e5c size 0x600 virtual false final false
static Org::BouncyCastle::Math::BigInteger ModPowMonty(Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger e, Org::BouncyCastle::Math::BigInteger m, bool convert) ;

/// @brief Method GetWindowList addr 0x10182a8 size 0x204 virtual false final false
static ::ArrayW<int32_t> GetWindowList(::ArrayW<int32_t> mag, int32_t extraBits) ;

/// @brief Method CreateWindowEntry addr 0x1019024 size 0x1c virtual false final false
static int32_t CreateWindowEntry(int32_t mult, int32_t zeroes) ;

/// @brief Method Square addr 0x1019040 size 0x198 virtual false final false
static ::ArrayW<int32_t> Square(::ArrayW<int32_t> w, ::ArrayW<int32_t> x) ;

/// @brief Method Multiply addr 0x10191d8 size 0xe0 virtual false final false
static ::ArrayW<int32_t> Multiply(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z) ;

/// @brief Method GetMQuote addr 0x101866c size 0xb0 virtual false final false
 int32_t GetMQuote() ;

/// @brief Method MontgomeryReduce addr 0x1018eb8 size 0x16c virtual false final false
static void MontgomeryReduce(::ArrayW<int32_t> x, ::ArrayW<int32_t> m, uint32_t mDash) ;

/// @brief Method MultiplyMonty addr 0x1018b50 size 0x368 virtual false final false
static void MultiplyMonty(::ArrayW<int32_t> a, ::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> m, uint32_t mDash, bool smallMontyModulus) ;

/// @brief Method SquareMonty addr 0x101871c size 0x434 virtual false final false
static void SquareMonty(::ArrayW<int32_t> a, ::ArrayW<int32_t> x, ::ArrayW<int32_t> m, uint32_t mDash, bool smallMontyModulus) ;

/// @brief Method MultiplyMontyNIsOne addr 0x10192b8 size 0x2c virtual false final false
static uint32_t MultiplyMontyNIsOne(uint32_t x, uint32_t y, uint32_t m, uint32_t mDash) ;

/// @brief Method Multiply addr 0x1013974 size 0x1c8 virtual false final false
 Org::BouncyCastle::Math::BigInteger Multiply(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method Square addr 0x1018068 size 0x12c virtual false final false
 Org::BouncyCastle::Math::BigInteger Square() ;

/// @brief Method Negate addr 0x1014628 size 0x74 virtual false final false
 Org::BouncyCastle::Math::BigInteger Negate() ;

/// @brief Method NextProbablePrime addr 0x10192e4 size 0x154 virtual false final false
 Org::BouncyCastle::Math::BigInteger NextProbablePrime() ;

/// @brief Method Not addr 0x1014c7c size 0x18 virtual false final false
 Org::BouncyCastle::Math::BigInteger Not() ;

/// @brief Method Pow addr 0x1012f7c size 0x1ac virtual false final false
 Org::BouncyCastle::Math::BigInteger Pow(int32_t exp) ;

/// @brief Method ProbablePrime addr 0x1019554 size 0x74 virtual false final false
static Org::BouncyCastle::Math::BigInteger ProbablePrime(int32_t bitLength, System::Random random) ;

/// @brief Method Remainder addr 0x1016824 size 0x6c virtual false final false
 int32_t Remainder(int32_t m) ;

/// @brief Method Remainder addr 0x10195c8 size 0x358 virtual false final false
static ::ArrayW<int32_t> Remainder(::ArrayW<int32_t> x, ::ArrayW<int32_t> y) ;

/// @brief Method Remainder addr 0x1016c10 size 0x24c virtual false final false
 Org::BouncyCastle::Math::BigInteger Remainder(Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method LastNBits addr 0x1016024 size 0x154 virtual false final false
 ::ArrayW<int32_t> LastNBits(int32_t n) ;

/// @brief Method DivideWords addr 0x10184ac size 0xf0 virtual false final false
 Org::BouncyCastle::Math::BigInteger DivideWords(int32_t w) ;

/// @brief Method RemainderWords addr 0x101859c size 0xd0 virtual false final false
 Org::BouncyCastle::Math::BigInteger RemainderWords(int32_t w) ;

/// @brief Method ShiftLeft addr 0x1015764 size 0x184 virtual false final false
static ::ArrayW<int32_t> ShiftLeft(::ArrayW<int32_t> mag, int32_t n) ;

/// @brief Method ShiftLeftOneInPlace addr 0x1019920 size 0x54 virtual false final false
static int32_t ShiftLeftOneInPlace(::ArrayW<int32_t> x, int32_t carry) ;

/// @brief Method ShiftLeft addr 0x101384c size 0x128 virtual false final false
 Org::BouncyCastle::Math::BigInteger ShiftLeft(int32_t n) ;

/// @brief Method ShiftRightInPlace addr 0x1015a1c size 0x110 virtual false final false
static void ShiftRightInPlace(int32_t start, ::ArrayW<int32_t> mag, int32_t n) ;

/// @brief Method ShiftRightOneInPlace addr 0x1015988 size 0x94 virtual false final false
static void ShiftRightOneInPlace(int32_t start, ::ArrayW<int32_t> mag) ;

/// @brief Method ShiftRight addr 0x100d294 size 0x1f0 virtual false final false
 Org::BouncyCastle::Math::BigInteger ShiftRight(int32_t n) ;

/// @brief Method get_SignValue addr 0x1019974 size 0x8 virtual false final false
 int32_t get_SignValue() ;

/// @brief Method Subtract addr 0x10158e8 size 0xa0 virtual false final false
static ::ArrayW<int32_t> Subtract(int32_t xStart, ::ArrayW<int32_t> x, int32_t yStart, ::ArrayW<int32_t> y) ;

/// @brief Method Subtract addr 0x1014740 size 0x15c virtual false final false
 Org::BouncyCastle::Math::BigInteger Subtract(Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method doSubBigLil addr 0x1016504 size 0xbc virtual false final false
static ::ArrayW<int32_t> doSubBigLil(::ArrayW<int32_t> bigMag, ::ArrayW<int32_t> lilMag) ;

/// @brief Method ToByteArray addr 0x101997c size 0x8 virtual false final false
 ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToByteArrayUnsigned addr 0x1019d38 size 0x8 virtual false final false
 ::ArrayW<uint8_t> ToByteArrayUnsigned() ;

/// @brief Method ToByteArray addr 0x1019984 size 0x3b4 virtual false final false
 ::ArrayW<uint8_t> ToByteArray(bool unsigned) ;

/// @brief Method ToString addr 0x1019d40 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x1019d48 size 0x808 virtual false final false
 ::StringW ToString(int32_t radix) ;

/// @brief Method ToString addr 0x101a5b4 size 0x28c virtual false final false
static void ToString(System::Text::StringBuilder sb, int32_t radix, System::Collections::IList moduli, int32_t scale, Org::BouncyCastle::Math::BigInteger pos) ;

/// @brief Method AppendZeroExtendedString addr 0x101a550 size 0x64 virtual false final false
static void AppendZeroExtendedString(System::Text::StringBuilder sb, ::StringW s, int32_t minLength) ;

/// @brief Method CreateUValueOf addr 0x1012d74 size 0x138 virtual false final false
static Org::BouncyCastle::Math::BigInteger CreateUValueOf(uint64_t value) ;

/// @brief Method CreateValueOf addr 0x101a840 size 0xa8 virtual false final false
static Org::BouncyCastle::Math::BigInteger CreateValueOf(int64_t value) ;

/// @brief Method ValueOf addr 0x1012eac size 0xd0 virtual false final false
static Org::BouncyCastle::Math::BigInteger ValueOf(int64_t value) ;

/// @brief Method GetLowestSetBit addr 0x101a8e8 size 0x18 virtual false final false
 int32_t GetLowestSetBit() ;

/// @brief Method GetLowestSetBitMaskFirst addr 0x1016b78 size 0x98 virtual false final false
 int32_t GetLowestSetBitMaskFirst(int32_t firstWordMask) ;

/// @brief Method TestBit addr 0x1016754 size 0xd0 virtual false final false
 bool TestBit(int32_t n) ;

/// @brief Method Or addr 0x101a900 size 0x25c virtual false final false
 Org::BouncyCastle::Math::BigInteger Or(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method Xor addr 0x101ab5c size 0x260 virtual false final false
 Org::BouncyCastle::Math::BigInteger Xor(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method SetBit addr 0x1019438 size 0x11c virtual false final false
 Org::BouncyCastle::Math::BigInteger SetBit(int32_t n) ;

/// @brief Method ClearBit addr 0x101aeb0 size 0x11c virtual false final false
 Org::BouncyCastle::Math::BigInteger ClearBit(int32_t n) ;

/// @brief Method FlipBit addr 0x101afcc size 0xfc virtual false final false
 Org::BouncyCastle::Math::BigInteger FlipBit(int32_t n) ;

/// @brief Method FlipExistingBit addr 0x101adbc size 0xf4 virtual false final false
 Org::BouncyCastle::Math::BigInteger FlipExistingBit(int32_t n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math
NEED_NO_BOX(Org::BouncyCastle::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::BigInteger, "Org.BouncyCastle.Math", "BigInteger");
