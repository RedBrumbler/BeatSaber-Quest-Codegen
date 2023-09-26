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
// Forward declare root types
namespace System {
class NotImplementedException;
}
// Type: System::NotImplementedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2444))
// CS Name: System.NotImplementedException
class CORDL_TYPE NotImplementedException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NotImplementedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotImplementedException", modifiers: " const&", def_value: None }]
constexpr NotImplementedException(NotImplementedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotImplementedException", modifiers: "&&", def_value: None }]
constexpr NotImplementedException(NotImplementedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotImplementedException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr NotImplementedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotImplementedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotImplementedException& operator=(NotImplementedException&& o) noexcept = default;
  constexpr NotImplementedException& operator=(NotImplementedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NotImplementedException() ;

/// @brief Method .ctor addr 0x2475860 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit NotImplementedException(::StringW message) ;

/// @brief Method .ctor addr 0x24758bc size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit NotImplementedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24758e0 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::NotImplementedException);
DEFINE_IL2CPP_ARG_TYPE(System::NotImplementedException, "System", "NotImplementedException");
