#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_def.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSetGenerator;
}
// Type: Org.BouncyCastle.Asn1::DerSetGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(508))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(515))
// CS Name: Org.BouncyCastle.Asn1.DerSetGenerator
class CORDL_TYPE DerSetGenerator : public Org::BouncyCastle::Asn1::DerGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DerSetGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSetGenerator", modifiers: " const&", def_value: None }]
constexpr DerSetGenerator(DerSetGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSetGenerator", modifiers: "&&", def_value: None }]
constexpr DerSetGenerator(DerSetGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerSetGenerator(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerGenerator(ptr) {
}


  constexpr DerSetGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerSetGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerSetGenerator& operator=(DerSetGenerator&& o) noexcept = default;
  constexpr DerSetGenerator& operator=(DerSetGenerator const& o) noexcept = default;
                


// Fields

 System::IO::MemoryStream __declspec(property(get=__get__bOut, put=__set__bOut))  _bOut;

constexpr void __set__bOut(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get__bOut() const;


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit DerSetGenerator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1146ba4 size 0x80 virtual false final false
 void _ctor(System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit DerSetGenerator(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x1146c24 size 0xa4 virtual false final false
 void _ctor(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method AddObject addr 0x1146cc8 size 0x80 virtual true final false
 void AddObject(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method GetRawOutputStream addr 0x1146d48 size 0x8 virtual true final false
 System::IO::Stream GetRawOutputStream() ;

/// @brief Method Close addr 0x1146d50 size 0x38 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerSetGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerSetGenerator, "Org.BouncyCastle.Asn1", "DerSetGenerator");
