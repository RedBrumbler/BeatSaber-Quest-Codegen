#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterEvent;
}
// Type: UnityEngine.UIElements::MouseEnterEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7333), inst: 4512 }), TypeDefinitionIndex(TypeDefinitionIndex(7333))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7339))
// CS Name: UnityEngine.UIElements.MouseEnterEvent
class CORDL_TYPE MouseEnterEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseEnterEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseEnterEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: " const&", def_value: None }]
constexpr MouseEnterEvent(MouseEnterEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "&&", def_value: None }]
constexpr MouseEnterEvent(MouseEnterEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseEnterEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseEnterEvent>(ptr) {
}


  constexpr MouseEnterEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseEnterEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseEnterEvent& operator=(MouseEnterEvent&& o) noexcept = default;
  constexpr MouseEnterEvent& operator=(MouseEnterEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2d0c3d0 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d0c424 size 0xc virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit MouseEnterEvent() ;

/// @brief Method .ctor addr 0x2d0c430 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseEnterEvent, "UnityEngine.UIElements", "MouseEnterEvent");
