#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPlatformInitialize;
}
// Type: Oculus.Platform::MessageWithPlatformInitialize
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4475 }), TypeDefinitionIndex(TypeDefinitionIndex(13222)), TypeDefinitionIndex(TypeDefinitionIndex(13481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13315))
// CS Name: Oculus.Platform.MessageWithPlatformInitialize
class CORDL_TYPE MessageWithPlatformInitialize : public Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPlatformInitialize() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPlatformInitialize", modifiers: " const&", def_value: None }]
constexpr MessageWithPlatformInitialize(MessageWithPlatformInitialize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPlatformInitialize", modifiers: "&&", def_value: None }]
constexpr MessageWithPlatformInitialize(MessageWithPlatformInitialize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPlatformInitialize(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize>(ptr) {
}


  constexpr MessageWithPlatformInitialize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPlatformInitialize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPlatformInitialize& operator=(MessageWithPlatformInitialize&& o) noexcept = default;
  constexpr MessageWithPlatformInitialize& operator=(MessageWithPlatformInitialize const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPlatformInitialize(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25af504 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPlatformInitialize addr 0x25b47dc size 0x3c virtual true final false
 Oculus::Platform::Models::PlatformInitialize GetPlatformInitialize() ;

/// @brief Method GetDataFromMessage addr 0x25b4818 size 0x9c virtual true final false
 Oculus::Platform::Models::PlatformInitialize GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithPlatformInitialize);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPlatformInitialize, "Oculus.Platform", "MessageWithPlatformInitialize");
