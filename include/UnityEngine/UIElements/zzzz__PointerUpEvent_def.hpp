#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Type: UnityEngine.UIElements::PointerUpEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7316)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7316), inst: 1654 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7320))
// CS Name: UnityEngine.UIElements.PointerUpEvent
class CORDL_TYPE PointerUpEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerUpEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerUpEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent", modifiers: " const&", def_value: None }]
constexpr PointerUpEvent(PointerUpEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent", modifiers: "&&", def_value: None }]
constexpr PointerUpEvent(PointerUpEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerUpEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerUpEvent>(ptr) {
}


  constexpr PointerUpEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerUpEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerUpEvent& operator=(PointerUpEvent&& o) noexcept = default;
  constexpr PointerUpEvent& operator=(PointerUpEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2d0aa44 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d0aa94 size 0x104 virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit PointerUpEvent() ;

/// @brief Method .ctor addr 0x2d0ab98 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method PostDispatch addr 0x2d0abe8 size 0x32c virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerUpEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerUpEvent, "UnityEngine.UIElements", "PointerUpEvent");
