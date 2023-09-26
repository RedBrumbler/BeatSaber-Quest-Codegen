#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net {
class ProtocolViolationException;
}
// Type: System.Net::ProtocolViolationException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7952))
// CS Name: System.Net.ProtocolViolationException
class CORDL_TYPE ProtocolViolationException : public System::InvalidOperationException {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ProtocolViolationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtocolViolationException", modifiers: " const&", def_value: None }]
constexpr ProtocolViolationException(ProtocolViolationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtocolViolationException", modifiers: "&&", def_value: None }]
constexpr ProtocolViolationException(ProtocolViolationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProtocolViolationException(void* ptr) noexcept : System::InvalidOperationException(ptr) {
}


  constexpr ProtocolViolationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProtocolViolationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProtocolViolationException& operator=(ProtocolViolationException&& o) noexcept = default;
  constexpr ProtocolViolationException& operator=(ProtocolViolationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ProtocolViolationException() ;

/// @brief Method .ctor addr 0x283d714 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ProtocolViolationException(::StringW message) ;

/// @brief Method .ctor addr 0x283d71c size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ProtocolViolationException(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x283d724 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x283d72c size 0x8 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x283d734 size 0x8 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ProtocolViolationException);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ProtocolViolationException, "System.Net", "ProtocolViolationException");
