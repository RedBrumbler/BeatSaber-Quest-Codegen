#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Security::Authentication::ExtendedProtection {
struct PolicyEnforcement;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
// Type: System.Security.Authentication.ExtendedProtection::ExtendedProtectionPolicy
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7836))
// CS Name: System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
class CORDL_TYPE ExtendedProtectionPolicy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtendedProtectionPolicy() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicy", modifiers: " const&", def_value: None }]
constexpr ExtendedProtectionPolicy(ExtendedProtectionPolicy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicy", modifiers: "&&", def_value: None }]
constexpr ExtendedProtectionPolicy(ExtendedProtectionPolicy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtendedProtectionPolicy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExtendedProtectionPolicy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtendedProtectionPolicy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtendedProtectionPolicy& operator=(ExtendedProtectionPolicy&& o) noexcept = default;
  constexpr ExtendedProtectionPolicy& operator=(ExtendedProtectionPolicy const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "policyEnforcement", ty: "System::Security::Authentication::ExtendedProtection::PolicyEnforcement", modifiers: "", def_value: None }]
explicit ExtendedProtectionPolicy(System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement) ;

/// @brief Method .ctor addr 0x2810dc0 size 0x8 virtual false final false
 void _ctor(System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ExtendedProtectionPolicy(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2810dc8 size 0x48 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x2810e10 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2810e18 size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
