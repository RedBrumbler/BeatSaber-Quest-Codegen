#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Type: UnityEngine.InputSystem::FastTouchscreen
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6390))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6352))
// CS Name: UnityEngine.InputSystem.FastTouchscreen
class CORDL_TYPE FastTouchscreen : public UnityEngine::InputSystem::Touchscreen {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~FastTouchscreen() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: " const&", def_value: None }]
constexpr FastTouchscreen(FastTouchscreen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None }]
constexpr FastTouchscreen(FastTouchscreen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastTouchscreen(void* ptr) noexcept : UnityEngine::InputSystem::Touchscreen(ptr) {
}


  constexpr FastTouchscreen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastTouchscreen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastTouchscreen& operator=(FastTouchscreen&& o) noexcept = default;
  constexpr FastTouchscreen& operator=(FastTouchscreen const& o) noexcept = default;
                


// Fields

/// @brief Field metadata offset 0
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer"};


// Methods

// Ctor Parameters []
explicit FastTouchscreen() ;

/// @brief Method .ctor addr 0x291d6c8 size 0x2e08 virtual false final false
 void _ctor() ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouch addr 0x29204d0 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreenprimaryTouch(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenposition addr 0x2920650 size 0x1a0 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenposition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendelta addr 0x29207f0 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreendelta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpressure addr 0x2920970 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenpressure(UnityEngine::InputSystem::Utilities::InternedString kAnalogLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenradius addr 0x2920b0c size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenradius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpress addr 0x2920c8c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreenpress(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0 addr 0x2920e3c size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch0(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1 addr 0x2920fb0 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch1(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2 addr 0x2921124 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch2(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3 addr 0x2921298 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch3(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4 addr 0x292140c size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch4(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5 addr 0x2921580 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch5(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6 addr 0x29216f4 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch6(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7 addr 0x2921868 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch7(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8 addr 0x29219dc size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch8(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9 addr 0x2921b50 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch9(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId addr 0x2921cc4 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreenprimaryTouchtouchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition addr 0x2921e84 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenprimaryTouchposition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta addr 0x2922040 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreenprimaryTouchdelta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure addr 0x29221d8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchpressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius addr 0x2922364 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenprimaryTouchradius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase addr 0x29224fc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreenprimaryTouchphase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress addr 0x2922698 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreenprimaryTouchpress(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount addr 0x292285c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreenprimaryTouchtapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch addr 0x29229e8 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreenprimaryTouchindirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap addr 0x2922bbc size 0x1d0 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreenprimaryTouchtap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime addr 0x2922d8c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreenprimaryTouchstartTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition addr 0x2922f28 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenprimaryTouchstartPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx addr 0x29230d0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchpositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony addr 0x2923280 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchpositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup addr 0x2923430 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown addr 0x29235e0 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft addr 0x2923794 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright addr 0x2923948 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax addr 0x2923af8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay addr 0x2923c84 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx addr 0x2923e10 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchradiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy addr 0x2923f9c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchradiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx addr 0x2924128 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchstartPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony addr 0x29242b4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchstartPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositionx addr 0x2924440 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenpositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositiony addr 0x29245f0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenpositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaup addr 0x29247a0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltadown addr 0x2924950 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaleft addr 0x2924b04 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaright addr 0x2924cb8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltax addr 0x2924e68 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltay addr 0x2924ff4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusx addr 0x2925180 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenradiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusy addr 0x292530c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenradiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0touchId addr 0x2925498 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch0touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0position addr 0x2925658 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch0position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0delta addr 0x2925814 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch0delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0pressure addr 0x29259ac size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radius addr 0x2925b38 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch0radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0phase addr 0x2925cd0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch0phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0press addr 0x2925e6c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch0press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tapCount addr 0x2926030 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch0tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch addr 0x29261bc size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch0indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tap addr 0x2926390 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch0tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startTime addr 0x2926554 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch0startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPosition addr 0x29266f0 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch0startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positionx addr 0x2926898 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positiony addr 0x2926a48 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaup addr 0x2926bf8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltadown addr 0x2926da8 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaleft addr 0x2926f5c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaright addr 0x2927110 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltax addr 0x29272c0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltay addr 0x292744c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusx addr 0x29275d8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusy addr 0x2927764 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositionx addr 0x29278f0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositiony addr 0x2927a7c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1touchId addr 0x2927c08 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch1touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1position addr 0x2927dc8 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch1position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1delta addr 0x2927f84 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch1delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1pressure addr 0x292811c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radius addr 0x29282a8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch1radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1phase addr 0x2928440 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch1phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1press addr 0x29285dc size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch1press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tapCount addr 0x29287a0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch1tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch addr 0x292892c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch1indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tap addr 0x2928b00 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch1tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startTime addr 0x2928cc4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch1startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPosition addr 0x2928e60 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch1startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positionx addr 0x2929008 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positiony addr 0x29291b8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaup addr 0x2929368 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltadown addr 0x2929518 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaleft addr 0x29296cc size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaright addr 0x2929880 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltax addr 0x2929a30 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltay addr 0x2929bbc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusx addr 0x2929d48 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusy addr 0x2929ed4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositionx addr 0x292a060 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositiony addr 0x292a1ec size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2touchId addr 0x292a378 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch2touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2position addr 0x292a538 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch2position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2delta addr 0x292a6f4 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch2delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2pressure addr 0x292a88c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radius addr 0x292aa18 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch2radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2phase addr 0x292abb0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch2phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2press addr 0x292ad4c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch2press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tapCount addr 0x292af10 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch2tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch addr 0x292b09c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch2indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tap addr 0x292b270 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch2tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startTime addr 0x292b434 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch2startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPosition addr 0x292b5d0 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch2startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positionx addr 0x292b778 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positiony addr 0x292b928 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaup addr 0x292bad8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltadown addr 0x292bc88 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaleft addr 0x292be3c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaright addr 0x292bff0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltax addr 0x292c1a0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltay addr 0x292c32c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusx addr 0x292c4b8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusy addr 0x292c644 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositionx addr 0x292c7d0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositiony addr 0x292c95c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3touchId addr 0x292cae8 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch3touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3position addr 0x292cca8 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch3position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3delta addr 0x292ce64 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch3delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3pressure addr 0x292cffc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radius addr 0x292d188 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch3radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3phase addr 0x292d320 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch3phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3press addr 0x292d4bc size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch3press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tapCount addr 0x292d680 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch3tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch addr 0x292d80c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch3indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tap addr 0x292d9e0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch3tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startTime addr 0x292dba4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch3startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPosition addr 0x292dd40 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch3startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positionx addr 0x292dee8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positiony addr 0x292e098 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaup addr 0x292e248 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltadown addr 0x292e3f8 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaleft addr 0x292e5ac size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaright addr 0x292e760 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltax addr 0x292e910 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltay addr 0x292ea9c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusx addr 0x292ec28 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusy addr 0x292edb4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositionx addr 0x292ef40 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositiony addr 0x292f0cc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4touchId addr 0x292f258 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch4touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4position addr 0x292f418 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch4position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4delta addr 0x292f5d4 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch4delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4pressure addr 0x292f76c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radius addr 0x292f8f8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch4radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4phase addr 0x292fa90 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch4phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4press addr 0x292fc2c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch4press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tapCount addr 0x292fdf0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch4tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch addr 0x292ff7c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch4indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tap addr 0x2930150 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch4tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startTime addr 0x2930314 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch4startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPosition addr 0x29304b0 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch4startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positionx addr 0x2930658 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positiony addr 0x2930808 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaup addr 0x29309b8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltadown addr 0x2930b68 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaleft addr 0x2930d1c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaright addr 0x2930ed0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltax addr 0x2931080 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltay addr 0x293120c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusx addr 0x2931398 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusy addr 0x2931524 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositionx addr 0x29316b0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositiony addr 0x293183c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5touchId addr 0x29319c8 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch5touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5position addr 0x2931b88 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch5position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5delta addr 0x2931d44 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch5delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5pressure addr 0x2931edc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radius addr 0x2932068 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch5radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5phase addr 0x2932200 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch5phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5press addr 0x293239c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch5press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tapCount addr 0x2932560 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch5tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch addr 0x29326ec size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch5indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tap addr 0x29328c0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch5tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startTime addr 0x2932a84 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch5startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPosition addr 0x2932c20 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch5startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positionx addr 0x2932dc8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positiony addr 0x2932f78 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaup addr 0x2933128 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltadown addr 0x29332d8 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaleft addr 0x293348c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaright addr 0x2933640 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltax addr 0x29337f0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltay addr 0x293397c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusx addr 0x2933b08 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusy addr 0x2933c94 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositionx addr 0x2933e20 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositiony addr 0x2933fac size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6touchId addr 0x2934138 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch6touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6position addr 0x29342f8 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch6position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6delta addr 0x29344b4 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch6delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6pressure addr 0x293464c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radius addr 0x29347d8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch6radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6phase addr 0x2934970 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch6phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6press addr 0x2934b0c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch6press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tapCount addr 0x2934cd0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch6tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch addr 0x2934e5c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch6indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tap addr 0x2935030 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch6tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startTime addr 0x29351f4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch6startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPosition addr 0x2935390 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch6startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positionx addr 0x2935538 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positiony addr 0x29356e8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaup addr 0x2935898 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltadown addr 0x2935a48 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaleft addr 0x2935bfc size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaright addr 0x2935db0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltax addr 0x2935f60 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltay addr 0x29360ec size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusx addr 0x2936278 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusy addr 0x2936404 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositionx addr 0x2936590 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositiony addr 0x293671c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7touchId addr 0x29368a8 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch7touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7position addr 0x2936a68 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch7position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7delta addr 0x2936c24 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch7delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7pressure addr 0x2936dbc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radius addr 0x2936f48 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch7radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7phase addr 0x29370e0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch7phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7press addr 0x293727c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch7press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tapCount addr 0x2937440 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch7tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch addr 0x29375cc size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch7indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tap addr 0x29377a0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch7tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startTime addr 0x2937964 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch7startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPosition addr 0x2937b00 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch7startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positionx addr 0x2937ca8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positiony addr 0x2937e58 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaup addr 0x2938008 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltadown addr 0x29381b8 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaleft addr 0x293836c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaright addr 0x2938520 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltax addr 0x29386d0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltay addr 0x293885c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusx addr 0x29389e8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusy addr 0x2938b74 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositionx addr 0x2938d00 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositiony addr 0x2938e8c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8touchId addr 0x2939018 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch8touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8position addr 0x29391d8 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch8position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8delta addr 0x2939394 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch8delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8pressure addr 0x293952c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radius addr 0x29396b8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch8radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8phase addr 0x2939850 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch8phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8press addr 0x29399ec size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch8press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tapCount addr 0x2939bb0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch8tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch addr 0x2939d3c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch8indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tap addr 0x2939f10 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch8tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startTime addr 0x293a0d4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch8startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPosition addr 0x293a270 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch8startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positionx addr 0x293a418 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positiony addr 0x293a5c8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaup addr 0x293a778 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltadown addr 0x293a928 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaleft addr 0x293aadc size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaright addr 0x293ac90 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltax addr 0x293ae40 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltay addr 0x293afcc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusx addr 0x293b158 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusy addr 0x293b2e4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositionx addr 0x293b470 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositiony addr 0x293b5fc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9touchId addr 0x293b788 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch9touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9position addr 0x293b948 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch9position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9delta addr 0x293bb04 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch9delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9pressure addr 0x293bc9c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radius addr 0x293be28 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch9radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9phase addr 0x293bfc0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch9phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9press addr 0x293c15c size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch9press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tapCount addr 0x293c320 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch9tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch addr 0x293c4ac size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch9indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tap addr 0x293c680 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch9tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startTime addr 0x293c844 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch9startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPosition addr 0x293c9e0 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch9startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positionx addr 0x293cb88 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positiony addr 0x293cd38 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaup addr 0x293cee8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltadown addr 0x293d098 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaleft addr 0x293d24c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaright addr 0x293d400 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltax addr 0x293d5b0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltay addr 0x293d73c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusx addr 0x293d8c8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusy addr 0x293da54 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositionx addr 0x293dbe0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositiony addr 0x293dd6c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::FastTouchscreen);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::FastTouchscreen, "UnityEngine.InputSystem", "FastTouchscreen");
