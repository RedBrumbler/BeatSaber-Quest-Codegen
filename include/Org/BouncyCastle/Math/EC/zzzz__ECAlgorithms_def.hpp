#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECAlgorithms;
}
// Type: Org.BouncyCastle.Math.EC::ECAlgorithms
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1565))
// CS Name: Org.BouncyCastle.Math.EC.ECAlgorithms
class CORDL_TYPE ECAlgorithms : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECAlgorithms() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECAlgorithms", modifiers: " const&", def_value: None }]
constexpr ECAlgorithms(ECAlgorithms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECAlgorithms", modifiers: "&&", def_value: None }]
constexpr ECAlgorithms(ECAlgorithms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECAlgorithms(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECAlgorithms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECAlgorithms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECAlgorithms& operator=(ECAlgorithms&& o) noexcept = default;
  constexpr ECAlgorithms& operator=(ECAlgorithms const& o) noexcept = default;
                


// Methods

/// @brief Method IsF2mCurve addr 0xfcba2c size 0x24 virtual false final false
static bool IsF2mCurve(Org::BouncyCastle::Math::EC::ECCurve c) ;

/// @brief Method IsF2mField addr 0xfcba50 size 0x184 virtual false final false
static bool IsF2mField(Org::BouncyCastle::Math::Field::IFiniteField field) ;

/// @brief Method IsFpCurve addr 0xfcbbd4 size 0x24 virtual false final false
static bool IsFpCurve(Org::BouncyCastle::Math::EC::ECCurve c) ;

/// @brief Method IsFpField addr 0xfcbbf8 size 0xac virtual false final false
static bool IsFpField(Org::BouncyCastle::Math::Field::IFiniteField field) ;

/// @brief Method SumOfMultiplies addr 0xfcbca4 size 0x2a8 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint SumOfMultiplies(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks) ;

/// @brief Method SumOfTwoMultiplies addr 0xfcbf4c size 0x274 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint SumOfTwoMultiplies(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method ShamirsTrick addr 0xfccc98 size 0x5c virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ShamirsTrick(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger l) ;

/// @brief Method ImportPoint addr 0xfcc1c0 size 0xb4 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImportPoint(Org::BouncyCastle::Math::EC::ECCurve c, Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method MontgomeryTrick addr 0xfcd1b8 size 0x8 virtual false final false
static void MontgomeryTrick(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, int32_t off, int32_t len) ;

/// @brief Method MontgomeryTrick addr 0xfcd1c0 size 0x2a8 virtual false final false
static void MontgomeryTrick(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, int32_t off, int32_t len, Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ReferenceMultiply addr 0xfcd468 size 0x140 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ReferenceMultiply(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method ValidatePoint addr 0xfcd5a8 size 0x74 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ValidatePoint(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method CleanPoint addr 0xfcd61c size 0xe0 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint CleanPoint(Org::BouncyCastle::Math::EC::ECCurve c, Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method ImplCheckResult addr 0xfcc640 size 0x74 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplCheckResult(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method ImplShamirsTrickJsf addr 0xfcccf4 size 0x4c4 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplShamirsTrickJsf(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger l) ;

/// @brief Method ImplShamirsTrickWNaf addr 0xfcc938 size 0x360 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger l) ;

/// @brief Method ImplShamirsTrickWNaf addr 0xfcde48 size 0x32c virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::BigInteger l) ;

/// @brief Method ImplShamirsTrickWNaf addr 0xfcdb8c size 0x2bc virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplShamirsTrickWNaf(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompP, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompNegP, ::ArrayW<uint8_t> wnafP, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompQ, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompNegQ, ::ArrayW<uint8_t> wnafQ) ;

/// @brief Method ImplSumOfMultiplies addr 0xfcc6b4 size 0x284 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplSumOfMultiplies(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks) ;

/// @brief Method ImplSumOfMultipliesGlv addr 0xfcc274 size 0x3cc virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplSumOfMultipliesGlv(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism glvEndomorphism) ;

/// @brief Method ImplSumOfMultiplies addr 0xfce47c size 0x4d4 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplSumOfMultiplies(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks) ;

/// @brief Method ImplSumOfMultiplies addr 0xfce174 size 0x308 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplSumOfMultiplies(::ArrayW<bool> negs, ::ArrayW<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo> infos, ::ArrayW<::ArrayW<uint8_t>> wnafs) ;

/// @brief Method ImplShamirsTrickFixedPoint addr 0xfcd6fc size 0x490 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint ImplShamirsTrickFixedPoint(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Math::BigInteger l) ;

// Ctor Parameters []
explicit ECAlgorithms() ;

/// @brief Method .ctor addr 0xfce950 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECAlgorithms, "Org.BouncyCastle.Math.EC", "ECAlgorithms");
