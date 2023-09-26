#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class ThreadedSeedGenerator;
}
// Type: ::SeedGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1117))
// CS Name: Org.BouncyCastle.Crypto.Prng.ThreadedSeedGenerator::SeedGenerator
class CORDL_TYPE Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator(Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator(Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator& operator=(Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator& operator=(Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(int32_t value) ;

constexpr int32_t __get_counter() const;

 bool __declspec(property(get=__get_stop, put=__set_stop))  stop;

constexpr void __set_stop(bool value) ;

constexpr bool __get_stop() const;


// Methods

/// @brief Method Run addr 0xec5a0c size 0x44 virtual false final false
 void Run(::bs_hook::Il2CppWrapperType ignored) ;

/// @brief Method GenerateSeed addr 0xec58fc size 0x108 virtual false final false
 ::ArrayW<uint8_t> GenerateSeed(int32_t numBytes, bool fast) ;

/// @brief Method DoGenerateSeed addr 0xec5a50 size 0x204 virtual false final false
 ::ArrayW<uint8_t> DoGenerateSeed(int32_t numBytes, bool fast) ;

// Ctor Parameters []
explicit Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator() ;

/// @brief Method .ctor addr 0xec58d4 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::ThreadedSeedGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1118))
// CS Name: Org.BouncyCastle.Crypto.Prng.ThreadedSeedGenerator
class CORDL_TYPE ThreadedSeedGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SeedGenerator = Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThreadedSeedGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: " const&", def_value: None }]
constexpr ThreadedSeedGenerator(ThreadedSeedGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "&&", def_value: None }]
constexpr ThreadedSeedGenerator(ThreadedSeedGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadedSeedGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadedSeedGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadedSeedGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadedSeedGenerator& operator=(ThreadedSeedGenerator&& o) noexcept = default;
  constexpr ThreadedSeedGenerator& operator=(ThreadedSeedGenerator const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateSeed addr 0xec584c size 0x88 virtual false final false
 ::ArrayW<uint8_t> GenerateSeed(int32_t numBytes, bool fast) ;

// Ctor Parameters []
explicit ThreadedSeedGenerator() ;

/// @brief Method .ctor addr 0xec5a04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__ThreadedSeedGenerator__SeedGenerator, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator/SeedGenerator");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator");
