#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveWindowEvent;
}
// Type: UnityEngine.UIElements::MouseLeaveWindowEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7333)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7333), inst: 4515 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7342))
// CS Name: UnityEngine.UIElements.MouseLeaveWindowEvent
class CORDL_TYPE MouseLeaveWindowEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseLeaveWindowEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseLeaveWindowEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent", modifiers: " const&", def_value: None }]
constexpr MouseLeaveWindowEvent(MouseLeaveWindowEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent", modifiers: "&&", def_value: None }]
constexpr MouseLeaveWindowEvent(MouseLeaveWindowEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseLeaveWindowEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseLeaveWindowEvent>(ptr) {
}


  constexpr MouseLeaveWindowEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseLeaveWindowEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseLeaveWindowEvent& operator=(MouseLeaveWindowEvent&& o) noexcept = default;
  constexpr MouseLeaveWindowEvent& operator=(MouseLeaveWindowEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2d0c748 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d0c798 size 0xa4 virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit MouseLeaveWindowEvent() ;

/// @brief Method .ctor addr 0x2d0c83c size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method GetPooled addr 0x2d0c88c size 0xb4 virtual false final false
static UnityEngine::UIElements::MouseLeaveWindowEvent GetPooled(UnityEngine::Event systemEvent) ;

/// @brief Method PostDispatch addr 0x2d0c940 size 0x15c virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseLeaveWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseLeaveWindowEvent, "UnityEngine.UIElements", "MouseLeaveWindowEvent");
