#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class ZeroBytePadding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::ZeroBytePadding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1012))
// CS Name: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding
class CORDL_TYPE ZeroBytePadding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr operator  Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZeroBytePadding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZeroBytePadding", modifiers: " const&", def_value: None }]
constexpr ZeroBytePadding(ZeroBytePadding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZeroBytePadding", modifiers: "&&", def_value: None }]
constexpr ZeroBytePadding(ZeroBytePadding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZeroBytePadding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZeroBytePadding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZeroBytePadding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZeroBytePadding& operator=(ZeroBytePadding&& o) noexcept = default;
  constexpr ZeroBytePadding& operator=(ZeroBytePadding const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method get_PaddingName addr 0xeb1158 size 0x40 virtual true final true
 ::StringW get_PaddingName() ;

/// @brief Method Init addr 0xeb1198 size 0x4 virtual true final true
 void Init(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method AddPadding addr 0xeb119c size 0x48 virtual true final true
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0xeb11e4 size 0x54 virtual true final true
 int32_t PadCount(::ArrayW<uint8_t> input) ;

// Ctor Parameters []
explicit ZeroBytePadding() ;

/// @brief Method .ctor addr 0xeb1238 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding, "Org.BouncyCastle.Crypto.Paddings", "ZeroBytePadding");
