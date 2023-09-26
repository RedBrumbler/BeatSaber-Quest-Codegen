#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
// Type: Org.BouncyCastle.Bcpg::TrustPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(596))
// CS Name: Org.BouncyCastle.Bcpg.TrustPacket
class CORDL_TYPE TrustPacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TrustPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: " const&", def_value: None }]
constexpr TrustPacket(TrustPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: "&&", def_value: None }]
constexpr TrustPacket(TrustPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrustPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr TrustPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrustPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrustPacket& operator=(TrustPacket&& o) noexcept = default;
  constexpr TrustPacket& operator=(TrustPacket const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_levelAndTrustAmount, put=__set_levelAndTrustAmount))  levelAndTrustAmount;

constexpr void __set_levelAndTrustAmount(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_levelAndTrustAmount() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit TrustPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x115196c size 0xdc virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "trustCode", ty: "int32_t", modifiers: "", def_value: None }]
explicit TrustPacket(int32_t trustCode) ;

/// @brief Method .ctor addr 0x11579d8 size 0x80 virtual false final false
 void _ctor(int32_t trustCode) ;

/// @brief Method GetLevelAndTrustAmount addr 0x1157a58 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetLevelAndTrustAmount() ;

/// @brief Method Encode addr 0x1157ad0 size 0x28 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::TrustPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::TrustPacket, "Org.BouncyCastle.Bcpg", "TrustPacket");
