#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224K1Point;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224K1Curve;
}
// Type: ::SecP224K1LookupTable
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1410))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve::SecP224K1LookupTable
class CORDL_TYPE Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable(Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable(Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractECLookupTable(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable& operator=(Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable& operator=(Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve value) ;

constexpr Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve __get_m_outer() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_table, put=__set_m_table))  m_table;

constexpr void __set_m_table(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_table() const;

 int32_t __declspec(property(get=__get_m_size, put=__set_m_size))  m_size;

constexpr void __set_m_size(int32_t value) ;

constexpr int32_t __get_m_size() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve", modifiers: "", def_value: None }, CppParam { name: "table", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve outer, ::ArrayW<uint32_t> table, int32_t size) ;

/// @brief Method .ctor addr 0xf6bf48 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve outer, ::ArrayW<uint32_t> table, int32_t size) ;

/// @brief Method get_Size addr 0xf6c36c size 0x8 virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0xf6c374 size 0x108 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0xf6c55c size 0xc8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

/// @brief Method CreatePoint addr 0xf6c47c size 0xe0 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP224K1Curve
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1411))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Curve
class CORDL_TYPE SecP224K1Curve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
// Declarations
using SecP224K1LookupTable = Org::BouncyCastle::Math::EC::Custom::Sec::Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SecP224K1Curve() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP224K1Curve", modifiers: " const&", def_value: None }]
constexpr SecP224K1Curve(SecP224K1Curve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP224K1Curve", modifiers: "&&", def_value: None }]
constexpr SecP224K1Curve(SecP224K1Curve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP224K1Curve(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpCurve(ptr) {
}


  constexpr SecP224K1Curve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP224K1Curve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP224K1Curve& operator=(SecP224K1Curve&& o) noexcept = default;
  constexpr SecP224K1Curve& operator=(SecP224K1Curve const& o) noexcept = default;
                


// Fields

/// @brief Field SECP224K1_DEFAULT_COORDS offset 0
static constexpr int32_t  SECP224K1_DEFAULT_COORDS{2};

/// @brief Field SECP224K1_FE_INTS offset 0
static constexpr int32_t  SECP224K1_FE_INTS{7};

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

static void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_q() ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __declspec(property(get=__get_SECP224K1_AFFINE_ZS, put=__set_SECP224K1_AFFINE_ZS))  SECP224K1_AFFINE_ZS;

static void __set_SECP224K1_AFFINE_ZS(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> value) ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __get_SECP224K1_AFFINE_ZS() ;

 Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Point __declspec(property(get=__get_m_infinity, put=__set_m_infinity))  m_infinity;

constexpr void __set_m_infinity(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Point value) ;

constexpr Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Point __get_m_infinity() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Infinity))  Infinity;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;


// Methods

// Ctor Parameters []
explicit SecP224K1Curve() ;

/// @brief Method .ctor addr 0xf6b7a0 size 0x1a4 virtual false final false
 void _ctor() ;

/// @brief Method CloneCurve addr 0xf6b94c size 0x58 virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0xf6b9a4 size 0xc virtual true final false
 bool SupportsCoordinateSystem(int32_t coord) ;

/// @brief Method get_Q addr 0xf6b9b0 size 0x58 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_Infinity addr 0xf6ba08 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Infinity() ;

/// @brief Method get_FieldSize addr 0xf6ba10 size 0x64 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0xf6ba74 size 0x60 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method CreateRawPoint addr 0xf6bbec size 0x88 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method CreateRawPoint addr 0xf6bd00 size 0x94 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method CreateCacheSafeLookupTable addr 0xf6bda0 size 0x1a8 virtual true final false
 Org::BouncyCastle::Math::EC::ECLookupTable CreateCacheSafeLookupTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

/// @brief Method RandomFieldElement addr 0xf6bf84 size 0xa4 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method RandomFieldElementMult addr 0xf6c128 size 0xa4 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::Org__BouncyCastle__Math__EC__Custom__Sec__SecP224K1Curve__SecP224K1LookupTable, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224K1Curve/SecP224K1LookupTable");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Curve, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224K1Curve");
