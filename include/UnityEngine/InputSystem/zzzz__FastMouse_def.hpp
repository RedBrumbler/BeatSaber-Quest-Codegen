#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastMouse;
}
// Type: UnityEngine.InputSystem::FastMouse
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6346))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6351))
// CS Name: UnityEngine.InputSystem.FastMouse
class CORDL_TYPE FastMouse : public UnityEngine::InputSystem::Mouse {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IEventMerger
constexpr operator  UnityEngine::InputSystem::LowLevel::IEventMerger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1b8};

virtual ~FastMouse() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastMouse", modifiers: " const&", def_value: None }]
constexpr FastMouse(FastMouse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastMouse", modifiers: "&&", def_value: None }]
constexpr FastMouse(FastMouse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastMouse(void* ptr) noexcept : UnityEngine::InputSystem::Mouse(ptr) {
}


  constexpr FastMouse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastMouse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastMouse& operator=(FastMouse&& o) noexcept = default;
  constexpr FastMouse& operator=(FastMouse const& o) noexcept = default;
                


// Fields

/// @brief Field metadata offset 0
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Vector2;Delta;Button;Axis;Digital;Integer;Mouse;Pointer"};


// Methods

// Ctor Parameters []
explicit FastMouse() ;

/// @brief Method .ctor addr 0x293def8 size 0xa7c virtual false final false
 void _ctor() ;

/// @brief Method Initialize_ctrlMouseposition addr 0x293e974 size 0x1a0 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlMouseposition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedelta addr 0x293eb14 size 0x17c virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlMousedelta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescroll addr 0x293ec90 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlMousescroll(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepress addr 0x293ee04 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMousepress(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseleftButton addr 0x293efb4 size 0x1e4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMouseleftButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouserightButton addr 0x293f198 size 0x1e4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMouserightButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousemiddleButton addr 0x293f37c size 0x1d8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMousemiddleButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseforwardButton addr 0x293f554 size 0x1ac virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMouseforwardButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousebackButton addr 0x293f700 size 0x1ac virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMousebackButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepressure addr 0x293f8ac size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousepressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseradius addr 0x293fa48 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlMouseradius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepointerId addr 0x293fbc8 size 0x154 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlMousepointerId(UnityEngine::InputSystem::Utilities::InternedString kDigitalLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseclickCount addr 0x293fd1c size 0x178 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlMouseclickCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepositionx addr 0x293fe94 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousepositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepositiony addr 0x2940044 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousepositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltaup addr 0x29401f4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltadown addr 0x29403a4 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltaleft addr 0x2940558 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltaright addr 0x294070c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltax addr 0x29408bc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltay addr 0x2940a48 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollup addr 0x2940bd4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrolldown addr 0x2940d84 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrolldown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollleft addr 0x2940f38 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollright addr 0x29410ec size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollx addr 0x294129c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrolly addr 0x2941434 size 0x1ac virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrolly(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseradiusx addr 0x29415e0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMouseradiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseradiusy addr 0x294176c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMouseradiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method OnNextUpdate addr 0x29418f8 size 0x144 virtual false final false
 void OnNextUpdate() ;

/// @brief Method OnStateEvent addr 0x2941a3c size 0x18c virtual false final false
 void OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x2941bc8 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x2941bcc size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method MergeForward addr 0x2941bd0 size 0x16c virtual false final false
static bool MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward addr 0x2941d3c size 0xc virtual true final true
 bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::FastMouse);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::FastMouse, "UnityEngine.InputSystem", "FastMouse");
