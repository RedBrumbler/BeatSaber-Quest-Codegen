#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__KeyException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class InvalidKeyException;
}
// Type: Org.BouncyCastle.Security::InvalidKeyException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1749))
// CS Name: Org.BouncyCastle.Security.InvalidKeyException
class CORDL_TYPE InvalidKeyException : public Org::BouncyCastle::Security::KeyException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidKeyException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: " const&", def_value: None }]
constexpr InvalidKeyException(InvalidKeyException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None }]
constexpr InvalidKeyException(InvalidKeyException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidKeyException(void* ptr) noexcept : Org::BouncyCastle::Security::KeyException(ptr) {
}


  constexpr InvalidKeyException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidKeyException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidKeyException& operator=(InvalidKeyException&& o) noexcept = default;
  constexpr InvalidKeyException& operator=(InvalidKeyException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidKeyException() ;

/// @brief Method .ctor addr 0x10b1aa0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidKeyException(::StringW message) ;

/// @brief Method .ctor addr 0x10b1aa8 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit InvalidKeyException(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10b1ab0 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::InvalidKeyException, "Org.BouncyCastle.Security", "InvalidKeyException");
