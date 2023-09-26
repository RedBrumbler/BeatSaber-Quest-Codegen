#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Type: Org.BouncyCastle.Asn1.X509::AlgorithmIdentifier
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(235))
// CS Name: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
class CORDL_TYPE AlgorithmIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AlgorithmIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifier", modifiers: " const&", def_value: None }]
constexpr AlgorithmIdentifier(AlgorithmIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifier", modifiers: "&&", def_value: None }]
constexpr AlgorithmIdentifier(AlgorithmIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlgorithmIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AlgorithmIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlgorithmIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlgorithmIdentifier& operator=(AlgorithmIdentifier&& o) noexcept = default;
  constexpr AlgorithmIdentifier& operator=(AlgorithmIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithm() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_parameters() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ObjectID))  ObjectID;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Parameters))  Parameters;


// Methods

/// @brief Method GetInstance addr 0xf08ed4 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef6004 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit AlgorithmIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm) ;

/// @brief Method .ctor addr 0xf0908c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }]
explicit AlgorithmIdentifier(::StringW algorithm) ;

/// @brief Method .ctor addr 0xf090b4 size 0x7c virtual false final false
 void _ctor(::StringW algorithm) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit AlgorithmIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xf09130 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AlgorithmIdentifier(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xf08eec size 0x1a0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Algorithm addr 0xf0915c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Algorithm() ;

/// @brief Method get_ObjectID addr 0xf09164 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ObjectID() ;

/// @brief Method get_Parameters addr 0xf0916c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Parameters() ;

/// @brief Method ToAsn1Object addr 0xf09174 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, "Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier");
