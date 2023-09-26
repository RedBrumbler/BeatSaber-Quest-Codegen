#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArithmeticException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class OverflowException;
}
// Type: System::OverflowException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2455))
// CS Name: System.OverflowException
class CORDL_TYPE OverflowException : public System::ArithmeticException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~OverflowException() = default;

// Ctor Parameters [CppParam { name: "", ty: "OverflowException", modifiers: " const&", def_value: None }]
constexpr OverflowException(OverflowException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OverflowException", modifiers: "&&", def_value: None }]
constexpr OverflowException(OverflowException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OverflowException(void* ptr) noexcept : System::ArithmeticException(ptr) {
}


  constexpr OverflowException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OverflowException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OverflowException& operator=(OverflowException&& o) noexcept = default;
  constexpr OverflowException& operator=(OverflowException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OverflowException() ;

/// @brief Method .ctor addr 0x2482acc size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit OverflowException(::StringW message) ;

/// @brief Method .ctor addr 0x2482b28 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit OverflowException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2482b4c size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit OverflowException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2482b70 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::OverflowException);
DEFINE_IL2CPP_ARG_TYPE(System::OverflowException, "System", "OverflowException");
