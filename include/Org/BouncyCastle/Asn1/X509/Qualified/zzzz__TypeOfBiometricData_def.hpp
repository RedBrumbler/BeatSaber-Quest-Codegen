#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class TypeOfBiometricData;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::TypeOfBiometricData
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(334))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.TypeOfBiometricData
class CORDL_TYPE TypeOfBiometricData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeOfBiometricData() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeOfBiometricData", modifiers: " const&", def_value: None }]
constexpr TypeOfBiometricData(TypeOfBiometricData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeOfBiometricData", modifiers: "&&", def_value: None }]
constexpr TypeOfBiometricData(TypeOfBiometricData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeOfBiometricData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TypeOfBiometricData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeOfBiometricData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeOfBiometricData& operator=(TypeOfBiometricData&& o) noexcept = default;
  constexpr TypeOfBiometricData& operator=(TypeOfBiometricData const& o) noexcept = default;
                


// Fields

/// @brief Field Picture offset 0
static constexpr int32_t  Picture{0};

/// @brief Field HandwrittenSignature offset 0
static constexpr int32_t  HandwrittenSignature{1};

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;


// Properties

 bool __declspec(property(get=get_IsPredefined))  IsPredefined;

 int32_t __declspec(property(get=get_PredefinedBiometricType))  PredefinedBiometricType;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_BiometricDataOid))  BiometricDataOid;


// Methods

/// @brief Method GetInstance addr 0x100201c size 0x1e8 virtual false final false
static Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "predefinedBiometricType", ty: "int32_t", modifiers: "", def_value: None }]
explicit TypeOfBiometricData(int32_t predefinedBiometricType) ;

/// @brief Method .ctor addr 0x1003da8 size 0xfc virtual false final false
 void _ctor(int32_t predefinedBiometricType) ;

// Ctor Parameters [CppParam { name: "biometricDataOid", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit TypeOfBiometricData(Org::BouncyCastle::Asn1::DerObjectIdentifier biometricDataOid) ;

/// @brief Method .ctor addr 0x1003ea4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier biometricDataOid) ;

/// @brief Method get_IsPredefined addr 0x1003ecc size 0x7c virtual false final false
 bool get_IsPredefined() ;

/// @brief Method get_PredefinedBiometricType addr 0x1003f48 size 0x80 virtual false final false
 int32_t get_PredefinedBiometricType() ;

/// @brief Method get_BiometricDataOid addr 0x1003fc8 size 0x78 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_BiometricDataOid() ;

/// @brief Method ToAsn1Object addr 0x1004040 size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData, "Org.BouncyCastle.Asn1.X509.Qualified", "TypeOfBiometricData");
