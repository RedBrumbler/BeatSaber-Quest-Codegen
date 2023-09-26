#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class EntryPointNotFoundException;
}
// Type: System::EntryPointNotFoundException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2375))
// CS Name: System.EntryPointNotFoundException
class CORDL_TYPE EntryPointNotFoundException : public System::TypeLoadException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~EntryPointNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "EntryPointNotFoundException", modifiers: " const&", def_value: None }]
constexpr EntryPointNotFoundException(EntryPointNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EntryPointNotFoundException", modifiers: "&&", def_value: None }]
constexpr EntryPointNotFoundException(EntryPointNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EntryPointNotFoundException(void* ptr) noexcept : System::TypeLoadException(ptr) {
}


  constexpr EntryPointNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EntryPointNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EntryPointNotFoundException& operator=(EntryPointNotFoundException&& o) noexcept = default;
  constexpr EntryPointNotFoundException& operator=(EntryPointNotFoundException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit EntryPointNotFoundException() ;

/// @brief Method .ctor addr 0x245be44 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit EntryPointNotFoundException(::StringW message) ;

/// @brief Method .ctor addr 0x245bea0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit EntryPointNotFoundException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x245bec4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::EntryPointNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(System::EntryPointNotFoundException, "System", "EntryPointNotFoundException");
