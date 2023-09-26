#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatExtension;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ServerNameList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsExtensionsUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsExtensionsUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1308))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities
class CORDL_TYPE TlsExtensionsUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsExtensionsUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: " const&", def_value: None }]
constexpr TlsExtensionsUtilities(TlsExtensionsUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: "&&", def_value: None }]
constexpr TlsExtensionsUtilities(TlsExtensionsUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsExtensionsUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsExtensionsUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsExtensionsUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsExtensionsUtilities& operator=(TlsExtensionsUtilities&& o) noexcept = default;
  constexpr TlsExtensionsUtilities& operator=(TlsExtensionsUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method EnsureExtensionsInitialised addr 0xf2dbc8 size 0x68 virtual false final false
static System::Collections::IDictionary EnsureExtensionsInitialised(System::Collections::IDictionary extensions) ;

/// @brief Method AddClientCertificateTypeExtensionClient addr 0xf2dc30 size 0xf0 virtual false final false
static void AddClientCertificateTypeExtensionClient(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> certificateTypes) ;

/// @brief Method AddClientCertificateTypeExtensionServer addr 0xf2ddc4 size 0xf0 virtual false final false
static void AddClientCertificateTypeExtensionServer(System::Collections::IDictionary extensions, uint8_t certificateType) ;

/// @brief Method AddEncryptThenMacExtension addr 0xf2df08 size 0xe8 virtual false final false
static void AddEncryptThenMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method AddExtendedMasterSecretExtension addr 0xf2e040 size 0xe8 virtual false final false
static void AddExtendedMasterSecretExtension(System::Collections::IDictionary extensions) ;

/// @brief Method AddHeartbeatExtension addr 0xf2e178 size 0xf0 virtual false final false
static void AddHeartbeatExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::HeartbeatExtension heartbeatExtension) ;

/// @brief Method AddMaxFragmentLengthExtension addr 0xf2e328 size 0xf0 virtual false final false
static void AddMaxFragmentLengthExtension(System::Collections::IDictionary extensions, uint8_t maxFragmentLength) ;

/// @brief Method AddPaddingExtension addr 0xf2e46c size 0xf0 virtual false final false
static void AddPaddingExtension(System::Collections::IDictionary extensions, int32_t dataLength) ;

/// @brief Method AddServerCertificateTypeExtensionClient addr 0xf2e5d0 size 0xf0 virtual false final false
static void AddServerCertificateTypeExtensionClient(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> certificateTypes) ;

/// @brief Method AddServerCertificateTypeExtensionServer addr 0xf2e6c0 size 0xf0 virtual false final false
static void AddServerCertificateTypeExtensionServer(System::Collections::IDictionary extensions, uint8_t certificateType) ;

/// @brief Method AddServerNameExtension addr 0xf2e7b0 size 0xec virtual false final false
static void AddServerNameExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::ServerNameList serverNameList) ;

/// @brief Method AddStatusRequestExtension addr 0xf2e95c size 0xf0 virtual false final false
static void AddStatusRequestExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest statusRequest) ;

/// @brief Method AddTruncatedHMacExtension addr 0xf2eb0c size 0xe8 virtual false final false
static void AddTruncatedHMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetClientCertificateTypeExtensionClient addr 0xf2ec44 size 0x6c virtual false final false
static ::ArrayW<uint8_t> GetClientCertificateTypeExtensionClient(System::Collections::IDictionary extensions) ;

/// @brief Method GetClientCertificateTypeExtensionServer addr 0xf2ee6c size 0x70 virtual false final false
static int16_t GetClientCertificateTypeExtensionServer(System::Collections::IDictionary extensions) ;

/// @brief Method GetHeartbeatExtension addr 0xf2ef30 size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::HeartbeatExtension GetHeartbeatExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetMaxFragmentLengthExtension addr 0xf2f070 size 0x70 virtual false final false
static int16_t GetMaxFragmentLengthExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetPaddingExtension addr 0xf2f134 size 0x70 virtual false final false
static int32_t GetPaddingExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetServerCertificateTypeExtensionClient addr 0xf2f260 size 0x6c virtual false final false
static ::ArrayW<uint8_t> GetServerCertificateTypeExtensionClient(System::Collections::IDictionary extensions) ;

/// @brief Method GetServerCertificateTypeExtensionServer addr 0xf2f2cc size 0x70 virtual false final false
static int16_t GetServerCertificateTypeExtensionServer(System::Collections::IDictionary extensions) ;

/// @brief Method GetServerNameExtension addr 0xf2f33c size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::ServerNameList GetServerNameExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetStatusRequestExtension addr 0xf2f47c size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest GetStatusRequestExtension(System::Collections::IDictionary extensions) ;

/// @brief Method HasEncryptThenMacExtension addr 0xf2f5bc size 0x68 virtual false final false
static bool HasEncryptThenMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method HasExtendedMasterSecretExtension addr 0xf2f638 size 0x68 virtual false final false
static bool HasExtendedMasterSecretExtension(System::Collections::IDictionary extensions) ;

/// @brief Method HasTruncatedHMacExtension addr 0xf2f6b4 size 0x68 virtual false final false
static bool HasTruncatedHMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method CreateCertificateTypeExtensionClient addr 0xf2dd20 size 0xa4 virtual false final false
static ::ArrayW<uint8_t> CreateCertificateTypeExtensionClient(::ArrayW<uint8_t> certificateTypes) ;

/// @brief Method CreateCertificateTypeExtensionServer addr 0xf2deb4 size 0x54 virtual false final false
static ::ArrayW<uint8_t> CreateCertificateTypeExtensionServer(uint8_t certificateType) ;

/// @brief Method CreateEmptyExtensionData addr 0xf2f858 size 0x58 virtual false final false
static ::ArrayW<uint8_t> CreateEmptyExtensionData() ;

/// @brief Method CreateEncryptThenMacExtension addr 0xf2dff0 size 0x50 virtual false final false
static ::ArrayW<uint8_t> CreateEncryptThenMacExtension() ;

/// @brief Method CreateExtendedMasterSecretExtension addr 0xf2e128 size 0x50 virtual false final false
static ::ArrayW<uint8_t> CreateExtendedMasterSecretExtension() ;

/// @brief Method CreateHeartbeatExtension addr 0xf2e268 size 0xc0 virtual false final false
static ::ArrayW<uint8_t> CreateHeartbeatExtension(Org::BouncyCastle::Crypto::Tls::HeartbeatExtension heartbeatExtension) ;

/// @brief Method CreateMaxFragmentLengthExtension addr 0xf2e418 size 0x54 virtual false final false
static ::ArrayW<uint8_t> CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength) ;

/// @brief Method CreatePaddingExtension addr 0xf2e55c size 0x74 virtual false final false
static ::ArrayW<uint8_t> CreatePaddingExtension(int32_t dataLength) ;

/// @brief Method CreateServerNameExtension addr 0xf2e89c size 0xc0 virtual false final false
static ::ArrayW<uint8_t> CreateServerNameExtension(Org::BouncyCastle::Crypto::Tls::ServerNameList serverNameList) ;

/// @brief Method CreateStatusRequestExtension addr 0xf2ea4c size 0xc0 virtual false final false
static ::ArrayW<uint8_t> CreateStatusRequestExtension(Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest statusRequest) ;

/// @brief Method CreateTruncatedHMacExtension addr 0xf2ebf4 size 0x50 virtual false final false
static ::ArrayW<uint8_t> CreateTruncatedHMacExtension() ;

/// @brief Method ReadEmptyExtensionData addr 0xf2f944 size 0x90 virtual false final false
static bool ReadEmptyExtensionData(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadCertificateTypeExtensionClient addr 0xf2edc4 size 0xa8 virtual false final false
static ::ArrayW<uint8_t> ReadCertificateTypeExtensionClient(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadCertificateTypeExtensionServer addr 0xf2eedc size 0x54 virtual false final false
static uint8_t ReadCertificateTypeExtensionServer(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadEncryptThenMacExtension addr 0xf2f624 size 0x14 virtual false final false
static bool ReadEncryptThenMacExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadExtendedMasterSecretExtension addr 0xf2f6a0 size 0x14 virtual false final false
static bool ReadExtendedMasterSecretExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadHeartbeatExtension addr 0xf2ef9c size 0xd4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::HeartbeatExtension ReadHeartbeatExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadMaxFragmentLengthExtension addr 0xf2f0e0 size 0x54 virtual false final false
static uint8_t ReadMaxFragmentLengthExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadPaddingExtension addr 0xf2f1a4 size 0xbc virtual false final false
static int32_t ReadPaddingExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadServerNameExtension addr 0xf2f3a8 size 0xd4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::ServerNameList ReadServerNameExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadStatusRequestExtension addr 0xf2f4e8 size 0xd4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest ReadStatusRequestExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadTruncatedHMacExtension addr 0xf2f71c size 0x14 virtual false final false
static bool ReadTruncatedHMacExtension(::ArrayW<uint8_t> extensionData) ;

// Ctor Parameters []
explicit TlsExtensionsUtilities() ;

/// @brief Method .ctor addr 0xf2fc24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsExtensionsUtilities");
