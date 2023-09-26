#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
// Type: Org.BouncyCastle.Asn1::DerBoolean
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(503))
// CS Name: Org.BouncyCastle.Asn1.DerBoolean
class CORDL_TYPE DerBoolean : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerBoolean() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerBoolean", modifiers: " const&", def_value: None }]
constexpr DerBoolean(DerBoolean const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerBoolean", modifiers: "&&", def_value: None }]
constexpr DerBoolean(DerBoolean&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerBoolean(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerBoolean& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerBoolean& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerBoolean& operator=(DerBoolean&& o) noexcept = default;
  constexpr DerBoolean& operator=(DerBoolean const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(uint8_t value) ;

constexpr uint8_t __get_value() const;

static Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_False, put=__set_False))  False;

static void __set_False(Org::BouncyCastle::Asn1::DerBoolean value) ;

static Org::BouncyCastle::Asn1::DerBoolean __get_False() ;

static Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_True, put=__set_True))  True;

static void __set_True(Org::BouncyCastle::Asn1::DerBoolean value) ;

static Org::BouncyCastle::Asn1::DerBoolean __get_True() ;


// Properties

 bool __declspec(property(get=get_IsTrue))  IsTrue;


// Methods

/// @brief Method GetInstance addr 0x11437b8 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerBoolean GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x11438a8 size 0x68 virtual false final false
static Org::BouncyCastle::Asn1::DerBoolean GetInstance(bool value) ;

/// @brief Method GetInstance addr 0x1143910 size 0x150 virtual false final false
static Org::BouncyCastle::Asn1::DerBoolean GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "val", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerBoolean(::ArrayW<uint8_t> val) ;

/// @brief Method .ctor addr 0x1143a60 size 0xa0 virtual false final false
 void _ctor(::ArrayW<uint8_t> val) ;

// Ctor Parameters [CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
explicit DerBoolean(bool value) ;

/// @brief Method .ctor addr 0x1143b00 size 0x34 virtual false final false
 void _ctor(bool value) ;

/// @brief Method get_IsTrue addr 0x1143b34 size 0x10 virtual false final false
 bool get_IsTrue() ;

/// @brief Method Encode addr 0x1143b44 size 0x84 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x1143bc8 size 0xa4 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x1143c6c size 0x28 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method ToString addr 0x1143c94 size 0x6c virtual true final false
 ::StringW ToString() ;

/// @brief Method FromOctetString addr 0x1139d38 size 0x120 virtual false final false
static Org::BouncyCastle::Asn1::DerBoolean FromOctetString(::ArrayW<uint8_t> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerBoolean);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerBoolean, "Org.BouncyCastle.Asn1", "DerBoolean");
