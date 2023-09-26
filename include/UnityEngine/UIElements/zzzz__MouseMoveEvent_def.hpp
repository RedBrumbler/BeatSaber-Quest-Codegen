#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
// Type: UnityEngine.UIElements::MouseMoveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7333), inst: 4516 }), TypeDefinitionIndex(TypeDefinitionIndex(7333))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7336))
// CS Name: UnityEngine.UIElements.MouseMoveEvent
class CORDL_TYPE MouseMoveEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseMoveEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseMoveEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: " const&", def_value: None }]
constexpr MouseMoveEvent(MouseMoveEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "&&", def_value: None }]
constexpr MouseMoveEvent(MouseMoveEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseMoveEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseMoveEvent>(ptr) {
}


  constexpr MouseMoveEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseMoveEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseMoveEvent& operator=(MouseMoveEvent&& o) noexcept = default;
  constexpr MouseMoveEvent& operator=(MouseMoveEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2d0c0c8 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d0c11c size 0xc virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit MouseMoveEvent() ;

/// @brief Method .ctor addr 0x2d0c128 size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method GetPooled addr 0x2d0a858 size 0x48 virtual false final false
static UnityEngine::UIElements::MouseMoveEvent GetPooled(UnityEngine::UIElements::PointerMoveEvent pointerEvent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseMoveEvent, "UnityEngine.UIElements", "MouseMoveEvent");
