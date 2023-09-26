#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ObjectDisposedException;
}
// Type: System::ObjectDisposedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2452))
// CS Name: System.ObjectDisposedException
class CORDL_TYPE ObjectDisposedException : public System::InvalidOperationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ObjectDisposedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: " const&", def_value: None }]
constexpr ObjectDisposedException(ObjectDisposedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "&&", def_value: None }]
constexpr ObjectDisposedException(ObjectDisposedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectDisposedException(void* ptr) noexcept : System::InvalidOperationException(ptr) {
}


  constexpr ObjectDisposedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectDisposedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectDisposedException& operator=(ObjectDisposedException&& o) noexcept = default;
  constexpr ObjectDisposedException& operator=(ObjectDisposedException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__objectName, put=__set__objectName))  _objectName;

constexpr void __set__objectName(::StringW value) ;

constexpr ::StringW __get__objectName() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;

 ::StringW __declspec(property(get=get_ObjectName))  ObjectName;


// Methods

// Ctor Parameters []
explicit ObjectDisposedException() ;

/// @brief Method .ctor addr 0x2482444 size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "objectName", ty: "::StringW", modifiers: "", def_value: None }]
explicit ObjectDisposedException(::StringW objectName) ;

/// @brief Method .ctor addr 0x24824dc size 0x6c virtual false final false
 void _ctor(::StringW objectName) ;

// Ctor Parameters [CppParam { name: "objectName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ObjectDisposedException(::StringW objectName, ::StringW message) ;

/// @brief Method .ctor addr 0x24824a4 size 0x38 virtual false final false
 void _ctor(::StringW objectName, ::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ObjectDisposedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2482548 size 0x88 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x24825d0 size 0x108 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x24827c0 size 0xd4 virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_ObjectName addr 0x24826d8 size 0x54 virtual false final false
 ::StringW get_ObjectName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ObjectDisposedException);
DEFINE_IL2CPP_ARG_TYPE(System::ObjectDisposedException, "System", "ObjectDisposedException");
