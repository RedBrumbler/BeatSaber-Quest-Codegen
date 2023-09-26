#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
// Type: UnityEngine.UIElements::MouseUpEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7333)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7333), inst: 4519 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7335))
// CS Name: UnityEngine.UIElements.MouseUpEvent
class CORDL_TYPE MouseUpEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseUpEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseUpEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: " const&", def_value: None }]
constexpr MouseUpEvent(MouseUpEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "&&", def_value: None }]
constexpr MouseUpEvent(MouseUpEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseUpEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseUpEvent>(ptr) {
}


  constexpr MouseUpEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseUpEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseUpEvent& operator=(MouseUpEvent&& o) noexcept = default;
  constexpr MouseUpEvent& operator=(MouseUpEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2d0be88 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d0bedc size 0xc virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit MouseUpEvent() ;

/// @brief Method .ctor addr 0x2d0bee8 size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method MakeFromPointerEvent addr 0x2d0bf3c size 0x18c virtual false final false
static UnityEngine::UIElements::MouseUpEvent MakeFromPointerEvent(UnityEngine::UIElements::IPointerEvent pointerEvent) ;

/// @brief Method GetPooled addr 0x2d0af14 size 0x4 virtual false final false
static UnityEngine::UIElements::MouseUpEvent GetPooled(UnityEngine::UIElements::PointerUpEvent pointerEvent) ;

/// @brief Method GetPooled addr 0x2d0a854 size 0x4 virtual false final false
static UnityEngine::UIElements::MouseUpEvent GetPooled(UnityEngine::UIElements::PointerMoveEvent pointerEvent) ;

/// @brief Method GetPooled addr 0x2d0b3ec size 0x4 virtual false final false
static UnityEngine::UIElements::MouseUpEvent GetPooled(UnityEngine::UIElements::PointerCancelEvent pointerEvent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseUpEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseUpEvent, "UnityEngine.UIElements", "MouseUpEvent");
