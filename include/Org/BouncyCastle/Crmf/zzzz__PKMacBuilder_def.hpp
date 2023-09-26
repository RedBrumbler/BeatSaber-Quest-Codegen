#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crmf {
class IPKMacPrimitivesProvider;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
// Type: Org.BouncyCastle.Crmf::PKMacBuilder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(711))
// CS Name: Org.BouncyCastle.Crmf.PKMacBuilder
class CORDL_TYPE PKMacBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PKMacBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacBuilder", modifiers: " const&", def_value: None }]
constexpr PKMacBuilder(PKMacBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacBuilder", modifiers: "&&", def_value: None }]
constexpr PKMacBuilder(PKMacBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKMacBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKMacBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKMacBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKMacBuilder& operator=(PKMacBuilder&& o) noexcept = default;
  constexpr PKMacBuilder& operator=(PKMacBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_owf, put=__set_owf))  owf;

constexpr void __set_owf(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_owf() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_mac() const;

 Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider __declspec(property(get=__get_provider, put=__set_provider))  provider;

constexpr void __set_provider(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider value) ;

constexpr Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider __get_provider() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 Org::BouncyCastle::Asn1::Cmp::PbmParameter __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Asn1::Cmp::PbmParameter value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PbmParameter __get_parameters() const;

 int32_t __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(int32_t value) ;

constexpr int32_t __get_iterationCount() const;

 int32_t __declspec(property(get=__get_saltLength, put=__set_saltLength))  saltLength;

constexpr void __set_saltLength(int32_t value) ;

constexpr int32_t __get_saltLength() const;

 int32_t __declspec(property(get=__get_maxIterations, put=__set_maxIterations))  maxIterations;

constexpr void __set_maxIterations(int32_t value) ;

constexpr int32_t __get_maxIterations() const;


// Methods

// Ctor Parameters []
explicit PKMacBuilder() ;

/// @brief Method .ctor addr 0x1194004 size 0x174 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "provider", ty: "Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider", modifiers: "", def_value: None }]
explicit PKMacBuilder(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider) ;

/// @brief Method .ctor addr 0x11941c4 size 0x14c virtual false final false
 void _ctor(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider) ;

// Ctor Parameters [CppParam { name: "provider", ty: "Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider", modifiers: "", def_value: None }, CppParam { name: "digestAlgorithmIdentifier", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "macAlgorithmIdentifier", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit PKMacBuilder(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgorithmIdentifier) ;

/// @brief Method .ctor addr 0x1194310 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgorithmIdentifier) ;

// Ctor Parameters [CppParam { name: "provider", ty: "Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider", modifiers: "", def_value: None }, CppParam { name: "maxIterations", ty: "int32_t", modifiers: "", def_value: None }]
explicit PKMacBuilder(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider, int32_t maxIterations) ;

/// @brief Method .ctor addr 0x119435c size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider, int32_t maxIterations) ;

// Ctor Parameters [CppParam { name: "digestAlgorithmIdentifier", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "macAlgorithmIdentifier", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider", modifiers: "", def_value: None }]
explicit PKMacBuilder(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, int32_t iterationCount, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgorithmIdentifier, Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider) ;

/// @brief Method .ctor addr 0x1194178 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, int32_t iterationCount, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgorithmIdentifier, Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider provider) ;

/// @brief Method SetSaltLength addr 0x1194394 size 0x64 virtual false final false
 Org::BouncyCastle::Crmf::PKMacBuilder SetSaltLength(int32_t saltLength) ;

/// @brief Method SetIterationCount addr 0x11943f8 size 0x7c virtual false final false
 Org::BouncyCastle::Crmf::PKMacBuilder SetIterationCount(int32_t iterationCount) ;

/// @brief Method SetParameters addr 0x119464c size 0x54 virtual false final false
 Org::BouncyCastle::Crmf::PKMacBuilder SetParameters(Org::BouncyCastle::Asn1::Cmp::PbmParameter parameters) ;

/// @brief Method SetSecureRandom addr 0x11946a0 size 0x8 virtual false final false
 Org::BouncyCastle::Crmf::PKMacBuilder SetSecureRandom(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Build addr 0x11946a8 size 0x114 virtual false final false
 Org::BouncyCastle::Crypto::IMacFactory Build(::ArrayW<char16_t> password) ;

/// @brief Method CheckIterationCountCeiling addr 0x1194474 size 0x1d8 virtual false final false
 void CheckIterationCountCeiling(int32_t iterationCount) ;

/// @brief Method GenCalculator addr 0x11947bc size 0x418 virtual false final false
 Org::BouncyCastle::Crypto::IMacFactory GenCalculator(Org::BouncyCastle::Asn1::Cmp::PbmParameter parameters, ::ArrayW<char16_t> password) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::PKMacBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::PKMacBuilder, "Org.BouncyCastle.Crmf", "PKMacBuilder");
