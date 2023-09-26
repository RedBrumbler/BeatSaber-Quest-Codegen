#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class IndexOutOfRangeException;
}
// Type: System::IndexOutOfRangeException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2421))
// CS Name: System.IndexOutOfRangeException
class CORDL_TYPE IndexOutOfRangeException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~IndexOutOfRangeException() = default;

// Ctor Parameters [CppParam { name: "", ty: "IndexOutOfRangeException", modifiers: " const&", def_value: None }]
constexpr IndexOutOfRangeException(IndexOutOfRangeException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IndexOutOfRangeException", modifiers: "&&", def_value: None }]
constexpr IndexOutOfRangeException(IndexOutOfRangeException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IndexOutOfRangeException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr IndexOutOfRangeException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IndexOutOfRangeException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IndexOutOfRangeException& operator=(IndexOutOfRangeException&& o) noexcept = default;
  constexpr IndexOutOfRangeException& operator=(IndexOutOfRangeException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IndexOutOfRangeException() ;

/// @brief Method .ctor addr 0x246e964 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit IndexOutOfRangeException(::StringW message) ;

/// @brief Method .ctor addr 0x246e9c0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit IndexOutOfRangeException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x246e9e4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IndexOutOfRangeException);
DEFINE_IL2CPP_ARG_TYPE(System::IndexOutOfRangeException, "System", "IndexOutOfRangeException");
