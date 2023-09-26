#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Event;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PropagationPaths;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventBase__EventPropagation;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventBase__LifeCycleStatus;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Type: ::EventPropagation
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7295))
// CS Name: UnityEngine.UIElements.EventBase::EventPropagation
struct CORDL_TYPE UnityEngine__UIElements__EventBase__EventPropagation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__EventBase__EventPropagation(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__EventBase__EventPropagation(UnityEngine__UIElements__EventBase__EventPropagation const&) = default;
                    constexpr UnityEngine__UIElements__EventBase__EventPropagation(UnityEngine__UIElements__EventBase__EventPropagation&&) = default;
                    constexpr UnityEngine__UIElements__EventBase__EventPropagation& operator=(UnityEngine__UIElements__EventBase__EventPropagation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__EventBase__EventPropagation& operator=(UnityEngine__UIElements__EventBase__EventPropagation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__EventBase__EventPropagation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__EventBase__EventPropagation_Unwrapped : int32_t {
__None = 0,
__Bubbles = 1,
__TricklesDown = 2,
__Cancellable = 4,
__SkipDisabledElements = 8,
__IgnoreCompositeRoots = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__EventBase__EventPropagation_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__EventBase__EventPropagation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation const None;

/// @brief Field Bubbles offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation const Bubbles;

/// @brief Field TricklesDown offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation const TricklesDown;

/// @brief Field Cancellable offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation const Cancellable;

/// @brief Field SkipDisabledElements offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation const SkipDisabledElements;

/// @brief Field IgnoreCompositeRoots offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation const IgnoreCompositeRoots;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::LifeCycleStatus
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7296))
// CS Name: UnityEngine.UIElements.EventBase::LifeCycleStatus
struct CORDL_TYPE UnityEngine__UIElements__EventBase__LifeCycleStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__EventBase__LifeCycleStatus(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__EventBase__LifeCycleStatus(UnityEngine__UIElements__EventBase__LifeCycleStatus const&) = default;
                    constexpr UnityEngine__UIElements__EventBase__LifeCycleStatus(UnityEngine__UIElements__EventBase__LifeCycleStatus&&) = default;
                    constexpr UnityEngine__UIElements__EventBase__LifeCycleStatus& operator=(UnityEngine__UIElements__EventBase__LifeCycleStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__EventBase__LifeCycleStatus& operator=(UnityEngine__UIElements__EventBase__LifeCycleStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__EventBase__LifeCycleStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__EventBase__LifeCycleStatus_Unwrapped : int32_t {
__None = 0,
__PropagationStopped = 1,
__ImmediatePropagationStopped = 2,
__DefaultPrevented = 4,
__Dispatching = 8,
__Pooled = 16,
__IMGUIEventIsValid = 32,
__StopDispatch = 64,
__PropagateToIMGUI = 128,
__Dispatched = 512,
__Processed = 1024,
__ProcessedByFocusController = 2048,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__EventBase__LifeCycleStatus_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__EventBase__LifeCycleStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const None;

/// @brief Field PropagationStopped offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const PropagationStopped;

/// @brief Field ImmediatePropagationStopped offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const ImmediatePropagationStopped;

/// @brief Field DefaultPrevented offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const DefaultPrevented;

/// @brief Field Dispatching offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const Dispatching;

/// @brief Field Pooled offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const Pooled;

/// @brief Field IMGUIEventIsValid offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const IMGUIEventIsValid;

/// @brief Field StopDispatch offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const StopDispatch;

/// @brief Field PropagateToIMGUI offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const PropagateToIMGUI;

/// @brief Field Dispatched offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const Dispatched;

/// @brief Field Processed offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const Processed;

/// @brief Field ProcessedByFocusController offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus const ProcessedByFocusController;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::EventBase
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7297))
// CS Name: UnityEngine.UIElements.EventBase
class CORDL_TYPE EventBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LifeCycleStatus = UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus;

using EventPropagation = UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~EventBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: " const&", def_value: None }]
constexpr EventBase(EventBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "&&", def_value: None }]
constexpr EventBase(EventBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventBase& operator=(EventBase&& o) noexcept = default;
  constexpr EventBase& operator=(EventBase const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_s_LastTypeId, put=__set_s_LastTypeId))  s_LastTypeId;

static void __set_s_LastTypeId(int64_t value) ;

static int64_t __get_s_LastTypeId() ;

static uint64_t __declspec(property(get=__get_s_NextEventId, put=__set_s_NextEventId))  s_NextEventId;

static void __set_s_NextEventId(uint64_t value) ;

static uint64_t __get_s_NextEventId() ;

 int64_t __declspec(property(get=__get__timestamp_k__BackingField, put=__set__timestamp_k__BackingField))  _timestamp_k__BackingField;

constexpr void __set__timestamp_k__BackingField(int64_t value) ;

constexpr int64_t __get__timestamp_k__BackingField() const;

 uint64_t __declspec(property(get=__get__eventId_k__BackingField, put=__set__eventId_k__BackingField))  _eventId_k__BackingField;

constexpr void __set__eventId_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__eventId_k__BackingField() const;

 uint64_t __declspec(property(get=__get__triggerEventId_k__BackingField, put=__set__triggerEventId_k__BackingField))  _triggerEventId_k__BackingField;

constexpr void __set__triggerEventId_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__triggerEventId_k__BackingField() const;

 UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation __declspec(property(get=__get__propagation_k__BackingField, put=__set__propagation_k__BackingField))  _propagation_k__BackingField;

constexpr void __set__propagation_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation __get__propagation_k__BackingField() const;

 UnityEngine::UIElements::PropagationPaths __declspec(property(get=__get_m_Path, put=__set_m_Path))  m_Path;

constexpr void __set_m_Path(UnityEngine::UIElements::PropagationPaths value) ;

constexpr UnityEngine::UIElements::PropagationPaths __get_m_Path() const;

 UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus __declspec(property(get=__get__lifeCycleStatus_k__BackingField, put=__set__lifeCycleStatus_k__BackingField))  _lifeCycleStatus_k__BackingField;

constexpr void __set__lifeCycleStatus_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus __get__lifeCycleStatus_k__BackingField() const;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=__get__leafTarget_k__BackingField, put=__set__leafTarget_k__BackingField))  _leafTarget_k__BackingField;

constexpr void __set__leafTarget_k__BackingField(UnityEngine::UIElements::IEventHandler value) ;

constexpr UnityEngine::UIElements::IEventHandler __get__leafTarget_k__BackingField() const;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(UnityEngine::UIElements::IEventHandler value) ;

constexpr UnityEngine::UIElements::IEventHandler __get_m_Target() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::IEventHandler> __declspec(property(get=__get__skipElements_k__BackingField, put=__set__skipElements_k__BackingField))  _skipElements_k__BackingField;

constexpr void __set__skipElements_k__BackingField(System::Collections::Generic::List_1<UnityEngine::UIElements::IEventHandler> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::IEventHandler> __get__skipElements_k__BackingField() const;

 UnityEngine::UIElements::PropagationPhase __declspec(property(get=__get__propagationPhase_k__BackingField, put=__set__propagationPhase_k__BackingField))  _propagationPhase_k__BackingField;

constexpr void __set__propagationPhase_k__BackingField(UnityEngine::UIElements::PropagationPhase value) ;

constexpr UnityEngine::UIElements::PropagationPhase __get__propagationPhase_k__BackingField() const;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=__get_m_CurrentTarget, put=__set_m_CurrentTarget))  m_CurrentTarget;

constexpr void __set_m_CurrentTarget(UnityEngine::UIElements::IEventHandler value) ;

constexpr UnityEngine::UIElements::IEventHandler __get_m_CurrentTarget() const;

 UnityEngine::Event __declspec(property(get=__get_m_ImguiEvent, put=__set_m_ImguiEvent))  m_ImguiEvent;

constexpr void __set_m_ImguiEvent(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get_m_ImguiEvent() const;

 UnityEngine::Vector2 __declspec(property(get=__get__originalMousePosition_k__BackingField, put=__set__originalMousePosition_k__BackingField))  _originalMousePosition_k__BackingField;

constexpr void __set__originalMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__originalMousePosition_k__BackingField() const;


// Properties

 int64_t __declspec(property(get=get_eventTypeId))  eventTypeId;

 int64_t __declspec(property(get=get_timestamp, put=set_timestamp))  timestamp;

 uint64_t __declspec(property(get=get_eventId, put=set_eventId))  eventId;

 uint64_t __declspec(property(put=set_triggerEventId))  triggerEventId;

 UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation __declspec(property(get=get_propagation, put=set_propagation))  propagation;

 UnityEngine::UIElements::PropagationPaths __declspec(property(get=get_path, put=set_path))  path;

 UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus __declspec(property(get=get_lifeCycleStatus, put=set_lifeCycleStatus))  lifeCycleStatus;

 bool __declspec(property(get=get_bubbles))  bubbles;

 bool __declspec(property(get=get_tricklesDown))  tricklesDown;

 bool __declspec(property(get=get_skipDisabledElements, put=set_skipDisabledElements))  skipDisabledElements;

 bool __declspec(property(get=get_ignoreCompositeRoots, put=set_ignoreCompositeRoots))  ignoreCompositeRoots;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=get_leafTarget, put=set_leafTarget))  leafTarget;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=get_target, put=set_target))  target;

 System::Collections::Generic::List_1<UnityEngine::UIElements::IEventHandler> __declspec(property(get=get_skipElements))  skipElements;

 bool __declspec(property(get=get_isPropagationStopped, put=set_isPropagationStopped))  isPropagationStopped;

 bool __declspec(property(get=get_isImmediatePropagationStopped, put=set_isImmediatePropagationStopped))  isImmediatePropagationStopped;

 bool __declspec(property(get=get_isDefaultPrevented, put=set_isDefaultPrevented))  isDefaultPrevented;

 UnityEngine::UIElements::PropagationPhase __declspec(property(get=get_propagationPhase, put=set_propagationPhase))  propagationPhase;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=get_currentTarget, put=set_currentTarget))  currentTarget;

 bool __declspec(property(get=get_dispatch, put=set_dispatch))  dispatch;

 bool __declspec(property(get=get_dispatched, put=set_dispatched))  dispatched;

 bool __declspec(property(get=get_processed, put=set_processed))  processed;

 bool __declspec(property(get=get_processedByFocusController, put=set_processedByFocusController))  processedByFocusController;

 bool __declspec(property(get=get_stopDispatch, put=set_stopDispatch))  stopDispatch;

 bool __declspec(property(get=get_propagateToIMGUI, put=set_propagateToIMGUI))  propagateToIMGUI;

 bool __declspec(property(get=get_imguiEventIsValid, put=set_imguiEventIsValid))  imguiEventIsValid;

 UnityEngine::Event __declspec(property(get=get_imguiEvent, put=set_imguiEvent))  imguiEvent;

 UnityEngine::Vector2 __declspec(property(get=get_originalMousePosition, put=set_originalMousePosition))  originalMousePosition;

 bool __declspec(property(get=get_pooled, put=set_pooled))  pooled;


// Methods

/// @brief Method RegisterEventType addr 0x2d0875c size 0x50 virtual false final false
static int64_t RegisterEventType() ;

/// @brief Method get_eventTypeId addr 0x2d087ac size 0x8 virtual true final false
 int64_t get_eventTypeId() ;

/// @brief Method get_timestamp addr 0x2d087b4 size 0x8 virtual false final false
 int64_t get_timestamp() ;

/// @brief Method set_timestamp addr 0x2d087bc size 0x8 virtual false final false
 void set_timestamp(int64_t value) ;

/// @brief Method get_eventId addr 0x2d087c4 size 0x8 virtual false final false
 uint64_t get_eventId() ;

/// @brief Method set_eventId addr 0x2d087cc size 0x8 virtual false final false
 void set_eventId(uint64_t value) ;

/// @brief Method set_triggerEventId addr 0x2d087d4 size 0x8 virtual false final false
 void set_triggerEventId(uint64_t value) ;

/// @brief Method SetTriggerEventId addr 0x2d087dc size 0x8 virtual false final false
 void SetTriggerEventId(uint64_t id) ;

/// @brief Method get_propagation addr 0x2d087e4 size 0x8 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation get_propagation() ;

/// @brief Method set_propagation addr 0x2d087ec size 0x8 virtual false final false
 void set_propagation(UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation value) ;

/// @brief Method get_path addr 0x2d087f4 size 0xe0 virtual false final false
 UnityEngine::UIElements::PropagationPaths get_path() ;

/// @brief Method set_path addr 0x2d088ec size 0x64 virtual false final false
 void set_path(UnityEngine::UIElements::PropagationPaths value) ;

/// @brief Method get_lifeCycleStatus addr 0x2d08950 size 0x8 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus get_lifeCycleStatus() ;

/// @brief Method set_lifeCycleStatus addr 0x2d08958 size 0x8 virtual false final false
 void set_lifeCycleStatus(UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus value) ;

/// @brief Method PreDispatch addr 0x2d08960 size 0x4 virtual true final false
 void PreDispatch() ;

/// @brief Method PreDispatch addr 0x2d08964 size 0xc virtual true final false
 void PreDispatch(UnityEngine::UIElements::IPanel panel) ;

/// @brief Method PostDispatch addr 0x2d08970 size 0x4 virtual true final false
 void PostDispatch() ;

/// @brief Method PostDispatch addr 0x2d08974 size 0x28 virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

/// @brief Method get_bubbles addr 0x2d088e0 size 0xc virtual false final false
 bool get_bubbles() ;

/// @brief Method get_tricklesDown addr 0x2d088d4 size 0xc virtual false final false
 bool get_tricklesDown() ;

/// @brief Method get_skipDisabledElements addr 0x2d067c4 size 0xc virtual false final false
 bool get_skipDisabledElements() ;

/// @brief Method set_skipDisabledElements addr 0x2d05b4c size 0x1c virtual false final false
 void set_skipDisabledElements(bool value) ;

/// @brief Method get_ignoreCompositeRoots addr 0x2d07974 size 0xc virtual false final false
 bool get_ignoreCompositeRoots() ;

/// @brief Method set_ignoreCompositeRoots addr 0x2d07efc size 0x1c virtual false final false
 void set_ignoreCompositeRoots(bool value) ;

/// @brief Method get_leafTarget addr 0x2d089b8 size 0x8 virtual false final false
 UnityEngine::UIElements::IEventHandler get_leafTarget() ;

/// @brief Method set_leafTarget addr 0x2d089c0 size 0x8 virtual false final false
 void set_leafTarget(UnityEngine::UIElements::IEventHandler value) ;

/// @brief Method get_target addr 0x2cf8098 size 0x8 virtual false final false
 UnityEngine::UIElements::IEventHandler get_target() ;

/// @brief Method set_target addr 0x2d05b34 size 0x18 virtual false final false
 void set_target(UnityEngine::UIElements::IEventHandler value) ;

/// @brief Method get_skipElements addr 0x2d089c8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::IEventHandler> get_skipElements() ;

/// @brief Method Skip addr 0x2d06b50 size 0x58 virtual false final false
 bool Skip(UnityEngine::UIElements::IEventHandler h) ;

/// @brief Method get_isPropagationStopped addr 0x2d072f4 size 0xc virtual false final false
 bool get_isPropagationStopped() ;

/// @brief Method set_isPropagationStopped addr 0x2d089d0 size 0x1c virtual false final false
 void set_isPropagationStopped(bool value) ;

/// @brief Method StopPropagation addr 0x2cf80a0 size 0x10 virtual false final false
 void StopPropagation() ;

/// @brief Method get_isImmediatePropagationStopped addr 0x2d067b8 size 0xc virtual false final false
 bool get_isImmediatePropagationStopped() ;

/// @brief Method set_isImmediatePropagationStopped addr 0x2d089ec size 0x1c virtual false final false
 void set_isImmediatePropagationStopped(bool value) ;

/// @brief Method StopImmediatePropagation addr 0x2d08a08 size 0x10 virtual false final false
 void StopImmediatePropagation() ;

/// @brief Method get_isDefaultPrevented addr 0x2d08a18 size 0xc virtual false final false
 bool get_isDefaultPrevented() ;

/// @brief Method set_isDefaultPrevented addr 0x2d08a24 size 0x1c virtual false final false
 void set_isDefaultPrevented(bool value) ;

/// @brief Method PreventDefault addr 0x2cfd6b4 size 0x18 virtual false final false
 void PreventDefault() ;

/// @brief Method get_propagationPhase addr 0x2d08a40 size 0x8 virtual false final false
 UnityEngine::UIElements::PropagationPhase get_propagationPhase() ;

/// @brief Method set_propagationPhase addr 0x2d08a48 size 0x8 virtual false final false
 void set_propagationPhase(UnityEngine::UIElements::PropagationPhase value) ;

/// @brief Method get_currentTarget addr 0x2d08a50 size 0x8 virtual true final false
 UnityEngine::UIElements::IEventHandler get_currentTarget() ;

/// @brief Method set_currentTarget addr 0x2d08a58 size 0xe4 virtual true final false
 void set_currentTarget(UnityEngine::UIElements::IEventHandler value) ;

/// @brief Method get_dispatch addr 0x2d08b3c size 0xc virtual false final false
 bool get_dispatch() ;

/// @brief Method set_dispatch addr 0x2d05b14 size 0x20 virtual false final false
 void set_dispatch(bool value) ;

/// @brief Method MarkReceivedByDispatcher addr 0x2d08b64 size 0x88 virtual false final false
 void MarkReceivedByDispatcher() ;

/// @brief Method get_dispatched addr 0x2d08bec size 0xc virtual false final false
 bool get_dispatched() ;

/// @brief Method set_dispatched addr 0x2d08b48 size 0x1c virtual false final false
 void set_dispatched(bool value) ;

/// @brief Method get_processed addr 0x2d08bf8 size 0xc virtual false final false
 bool get_processed() ;

/// @brief Method set_processed addr 0x2d0899c size 0x1c virtual false final false
 void set_processed(bool value) ;

/// @brief Method get_processedByFocusController addr 0x2d08c04 size 0xc virtual false final false
 bool get_processedByFocusController() ;

/// @brief Method set_processedByFocusController addr 0x2d08c10 size 0x1c virtual false final false
 void set_processedByFocusController(bool value) ;

/// @brief Method get_stopDispatch addr 0x2d08c2c size 0xc virtual false final false
 bool get_stopDispatch() ;

/// @brief Method set_stopDispatch addr 0x2d05b68 size 0x1c virtual false final false
 void set_stopDispatch(bool value) ;

/// @brief Method get_propagateToIMGUI addr 0x2d07de8 size 0xc virtual false final false
 bool get_propagateToIMGUI() ;

/// @brief Method set_propagateToIMGUI addr 0x2d05b84 size 0x1c virtual false final false
 void set_propagateToIMGUI(bool value) ;

/// @brief Method get_imguiEventIsValid addr 0x2d08c38 size 0xc virtual false final false
 bool get_imguiEventIsValid() ;

/// @brief Method set_imguiEventIsValid addr 0x2d08c44 size 0x1c virtual false final false
 void set_imguiEventIsValid(bool value) ;

/// @brief Method get_imguiEvent addr 0x2d08048 size 0x18 virtual false final false
 UnityEngine::Event get_imguiEvent() ;

/// @brief Method set_imguiEvent addr 0x2d04910 size 0xb4 virtual false final false
 void set_imguiEvent(UnityEngine::Event value) ;

/// @brief Method get_originalMousePosition addr 0x2d08c60 size 0x8 virtual false final false
 UnityEngine::Vector2 get_originalMousePosition() ;

/// @brief Method set_originalMousePosition addr 0x2d08c68 size 0x8 virtual false final false
 void set_originalMousePosition(UnityEngine::Vector2 value) ;

/// @brief Method Init addr 0x2d08c70 size 0x4 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2d08c74 size 0x140 virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit EventBase() ;

/// @brief Method .ctor addr 0x2d08dd0 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method get_pooled addr 0x2d08e58 size 0xc virtual false final false
 bool get_pooled() ;

/// @brief Method set_pooled addr 0x2d08db4 size 0x1c virtual false final false
 void set_pooled(bool value) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual true final false
 void Acquire() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__EventBase__EventPropagation, "UnityEngine.UIElements", "EventBase/EventPropagation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__EventBase__LifeCycleStatus, "UnityEngine.UIElements", "EventBase/LifeCycleStatus");
NEED_NO_BOX(UnityEngine::UIElements::EventBase);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EventBase, "UnityEngine.UIElements", "EventBase");
