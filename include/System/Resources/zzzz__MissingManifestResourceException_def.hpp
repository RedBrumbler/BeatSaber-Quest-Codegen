#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Resources {
class MissingManifestResourceException;
}
// Type: System.Resources::MissingManifestResourceException
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3418))
// CS Name: System.Resources.MissingManifestResourceException
class CORDL_TYPE MissingManifestResourceException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MissingManifestResourceException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingManifestResourceException", modifiers: " const&", def_value: None }]
constexpr MissingManifestResourceException(MissingManifestResourceException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingManifestResourceException", modifiers: "&&", def_value: None }]
constexpr MissingManifestResourceException(MissingManifestResourceException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissingManifestResourceException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr MissingManifestResourceException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissingManifestResourceException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissingManifestResourceException& operator=(MissingManifestResourceException&& o) noexcept = default;
  constexpr MissingManifestResourceException& operator=(MissingManifestResourceException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MissingManifestResourceException() ;

/// @brief Method .ctor addr 0x23a8a98 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MissingManifestResourceException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23a8af4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::MissingManifestResourceException);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::MissingManifestResourceException, "System.Resources", "MissingManifestResourceException");
