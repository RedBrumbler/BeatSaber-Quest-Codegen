#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WheelEvent;
}
// Type: UnityEngine.UIElements::WheelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7333), inst: 4520 }), TypeDefinitionIndex(TypeDefinitionIndex(7333))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7338))
// CS Name: UnityEngine.UIElements.WheelEvent
class CORDL_TYPE WheelEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::WheelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~WheelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: " const&", def_value: None }]
constexpr WheelEvent(WheelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: "&&", def_value: None }]
constexpr WheelEvent(WheelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WheelEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::WheelEvent>(ptr) {
}


  constexpr WheelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WheelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WheelEvent& operator=(WheelEvent&& o) noexcept = default;
  constexpr WheelEvent& operator=(WheelEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__delta_k__BackingField, put=__set__delta_k__BackingField))  _delta_k__BackingField;

constexpr void __set__delta_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__delta_k__BackingField() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_delta, put=set_delta))  delta;


// Methods

/// @brief Method get_delta addr 0x2d0c1c4 size 0xc virtual false final false
 UnityEngine::Vector3 get_delta() ;

/// @brief Method set_delta addr 0x2d0c1d0 size 0xc virtual false final false
 void set_delta(UnityEngine::Vector3 value) ;

/// @brief Method GetPooled addr 0x2d0c1dc size 0x7c virtual false final false
static UnityEngine::UIElements::WheelEvent GetPooled(UnityEngine::Event systemEvent) ;

/// @brief Method GetPooled addr 0x2d0c258 size 0x78 virtual false final false
static UnityEngine::UIElements::WheelEvent GetPooled(UnityEngine::Vector3 delta, UnityEngine::UIElements::IPointerEvent pointerEvent) ;

/// @brief Method Init addr 0x2d0c2d0 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d0c320 size 0x60 virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit WheelEvent() ;

/// @brief Method .ctor addr 0x2d0c380 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::WheelEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::WheelEvent, "UnityEngine.UIElements", "WheelEvent");
