#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class KeyPurposeID;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ExtendedKeyUsage;
}
// Type: Org.BouncyCastle.Asn1.X509::ExtendedKeyUsage
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(360))
// CS Name: Org.BouncyCastle.Asn1.X509.ExtendedKeyUsage
class CORDL_TYPE ExtendedKeyUsage : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ExtendedKeyUsage() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedKeyUsage", modifiers: " const&", def_value: None }]
constexpr ExtendedKeyUsage(ExtendedKeyUsage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedKeyUsage", modifiers: "&&", def_value: None }]
constexpr ExtendedKeyUsage(ExtendedKeyUsage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtendedKeyUsage(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ExtendedKeyUsage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtendedKeyUsage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtendedKeyUsage& operator=(ExtendedKeyUsage&& o) noexcept = default;
  constexpr ExtendedKeyUsage& operator=(ExtendedKeyUsage const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_usageTable, put=__set_usageTable))  usageTable;

constexpr void __set_usageTable(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_usageTable() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method GetInstance addr 0x110fa84 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x110fa9c size 0xec virtual false final false
static Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0x1110074 size 0x74 virtual false final false
static Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage FromExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ExtendedKeyUsage(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110fc90 size 0x3e4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "usages", ty: "::ArrayW<Org::BouncyCastle::Asn1::X509::KeyPurposeID>", modifiers: "", def_value: None }]
explicit ExtendedKeyUsage(::ArrayW<Org::BouncyCastle::Asn1::X509::KeyPurposeID> usages) ;

/// @brief Method .ctor addr 0x11100e8 size 0x170 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::X509::KeyPurposeID> usages) ;

// Ctor Parameters [CppParam { name: "usages", ty: "System::Collections::ArrayList", modifiers: "", def_value: None }]
explicit ExtendedKeyUsage(System::Collections::ArrayList usages) ;

/// @brief Method .ctor addr 0x1110258 size 0x4 virtual false final false
 void _ctor(System::Collections::ArrayList usages) ;

// Ctor Parameters [CppParam { name: "usages", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit ExtendedKeyUsage(System::Collections::IEnumerable usages) ;

/// @brief Method .ctor addr 0x111025c size 0x458 virtual false final false
 void _ctor(System::Collections::IEnumerable usages) ;

/// @brief Method HasKeyPurposeId addr 0x11106b4 size 0xac virtual false final false
 bool HasKeyPurposeId(Org::BouncyCastle::Asn1::X509::KeyPurposeID keyPurposeId) ;

/// @brief Method GetUsages addr 0x1110760 size 0xe4 virtual false final false
 System::Collections::ArrayList GetUsages() ;

/// @brief Method GetAllUsages addr 0x1110844 size 0xdc virtual false final false
 System::Collections::IList GetAllUsages() ;

/// @brief Method get_Count addr 0x1110920 size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method ToAsn1Object addr 0x11109c4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage, "Org.BouncyCastle.Asn1.X509", "ExtendedKeyUsage");
