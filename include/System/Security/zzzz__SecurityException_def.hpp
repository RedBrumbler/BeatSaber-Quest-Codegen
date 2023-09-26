#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Security {
class SecurityException;
}
// Type: System.Security::SecurityException
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2885))
// CS Name: System.Security.SecurityException
class CORDL_TYPE SecurityException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~SecurityException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityException", modifiers: " const&", def_value: None }]
constexpr SecurityException(SecurityException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityException", modifiers: "&&", def_value: None }]
constexpr SecurityException(SecurityException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr SecurityException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityException& operator=(SecurityException&& o) noexcept = default;
  constexpr SecurityException& operator=(SecurityException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_permissionState, put=__set_permissionState))  permissionState;

constexpr void __set_permissionState(::StringW value) ;

constexpr ::StringW __get_permissionState() const;


// Methods

// Ctor Parameters []
explicit SecurityException() ;

/// @brief Method .ctor addr 0x232119c size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit SecurityException(::StringW message) ;

/// @brief Method .ctor addr 0x2321204 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SecurityException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2321228 size 0x10c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inner", ty: "System::Exception", modifiers: "", def_value: None }]
explicit SecurityException(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x2321334 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

/// @brief Method GetObjectData addr 0x2321358 size 0x100 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x2321458 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
NEED_NO_BOX(System::Security::SecurityException);
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityException, "System.Security", "SecurityException");
