#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessableByteArray;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControl;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControlBuilder;
}
// Type: Org.BouncyCastle.Crmf::PkiArchiveControlBuilder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(704))
// CS Name: Org.BouncyCastle.Crmf.PkiArchiveControlBuilder
class CORDL_TYPE PkiArchiveControlBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PkiArchiveControlBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControlBuilder", modifiers: " const&", def_value: None }]
constexpr PkiArchiveControlBuilder(PkiArchiveControlBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControlBuilder", modifiers: "&&", def_value: None }]
constexpr PkiArchiveControlBuilder(PkiArchiveControlBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiArchiveControlBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkiArchiveControlBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiArchiveControlBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiArchiveControlBuilder& operator=(PkiArchiveControlBuilder&& o) noexcept = default;
  constexpr PkiArchiveControlBuilder& operator=(PkiArchiveControlBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator __declspec(property(get=__get_envGen, put=__set_envGen))  envGen;

constexpr void __set_envGen(Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator __get_envGen() const;

 Org::BouncyCastle::Cms::CmsProcessableByteArray __declspec(property(get=__get_keyContent, put=__set_keyContent))  keyContent;

constexpr void __set_keyContent(Org::BouncyCastle::Cms::CmsProcessableByteArray value) ;

constexpr Org::BouncyCastle::Cms::CmsProcessableByteArray __get_keyContent() const;


// Methods

// Ctor Parameters [CppParam { name: "privateKeyInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }, CppParam { name: "generalName", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit PkiArchiveControlBuilder(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName generalName) ;

/// @brief Method .ctor addr 0x11937a0 size 0x1f8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName generalName) ;

/// @brief Method AddRecipientGenerator addr 0x1193998 size 0x28 virtual false final false
 Org::BouncyCastle::Crmf::PkiArchiveControlBuilder AddRecipientGenerator(Org::BouncyCastle::Cms::RecipientInfoGenerator recipientGen) ;

/// @brief Method Build addr 0x11939c0 size 0x100 virtual false final false
 Org::BouncyCastle::Crmf::PkiArchiveControl Build(Org::BouncyCastle::Crypto::ICipherBuilderWithKey contentEncryptor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::PkiArchiveControlBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::PkiArchiveControlBuilder, "Org.BouncyCastle.Crmf", "PkiArchiveControlBuilder");
