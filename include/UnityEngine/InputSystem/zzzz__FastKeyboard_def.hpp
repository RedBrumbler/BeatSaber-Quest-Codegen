#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastKeyboard;
}
// Type: UnityEngine.InputSystem::FastKeyboard
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6345))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6350))
// CS Name: UnityEngine.InputSystem.FastKeyboard
class CORDL_TYPE FastKeyboard : public UnityEngine::InputSystem::Keyboard {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c0};

virtual ~FastKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: " const&", def_value: None }]
constexpr FastKeyboard(FastKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "&&", def_value: None }]
constexpr FastKeyboard(FastKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastKeyboard(void* ptr) noexcept : UnityEngine::InputSystem::Keyboard(ptr) {
}


  constexpr FastKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastKeyboard& operator=(FastKeyboard&& o) noexcept = default;
  constexpr FastKeyboard& operator=(FastKeyboard const& o) noexcept = default;
                


// Fields

/// @brief Field metadata offset 0
static constexpr ::ConstString  metadata{u";AnyKey;Button;Axis;Key;DiscreteButton;Keyboard"};


// Methods

// Ctor Parameters []
explicit FastKeyboard() ;

/// @brief Method .ctor addr 0x290f314 size 0x2b1c virtual false final false
 void _ctor() ;

/// @brief Method Initialize_ctrlKeyboardanyKey addr 0x2911e30 size 0x190 virtual false final false
 UnityEngine::InputSystem::Controls::AnyKeyControl Initialize_ctrlKeyboardanyKey(UnityEngine::InputSystem::Utilities::InternedString kAnyKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardescape addr 0x2911fc0 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardescape(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardspace addr 0x2912168 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardspace(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardenter addr 0x2912304 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardenter(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardtab addr 0x29124ac size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardtab(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardbackquote addr 0x2912648 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardbackquote(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardquote addr 0x29127e4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardquote(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardsemicolon addr 0x2912980 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardsemicolon(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardcomma addr 0x2912b1c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardcomma(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardperiod addr 0x2912cb8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardperiod(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardslash addr 0x2912e54 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardslash(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardbackslash addr 0x2912ff0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardbackslash(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardleftBracket addr 0x291318c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardleftBracket(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardrightBracket addr 0x2913328 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardrightBracket(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardminus addr 0x29134c4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardminus(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardequals addr 0x2913660 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardequals(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardupArrow addr 0x29137fc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardupArrow(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboarddownArrow addr 0x2913998 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboarddownArrow(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardleftArrow addr 0x2913b34 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardleftArrow(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardrightArrow addr 0x2913cd0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardrightArrow(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboarda addr 0x2913e6c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboarda(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardb addr 0x2914008 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardb(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardc addr 0x29141a4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardc(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardd addr 0x2914340 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardd(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboarde addr 0x29144dc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboarde(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf addr 0x2914678 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardg addr 0x2914814 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardg(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardh addr 0x29149b0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardh(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardi addr 0x2914b4c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardi(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardj addr 0x2914ce8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardj(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardk addr 0x2914e84 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardk(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardl addr 0x2915020 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardl(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardm addr 0x29151bc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardm(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardn addr 0x2915358 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardn(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardo addr 0x29154f4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardo(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardp addr 0x2915690 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardp(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardq addr 0x291582c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardq(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardr addr 0x29159c8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardr(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboards addr 0x2915b64 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboards(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardt addr 0x2915d00 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardt(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardu addr 0x2915e9c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardu(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardv addr 0x2916038 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardv(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardw addr 0x29161d4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardw(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardx addr 0x2916370 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardx(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardy addr 0x291650c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardy(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardz addr 0x29166a8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardz(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard1 addr 0x2916844 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard1(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard2 addr 0x29169cc size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard2(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard3 addr 0x2916b54 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard3(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard4 addr 0x2916cdc size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard4(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard5 addr 0x2916e64 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard5(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard6 addr 0x2916fec size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard6(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard7 addr 0x2917174 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard7(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard8 addr 0x29172fc size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard8(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard9 addr 0x2917484 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard9(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboard0 addr 0x291760c size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboard0(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardleftShift addr 0x2917794 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardleftShift(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardrightShift addr 0x291793c size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardrightShift(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardshift addr 0x2917ae4 size 0x1b8 virtual false final false
 UnityEngine::InputSystem::Controls::DiscreteButtonControl Initialize_ctrlKeyboardshift(UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardleftAlt addr 0x2917c9c size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardleftAlt(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardrightAlt addr 0x2917e44 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardrightAlt(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardalt addr 0x2917fec size 0x1b8 virtual false final false
 UnityEngine::InputSystem::Controls::DiscreteButtonControl Initialize_ctrlKeyboardalt(UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardleftCtrl addr 0x29181a4 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardleftCtrl(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardrightCtrl addr 0x291834c size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardrightCtrl(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardctrl addr 0x29184f4 size 0x1b8 virtual false final false
 UnityEngine::InputSystem::Controls::DiscreteButtonControl Initialize_ctrlKeyboardctrl(UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardleftMeta addr 0x29186ac size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardleftMeta(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardrightMeta addr 0x2918854 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardrightMeta(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardcontextMenu addr 0x29189fc size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardcontextMenu(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardbackspace addr 0x2918ba4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardbackspace(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardpageDown addr 0x2918d40 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardpageDown(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardpageUp addr 0x2918edc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardpageUp(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardhome addr 0x2919078 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardhome(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardend addr 0x2919214 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardend(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardinsert addr 0x29193b0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardinsert(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboarddelete addr 0x291954c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboarddelete(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardcapsLock addr 0x29196e8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardcapsLock(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumLock addr 0x2919884 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumLock(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardprintScreen addr 0x2919a20 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardprintScreen(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardscrollLock addr 0x2919bbc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardscrollLock(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardpause addr 0x2919d58 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardpause(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadEnter addr 0x2919ef4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadEnter(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadDivide addr 0x291a090 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadDivide(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadMultiply addr 0x291a22c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadMultiply(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadPlus addr 0x291a3c8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadPlus(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadMinus addr 0x291a564 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadMinus(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadPeriod addr 0x291a700 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadPeriod(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadEquals addr 0x291a89c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpadEquals(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad1 addr 0x291aa38 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad1(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad2 addr 0x291abd4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad2(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad3 addr 0x291ad70 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad3(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad4 addr 0x291af0c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad4(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad5 addr 0x291b0a8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad5(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad6 addr 0x291b244 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad6(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad7 addr 0x291b3e0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad7(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad8 addr 0x291b57c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad8(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad9 addr 0x291b718 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad9(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad0 addr 0x291b8b4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardnumpad0(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf1 addr 0x291ba50 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf1(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf2 addr 0x291bbec size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf2(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf3 addr 0x291bd88 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf3(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf4 addr 0x291bf24 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf4(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf5 addr 0x291c0c0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf5(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf6 addr 0x291c25c size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf6(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf7 addr 0x291c3f8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf7(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf8 addr 0x291c594 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf8(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf9 addr 0x291c730 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf9(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf10 addr 0x291c8cc size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf10(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf11 addr 0x291ca68 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf11(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardf12 addr 0x291cc04 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardf12(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM1 addr 0x291cda0 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardOEM1(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM2 addr 0x291cf28 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardOEM2(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM3 addr 0x291d0b0 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardOEM3(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM4 addr 0x291d238 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardOEM4(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM5 addr 0x291d3c0 size 0x188 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl Initialize_ctrlKeyboardOEM5(UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlKeyboardIMESelected addr 0x291d548 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlKeyboardIMESelected(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::FastKeyboard);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::FastKeyboard, "UnityEngine.InputSystem", "FastKeyboard");
