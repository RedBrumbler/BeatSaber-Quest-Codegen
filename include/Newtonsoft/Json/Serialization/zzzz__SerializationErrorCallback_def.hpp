#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationErrorCallback;
}
// Type: Newtonsoft.Json.Serialization::SerializationErrorCallback
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11899))
// CS Name: Newtonsoft.Json.Serialization.SerializationErrorCallback
class CORDL_TYPE SerializationErrorCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SerializationErrorCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationErrorCallback", modifiers: " const&", def_value: None }]
constexpr SerializationErrorCallback(SerializationErrorCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationErrorCallback", modifiers: "&&", def_value: None }]
constexpr SerializationErrorCallback(SerializationErrorCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationErrorCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SerializationErrorCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationErrorCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationErrorCallback& operator=(SerializationErrorCallback&& o) noexcept = default;
  constexpr SerializationErrorCallback& operator=(SerializationErrorCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SerializationErrorCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2531054 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2531184 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType o, System::Runtime::Serialization::StreamingContext context, Newtonsoft::Json::Serialization::ErrorContext errorContext) ;

/// @brief Method BeginInvoke addr 0x2531198 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType o, System::Runtime::Serialization::StreamingContext context, Newtonsoft::Json::Serialization::ErrorContext errorContext, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2531230 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::SerializationErrorCallback);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::SerializationErrorCallback, "Newtonsoft.Json.Serialization", "SerializationErrorCallback");
