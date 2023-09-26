#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::GM {
class GMNamedCurves;
}
namespace Org::BouncyCastle::Asn1::GM {
class Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder;
}
namespace Org::BouncyCastle::Asn1::GM {
class Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder;
}
// Type: ::SM2P256V1Holder
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(168))
// CS Name: Org.BouncyCastle.Asn1.GM.GMNamedCurves::SM2P256V1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder(Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder(Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder& operator=(Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder& operator=(Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder() ;

/// @brief Method .ctor addr 0xe1ff48 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xe1ff50 size 0x1d4 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::GM
// Type: ::WapiP192V1Holder
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(169))
// CS Name: Org.BouncyCastle.Asn1.GM.GMNamedCurves::WapiP192V1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder(Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder(Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder& operator=(Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder& operator=(Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder() ;

/// @brief Method .ctor addr 0xe20188 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xe20190 size 0x1d4 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::GM
// Type: Org.BouncyCastle.Asn1.GM::GMNamedCurves
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(170))
// CS Name: Org.BouncyCastle.Asn1.GM.GMNamedCurves
class CORDL_TYPE GMNamedCurves : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using WapiP192V1Holder = Org::BouncyCastle::Asn1::GM::Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder;

using SM2P256V1Holder = Org::BouncyCastle::Asn1::GM::Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GMNamedCurves() = default;

// Ctor Parameters [CppParam { name: "", ty: "GMNamedCurves", modifiers: " const&", def_value: None }]
constexpr GMNamedCurves(GMNamedCurves const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GMNamedCurves", modifiers: "&&", def_value: None }]
constexpr GMNamedCurves(GMNamedCurves&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GMNamedCurves(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GMNamedCurves& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GMNamedCurves& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GMNamedCurves& operator=(GMNamedCurves&& o) noexcept = default;
  constexpr GMNamedCurves& operator=(GMNamedCurves const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_objIds, put=__set_objIds))  objIds;

static void __set_objIds(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_objIds() ;

static System::Collections::IDictionary __declspec(property(get=__get_curves, put=__set_curves))  curves;

static void __set_curves(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_curves() ;

static System::Collections::IDictionary __declspec(property(get=__get_names, put=__set_names))  names;

static void __set_names(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_names() ;


// Properties

static System::Collections::IEnumerable __declspec(property(get=get_Names))  Names;


// Methods

// Ctor Parameters []
explicit GMNamedCurves() ;

/// @brief Method .ctor addr 0xe1f510 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ConfigureBasepoint addr 0xe1f518 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECPoint ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve curve, ::StringW encoding) ;

/// @brief Method ConfigureCurve addr 0xe1f608 size 0x4 virtual false final false
static Org::BouncyCastle::Math::EC::ECCurve ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve curve) ;

/// @brief Method FromHex addr 0xe1f60c size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger FromHex(::StringW hex) ;

/// @brief Method DefineCurve addr 0xe1f6ac size 0x210 virtual false final false
static void DefineCurve(::StringW name, Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder holder) ;

/// @brief Method GetByName addr 0xe1fa3c size 0x80 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByName(::StringW name) ;

/// @brief Method GetByOid addr 0xe1fc10 size 0x12c virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetOid addr 0xe1fabc size 0x154 virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

/// @brief Method GetName addr 0xe1fd3c size 0x100 virtual false final false
static ::StringW GetName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0xe1fe3c size 0x10c virtual false final false
static System::Collections::IEnumerable get_Names() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::GM
NEED_NO_BOX(Org::BouncyCastle::Asn1::GM::GMNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::GM::GMNamedCurves, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves");
NEED_NO_BOX(Org::BouncyCastle::Asn1::GM::Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::GM::Org__BouncyCastle__Asn1__GM__GMNamedCurves__SM2P256V1Holder, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves/SM2P256V1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::GM::Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::GM::Org__BouncyCastle__Asn1__GM__GMNamedCurves__WapiP192V1Holder, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves/WapiP192V1Holder");
