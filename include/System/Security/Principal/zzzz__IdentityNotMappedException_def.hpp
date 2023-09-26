#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::Principal {
class IdentityNotMappedException;
}
// Type: System.Security.Principal::IdentityNotMappedException
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2995))
// CS Name: System.Security.Principal.IdentityNotMappedException
class CORDL_TYPE IdentityNotMappedException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~IdentityNotMappedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdentityNotMappedException", modifiers: " const&", def_value: None }]
constexpr IdentityNotMappedException(IdentityNotMappedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdentityNotMappedException", modifiers: "&&", def_value: None }]
constexpr IdentityNotMappedException(IdentityNotMappedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdentityNotMappedException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr IdentityNotMappedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdentityNotMappedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdentityNotMappedException& operator=(IdentityNotMappedException&& o) noexcept = default;
  constexpr IdentityNotMappedException& operator=(IdentityNotMappedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IdentityNotMappedException() ;

/// @brief Method .ctor addr 0x2344978 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit IdentityNotMappedException(::StringW message) ;

/// @brief Method .ctor addr 0x23449d0 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

/// @brief Method GetObjectData addr 0x23449d8 size 0x4 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::IdentityNotMappedException);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::IdentityNotMappedException, "System.Security.Principal", "IdentityNotMappedException");
