#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class LongArray;
}
// Type: Org.BouncyCastle.Math.EC::LongArray
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1574))
// CS Name: Org.BouncyCastle.Math.EC.LongArray
class CORDL_TYPE LongArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LongArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: " const&", def_value: None }]
constexpr LongArray(LongArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: "&&", def_value: None }]
constexpr LongArray(LongArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LongArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LongArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LongArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LongArray& operator=(LongArray&& o) noexcept = default;
  constexpr LongArray& operator=(LongArray const& o) noexcept = default;
                


// Fields

/// @brief Field ZEROES offset 0
static constexpr ::ConstString  ZEROES{u"0000000000000000000000000000000000000000000000000000000000000000"};

static ::ArrayW<uint16_t> __declspec(property(get=__get_INTERLEAVE2_TABLE, put=__set_INTERLEAVE2_TABLE))  INTERLEAVE2_TABLE;

static void __set_INTERLEAVE2_TABLE(::ArrayW<uint16_t> value) ;

static ::ArrayW<uint16_t> __get_INTERLEAVE2_TABLE() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_INTERLEAVE3_TABLE, put=__set_INTERLEAVE3_TABLE))  INTERLEAVE3_TABLE;

static void __set_INTERLEAVE3_TABLE(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_INTERLEAVE3_TABLE() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_INTERLEAVE4_TABLE, put=__set_INTERLEAVE4_TABLE))  INTERLEAVE4_TABLE;

static void __set_INTERLEAVE4_TABLE(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_INTERLEAVE4_TABLE() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_INTERLEAVE5_TABLE, put=__set_INTERLEAVE5_TABLE))  INTERLEAVE5_TABLE;

static void __set_INTERLEAVE5_TABLE(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_INTERLEAVE5_TABLE() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_INTERLEAVE7_TABLE, put=__set_INTERLEAVE7_TABLE))  INTERLEAVE7_TABLE;

static void __set_INTERLEAVE7_TABLE(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_INTERLEAVE7_TABLE() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_BitLengths, put=__set_BitLengths))  BitLengths;

static void __set_BitLengths(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_BitLengths() ;

 ::ArrayW<int64_t> __declspec(property(get=__get_m_ints, put=__set_m_ints))  m_ints;

constexpr void __set_m_ints(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_m_ints() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

// Ctor Parameters [CppParam { name: "intLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit LongArray(int32_t intLen) ;

/// @brief Method .ctor addr 0xfd97e8 size 0x68 virtual false final false
 void _ctor(int32_t intLen) ;

// Ctor Parameters [CppParam { name: "ints", ty: "::ArrayW<int64_t>", modifiers: "", def_value: None }]
explicit LongArray(::ArrayW<int64_t> ints) ;

/// @brief Method .ctor addr 0xfd0250 size 0x28 virtual false final false
 void _ctor(::ArrayW<int64_t> ints) ;

// Ctor Parameters [CppParam { name: "ints", ty: "::ArrayW<int64_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
explicit LongArray(::ArrayW<int64_t> ints, int32_t off, int32_t len) ;

/// @brief Method .ctor addr 0xfd9850 size 0xb4 virtual false final false
 void _ctor(::ArrayW<int64_t> ints, int32_t off, int32_t len) ;

// Ctor Parameters [CppParam { name: "bigInt", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit LongArray(Org::BouncyCastle::Math::BigInteger bigInt) ;

/// @brief Method .ctor addr 0xfd214c size 0x224 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger bigInt) ;

/// @brief Method CopyTo addr 0xfcfd78 size 0x2c virtual false final false
 void CopyTo(::ArrayW<int64_t> z, int32_t zOff) ;

/// @brief Method IsOne addr 0xfd2454 size 0x60 virtual false final false
 bool IsOne() ;

/// @brief Method IsZero addr 0xfd2508 size 0x4c virtual false final false
 bool IsZero() ;

/// @brief Method GetUsedLength addr 0xfd9904 size 0x1c virtual false final false
 int32_t GetUsedLength() ;

/// @brief Method GetUsedLengthFrom addr 0xfd9920 size 0xe0 virtual false final false
 int32_t GetUsedLengthFrom(int32_t from) ;

/// @brief Method Degree addr 0xfd2398 size 0xa4 virtual false final false
 int32_t Degree() ;

/// @brief Method DegreeFrom addr 0xfd9b20 size 0xac virtual false final false
 int32_t DegreeFrom(int32_t limit) ;

/// @brief Method BitLength addr 0xfd9a00 size 0x120 virtual false final false
static int32_t BitLength(int64_t w) ;

/// @brief Method ResizedInts addr 0xfd9bcc size 0xbc virtual false final false
 ::ArrayW<int64_t> ResizedInts(int32_t newLen) ;

/// @brief Method ToBigInteger addr 0xfd25dc size 0x214 virtual false final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method ShiftUp addr 0xfd9c88 size 0x80 virtual false final false
static int64_t ShiftUp(::ArrayW<int64_t> x, int32_t xOff, int32_t count, int32_t shift) ;

/// @brief Method ShiftUp addr 0xfd9d08 size 0x98 virtual false final false
static int64_t ShiftUp(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count, int32_t shift) ;

/// @brief Method AddOne addr 0xfd2c9c size 0x11c virtual false final false
 Org::BouncyCastle::Math::EC::LongArray AddOne() ;

/// @brief Method AddShiftedByBitsSafe addr 0xfd9da0 size 0x100 virtual false final false
 void AddShiftedByBitsSafe(Org::BouncyCastle::Math::EC::LongArray other, int32_t otherDegree, int32_t bits) ;

/// @brief Method AddShiftedUp addr 0xfd9f18 size 0xa4 virtual false final false
static int64_t AddShiftedUp(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t count, int32_t shift) ;

/// @brief Method AddShiftedDown addr 0xfd9fbc size 0x90 virtual false final false
static int64_t AddShiftedDown(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t count, int32_t shift) ;

/// @brief Method AddShiftedByWords addr 0xfd2b3c size 0xd4 virtual false final false
 void AddShiftedByWords(Org::BouncyCastle::Math::EC::LongArray other, int32_t words) ;

/// @brief Method Add addr 0xfd9ea0 size 0x78 virtual false final false
static void Add(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t count) ;

/// @brief Method Add addr 0xfda04c size 0x90 virtual false final false
static void Add(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method AddBoth addr 0xfda0dc size 0x98 virtual false final false
static void AddBoth(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y1, int32_t y1Off, ::ArrayW<int64_t> y2, int32_t y2Off, int32_t count) ;

/// @brief Method Distribute addr 0xfda174 size 0xa8 virtual false final false
static void Distribute(::ArrayW<int64_t> x, int32_t src, int32_t dst1, int32_t dst2, int32_t count) ;

/// @brief Method get_Length addr 0xfda21c size 0x1c virtual false final false
 int32_t get_Length() ;

/// @brief Method FlipWord addr 0xfda238 size 0x7c virtual false final false
static void FlipWord(::ArrayW<int64_t> buf, int32_t off, int32_t bit, int64_t word) ;

/// @brief Method TestBitZero addr 0xfd2590 size 0x34 virtual false final false
 bool TestBitZero() ;

/// @brief Method TestBit addr 0xfda2b4 size 0x40 virtual false final false
static bool TestBit(::ArrayW<int64_t> buf, int32_t off, int32_t n) ;

/// @brief Method FlipBit addr 0xfda2f4 size 0x44 virtual false final false
static void FlipBit(::ArrayW<int64_t> buf, int32_t off, int32_t n) ;

/// @brief Method MultiplyWord addr 0xfda338 size 0x118 virtual false final false
static void MultiplyWord(int64_t a, ::ArrayW<int64_t> b, int32_t bLen, ::ArrayW<int64_t> c, int32_t cOff) ;

/// @brief Method ModMultiplyLD addr 0xfda450 size 0x518 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModMultiplyLD(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModMultiply addr 0xfd2e98 size 0x450 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModMultiply(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModMultiplyAlt addr 0xfdaa20 size 0x4bc virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModMultiplyAlt(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModReduce addr 0xfdb054 size 0xe4 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModReduce(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Multiply addr 0xfd3490 size 0x430 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray Multiply(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Reduce addr 0xfd38c0 size 0xe0 virtual false final false
 void Reduce(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceResult addr 0xfda968 size 0xb8 virtual false final false
static Org::BouncyCastle::Math::EC::LongArray ReduceResult(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceInPlace addr 0xfdb138 size 0x248 virtual false final false
static int32_t ReduceInPlace(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceBitWise addr 0xfdb628 size 0xc4 virtual false final false
static void ReduceBitWise(::ArrayW<int64_t> buf, int32_t off, int32_t BitLength, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceBit addr 0xfdb6ec size 0x114 virtual false final false
static void ReduceBit(::ArrayW<int64_t> buf, int32_t off, int32_t bit, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceWordWise addr 0xfdb4b8 size 0x170 virtual false final false
static void ReduceWordWise(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t toBit, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceWord addr 0xfdb800 size 0x108 virtual false final false
static void ReduceWord(::ArrayW<int64_t> buf, int32_t off, int32_t bit, int64_t word, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceVectorWise addr 0xfdb380 size 0x138 virtual false final false
static void ReduceVectorWise(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t words, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method FlipVector addr 0xfdb908 size 0x100 virtual false final false
static void FlipVector(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t yLen, int32_t bits) ;

/// @brief Method ModSquare addr 0xfd3a78 size 0x190 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModSquare(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModSquareN addr 0xfd3f60 size 0x134 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModSquareN(int32_t n, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Square addr 0xfd3d6c size 0x150 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray Square(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method SquareInPlace addr 0xfdbac8 size 0xe0 virtual false final false
static void SquareInPlace(::ArrayW<int64_t> x, int32_t xLen, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Interleave addr 0xfdaedc size 0x178 virtual false final false
static void Interleave(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count, int32_t width) ;

/// @brief Method Interleave3 addr 0xfdbba8 size 0xe4 virtual false final false
static void Interleave3(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method Interleave3 addr 0xfdbf48 size 0x88 virtual false final false
static int64_t Interleave3(int64_t x) ;

/// @brief Method Interleave3_21to63 addr 0xfdbfd0 size 0xac virtual false final false
static int64_t Interleave3_21to63(int32_t x) ;

/// @brief Method Interleave5 addr 0xfdbc8c size 0xe4 virtual false final false
static void Interleave5(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method Interleave5 addr 0xfdc07c size 0xa0 virtual false final false
static int64_t Interleave5(int64_t x) ;

/// @brief Method Interleave3_13to65 addr 0xfdc11c size 0x94 virtual false final false
static int64_t Interleave3_13to65(int32_t x) ;

/// @brief Method Interleave7 addr 0xfdbd70 size 0xe4 virtual false final false
static void Interleave7(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method Interleave7 addr 0xfdc1b0 size 0x114 virtual false final false
static int64_t Interleave7(int64_t x) ;

/// @brief Method Interleave2_n addr 0xfdbe54 size 0xf4 virtual false final false
static void Interleave2_n(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count, int32_t rounds) ;

/// @brief Method Interleave2_n addr 0xfdc2c4 size 0xec virtual false final false
static int64_t Interleave2_n(int64_t x, int32_t rounds) ;

/// @brief Method Interleave4_16to64 addr 0xfdc3b0 size 0x94 virtual false final false
static int64_t Interleave4_16to64(int32_t x) ;

/// @brief Method Interleave2_32to64 addr 0xfdba08 size 0xc0 virtual false final false
static int64_t Interleave2_32to64(int32_t x) ;

/// @brief Method ModInverse addr 0xfd4128 size 0x480 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModInverse(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Equals addr 0xfdc444 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xfdc4cc size 0xb0 virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::LongArray other) ;

/// @brief Method GetHashCode addr 0xfdc57c size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0xfd2a9c size 0xa0 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray Copy() ;

/// @brief Method ToString addr 0xfdc5f8 size 0x1bc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::LongArray);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::LongArray, "Org.BouncyCastle.Math.EC", "LongArray");
