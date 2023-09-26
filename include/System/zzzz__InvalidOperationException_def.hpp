#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidOperationException;
}
// Type: System::InvalidOperationException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2426))
// CS Name: System.InvalidOperationException
class CORDL_TYPE InvalidOperationException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidOperationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidOperationException", modifiers: " const&", def_value: None }]
constexpr InvalidOperationException(InvalidOperationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidOperationException", modifiers: "&&", def_value: None }]
constexpr InvalidOperationException(InvalidOperationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidOperationException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr InvalidOperationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidOperationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidOperationException& operator=(InvalidOperationException&& o) noexcept = default;
  constexpr InvalidOperationException& operator=(InvalidOperationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidOperationException() ;

/// @brief Method .ctor addr 0x24734f8 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidOperationException(::StringW message) ;

/// @brief Method .ctor addr 0x2473554 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit InvalidOperationException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2473578 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit InvalidOperationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x247359c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::InvalidOperationException);
DEFINE_IL2CPP_ARG_TYPE(System::InvalidOperationException, "System", "InvalidOperationException");
