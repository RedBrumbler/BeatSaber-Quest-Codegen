#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class TargetParameterCountException;
}
// Type: System.Reflection::TargetParameterCountException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3491))
// CS Name: System.Reflection.TargetParameterCountException
class CORDL_TYPE TargetParameterCountException : public System::ApplicationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TargetParameterCountException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetParameterCountException", modifiers: " const&", def_value: None }]
constexpr TargetParameterCountException(TargetParameterCountException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetParameterCountException", modifiers: "&&", def_value: None }]
constexpr TargetParameterCountException(TargetParameterCountException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TargetParameterCountException(void* ptr) noexcept : System::ApplicationException(ptr) {
}


  constexpr TargetParameterCountException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TargetParameterCountException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TargetParameterCountException& operator=(TargetParameterCountException&& o) noexcept = default;
  constexpr TargetParameterCountException& operator=(TargetParameterCountException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TargetParameterCountException() ;

/// @brief Method .ctor addr 0x23b6374 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TargetParameterCountException(::StringW message) ;

/// @brief Method .ctor addr 0x23b63d0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TargetParameterCountException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b63f4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::TargetParameterCountException);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TargetParameterCountException, "System.Reflection", "TargetParameterCountException");
