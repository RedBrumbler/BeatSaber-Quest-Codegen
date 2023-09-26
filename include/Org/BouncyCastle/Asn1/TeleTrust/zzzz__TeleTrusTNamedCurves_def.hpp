#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder;
}
namespace Org::BouncyCastle::Asn1::TeleTrust {
class TeleTrusTNamedCurves;
}
// Type: ::BrainpoolP160r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(298))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP160r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder() ;

/// @brief Method .ctor addr 0xff7d48 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff7d50 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP160t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(299))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP160t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder() ;

/// @brief Method .ctor addr 0xff7f84 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff7f8c size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP192r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(300))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP192r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder() ;

/// @brief Method .ctor addr 0xff81c0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff81c8 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP192t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(301))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP192t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder() ;

/// @brief Method .ctor addr 0xff83fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff8404 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP224r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(302))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP224r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder() ;

/// @brief Method .ctor addr 0xff8638 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff8640 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP224t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(303))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP224t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder() ;

/// @brief Method .ctor addr 0xff8874 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff887c size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP256r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(304))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP256r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder() ;

/// @brief Method .ctor addr 0xff8ab0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff8ab8 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP256t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(305))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP256t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder() ;

/// @brief Method .ctor addr 0xff8cec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff8cf4 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP320r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(306))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP320r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder() ;

/// @brief Method .ctor addr 0xff8f28 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff8f30 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP320t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(307))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP320t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder() ;

/// @brief Method .ctor addr 0xff9164 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff916c size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP384r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(308))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP384r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder() ;

/// @brief Method .ctor addr 0xff93a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff93a8 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP384t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(309))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP384t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder() ;

/// @brief Method .ctor addr 0xff95dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff95e4 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP512r1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(310))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP512r1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder() ;

/// @brief Method .ctor addr 0xff9818 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff9820 size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: ::BrainpoolP512t1Holder
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(311))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves::BrainpoolP512t1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder& operator=(Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder() ;

/// @brief Method .ctor addr 0xff9a54 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xff9a5c size 0x1d0 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
// Type: Org.BouncyCastle.Asn1.TeleTrust::TeleTrusTNamedCurves
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(312))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves
class CORDL_TYPE TeleTrusTNamedCurves : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BrainpoolP512t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder;

using BrainpoolP512r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder;

using BrainpoolP384t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder;

using BrainpoolP384r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder;

using BrainpoolP320t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder;

using BrainpoolP320r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder;

using BrainpoolP256t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder;

using BrainpoolP256r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder;

using BrainpoolP224t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder;

using BrainpoolP224r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder;

using BrainpoolP192t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder;

using BrainpoolP192r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder;

using BrainpoolP160t1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder;

using BrainpoolP160r1Holder = Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TeleTrusTNamedCurves() = default;

// Ctor Parameters [CppParam { name: "", ty: "TeleTrusTNamedCurves", modifiers: " const&", def_value: None }]
constexpr TeleTrusTNamedCurves(TeleTrusTNamedCurves const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TeleTrusTNamedCurves", modifiers: "&&", def_value: None }]
constexpr TeleTrusTNamedCurves(TeleTrusTNamedCurves&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TeleTrusTNamedCurves(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TeleTrusTNamedCurves& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TeleTrusTNamedCurves& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TeleTrusTNamedCurves& operator=(TeleTrusTNamedCurves&& o) noexcept = default;
  constexpr TeleTrusTNamedCurves& operator=(TeleTrusTNamedCurves const& o) noexcept = default;
                


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

/// @brief Method ConfigureBasepoint addr 0xff6ce4 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECPoint ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve curve, ::StringW encoding) ;

/// @brief Method ConfigureCurve addr 0xff6dd4 size 0x4 virtual false final false
static Org::BouncyCastle::Math::EC::ECCurve ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve curve) ;

/// @brief Method FromHex addr 0xff6dd8 size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger FromHex(::StringW hex) ;

/// @brief Method DefineCurve addr 0xff6e78 size 0x210 virtual false final false
static void DefineCurve(::StringW name, Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder holder) ;

/// @brief Method GetByName addr 0xff7658 size 0x80 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByName(::StringW name) ;

/// @brief Method GetByOid addr 0xff782c size 0x12c virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetOid addr 0xff76d8 size 0x154 virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

/// @brief Method GetName addr 0xff7958 size 0x100 virtual false final false
static ::StringW GetName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0xff7a58 size 0x10c virtual false final false
static System::Collections::IEnumerable get_Names() ;

/// @brief Method GetOid addr 0xff7b64 size 0x1dc virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(int16_t curvesize, bool twisted) ;

// Ctor Parameters []
explicit TeleTrusTNamedCurves() ;

/// @brief Method .ctor addr 0xff7d40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP160r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP160t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP160t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP192r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP192t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP192t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP224r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP224t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP224t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP256r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP256t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP256t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP320r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP320t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP320t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP384r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP384t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP384t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512r1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP512r1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::Org__BouncyCastle__Asn1__TeleTrust__TeleTrusTNamedCurves__BrainpoolP512t1Holder, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP512t1Holder");
NEED_NO_BOX(Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves");
