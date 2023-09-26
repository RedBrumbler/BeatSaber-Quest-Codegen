#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::LowLevel {
class ICustomDeviceReset;
}
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Touchscreen;
}
// Type: UnityEngine.InputSystem::Touchscreen
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6349))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6390))
// CS Name: UnityEngine.InputSystem.Touchscreen
class CORDL_TYPE Touchscreen : public UnityEngine::InputSystem::Pointer {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IEventMerger
constexpr operator  UnityEngine::InputSystem::LowLevel::IEventMerger() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::ICustomDeviceReset
constexpr operator  UnityEngine::InputSystem::LowLevel::ICustomDeviceReset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~Touchscreen() = default;

// Ctor Parameters [CppParam { name: "", ty: "Touchscreen", modifiers: " const&", def_value: None }]
constexpr Touchscreen(Touchscreen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Touchscreen", modifiers: "&&", def_value: None }]
constexpr Touchscreen(Touchscreen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Touchscreen(void* ptr) noexcept : UnityEngine::InputSystem::Pointer(ptr) {
}


  constexpr Touchscreen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Touchscreen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Touchscreen& operator=(Touchscreen&& o) noexcept = default;
  constexpr Touchscreen& operator=(Touchscreen const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::TouchControl __declspec(property(get=__get__primaryTouch_k__BackingField, put=__set__primaryTouch_k__BackingField))  _primaryTouch_k__BackingField;

constexpr void __set__primaryTouch_k__BackingField(UnityEngine::InputSystem::Controls::TouchControl value) ;

constexpr UnityEngine::InputSystem::Controls::TouchControl __get__primaryTouch_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::TouchControl> __declspec(property(get=__get__touches_k__BackingField, put=__set__touches_k__BackingField))  _touches_k__BackingField;

constexpr void __set__touches_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::TouchControl> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::TouchControl> __get__touches_k__BackingField() const;

static UnityEngine::InputSystem::Touchscreen __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Touchscreen value) ;

static UnityEngine::InputSystem::Touchscreen __get__current_k__BackingField() ;

static float_t __declspec(property(get=__get_s_TapTime, put=__set_s_TapTime))  s_TapTime;

static void __set_s_TapTime(float_t value) ;

static float_t __get_s_TapTime() ;

static float_t __declspec(property(get=__get_s_TapDelayTime, put=__set_s_TapDelayTime))  s_TapDelayTime;

static void __set_s_TapDelayTime(float_t value) ;

static float_t __get_s_TapDelayTime() ;

static float_t __declspec(property(get=__get_s_TapRadiusSquared, put=__set_s_TapRadiusSquared))  s_TapRadiusSquared;

static void __set_s_TapRadiusSquared(float_t value) ;

static float_t __get_s_TapRadiusSquared() ;


// Properties

 UnityEngine::InputSystem::Controls::TouchControl __declspec(property(get=get_primaryTouch, put=set_primaryTouch))  primaryTouch;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::TouchControl> __declspec(property(get=get_touches, put=set_touches))  touches;

 ::ArrayW<UnityEngine::InputSystem::Controls::TouchControl> __declspec(property(get=get_touchControlArray, put=set_touchControlArray))  touchControlArray;

static UnityEngine::InputSystem::Touchscreen __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_primaryTouch addr 0x2947bd0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl get_primaryTouch() ;

/// @brief Method set_primaryTouch addr 0x2947bd8 size 0x8 virtual false final false
 void set_primaryTouch(UnityEngine::InputSystem::Controls::TouchControl value) ;

/// @brief Method get_touches addr 0x2947be0 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::TouchControl> get_touches() ;

/// @brief Method set_touches addr 0x2947bec size 0x8 virtual false final false
 void set_touches(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::TouchControl> value) ;

/// @brief Method get_touchControlArray addr 0x2947bf4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Controls::TouchControl> get_touchControlArray() ;

/// @brief Method set_touchControlArray addr 0x2947bfc size 0x74 virtual false final false
 void set_touchControlArray(::ArrayW<UnityEngine::InputSystem::Controls::TouchControl> value) ;

/// @brief Method get_current addr 0x2947c70 size 0x48 virtual false final false
static UnityEngine::InputSystem::Touchscreen get_current() ;

/// @brief Method set_current addr 0x2947cb8 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Touchscreen value) ;

/// @brief Method MakeCurrent addr 0x2947d04 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2947d58 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2947ddc size 0x3b4 virtual true final false
 void FinishSetup() ;

/// @brief Method OnNextUpdate addr 0x2948190 size 0x2d8 virtual false final false
 void OnNextUpdate() ;

/// @brief Method OnStateEvent addr 0x2948468 size 0x664 virtual false final false
 void OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x2948b98 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x2948b9c size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent addr 0x2948ba0 size 0x248 virtual true final true
 bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset addr 0x2948e08 size 0x3f0 virtual true final true
 void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset() ;

/// @brief Method MergeForward addr 0x29491f8 size 0x170 virtual false final false
static bool MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward addr 0x2949368 size 0xc virtual true final true
 bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

/// @brief Method TriggerTap addr 0x2948acc size 0xcc virtual false final false
static void TriggerTap(UnityEngine::InputSystem::Controls::TouchControl control, ByRef<UnityEngine::InputSystem::LowLevel::TouchState> state, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

// Ctor Parameters []
explicit Touchscreen() ;

/// @brief Method .ctor addr 0x2949374 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Touchscreen);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Touchscreen, "UnityEngine.InputSystem", "Touchscreen");
