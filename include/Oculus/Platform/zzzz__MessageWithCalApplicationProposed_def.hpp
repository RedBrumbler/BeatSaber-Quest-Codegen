#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationProposed_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CalApplicationProposed;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCalApplicationProposed;
}
// Type: Oculus.Platform::MessageWithCalApplicationProposed
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13222)), TypeDefinitionIndex(TypeDefinitionIndex(13417)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4442 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13242))
// CS Name: Oculus.Platform.MessageWithCalApplicationProposed
class CORDL_TYPE MessageWithCalApplicationProposed : public Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationProposed> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCalApplicationProposed() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationProposed", modifiers: " const&", def_value: None }]
constexpr MessageWithCalApplicationProposed(MessageWithCalApplicationProposed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationProposed", modifiers: "&&", def_value: None }]
constexpr MessageWithCalApplicationProposed(MessageWithCalApplicationProposed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCalApplicationProposed(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationProposed>(ptr) {
}


  constexpr MessageWithCalApplicationProposed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCalApplicationProposed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCalApplicationProposed& operator=(MessageWithCalApplicationProposed&& o) noexcept = default;
  constexpr MessageWithCalApplicationProposed& operator=(MessageWithCalApplicationProposed const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCalApplicationProposed(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25ae064 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCalApplicationProposed addr 0x25b05f4 size 0x3c virtual true final false
 Oculus::Platform::Models::CalApplicationProposed GetCalApplicationProposed() ;

/// @brief Method GetDataFromMessage addr 0x25b0630 size 0x9c virtual true final false
 Oculus::Platform::Models::CalApplicationProposed GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithCalApplicationProposed);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCalApplicationProposed, "Oculus.Platform", "MessageWithCalApplicationProposed");
