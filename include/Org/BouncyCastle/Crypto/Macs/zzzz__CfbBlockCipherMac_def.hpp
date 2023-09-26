#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Macs {
class MacCFBBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class CfbBlockCipherMac;
}
// Type: Org.BouncyCastle.Crypto.Macs::CfbBlockCipherMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(937))
// CS Name: Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac
class CORDL_TYPE CfbBlockCipherMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CfbBlockCipherMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipherMac", modifiers: " const&", def_value: None }]
constexpr CfbBlockCipherMac(CfbBlockCipherMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipherMac", modifiers: "&&", def_value: None }]
constexpr CfbBlockCipherMac(CfbBlockCipherMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CfbBlockCipherMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CfbBlockCipherMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CfbBlockCipherMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CfbBlockCipherMac& operator=(CfbBlockCipherMac&& o) noexcept = default;
  constexpr CfbBlockCipherMac& operator=(CfbBlockCipherMac const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher __get_cipher() const;

 Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding value) ;

constexpr Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding __get_padding() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit CfbBlockCipherMac(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe8c274 size 0xd0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding", modifiers: "", def_value: None }]
explicit CfbBlockCipherMac(Org::BouncyCastle::Crypto::IBlockCipher cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method .ctor addr 0xe8c4ec size 0xdc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "cfbBitSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "macSizeInBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit CfbBlockCipherMac(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t cfbBitSize, int32_t macSizeInBits) ;

/// @brief Method .ctor addr 0xe8c5c8 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t cfbBitSize, int32_t macSizeInBits) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "cfbBitSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "macSizeInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding", modifiers: "", def_value: None }]
explicit CfbBlockCipherMac(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t cfbBitSize, int32_t macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method .ctor addr 0xe8c344 size 0x1a8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t cfbBitSize, int32_t macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method get_AlgorithmName addr 0xe8c5d0 size 0x18 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe8c5e8 size 0x34 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xe8c654 size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe8c65c size 0x8c virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe8c6e8 size 0x144 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe8c82c size 0x164 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe8c61c size 0x38 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, "Org.BouncyCastle.Crypto.Macs", "CfbBlockCipherMac");
