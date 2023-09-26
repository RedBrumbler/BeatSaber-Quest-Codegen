#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519FieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519Point;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519Point
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1376))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point
class CORDL_TYPE Curve25519Point : public Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Curve25519Point() = default;

// Ctor Parameters [CppParam { name: "", ty: "Curve25519Point", modifiers: " const&", def_value: None }]
constexpr Curve25519Point(Curve25519Point const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Curve25519Point", modifiers: "&&", def_value: None }]
constexpr Curve25519Point(Curve25519Point&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Curve25519Point(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpPoint(ptr) {
}


  constexpr Curve25519Point& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Curve25519Point& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Curve25519Point& operator=(Curve25519Point&& o) noexcept = default;
  constexpr Curve25519Point& operator=(Curve25519Point const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit Curve25519Point(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xf4e06c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit Curve25519Point(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf4e39c size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit Curve25519Point(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf4e4b4 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xf52e08 size 0x98 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method GetZCoord addr 0xf52ea0 size 0x1c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement GetZCoord(int32_t index) ;

/// @brief Method Add addr 0xf52ebc size 0x6f8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Add(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xf535b4 size 0xa4 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xf53658 size 0xd0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method ThreeTimes addr 0xf53728 size 0x80 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ThreeTimes() ;

/// @brief Method Negate addr 0xf537a8 size 0xd4 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Negate() ;

/// @brief Method CalculateJacobianModifiedW addr 0xf5387c size 0x180 virtual true final false
 Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement CalculateJacobianModifiedW(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement Z, ::ArrayW<uint32_t> ZSquared) ;

/// @brief Method GetJacobianModifiedW addr 0xf539fc size 0x128 virtual true final false
 Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement GetJacobianModifiedW() ;

/// @brief Method TwiceJacobianModified addr 0xf53b24 size 0x470 virtual true final false
 Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point TwiceJacobianModified(bool calculateW) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Djb
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Point");
