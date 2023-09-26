#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
// Type: Org.BouncyCastle.Asn1::DerTaggedObject
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(469))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(495))
// CS Name: Org.BouncyCastle.Asn1.DerTaggedObject
class CORDL_TYPE DerTaggedObject : public Org::BouncyCastle::Asn1::Asn1TaggedObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerTaggedObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerTaggedObject", modifiers: " const&", def_value: None }]
constexpr DerTaggedObject(DerTaggedObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerTaggedObject", modifiers: "&&", def_value: None }]
constexpr DerTaggedObject(DerTaggedObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerTaggedObject(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1TaggedObject(ptr) {
}


  constexpr DerTaggedObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerTaggedObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerTaggedObject& operator=(DerTaggedObject&& o) noexcept = default;
  constexpr DerTaggedObject& operator=(DerTaggedObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerTaggedObject(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x112da24 size 0x44 virtual false final false
 void _ctor(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "explicitly", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerTaggedObject(bool explicitly, int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x1136458 size 0x8 virtual false final false
 void _ctor(bool explicitly, int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerTaggedObject(int32_t tagNo) ;

/// @brief Method .ctor addr 0x1141c84 size 0x74 virtual false final false
 void _ctor(int32_t tagNo) ;

/// @brief Method Encode addr 0x1141cf8 size 0xc8 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerTaggedObject);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerTaggedObject, "Org.BouncyCastle.Asn1", "DerTaggedObject");
