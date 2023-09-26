#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace System::IO {
class TextReader;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequest;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemReader;
}
// Type: Org.BouncyCastle.OpenSsl::PemReader
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1685))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1686))
// CS Name: Org.BouncyCastle.OpenSsl.PemReader
class CORDL_TYPE PemReader : public Org::BouncyCastle::Utilities::IO::Pem::PemReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PemReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: " const&", def_value: None }]
constexpr PemReader(PemReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
constexpr PemReader(PemReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemReader(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::Pem::PemReader(ptr) {
}


  constexpr PemReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemReader& operator=(PemReader&& o) noexcept = default;
  constexpr PemReader& operator=(PemReader const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::OpenSsl::IPasswordFinder __declspec(property(get=__get_pFinder, put=__set_pFinder))  pFinder;

constexpr void __set_pFinder(Org::BouncyCastle::OpenSsl::IPasswordFinder value) ;

constexpr Org::BouncyCastle::OpenSsl::IPasswordFinder __get_pFinder() const;


// Methods

// Ctor Parameters [CppParam { name: "reader", ty: "System::IO::TextReader", modifiers: "", def_value: None }]
explicit PemReader(System::IO::TextReader reader) ;

/// @brief Method .ctor addr 0x1054770 size 0x18 virtual false final false
 void _ctor(System::IO::TextReader reader) ;

// Ctor Parameters [CppParam { name: "reader", ty: "System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "pFinder", ty: "Org::BouncyCastle::OpenSsl::IPasswordFinder", modifiers: "", def_value: None }]
explicit PemReader(System::IO::TextReader reader, Org::BouncyCastle::OpenSsl::IPasswordFinder pFinder) ;

/// @brief Method .ctor addr 0x1054788 size 0x24 virtual false final false
 void _ctor(System::IO::TextReader reader, Org::BouncyCastle::OpenSsl::IPasswordFinder pFinder) ;

/// @brief Method ReadObject addr 0x10547ac size 0x4e4 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadObject() ;

/// @brief Method ReadRsaPublicKey addr 0x1055f1c size 0x8c virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter ReadRsaPublicKey(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadPublicKey addr 0x1055f00 size 0x1c virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter ReadPublicKey(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadCertificate addr 0x1056100 size 0x164 virtual false final false
 Org::BouncyCastle::X509::X509Certificate ReadCertificate(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadCrl addr 0x1056380 size 0x164 virtual false final false
 Org::BouncyCastle::X509::X509Crl ReadCrl(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadCertificateRequest addr 0x1055fa8 size 0x158 virtual false final false
 Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest ReadCertificateRequest(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadAttributeCertificate addr 0x10564e4 size 0x6c virtual false final false
 Org::BouncyCastle::X509::IX509AttributeCertificate ReadAttributeCertificate(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadPkcs7 addr 0x1056264 size 0x11c virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo ReadPkcs7(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method ReadPrivateKey addr 0x1054c90 size 0x1270 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadPrivateKey(Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject) ;

/// @brief Method GetCurveParameters addr 0x10565e8 size 0xcc virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetCurveParameters(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
NEED_NO_BOX(Org::BouncyCastle::OpenSsl::PemReader);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::PemReader, "Org.BouncyCastle.OpenSsl", "PemReader");
