#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignedData;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
// Type: Org.BouncyCastle.Cms::CmsSignedData
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(648))
// CS Name: Org.BouncyCastle.Cms.CmsSignedData
class CORDL_TYPE CmsSignedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CmsSignedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedData", modifiers: " const&", def_value: None }]
constexpr CmsSignedData(CmsSignedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedData", modifiers: "&&", def_value: None }]
constexpr CmsSignedData(CmsSignedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSignedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsSignedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsSignedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsSignedData& operator=(CmsSignedData&& o) noexcept = default;
  constexpr CmsSignedData& operator=(CmsSignedData const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::CmsSignedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(Org::BouncyCastle::Cms::CmsSignedHelper value) ;

static Org::BouncyCastle::Cms::CmsSignedHelper __get_Helper() ;

 Org::BouncyCastle::Cms::CmsProcessable __declspec(property(get=__get_signedContent, put=__set_signedContent))  signedContent;

constexpr void __set_signedContent(Org::BouncyCastle::Cms::CmsProcessable value) ;

constexpr Org::BouncyCastle::Cms::CmsProcessable __get_signedContent() const;

 Org::BouncyCastle::Asn1::Cms::SignedData __declspec(property(get=__get_signedData, put=__set_signedData))  signedData;

constexpr void __set_signedData(Org::BouncyCastle::Asn1::Cms::SignedData value) ;

constexpr Org::BouncyCastle::Asn1::Cms::SignedData __get_signedData() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_contentInfo() const;

 Org::BouncyCastle::Cms::SignerInformationStore __declspec(property(get=__get_signerInfoStore, put=__set_signerInfoStore))  signerInfoStore;

constexpr void __set_signerInfoStore(Org::BouncyCastle::Cms::SignerInformationStore value) ;

constexpr Org::BouncyCastle::Cms::SignerInformationStore __get_signerInfoStore() const;

 Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get_attrCertStore, put=__set_attrCertStore))  attrCertStore;

constexpr void __set_attrCertStore(Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr Org::BouncyCastle::X509::Store::IX509Store __get_attrCertStore() const;

 Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get_certificateStore, put=__set_certificateStore))  certificateStore;

constexpr void __set_certificateStore(Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr Org::BouncyCastle::X509::Store::IX509Store __get_certificateStore() const;

 Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get_crlStore, put=__set_crlStore))  crlStore;

constexpr void __set_crlStore(Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr Org::BouncyCastle::X509::Store::IX509Store __get_crlStore() const;

 System::Collections::IDictionary __declspec(property(get=__get_hashes, put=__set_hashes))  hashes;

constexpr void __set_hashes(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_hashes() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 ::StringW __declspec(property(get=get_SignedContentTypeOid))  SignedContentTypeOid;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_SignedContentType))  SignedContentType;

 Org::BouncyCastle::Cms::CmsProcessable __declspec(property(get=get_SignedContent))  SignedContent;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_ContentInfo))  ContentInfo;


// Methods

// Ctor Parameters [CppParam { name: "c", ty: "Org::BouncyCastle::Cms::CmsSignedData", modifiers: "", def_value: None }]
explicit CmsSignedData(Org::BouncyCastle::Cms::CmsSignedData c) ;

/// @brief Method .ctor addr 0x11670d0 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Cms::CmsSignedData c) ;

// Ctor Parameters [CppParam { name: "sigBlock", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsSignedData(::ArrayW<uint8_t> sigBlock) ;

/// @brief Method .ctor addr 0x1167114 size 0x80 virtual false final false
 void _ctor(::ArrayW<uint8_t> sigBlock) ;

// Ctor Parameters [CppParam { name: "signedContent", ty: "Org::BouncyCastle::Cms::CmsProcessable", modifiers: "", def_value: None }, CppParam { name: "sigBlock", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsSignedData(Org::BouncyCastle::Cms::CmsProcessable signedContent, ::ArrayW<uint8_t> sigBlock) ;

/// @brief Method .ctor addr 0x1167314 size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::Cms::CmsProcessable signedContent, ::ArrayW<uint8_t> sigBlock) ;

// Ctor Parameters [CppParam { name: "hashes", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "sigBlock", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsSignedData(System::Collections::IDictionary hashes, ::ArrayW<uint8_t> sigBlock) ;

/// @brief Method .ctor addr 0x116742c size 0x30 virtual false final false
 void _ctor(System::Collections::IDictionary hashes, ::ArrayW<uint8_t> sigBlock) ;

// Ctor Parameters [CppParam { name: "signedContent", ty: "Org::BouncyCastle::Cms::CmsProcessable", modifiers: "", def_value: None }, CppParam { name: "sigData", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsSignedData(Org::BouncyCastle::Cms::CmsProcessable signedContent, System::IO::Stream sigData) ;

/// @brief Method .ctor addr 0x1167550 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Cms::CmsProcessable signedContent, System::IO::Stream sigData) ;

// Ctor Parameters [CppParam { name: "sigData", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsSignedData(System::IO::Stream sigData) ;

/// @brief Method .ctor addr 0x1167580 size 0x20 virtual false final false
 void _ctor(System::IO::Stream sigData) ;

// Ctor Parameters [CppParam { name: "signedContent", ty: "Org::BouncyCastle::Cms::CmsProcessable", modifiers: "", def_value: None }, CppParam { name: "sigData", ty: "Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsSignedData(Org::BouncyCastle::Cms::CmsProcessable signedContent, Org::BouncyCastle::Asn1::Cms::ContentInfo sigData) ;

/// @brief Method .ctor addr 0x116739c size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Cms::CmsProcessable signedContent, Org::BouncyCastle::Asn1::Cms::ContentInfo sigData) ;

// Ctor Parameters [CppParam { name: "hashes", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "sigData", ty: "Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsSignedData(System::Collections::IDictionary hashes, Org::BouncyCastle::Asn1::Cms::ContentInfo sigData) ;

/// @brief Method .ctor addr 0x11674c0 size 0x90 virtual false final false
 void _ctor(System::Collections::IDictionary hashes, Org::BouncyCastle::Asn1::Cms::ContentInfo sigData) ;

// Ctor Parameters [CppParam { name: "sigData", ty: "Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsSignedData(Org::BouncyCastle::Asn1::Cms::ContentInfo sigData) ;

/// @brief Method .ctor addr 0x11671fc size 0x118 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo sigData) ;

/// @brief Method get_Version addr 0x11675a0 size 0x24 virtual false final false
 int32_t get_Version() ;

/// @brief Method GetSignerInfos addr 0x11675c4 size 0x600 virtual false final false
 Org::BouncyCastle::Cms::SignerInformationStore GetSignerInfos() ;

/// @brief Method GetAttributeCertificates addr 0x1167e38 size 0x88 virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store GetAttributeCertificates(::StringW type) ;

/// @brief Method GetCertificates addr 0x1168514 size 0x88 virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store GetCertificates(::StringW type) ;

/// @brief Method GetCrls addr 0x116874c size 0x88 virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store GetCrls(::StringW type) ;

/// @brief Method get_SignedContentTypeOid addr 0x1168984 size 0x2c virtual false final false
 ::StringW get_SignedContentTypeOid() ;

/// @brief Method get_SignedContentType addr 0x11689b0 size 0x24 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_SignedContentType() ;

/// @brief Method get_SignedContent addr 0x11689d4 size 0x8 virtual false final false
 Org::BouncyCastle::Cms::CmsProcessable get_SignedContent() ;

/// @brief Method get_ContentInfo addr 0x11689dc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_ContentInfo() ;

/// @brief Method GetEncoded addr 0x11689e4 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetEncoded addr 0x1168a00 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded(::StringW encoding) ;

/// @brief Method ReplaceSigners addr 0x1168a1c size 0x6c8 virtual false final false
static Org::BouncyCastle::Cms::CmsSignedData ReplaceSigners(Org::BouncyCastle::Cms::CmsSignedData signedData, Org::BouncyCastle::Cms::SignerInformationStore signerInformationStore) ;

/// @brief Method ReplaceCertificatesAndCrls addr 0x11691b4 size 0x324 virtual false final false
static Org::BouncyCastle::Cms::CmsSignedData ReplaceCertificatesAndCrls(Org::BouncyCastle::Cms::CmsSignedData signedData, Org::BouncyCastle::X509::Store::IX509Store x509Certs, Org::BouncyCastle::X509::Store::IX509Store x509Crls, Org::BouncyCastle::X509::Store::IX509Store x509AttrCerts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsSignedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsSignedData, "Org.BouncyCastle.Cms", "CmsSignedData");
