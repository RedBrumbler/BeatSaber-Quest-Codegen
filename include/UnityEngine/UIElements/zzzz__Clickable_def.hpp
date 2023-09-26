#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct TimerState;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Clickable;
}
// Type: UnityEngine.UIElements::Clickable
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6931))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6911))
// CS Name: UnityEngine.UIElements.Clickable
class CORDL_TYPE Clickable : public UnityEngine::UIElements::PointerManipulator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~Clickable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: " const&", def_value: None }]
constexpr Clickable(Clickable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "&&", def_value: None }]
constexpr Clickable(Clickable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Clickable(void* ptr) noexcept : UnityEngine::UIElements::PointerManipulator(ptr) {
}


  constexpr Clickable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Clickable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Clickable& operator=(Clickable&& o) noexcept = default;
  constexpr Clickable& operator=(Clickable const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::UIElements::EventBase> __declspec(property(get=__get_clickedWithEventInfo, put=__set_clickedWithEventInfo))  clickedWithEventInfo;

constexpr void __set_clickedWithEventInfo(System::Action_1<UnityEngine::UIElements::EventBase> value) ;

constexpr System::Action_1<UnityEngine::UIElements::EventBase> __get_clickedWithEventInfo() const;

 System::Action __declspec(property(get=__get_clicked, put=__set_clicked))  clicked;

constexpr void __set_clicked(System::Action value) ;

constexpr System::Action __get_clicked() const;

 int64_t __declspec(property(get=__get_m_Delay, put=__set_m_Delay))  m_Delay;

constexpr void __set_m_Delay(int64_t value) ;

constexpr int64_t __get_m_Delay() const;

 int64_t __declspec(property(get=__get_m_Interval, put=__set_m_Interval))  m_Interval;

constexpr void __set_m_Interval(int64_t value) ;

constexpr int64_t __get_m_Interval() const;

 bool __declspec(property(get=__get__active_k__BackingField, put=__set__active_k__BackingField))  _active_k__BackingField;

constexpr void __set__active_k__BackingField(bool value) ;

constexpr bool __get__active_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__lastMousePosition_k__BackingField, put=__set__lastMousePosition_k__BackingField))  _lastMousePosition_k__BackingField;

constexpr void __set__lastMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__lastMousePosition_k__BackingField() const;

 int32_t __declspec(property(get=__get_m_ActivePointerId, put=__set_m_ActivePointerId))  m_ActivePointerId;

constexpr void __set_m_ActivePointerId(int32_t value) ;

constexpr int32_t __get_m_ActivePointerId() const;

 bool __declspec(property(get=__get_m_AcceptClicksIfDisabled, put=__set_m_AcceptClicksIfDisabled))  m_AcceptClicksIfDisabled;

constexpr void __set_m_AcceptClicksIfDisabled(bool value) ;

constexpr bool __get_m_AcceptClicksIfDisabled() const;

 UnityEngine::UIElements::IVisualElementScheduledItem __declspec(property(get=__get_m_Repeater, put=__set_m_Repeater))  m_Repeater;

constexpr void __set_m_Repeater(UnityEngine::UIElements::IVisualElementScheduledItem value) ;

constexpr UnityEngine::UIElements::IVisualElementScheduledItem __get_m_Repeater() const;


// Properties

 bool __declspec(property(get=get_active, put=set_active))  active;

 UnityEngine::Vector2 __declspec(property(get=get_lastMousePosition, put=set_lastMousePosition))  lastMousePosition;

 bool __declspec(property(get=get_acceptClicksIfDisabled))  acceptClicksIfDisabled;

 UnityEngine::UIElements::InvokePolicy __declspec(property(get=get_invokePolicy))  invokePolicy;


// Methods

/// @brief Method get_active addr 0x2c76448 size 0x8 virtual false final false
 bool get_active() ;

/// @brief Method set_active addr 0x2c76450 size 0xc virtual false final false
 void set_active(bool value) ;

/// @brief Method get_lastMousePosition addr 0x2c7645c size 0x8 virtual false final false
 UnityEngine::Vector2 get_lastMousePosition() ;

/// @brief Method set_lastMousePosition addr 0x2c76464 size 0x8 virtual false final false
 void set_lastMousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_acceptClicksIfDisabled addr 0x2c7646c size 0x8 virtual false final false
 bool get_acceptClicksIfDisabled() ;

/// @brief Method get_invokePolicy addr 0x2c76474 size 0x8 virtual false final false
 UnityEngine::UIElements::InvokePolicy get_invokePolicy() ;

// Ctor Parameters [CppParam { name: "handler", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "interval", ty: "int64_t", modifiers: "", def_value: None }]
explicit Clickable(System::Action handler, int64_t delay, int64_t interval) ;

/// @brief Method .ctor addr 0x2c7647c size 0x2c virtual false final false
 void _ctor(System::Action handler, int64_t delay, int64_t interval) ;

// Ctor Parameters [CppParam { name: "handler", ty: "System::Action_1<UnityEngine::UIElements::EventBase>", modifiers: "", def_value: None }]
explicit Clickable(System::Action_1<UnityEngine::UIElements::EventBase> handler) ;

/// @brief Method .ctor addr 0x2c76570 size 0xc8 virtual false final false
 void _ctor(System::Action_1<UnityEngine::UIElements::EventBase> handler) ;

// Ctor Parameters [CppParam { name: "handler", ty: "System::Action", modifiers: "", def_value: None }]
explicit Clickable(System::Action handler) ;

/// @brief Method .ctor addr 0x2c764a8 size 0xc8 virtual false final false
 void _ctor(System::Action handler) ;

/// @brief Method OnTimer addr 0x2c7663c size 0xac virtual false final false
 void OnTimer(UnityEngine::UIElements::TimerState timerState) ;

/// @brief Method IsRepeatable addr 0x2c766e8 size 0x24 virtual false final false
 bool IsRepeatable() ;

/// @brief Method RegisterCallbacksOnTarget addr 0x2c767ec size 0x520 virtual true final false
 void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x2c76d0c size 0x4fc virtual true final false
 void UnregisterCallbacksFromTarget() ;

/// @brief Method OnMouseDown addr 0x2c77208 size 0xb8 virtual false final false
 void OnMouseDown(UnityEngine::UIElements::MouseDownEvent evt) ;

/// @brief Method OnMouseMove addr 0x2c772c0 size 0x6c virtual false final false
 void OnMouseMove(UnityEngine::UIElements::MouseMoveEvent evt) ;

/// @brief Method OnMouseUp addr 0x2c7732c size 0xc0 virtual false final false
 void OnMouseUp(UnityEngine::UIElements::MouseUpEvent evt) ;

/// @brief Method OnMouseCaptureOut addr 0x2c773ec size 0x84 virtual false final false
 void OnMouseCaptureOut(UnityEngine::UIElements::MouseCaptureOutEvent evt) ;

/// @brief Method OnPointerDown addr 0x2c77470 size 0x124 virtual false final false
 void OnPointerDown(UnityEngine::UIElements::PointerDownEvent evt) ;

/// @brief Method OnPointerMove addr 0x2c77788 size 0x118 virtual false final false
 void OnPointerMove(UnityEngine::UIElements::PointerMoveEvent evt) ;

/// @brief Method OnPointerUp addr 0x2c778a0 size 0x12c virtual false final false
 void OnPointerUp(UnityEngine::UIElements::PointerUpEvent evt) ;

/// @brief Method OnPointerCancel addr 0x2c77a80 size 0x88 virtual false final false
 void OnPointerCancel(UnityEngine::UIElements::PointerCancelEvent evt) ;

/// @brief Method OnPointerCaptureOut addr 0x2c77b6c size 0x78 virtual false final false
 void OnPointerCaptureOut(UnityEngine::UIElements::PointerCaptureOutEvent evt) ;

/// @brief Method ContainsPointer addr 0x2c7670c size 0x88 virtual false final false
 bool ContainsPointer(int32_t pointerId) ;

/// @brief Method IsNotMouseEvent addr 0x2c77b08 size 0x64 virtual false final false
static bool IsNotMouseEvent(int32_t pointerId) ;

/// @brief Method Invoke addr 0x2c76794 size 0x58 virtual false final false
 void Invoke(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method SimulateSingleClick addr 0x2c77c00 size 0x1d4 virtual false final false
 void SimulateSingleClick(UnityEngine::UIElements::EventBase evt, int32_t delayMs) ;

/// @brief Method ProcessDownEvent addr 0x2c77dd4 size 0x360 virtual true final false
 void ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId) ;

/// @brief Method ProcessMoveEvent addr 0x2c78134 size 0x74 virtual true final false
 void ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition) ;

/// @brief Method ProcessUpEvent addr 0x2c781a8 size 0x1a8 virtual true final false
 void ProcessUpEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId) ;

/// @brief Method ProcessCancelEvent addr 0x2c78350 size 0x16c virtual true final false
 void ProcessCancelEvent(UnityEngine::UIElements::EventBase evt, int32_t pointerId) ;

/// @brief Method <SimulateSingleClick>b__43_0 addr 0x2c784bc size 0x34 virtual false final false
 void _SimulateSingleClick_b__43_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Clickable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Clickable, "UnityEngine.UIElements", "Clickable");
