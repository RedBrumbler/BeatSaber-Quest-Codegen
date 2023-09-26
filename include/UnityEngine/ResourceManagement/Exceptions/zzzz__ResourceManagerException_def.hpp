#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class ResourceManagerException;
}
// Type: UnityEngine.ResourceManagement.Exceptions::ResourceManagerException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14262))
// CS Name: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
class CORDL_TYPE ResourceManagerException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ResourceManagerException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerException", modifiers: " const&", def_value: None }]
constexpr ResourceManagerException(ResourceManagerException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerException", modifiers: "&&", def_value: None }]
constexpr ResourceManagerException(ResourceManagerException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManagerException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr ResourceManagerException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManagerException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManagerException& operator=(ResourceManagerException&& o) noexcept = default;
  constexpr ResourceManagerException& operator=(ResourceManagerException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ResourceManagerException() ;

/// @brief Method .ctor addr 0x2a6a440 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ResourceManagerException(::StringW message) ;

/// @brief Method .ctor addr 0x2a6a498 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit ResourceManagerException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2a6a500 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ResourceManagerException(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2a6a570 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x2a6a5f0 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Exceptions::ResourceManagerException, "UnityEngine.ResourceManagement.Exceptions", "ResourceManagerException");
