#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::IO {
class PathTooLongException;
}
// Type: System.IO::PathTooLongException
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3560))
// CS Name: System.IO.PathTooLongException
class CORDL_TYPE PathTooLongException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PathTooLongException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PathTooLongException", modifiers: " const&", def_value: None }]
constexpr PathTooLongException(PathTooLongException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PathTooLongException", modifiers: "&&", def_value: None }]
constexpr PathTooLongException(PathTooLongException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PathTooLongException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr PathTooLongException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PathTooLongException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PathTooLongException& operator=(PathTooLongException&& o) noexcept = default;
  constexpr PathTooLongException& operator=(PathTooLongException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PathTooLongException() ;

/// @brief Method .ctor addr 0x23c9bec size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PathTooLongException(::StringW message) ;

/// @brief Method .ctor addr 0x23c9c48 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit PathTooLongException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23c9c6c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::PathTooLongException);
DEFINE_IL2CPP_ARG_TYPE(System::IO::PathTooLongException, "System.IO", "PathTooLongException");
