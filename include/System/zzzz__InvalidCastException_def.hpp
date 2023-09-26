#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class InvalidCastException;
}
// Type: System::InvalidCastException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2425))
// CS Name: System.InvalidCastException
class CORDL_TYPE InvalidCastException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidCastException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCastException", modifiers: " const&", def_value: None }]
constexpr InvalidCastException(InvalidCastException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCastException", modifiers: "&&", def_value: None }]
constexpr InvalidCastException(InvalidCastException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidCastException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr InvalidCastException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidCastException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidCastException& operator=(InvalidCastException&& o) noexcept = default;
  constexpr InvalidCastException& operator=(InvalidCastException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidCastException() ;

/// @brief Method .ctor addr 0x2473470 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidCastException(::StringW message) ;

/// @brief Method .ctor addr 0x2470ab4 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit InvalidCastException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x24734cc size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit InvalidCastException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24734f0 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::InvalidCastException);
DEFINE_IL2CPP_ARG_TYPE(System::InvalidCastException, "System", "InvalidCastException");
