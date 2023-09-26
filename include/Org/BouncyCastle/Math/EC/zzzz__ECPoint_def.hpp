#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback;
}
// Type: ::ValidityCallback
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1371))
// CS Name: Org.BouncyCastle.Math.EC.ECPoint::ValidityCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback(Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback(Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback& operator=(Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback& operator=(Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_outer() const;

 bool __declspec(property(get=__get_m_decompressed, put=__set_m_decompressed))  m_decompressed;

constexpr void __set_m_decompressed(bool value) ;

constexpr bool __get_m_decompressed() const;

 bool __declspec(property(get=__get_m_checkOrder, put=__set_m_checkOrder))  m_checkOrder;

constexpr void __set_m_checkOrder(bool value) ;

constexpr bool __get_m_checkOrder() const;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "decompressed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "checkOrder", ty: "bool", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback(Org::BouncyCastle::Math::EC::ECPoint outer, bool decompressed, bool checkOrder) ;

/// @brief Method .ctor addr 0xf51bfc size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECPoint outer, bool decompressed, bool checkOrder) ;

/// @brief Method Precompute addr 0xf525cc size 0x120 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::ECPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1372))
// CS Name: Org.BouncyCastle.Math.EC.ECPoint
class CORDL_TYPE ECPoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ValidityCallback = Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ECPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPoint", modifiers: " const&", def_value: None }]
constexpr ECPoint(ECPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPoint", modifiers: "&&", def_value: None }]
constexpr ECPoint(ECPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPoint& operator=(ECPoint&& o) noexcept = default;
  constexpr ECPoint& operator=(ECPoint const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_Random, put=__set_Random))  Random;

static void __set_Random(Org::BouncyCastle::Security::SecureRandom value) ;

static Org::BouncyCastle::Security::SecureRandom __get_Random() ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __declspec(property(get=__get_EMPTY_ZS, put=__set_EMPTY_ZS))  EMPTY_ZS;

static void __set_EMPTY_ZS(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> value) ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __get_EMPTY_ZS() ;

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_m_curve, put=__set_m_curve))  m_curve;

constexpr void __set_m_curve(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_m_curve() const;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=__get_m_x, put=__set_m_x))  m_x;

constexpr void __set_m_x(Org::BouncyCastle::Math::EC::ECFieldElement value) ;

constexpr Org::BouncyCastle::Math::EC::ECFieldElement __get_m_x() const;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=__get_m_y, put=__set_m_y))  m_y;

constexpr void __set_m_y(Org::BouncyCastle::Math::EC::ECFieldElement value) ;

constexpr Org::BouncyCastle::Math::EC::ECFieldElement __get_m_y() const;

 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __declspec(property(get=__get_m_zs, put=__set_m_zs))  m_zs;

constexpr void __set_m_zs(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __get_m_zs() const;

 bool __declspec(property(get=__get_m_withCompression, put=__set_m_withCompression))  m_withCompression;

constexpr void __set_m_withCompression(bool value) ;

constexpr bool __get_m_withCompression() const;

 System::Collections::IDictionary __declspec(property(get=__get_m_preCompTable, put=__set_m_preCompTable))  m_preCompTable;

constexpr void __set_m_preCompTable(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_m_preCompTable() const;


// Properties

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=get_Curve))  Curve;

 int32_t __declspec(property(get=get_CurveCoordinateSystem))  CurveCoordinateSystem;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_AffineXCoord))  AffineXCoord;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_AffineYCoord))  AffineYCoord;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_XCoord))  XCoord;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_YCoord))  YCoord;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_RawXCoord))  RawXCoord;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_RawYCoord))  RawYCoord;

 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __declspec(property(get=get_RawZCoords))  RawZCoords;

 bool __declspec(property(get=get_IsInfinity))  IsInfinity;

 bool __declspec(property(get=get_IsCompressed))  IsCompressed;

 bool __declspec(property(get=get_CompressionYTilde))  CompressionYTilde;


// Methods

/// @brief Method GetInitialZCoords addr 0xf511bc size 0x2a8 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> GetInitialZCoords(Org::BouncyCastle::Math::EC::ECCurve curve) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit ECPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf51464 size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit ECPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf51500 size 0x54 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method SatisfiesCurveEquation addr 0x0 size 0xffffffffffffffff virtual true final false
 bool SatisfiesCurveEquation() ;

/// @brief Method SatisfiesOrder addr 0xf51554 size 0x100 virtual true final false
 bool SatisfiesOrder() ;

/// @brief Method GetDetachedPoint addr 0xf51654 size 0x2c virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint GetDetachedPoint() ;

/// @brief Method get_Curve addr 0xf51680 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve get_Curve() ;

/// @brief Method Detach addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method get_CurveCoordinateSystem addr 0xf51688 size 0x1c virtual true final false
 int32_t get_CurveCoordinateSystem() ;

/// @brief Method get_AffineXCoord addr 0xf516a4 size 0x2c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_AffineXCoord() ;

/// @brief Method get_AffineYCoord addr 0xf516d0 size 0x2c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_AffineYCoord() ;

/// @brief Method get_XCoord addr 0xf516fc size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_XCoord() ;

/// @brief Method get_YCoord addr 0xf51704 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_YCoord() ;

/// @brief Method GetZCoord addr 0xf5170c size 0x40 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement GetZCoord(int32_t index) ;

/// @brief Method GetZCoords addr 0xf5174c size 0x88 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> GetZCoords() ;

/// @brief Method get_RawXCoord addr 0xf517d4 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_RawXCoord() ;

/// @brief Method get_RawYCoord addr 0xf517dc size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_RawYCoord() ;

/// @brief Method get_RawZCoords addr 0xf517e4 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> get_RawZCoords() ;

/// @brief Method CheckNormalized addr 0xf517ec size 0x6c virtual true final false
 void CheckNormalized() ;

/// @brief Method IsNormalized addr 0xf51858 size 0x70 virtual true final false
 bool IsNormalized() ;

/// @brief Method Normalize addr 0xf518c8 size 0x190 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Normalize() ;

/// @brief Method Normalize addr 0xf51a58 size 0xf4 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Normalize(Org::BouncyCastle::Math::EC::ECFieldElement zInv) ;

/// @brief Method CreateScaledPoint addr 0xf51b4c size 0x9c virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateScaledPoint(Org::BouncyCastle::Math::EC::ECFieldElement sx, Org::BouncyCastle::Math::EC::ECFieldElement sy) ;

/// @brief Method get_IsInfinity addr 0xf4c33c size 0x20 virtual false final false
 bool get_IsInfinity() ;

/// @brief Method get_IsCompressed addr 0xf51be8 size 0x8 virtual false final false
 bool get_IsCompressed() ;

/// @brief Method IsValid addr 0xf4bae4 size 0xc virtual false final false
 bool IsValid() ;

/// @brief Method IsValidPartial addr 0xf51bf0 size 0xc virtual false final false
 bool IsValidPartial() ;

/// @brief Method ImplIsValid addr 0xf4d2b0 size 0x140 virtual false final false
 bool ImplIsValid(bool decompressed, bool checkOrder) ;

/// @brief Method ScaleX addr 0xf51c3c size 0x90 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ScaleX(Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ScaleXNegateY addr 0xf51ccc size 0xb0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ScaleXNegateY(Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ScaleY addr 0xf51d7c size 0xa4 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ScaleY(Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ScaleYNegateX addr 0xf51e20 size 0xbc virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ScaleYNegateX(Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method Equals addr 0xf51edc size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf51f68 size 0x2b0 virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::ECPoint other) ;

/// @brief Method GetHashCode addr 0xf52218 size 0xc4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0xf522dc size 0x148 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetEncoded addr 0xf52424 size 0x14 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetEncoded addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetEncoded(bool compressed) ;

/// @brief Method get_CompressionYTilde addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CompressionYTilde() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Add(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Subtract(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Negate addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Negate() ;

/// @brief Method TimesPow2 addr 0xf52438 size 0xa0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TimesPow2(int32_t e) ;

/// @brief Method Twice addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Multiply(Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method TwicePlus addr 0xf524d8 size 0x3c virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method ThreeTimes addr 0xf52514 size 0x14 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ThreeTimes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECPoint);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECPoint, "Org.BouncyCastle.Math.EC", "ECPoint");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback, "Org.BouncyCastle.Math.EC", "ECPoint/ValidityCallback");
