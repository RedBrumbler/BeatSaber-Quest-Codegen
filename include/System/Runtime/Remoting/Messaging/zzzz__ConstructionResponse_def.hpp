#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodResponse_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionResponse;
}
// Type: System.Runtime.Remoting.Messaging::ConstructionResponse
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3174))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3158))
// CS Name: System.Runtime.Remoting.Messaging.ConstructionResponse
class CORDL_TYPE ConstructionResponse : public System::Runtime::Remoting::Messaging::MethodResponse {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Activation::IConstructionReturnMessage
constexpr operator  System::Runtime::Remoting::Activation::IConstructionReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ConstructionResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: " const&", def_value: None }]
constexpr ConstructionResponse(ConstructionResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: "&&", def_value: None }]
constexpr ConstructionResponse(ConstructionResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructionResponse(void* ptr) noexcept : System::Runtime::Remoting::Messaging::MethodResponse(ptr) {
}


  constexpr ConstructionResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructionResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructionResponse& operator=(ConstructionResponse&& o) noexcept = default;
  constexpr ConstructionResponse& operator=(ConstructionResponse const& o) noexcept = default;
                


// Properties

 System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters [CppParam { name: "resultObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "callCtx", ty: "System::Runtime::Remoting::Messaging::LogicalCallContext", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
explicit ConstructionResponse(::bs_hook::Il2CppWrapperType resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x2366d78 size 0xc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

// Ctor Parameters [CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
explicit ConstructionResponse(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x2371b38 size 0x4 virtual false final false
 void _ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ConstructionResponse(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2379e8c size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Properties addr 0x2379f08 size 0x4 virtual true final false
 System::Collections::IDictionary get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ConstructionResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionResponse, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
