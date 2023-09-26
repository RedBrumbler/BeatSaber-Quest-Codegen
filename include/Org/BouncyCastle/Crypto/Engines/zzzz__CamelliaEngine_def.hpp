#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class CamelliaEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(830))
// CS Name: Org.BouncyCastle.Crypto.Engines.CamelliaEngine
class CORDL_TYPE CamelliaEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CamelliaEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaEngine", modifiers: " const&", def_value: None }]
constexpr CamelliaEngine(CamelliaEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaEngine", modifiers: "&&", def_value: None }]
constexpr CamelliaEngine(CamelliaEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CamelliaEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CamelliaEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CamelliaEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CamelliaEngine& operator=(CamelliaEngine&& o) noexcept = default;
  constexpr CamelliaEngine& operator=(CamelliaEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;

 bool __declspec(property(get=__get__keyIs128, put=__set__keyIs128))  _keyIs128;

constexpr void __set__keyIs128(bool value) ;

constexpr bool __get__keyIs128() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_subkey, put=__set_subkey))  subkey;

constexpr void __set_subkey(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_subkey() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_kw, put=__set_kw))  kw;

constexpr void __set_kw(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_kw() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_ke, put=__set_ke))  ke;

constexpr void __set_ke(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_ke() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_state() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SIGMA, put=__set_SIGMA))  SIGMA;

static void __set_SIGMA(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SIGMA() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SBOX1_1110, put=__set_SBOX1_1110))  SBOX1_1110;

static void __set_SBOX1_1110(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SBOX1_1110() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SBOX4_4404, put=__set_SBOX4_4404))  SBOX4_4404;

static void __set_SBOX4_4404(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SBOX4_4404() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SBOX2_0222, put=__set_SBOX2_0222))  SBOX2_0222;

static void __set_SBOX2_0222(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SBOX2_0222() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SBOX3_3033, put=__set_SBOX3_3033))  SBOX3_3033;

static void __set_SBOX3_3033(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SBOX3_3033() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method rightRotate addr 0xe41278 size 0x14 virtual false final false
static uint32_t rightRotate(uint32_t x, int32_t s) ;

/// @brief Method leftRotate addr 0xe4128c size 0x14 virtual false final false
static uint32_t leftRotate(uint32_t x, int32_t s) ;

/// @brief Method roldq addr 0xe412a0 size 0x128 virtual false final false
static void roldq(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method decroldq addr 0xe413c8 size 0x128 virtual false final false
static void decroldq(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method roldqo32 addr 0xe414f0 size 0x128 virtual false final false
static void roldqo32(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method decroldqo32 addr 0xe41618 size 0x128 virtual false final false
static void decroldqo32(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method bytes2uint addr 0xe41740 size 0x60 virtual false final false
static uint32_t bytes2uint(::ArrayW<uint8_t> src, int32_t offset) ;

/// @brief Method uint2bytes addr 0xe417a0 size 0x48 virtual false final false
static void uint2bytes(uint32_t word, ::ArrayW<uint8_t> dst, int32_t offset) ;

/// @brief Method camelliaF2 addr 0xe417e8 size 0x2e8 virtual false final false
static void camelliaF2(::ArrayW<uint32_t> s, ::ArrayW<uint32_t> skey, int32_t keyoff) ;

/// @brief Method camelliaFLs addr 0xe41ad0 size 0x134 virtual false final false
static void camelliaFLs(::ArrayW<uint32_t> s, ::ArrayW<uint32_t> fkey, int32_t keyoff) ;

/// @brief Method setKey addr 0xe41c04 size 0xf0c virtual false final false
 void setKey(bool forEncryption, ::ArrayW<uint8_t> key) ;

/// @brief Method processBlock128 addr 0xe42b10 size 0x2b0 virtual false final false
 int32_t processBlock128(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method processBlock192or256 addr 0xe42dc0 size 0x2ec virtual false final false
 int32_t processBlock192or256(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

// Ctor Parameters []
explicit CamelliaEngine() ;

/// @brief Method .ctor addr 0xe430ac size 0x8c virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe43138 size 0xf0 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe43228 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe43268 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe43270 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe43278 size 0x138 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe433b0 size 0x4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::CamelliaEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::CamelliaEngine, "Org.BouncyCastle.Crypto.Engines", "CamelliaEngine");
