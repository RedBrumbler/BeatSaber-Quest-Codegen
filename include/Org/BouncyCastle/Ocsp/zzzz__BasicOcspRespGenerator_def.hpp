#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateStatus;
}
namespace Org::BouncyCastle::Ocsp {
class BasicOcspResp;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class BasicOcspRespGenerator;
}
namespace Org::BouncyCastle::Ocsp {
class Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject;
}
// Type: ::ResponseObject
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1608))
// CS Name: Org.BouncyCastle.Ocsp.BasicOcspRespGenerator::ResponseObject
class CORDL_TYPE Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject(Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject(Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject& operator=(Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject&& o) noexcept = default;
  constexpr Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject& operator=(Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Ocsp::CertificateID __declspec(property(get=__get_certId, put=__set_certId))  certId;

constexpr void __set_certId(Org::BouncyCastle::Ocsp::CertificateID value) ;

constexpr Org::BouncyCastle::Ocsp::CertificateID __get_certId() const;

 Org::BouncyCastle::Asn1::Ocsp::CertStatus __declspec(property(get=__get_certStatus, put=__set_certStatus))  certStatus;

constexpr void __set_certStatus(Org::BouncyCastle::Asn1::Ocsp::CertStatus value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::CertStatus __get_certStatus() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate))  thisUpdate;

constexpr void __set_thisUpdate(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_thisUpdate() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate))  nextUpdate;

constexpr void __set_nextUpdate(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_nextUpdate() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Methods

// Ctor Parameters [CppParam { name: "certId", ty: "Org::BouncyCastle::Ocsp::CertificateID", modifiers: "", def_value: None }, CppParam { name: "certStatus", ty: "Org::BouncyCastle::Ocsp::CertificateStatus", modifiers: "", def_value: None }, CppParam { name: "thisUpdate", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "extensions", ty: "Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method .ctor addr 0x101f160 size 0x98 virtual false final false
 void _ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "certId", ty: "Org::BouncyCastle::Ocsp::CertificateID", modifiers: "", def_value: None }, CppParam { name: "certStatus", ty: "Org::BouncyCastle::Ocsp::CertificateStatus", modifiers: "", def_value: None }, CppParam { name: "thisUpdate", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "nextUpdate", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "extensions", ty: "Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method .ctor addr 0x101f460 size 0xc0 virtual false final false
 void _ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "certId", ty: "Org::BouncyCastle::Ocsp::CertificateID", modifiers: "", def_value: None }, CppParam { name: "certStatus", ty: "Org::BouncyCastle::Ocsp::CertificateStatus", modifiers: "", def_value: None }, CppParam { name: "thisUpdate", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "nextUpdate", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "extensions", ty: "Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, Org::BouncyCastle::Asn1::DerGeneralizedTime thisUpdate, Org::BouncyCastle::Asn1::DerGeneralizedTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method .ctor addr 0x10206ec size 0x264 virtual false final false
 void _ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, Org::BouncyCastle::Asn1::DerGeneralizedTime thisUpdate, Org::BouncyCastle::Asn1::DerGeneralizedTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method ToResponse addr 0x1020244 size 0x98 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::SingleResponse ToResponse() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
// Type: Org.BouncyCastle.Ocsp::BasicOcspRespGenerator
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1609))
// CS Name: Org.BouncyCastle.Ocsp.BasicOcspRespGenerator
class CORDL_TYPE BasicOcspRespGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ResponseObject = Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BasicOcspRespGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator", modifiers: " const&", def_value: None }]
constexpr BasicOcspRespGenerator(BasicOcspRespGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator", modifiers: "&&", def_value: None }]
constexpr BasicOcspRespGenerator(BasicOcspRespGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicOcspRespGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicOcspRespGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicOcspRespGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicOcspRespGenerator& operator=(BasicOcspRespGenerator&& o) noexcept = default;
  constexpr BasicOcspRespGenerator& operator=(BasicOcspRespGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::IList value) ;

constexpr System::Collections::IList __get_list() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_responseExtensions, put=__set_responseExtensions))  responseExtensions;

constexpr void __set_responseExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_responseExtensions() const;

 Org::BouncyCastle::Ocsp::RespID __declspec(property(get=__get_responderID, put=__set_responderID))  responderID;

constexpr void __set_responderID(Org::BouncyCastle::Ocsp::RespID value) ;

constexpr Org::BouncyCastle::Ocsp::RespID __get_responderID() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_SignatureAlgNames))  SignatureAlgNames;


// Methods

// Ctor Parameters [CppParam { name: "responderID", ty: "Org::BouncyCastle::Ocsp::RespID", modifiers: "", def_value: None }]
explicit BasicOcspRespGenerator(Org::BouncyCastle::Ocsp::RespID responderID) ;

/// @brief Method .ctor addr 0x101ed0c size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Ocsp::RespID responderID) ;

// Ctor Parameters [CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit BasicOcspRespGenerator(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method .ctor addr 0x101ed84 size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method AddResponse addr 0x101f03c size 0x124 virtual false final false
 void AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus) ;

/// @brief Method AddResponse addr 0x101f1f8 size 0x130 virtual false final false
 void AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions) ;

/// @brief Method AddResponse addr 0x101f328 size 0x138 virtual false final false
 void AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions) ;

/// @brief Method AddResponse addr 0x101f520 size 0x110 virtual false final false
 void AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions) ;

/// @brief Method SetResponseExtensions addr 0x101f630 size 0x8 virtual false final false
 void SetResponseExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions responseExtensions) ;

/// @brief Method GenerateResponse addr 0x101f638 size 0xc0c virtual false final false
 Org::BouncyCastle::Ocsp::BasicOcspResp GenerateResponse(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculator, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime producedAt) ;

/// @brief Method Generate addr 0x1020448 size 0x8 virtual false final false
 Org::BouncyCastle::Ocsp::BasicOcspResp Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime thisUpdate) ;

/// @brief Method Generate addr 0x1020450 size 0xec virtual false final false
 Org::BouncyCastle::Ocsp::BasicOcspResp Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime producedAt, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Generate addr 0x102053c size 0x58 virtual false final false
 Org::BouncyCastle::Ocsp::BasicOcspResp Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime producedAt) ;

/// @brief Method get_SignatureAlgNames addr 0x1020594 size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::BasicOcspRespGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::BasicOcspRespGenerator, "Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator");
NEED_NO_BOX(Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject, "Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator/ResponseObject");
