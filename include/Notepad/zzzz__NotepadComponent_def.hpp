#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace Notepad {
class NotepadComponent;
}
// Type: Notepad::NotepadComponent
namespace Notepad {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16112))
// CS Name: Notepad.NotepadComponent
class CORDL_TYPE NotepadComponent : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NotepadComponent() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: " const&", def_value: None }]
constexpr NotepadComponent(NotepadComponent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "&&", def_value: None }]
constexpr NotepadComponent(NotepadComponent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotepadComponent(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NotepadComponent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotepadComponent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotepadComponent& operator=(NotepadComponent&& o) noexcept = default;
  constexpr NotepadComponent& operator=(NotepadComponent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NotepadComponent() ;

/// @brief Method .ctor addr 0x2581994 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Notepad
NEED_NO_BOX(Notepad::NotepadComponent);
DEFINE_IL2CPP_ARG_TYPE(Notepad::NotepadComponent, "Notepad", "NotepadComponent");
