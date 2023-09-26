#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mPoint;
}
// Type: Org.BouncyCastle.Math.EC::F2mPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1572))
// CS Name: Org.BouncyCastle.Math.EC.F2mPoint
class CORDL_TYPE F2mPoint : public Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~F2mPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mPoint", modifiers: " const&", def_value: None }]
constexpr F2mPoint(F2mPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mPoint", modifiers: "&&", def_value: None }]
constexpr F2mPoint(F2mPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit F2mPoint(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractF2mPoint(ptr) {
}


  constexpr F2mPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr F2mPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr F2mPoint& operator=(F2mPoint&& o) noexcept = default;
  constexpr F2mPoint& operator=(F2mPoint const& o) noexcept = default;
                


// Properties

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_YCoord))  YCoord;

 bool __declspec(property(get=get_CompressionYTilde))  CompressionYTilde;


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit F2mPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xfd7870 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit F2mPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xfcf4a0 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit F2mPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xfcfb64 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xfd7878 size 0x98 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method get_YCoord addr 0xfd7910 size 0x108 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_YCoord() ;

/// @brief Method get_CompressionYTilde addr 0xfd7a18 size 0xc8 virtual true final false
 bool get_CompressionYTilde() ;

/// @brief Method Add addr 0xfd7ae0 size 0xc40 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Add(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xfd8720 size 0x908 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xfd9028 size 0x548 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Negate addr 0xfd9570 size 0x278 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Negate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::F2mPoint);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::F2mPoint, "Org.BouncyCastle.Math.EC", "F2mPoint");
