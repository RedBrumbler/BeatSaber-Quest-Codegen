#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__FramePressState;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__InputButton;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PointerInputModule;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__PointerInputModule__ButtonState;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__PointerInputModule__MouseState;
}
// Type: ::ButtonState
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13158))
// CS Name: UnityEngine.EventSystems.PointerInputModule::ButtonState
class CORDL_TYPE UnityEngine__EventSystems__PointerInputModule__ButtonState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__EventSystems__PointerInputModule__ButtonState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__PointerInputModule__ButtonState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__PointerInputModule__ButtonState(UnityEngine__EventSystems__PointerInputModule__ButtonState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__PointerInputModule__ButtonState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__PointerInputModule__ButtonState(UnityEngine__EventSystems__PointerInputModule__ButtonState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__PointerInputModule__ButtonState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__EventSystems__PointerInputModule__ButtonState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__PointerInputModule__ButtonState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__PointerInputModule__ButtonState& operator=(UnityEngine__EventSystems__PointerInputModule__ButtonState&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__PointerInputModule__ButtonState& operator=(UnityEngine__EventSystems__PointerInputModule__ButtonState const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton __declspec(property(get=__get_m_Button, put=__set_m_Button))  m_Button;

constexpr void __set_m_Button(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton __get_m_Button() const;

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData __declspec(property(get=__get_m_EventData, put=__set_m_EventData))  m_EventData;

constexpr void __set_m_EventData(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData __get_m_EventData() const;


// Properties

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData __declspec(property(get=get_eventData, put=set_eventData))  eventData;

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton __declspec(property(get=get_button, put=set_button))  button;


// Methods

/// @brief Method get_eventData addr 0x2c55e60 size 0x8 virtual false final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData get_eventData() ;

/// @brief Method set_eventData addr 0x2c55e68 size 0x8 virtual false final false
 void set_eventData(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData value) ;

/// @brief Method get_button addr 0x2c55e70 size 0x8 virtual false final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton get_button() ;

/// @brief Method set_button addr 0x2c55e78 size 0x8 virtual false final false
 void set_button(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton value) ;

// Ctor Parameters []
explicit UnityEngine__EventSystems__PointerInputModule__ButtonState() ;

/// @brief Method .ctor addr 0x2c55e80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::MouseState
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13159))
// CS Name: UnityEngine.EventSystems.PointerInputModule::MouseState
class CORDL_TYPE UnityEngine__EventSystems__PointerInputModule__MouseState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__EventSystems__PointerInputModule__MouseState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__PointerInputModule__MouseState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__PointerInputModule__MouseState(UnityEngine__EventSystems__PointerInputModule__MouseState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__PointerInputModule__MouseState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__PointerInputModule__MouseState(UnityEngine__EventSystems__PointerInputModule__MouseState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__PointerInputModule__MouseState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__EventSystems__PointerInputModule__MouseState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__PointerInputModule__MouseState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__PointerInputModule__MouseState& operator=(UnityEngine__EventSystems__PointerInputModule__MouseState&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__PointerInputModule__MouseState& operator=(UnityEngine__EventSystems__PointerInputModule__MouseState const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState> __declspec(property(get=__get_m_TrackedButtons, put=__set_m_TrackedButtons))  m_TrackedButtons;

constexpr void __set_m_TrackedButtons(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState> __get_m_TrackedButtons() const;


// Methods

/// @brief Method AnyPressesThisFrame addr 0x2c55e88 size 0xb4 virtual false final false
 bool AnyPressesThisFrame() ;

/// @brief Method AnyReleasesThisFrame addr 0x2c55f4c size 0xb8 virtual false final false
 bool AnyReleasesThisFrame() ;

/// @brief Method GetButtonState addr 0x2c56018 size 0x198 virtual false final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState GetButtonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton button) ;

/// @brief Method SetButtonState addr 0x2c55414 size 0x38 virtual false final false
 void SetButtonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__InputButton button, UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState stateForMouseButton, UnityEngine::EventSystems::PointerEventData data) ;

// Ctor Parameters []
explicit UnityEngine__EventSystems__PointerInputModule__MouseState() ;

/// @brief Method .ctor addr 0x2c55de4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::MouseButtonEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13160))
// CS Name: UnityEngine.EventSystems.PointerInputModule::MouseButtonEventData
class CORDL_TYPE UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData(UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData(UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData& operator=(UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData& operator=(UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState __declspec(property(get=__get_buttonState, put=__set_buttonState))  buttonState;

constexpr void __set_buttonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState __get_buttonState() const;

 UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_buttonData, put=__set_buttonData))  buttonData;

constexpr void __set_buttonData(UnityEngine::EventSystems::PointerEventData value) ;

constexpr UnityEngine::EventSystems::PointerEventData __get_buttonData() const;


// Methods

/// @brief Method PressedThisFrame addr 0x2c55f3c size 0x10 virtual false final false
 bool PressedThisFrame() ;

/// @brief Method ReleasedThisFrame addr 0x2c56004 size 0x14 virtual false final false
 bool ReleasedThisFrame() ;

// Ctor Parameters []
explicit UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData() ;

/// @brief Method .ctor addr 0x2c561b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PointerInputModule
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13157))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13161))
// CS Name: UnityEngine.EventSystems.PointerInputModule
class CORDL_TYPE PointerInputModule : public UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
using MouseButtonEventData = UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData;

using MouseState = UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState;

using ButtonState = UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PointerInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: " const&", def_value: None }]
constexpr PointerInputModule(PointerInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "&&", def_value: None }]
constexpr PointerInputModule(PointerInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerInputModule(void* ptr) noexcept : UnityEngine::EventSystems::BaseInputModule(ptr) {
}


  constexpr PointerInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerInputModule& operator=(PointerInputModule&& o) noexcept = default;
  constexpr PointerInputModule& operator=(PointerInputModule const& o) noexcept = default;
                


// Fields

/// @brief Field kMouseLeftId offset 0
static constexpr int32_t  kMouseLeftId{-1};

/// @brief Field kMouseRightId offset 0
static constexpr int32_t  kMouseRightId{-2};

/// @brief Field kMouseMiddleId offset 0
static constexpr int32_t  kMouseMiddleId{-3};

/// @brief Field kFakeTouchesId offset 0
static constexpr int32_t  kFakeTouchesId{-4};

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::EventSystems::PointerEventData> __declspec(property(get=__get_m_PointerData, put=__set_m_PointerData))  m_PointerData;

constexpr void __set_m_PointerData(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::EventSystems::PointerEventData> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::EventSystems::PointerEventData> __get_m_PointerData() const;

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState __declspec(property(get=__get_m_MouseState, put=__set_m_MouseState))  m_MouseState;

constexpr void __set_m_MouseState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState __get_m_MouseState() const;


// Methods

/// @brief Method GetPointerData addr 0x2c54b40 size 0xe8 virtual false final false
 bool GetPointerData(int32_t id, ByRef<UnityEngine::EventSystems::PointerEventData> data, bool create) ;

/// @brief Method RemovePointerData addr 0x2c54c28 size 0x5c virtual false final false
 void RemovePointerData(UnityEngine::EventSystems::PointerEventData data) ;

/// @brief Method GetTouchPointerEventData addr 0x2c54c84 size 0x368 virtual false final false
 UnityEngine::EventSystems::PointerEventData GetTouchPointerEventData(UnityEngine::Touch input, ByRef<bool> pressed, ByRef<bool> released) ;

/// @brief Method CopyFromTo addr 0x2c54fec size 0x90 virtual false final false
 void CopyFromTo(UnityEngine::EventSystems::PointerEventData from, UnityEngine::EventSystems::PointerEventData to) ;

/// @brief Method StateForMouseButton addr 0x2c5507c size 0x7c virtual false final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState StateForMouseButton(int32_t buttonId) ;

/// @brief Method GetMousePointerEventData addr 0x2c550f8 size 0x14 virtual true final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState GetMousePointerEventData() ;

/// @brief Method GetMousePointerEventData addr 0x2c5510c size 0x308 virtual true final false
 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState GetMousePointerEventData(int32_t id) ;

/// @brief Method GetLastPointerEventData addr 0x2c5544c size 0x20 virtual false final false
 UnityEngine::EventSystems::PointerEventData GetLastPointerEventData(int32_t id) ;

/// @brief Method ShouldStartDrag addr 0x2c5546c size 0x30 virtual false final false
static bool ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) ;

/// @brief Method ProcessMove addr 0x2c5549c size 0x44 virtual true final false
 void ProcessMove(UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method ProcessDrag addr 0x2c554e0 size 0x2a8 virtual true final false
 void ProcessDrag(UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method IsPointerOverGameObject addr 0x2c55788 size 0x9c virtual true final false
 bool IsPointerOverGameObject(int32_t pointerId) ;

/// @brief Method ClearSelection addr 0x2c55824 size 0x1c0 virtual false final false
 void ClearSelection() ;

/// @brief Method ToString addr 0x2c559e4 size 0x270 virtual true final false
 ::StringW ToString() ;

/// @brief Method DeselectIfSelectionChanged addr 0x2c55c54 size 0xec virtual false final false
 void DeselectIfSelectionChanged(UnityEngine::GameObject currentOverGo, UnityEngine::EventSystems::BaseEventData pointerEvent) ;

// Ctor Parameters []
explicit PointerInputModule() ;

/// @brief Method .ctor addr 0x2c55d40 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::PointerInputModule);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule, "UnityEngine.EventSystems", "PointerInputModule");
NEED_NO_BOX(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__ButtonState, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
NEED_NO_BOX(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseButtonEventData, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
NEED_NO_BOX(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerInputModule__MouseState, "UnityEngine.EventSystems", "PointerInputModule/MouseState");
