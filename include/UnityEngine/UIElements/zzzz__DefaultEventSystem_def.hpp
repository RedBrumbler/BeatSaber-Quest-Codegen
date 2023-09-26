#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Touch;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__DefaultEventSystem__UpdateMode;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DefaultEventSystem__IInput;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DefaultEventSystem__Input;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DefaultEventSystem__NoInput;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DefaultEventSystem____c;
}
// Type: ::UpdateMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6866))
// CS Name: UnityEngine.UIElements.DefaultEventSystem::UpdateMode
struct CORDL_TYPE UnityEngine__UIElements__DefaultEventSystem__UpdateMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem__UpdateMode(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__DefaultEventSystem__UpdateMode(UnityEngine__UIElements__DefaultEventSystem__UpdateMode const&) = default;
                    constexpr UnityEngine__UIElements__DefaultEventSystem__UpdateMode(UnityEngine__UIElements__DefaultEventSystem__UpdateMode&&) = default;
                    constexpr UnityEngine__UIElements__DefaultEventSystem__UpdateMode& operator=(UnityEngine__UIElements__DefaultEventSystem__UpdateMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__DefaultEventSystem__UpdateMode& operator=(UnityEngine__UIElements__DefaultEventSystem__UpdateMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DefaultEventSystem__UpdateMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__DefaultEventSystem__UpdateMode_Unwrapped : int32_t {
__Always = 0,
__IgnoreIfAppNotFocused = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__DefaultEventSystem__UpdateMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__DefaultEventSystem__UpdateMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Always offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__UpdateMode const Always;

/// @brief Field IgnoreIfAppNotFocused offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__UpdateMode const IgnoreIfAppNotFocused;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::IInput
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6867))
// CS Name: UnityEngine.UIElements.DefaultEventSystem::IInput
class CORDL_TYPE UnityEngine__UIElements__DefaultEventSystem__IInput : public ::cordl_internals::InterfaceW {
public:
// Declarations
~UnityEngine__UIElements__DefaultEventSystem__IInput() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DefaultEventSystem__IInput(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_touchCount))  touchCount;

 bool __declspec(property(get=get_mousePresent))  mousePresent;


// Methods

/// @brief Method GetButtonDown addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetButtonDown(::StringW button) ;

/// @brief Method GetAxisRaw addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetAxisRaw(::StringW axis) ;

/// @brief Method get_touchCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_touchCount() ;

/// @brief Method GetTouch addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Touch GetTouch(int32_t index) ;

/// @brief Method get_mousePresent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_mousePresent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Input
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6868))
// CS Name: UnityEngine.UIElements.DefaultEventSystem::Input
class CORDL_TYPE UnityEngine__UIElements__DefaultEventSystem__Input : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput
constexpr operator  UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__DefaultEventSystem__Input() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DefaultEventSystem__Input", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem__Input(UnityEngine__UIElements__DefaultEventSystem__Input const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DefaultEventSystem__Input", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem__Input(UnityEngine__UIElements__DefaultEventSystem__Input&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DefaultEventSystem__Input(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__DefaultEventSystem__Input& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DefaultEventSystem__Input& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DefaultEventSystem__Input& operator=(UnityEngine__UIElements__DefaultEventSystem__Input&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DefaultEventSystem__Input& operator=(UnityEngine__UIElements__DefaultEventSystem__Input const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_touchCount))  touchCount;

 bool __declspec(property(get=get_mousePresent))  mousePresent;


// Methods

/// @brief Method GetButtonDown addr 0x2c6fc54 size 0xc virtual true final true
 bool GetButtonDown(::StringW button) ;

/// @brief Method GetAxisRaw addr 0x2c6fc60 size 0xc virtual true final true
 float_t GetAxisRaw(::StringW axis) ;

/// @brief Method get_touchCount addr 0x2c6fc6c size 0x8 virtual true final true
 int32_t get_touchCount() ;

/// @brief Method GetTouch addr 0x2c6fc74 size 0x38 virtual true final true
 UnityEngine::Touch GetTouch(int32_t index) ;

/// @brief Method get_mousePresent addr 0x2c6fcac size 0x8 virtual true final true
 bool get_mousePresent() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__DefaultEventSystem__Input() ;

/// @brief Method .ctor addr 0x2c6e52c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::NoInput
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6869))
// CS Name: UnityEngine.UIElements.DefaultEventSystem::NoInput
class CORDL_TYPE UnityEngine__UIElements__DefaultEventSystem__NoInput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput
constexpr operator  UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__DefaultEventSystem__NoInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DefaultEventSystem__NoInput", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem__NoInput(UnityEngine__UIElements__DefaultEventSystem__NoInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DefaultEventSystem__NoInput", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem__NoInput(UnityEngine__UIElements__DefaultEventSystem__NoInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DefaultEventSystem__NoInput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__DefaultEventSystem__NoInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DefaultEventSystem__NoInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DefaultEventSystem__NoInput& operator=(UnityEngine__UIElements__DefaultEventSystem__NoInput&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DefaultEventSystem__NoInput& operator=(UnityEngine__UIElements__DefaultEventSystem__NoInput const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_touchCount))  touchCount;

 bool __declspec(property(get=get_mousePresent))  mousePresent;


// Methods

/// @brief Method GetButtonDown addr 0x2c6fcb4 size 0x8 virtual true final true
 bool GetButtonDown(::StringW button) ;

/// @brief Method GetAxisRaw addr 0x2c6fcbc size 0x8 virtual true final true
 float_t GetAxisRaw(::StringW axis) ;

/// @brief Method get_touchCount addr 0x2c6fcc4 size 0x8 virtual true final true
 int32_t get_touchCount() ;

/// @brief Method GetTouch addr 0x2c6fccc size 0x14 virtual true final true
 UnityEngine::Touch GetTouch(int32_t index) ;

/// @brief Method get_mousePresent addr 0x2c6fce0 size 0x8 virtual true final true
 bool get_mousePresent() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__DefaultEventSystem__NoInput() ;

/// @brief Method .ctor addr 0x2c6e534 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6870))
// CS Name: UnityEngine.UIElements.DefaultEventSystem::<>c
class CORDL_TYPE UnityEngine__UIElements__DefaultEventSystem____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__DefaultEventSystem____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DefaultEventSystem____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem____c(UnityEngine__UIElements__DefaultEventSystem____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DefaultEventSystem____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DefaultEventSystem____c(UnityEngine__UIElements__DefaultEventSystem____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DefaultEventSystem____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__DefaultEventSystem____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DefaultEventSystem____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DefaultEventSystem____c& operator=(UnityEngine__UIElements__DefaultEventSystem____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DefaultEventSystem____c& operator=(UnityEngine__UIElements__DefaultEventSystem____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem____c __get___9() ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__23_0, put=__set___9__23_0))  __9__23_0;

static void __set___9__23_0(System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> value) ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __get___9__23_0() ;

static System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__23_1, put=__set___9__23_1))  __9__23_1;

static void __set___9__23_1(System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> value) ;

static System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __get___9__23_1() ;

static System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__23_2, put=__set___9__23_2))  __9__23_2;

static void __set___9__23_2(System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> value) ;

static System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __get___9__23_2() ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__24_0, put=__set___9__24_0))  __9__24_0;

static void __set___9__24_0(System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> value) ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __get___9__24_0() ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__24_1, put=__set___9__24_1))  __9__24_1;

static void __set___9__24_1(System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> value) ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __get___9__24_1() ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__24_2, put=__set___9__24_2))  __9__24_2;

static void __set___9__24_2(System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> value) ;

static System::Func_2<UnityEngine::UIElements::DefaultEventSystem,UnityEngine::UIElements::EventBase> __get___9__24_2() ;

static System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::Touch,UnityEngine::UIElements::EventBase> __declspec(property(get=__get___9__30_0, put=__set___9__30_0))  __9__30_0;

static void __set___9__30_0(System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::Touch,UnityEngine::UIElements::EventBase> value) ;

static System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,UnityEngine::Touch,UnityEngine::UIElements::EventBase> __get___9__30_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__DefaultEventSystem____c() ;

/// @brief Method .ctor addr 0x2c6fd4c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SendIMGUIEvents>b__23_0 addr 0x2c6fd54 size 0x64 virtual false final false
 UnityEngine::UIElements::EventBase _SendIMGUIEvents_b__23_0(UnityEngine::UIElements::DefaultEventSystem self) ;

/// @brief Method <SendIMGUIEvents>b__23_1 addr 0x2c6fdb8 size 0x8c virtual false final false
 UnityEngine::UIElements::EventBase _SendIMGUIEvents_b__23_1(UnityEngine::Vector3 panelPosition, UnityEngine::Vector3 panelDelta, UnityEngine::UIElements::DefaultEventSystem self) ;

/// @brief Method <SendIMGUIEvents>b__23_2 addr 0x2c6fe44 size 0xb4 virtual false final false
 UnityEngine::UIElements::EventBase _SendIMGUIEvents_b__23_2(UnityEngine::Vector3 panelPosition, UnityEngine::Vector3 panelDelta, UnityEngine::UIElements::DefaultEventSystem self) ;

/// @brief Method <SendInputEvents>b__24_0 addr 0x2c6fef8 size 0x20 virtual false final false
 UnityEngine::UIElements::EventBase _SendInputEvents_b__24_0(UnityEngine::UIElements::DefaultEventSystem self) ;

/// @brief Method <SendInputEvents>b__24_1 addr 0x2c6ff18 size 0x64 virtual false final false
 UnityEngine::UIElements::EventBase _SendInputEvents_b__24_1(UnityEngine::UIElements::DefaultEventSystem self) ;

/// @brief Method <SendInputEvents>b__24_2 addr 0x2c6ff7c size 0x64 virtual false final false
 UnityEngine::UIElements::EventBase _SendInputEvents_b__24_2(UnityEngine::UIElements::DefaultEventSystem self) ;

/// @brief Method <ProcessTouchEvents>b__30_0 addr 0x2c6ffe0 size 0xcc virtual false final false
 UnityEngine::UIElements::EventBase _ProcessTouchEvents_b__30_0(UnityEngine::Vector3 panelPosition, UnityEngine::Vector3 panelDelta, UnityEngine::Touch _touch) ;

/// @brief Method <.cctor>b__41_0 addr 0x2c700ac size 0x8 virtual false final false
 bool __cctor_b__41_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DefaultEventSystem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6871))
// CS Name: UnityEngine.UIElements.DefaultEventSystem
class CORDL_TYPE DefaultEventSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem____c;

using NoInput = UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__NoInput;

using Input = UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__Input;

using IInput = UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput;

using UpdateMode = UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__UpdateMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~DefaultEventSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: " const&", def_value: None }]
constexpr DefaultEventSystem(DefaultEventSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "&&", def_value: None }]
constexpr DefaultEventSystem(DefaultEventSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultEventSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultEventSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultEventSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultEventSystem& operator=(DefaultEventSystem&& o) noexcept = default;
  constexpr DefaultEventSystem& operator=(DefaultEventSystem const& o) noexcept = default;
                


// Fields

static System::Func_1<bool> __declspec(property(get=__get_IsEditorRemoteConnected, put=__set_IsEditorRemoteConnected))  IsEditorRemoteConnected;

static void __set_IsEditorRemoteConnected(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_IsEditorRemoteConnected() ;

 UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput __declspec(property(get=__get_m_Input, put=__set_m_Input))  m_Input;

constexpr void __set_m_Input(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput __get_m_Input() const;

 ::StringW __declspec(property(get=__get_m_HorizontalAxis, put=__set_m_HorizontalAxis))  m_HorizontalAxis;

constexpr void __set_m_HorizontalAxis(::StringW value) ;

constexpr ::StringW __get_m_HorizontalAxis() const;

 ::StringW __declspec(property(get=__get_m_VerticalAxis, put=__set_m_VerticalAxis))  m_VerticalAxis;

constexpr void __set_m_VerticalAxis(::StringW value) ;

constexpr ::StringW __get_m_VerticalAxis() const;

 ::StringW __declspec(property(get=__get_m_SubmitButton, put=__set_m_SubmitButton))  m_SubmitButton;

constexpr void __set_m_SubmitButton(::StringW value) ;

constexpr ::StringW __get_m_SubmitButton() const;

 ::StringW __declspec(property(get=__get_m_CancelButton, put=__set_m_CancelButton))  m_CancelButton;

constexpr void __set_m_CancelButton(::StringW value) ;

constexpr ::StringW __get_m_CancelButton() const;

 float_t __declspec(property(get=__get_m_InputActionsPerSecond, put=__set_m_InputActionsPerSecond))  m_InputActionsPerSecond;

constexpr void __set_m_InputActionsPerSecond(float_t value) ;

constexpr float_t __get_m_InputActionsPerSecond() const;

 float_t __declspec(property(get=__get_m_RepeatDelay, put=__set_m_RepeatDelay))  m_RepeatDelay;

constexpr void __set_m_RepeatDelay(float_t value) ;

constexpr float_t __get_m_RepeatDelay() const;

 bool __declspec(property(get=__get_m_SendingTouchEvents, put=__set_m_SendingTouchEvents))  m_SendingTouchEvents;

constexpr void __set_m_SendingTouchEvents(bool value) ;

constexpr bool __get_m_SendingTouchEvents() const;

 UnityEngine::Event __declspec(property(get=__get_m_Event, put=__set_m_Event))  m_Event;

constexpr void __set_m_Event(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get_m_Event() const;

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=__get_m_FocusedPanel, put=__set_m_FocusedPanel))  m_FocusedPanel;

constexpr void __set_m_FocusedPanel(UnityEngine::UIElements::BaseRuntimePanel value) ;

constexpr UnityEngine::UIElements::BaseRuntimePanel __get_m_FocusedPanel() const;

 int32_t __declspec(property(get=__get_m_ConsecutiveMoveCount, put=__set_m_ConsecutiveMoveCount))  m_ConsecutiveMoveCount;

constexpr void __set_m_ConsecutiveMoveCount(int32_t value) ;

constexpr int32_t __get_m_ConsecutiveMoveCount() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_LastMoveVector, put=__set_m_LastMoveVector))  m_LastMoveVector;

constexpr void __set_m_LastMoveVector(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_LastMoveVector() const;

 float_t __declspec(property(get=__get_m_PrevActionTime, put=__set_m_PrevActionTime))  m_PrevActionTime;

constexpr void __set_m_PrevActionTime(float_t value) ;

constexpr float_t __get_m_PrevActionTime() const;


// Properties

 bool __declspec(property(get=get_isAppFocused))  isAppFocused;

 UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput __declspec(property(get=get_input))  input;

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=get_focusedPanel, put=set_focusedPanel))  focusedPanel;


// Methods

/// @brief Method get_isAppFocused addr 0x2c6e36c size 0x8 virtual false final false
 bool get_isAppFocused() ;

/// @brief Method get_input addr 0x2c6e374 size 0x24 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput get_input() ;

/// @brief Method GetDefaultInput addr 0x2c6e398 size 0x194 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput GetDefaultInput() ;

/// @brief Method ShouldIgnoreEventsOnAppNotFocused addr 0x2c6e53c size 0x20 virtual false final false
 bool ShouldIgnoreEventsOnAppNotFocused() ;

/// @brief Method get_focusedPanel addr 0x2c6e55c size 0x8 virtual false final false
 UnityEngine::UIElements::BaseRuntimePanel get_focusedPanel() ;

/// @brief Method set_focusedPanel addr 0x2c6e564 size 0x78 virtual false final false
 void set_focusedPanel(UnityEngine::UIElements::BaseRuntimePanel value) ;

/// @brief Method Update addr 0x2c6e634 size 0x6c virtual false final false
 void Update(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__UpdateMode updateMode) ;

/// @brief Method SendIMGUIEvents addr 0x2c6eaf0 size 0x4c0 virtual false final false
 void SendIMGUIEvents() ;

/// @brief Method SendInputEvents addr 0x2c6efb0 size 0x35c virtual false final false
 void SendInputEvents() ;

/// @brief Method SendFocusBasedEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg>
 void SendFocusBasedEvent(System::Func_2<TArg,UnityEngine::UIElements::EventBase> evtFactory, TArg arg) ;

/// @brief Method SendPositionBasedEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg>
 void SendPositionBasedEvent(UnityEngine::Vector3 mousePosition, UnityEngine::Vector3 delta, int32_t pointerId, System::Nullable_1<int32_t> targetDisplay, System::Func_4<UnityEngine::Vector3,UnityEngine::Vector3,TArg,UnityEngine::UIElements::EventBase> evtFactory, TArg arg, bool deselectIfNoTarget) ;

/// @brief Method UpdateFocusedPanel addr 0x2c6f5e0 size 0x74 virtual false final false
 void UpdateFocusedPanel(UnityEngine::UIElements::BaseRuntimePanel runtimePanel) ;

/// @brief Method MakeTouchEvent addr 0x2c6f654 size 0x190 virtual false final false
static UnityEngine::UIElements::EventBase MakeTouchEvent(UnityEngine::Touch touch, UnityEngine::EventModifiers modifiers) ;

/// @brief Method ProcessTouchEvents addr 0x2c6e6a0 size 0x450 virtual false final false
 bool ProcessTouchEvents() ;

/// @brief Method GetRawMoveVector addr 0x2c6f7e4 size 0x2b8 virtual false final false
 UnityEngine::Vector2 GetRawMoveVector() ;

/// @brief Method ShouldSendMoveFromInput addr 0x2c6f328 size 0x2b8 virtual false final false
 bool ShouldSendMoveFromInput() ;

/// @brief Method GetLocalScreenPosition addr 0x2c6f30c size 0x1c virtual false final false
static UnityEngine::Vector2 GetLocalScreenPosition(UnityEngine::Event evt, ByRef<System::Nullable_1<int32_t>> targetDisplay) ;

// Ctor Parameters []
explicit DefaultEventSystem() ;

/// @brief Method .ctor addr 0x2c6fa9c size 0xf4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__UpdateMode, "UnityEngine.UIElements", "DefaultEventSystem/UpdateMode");
NEED_NO_BOX(UnityEngine::UIElements::DefaultEventSystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DefaultEventSystem, "UnityEngine.UIElements", "DefaultEventSystem");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__IInput, "UnityEngine.UIElements", "DefaultEventSystem/IInput");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__Input);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__Input, "UnityEngine.UIElements", "DefaultEventSystem/Input");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__NoInput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem__NoInput, "UnityEngine.UIElements", "DefaultEventSystem/NoInput");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DefaultEventSystem____c, "UnityEngine.UIElements", "DefaultEventSystem/<>c");
