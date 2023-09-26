#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class Tables64kGcmMultiplier;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::Tables64kGcmMultiplier
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(955))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier
class CORDL_TYPE Tables64kGcmMultiplier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier
constexpr operator  Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Tables64kGcmMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tables64kGcmMultiplier", modifiers: " const&", def_value: None }]
constexpr Tables64kGcmMultiplier(Tables64kGcmMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tables64kGcmMultiplier", modifiers: "&&", def_value: None }]
constexpr Tables64kGcmMultiplier(Tables64kGcmMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tables64kGcmMultiplier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tables64kGcmMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tables64kGcmMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tables64kGcmMultiplier& operator=(Tables64kGcmMultiplier&& o) noexcept = default;
  constexpr Tables64kGcmMultiplier& operator=(Tables64kGcmMultiplier const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_H, put=__set_H))  H;

constexpr void __set_H(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_H() const;

 ::ArrayW<::ArrayW<::ArrayW<uint32_t>>> __declspec(property(get=__get_M, put=__set_M))  M;

constexpr void __set_M(::ArrayW<::ArrayW<::ArrayW<uint32_t>>> value) ;

constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t>>> __get_M() const;


// Methods

/// @brief Method Init addr 0xe957e8 size 0x614 virtual true final true
 void Init(::ArrayW<uint8_t> H) ;

/// @brief Method MultiplyH addr 0xe95dfc size 0x150 virtual true final true
 void MultiplyH(::ArrayW<uint8_t> x) ;

// Ctor Parameters []
explicit Tables64kGcmMultiplier() ;

/// @brief Method .ctor addr 0xe95f4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables64kGcmMultiplier");
