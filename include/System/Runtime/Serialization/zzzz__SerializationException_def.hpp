#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
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
namespace System::Runtime::Serialization {
class SerializationException;
}
// Type: System.Runtime.Serialization::SerializationException
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3193))
// CS Name: System.Runtime.Serialization.SerializationException
class CORDL_TYPE SerializationException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SerializationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationException", modifiers: " const&", def_value: None }]
constexpr SerializationException(SerializationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationException", modifiers: "&&", def_value: None }]
constexpr SerializationException(SerializationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr SerializationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationException& operator=(SerializationException&& o) noexcept = default;
  constexpr SerializationException& operator=(SerializationException const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_s_nullMessage, put=__set_s_nullMessage))  s_nullMessage;

static void __set_s_nullMessage(::StringW value) ;

static ::StringW __get_s_nullMessage() ;


// Methods

// Ctor Parameters []
explicit SerializationException() ;

/// @brief Method .ctor addr 0x2380f94 size 0x74 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit SerializationException(::StringW message) ;

/// @brief Method .ctor addr 0x2381008 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit SerializationException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x238102c size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SerializationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2381050 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationException, "System.Runtime.Serialization", "SerializationException");
