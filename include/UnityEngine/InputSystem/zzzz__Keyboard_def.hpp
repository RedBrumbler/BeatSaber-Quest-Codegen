#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
class ITextInputReceiver;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Keyboard;
}
// Type: UnityEngine.InputSystem::Keyboard
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6341))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6345))
// CS Name: UnityEngine.InputSystem.Keyboard
class CORDL_TYPE Keyboard : public UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::ITextInputReceiver
constexpr operator  UnityEngine::InputSystem::LowLevel::ITextInputReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c0};

virtual ~Keyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: " const&", def_value: None }]
constexpr Keyboard(Keyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "&&", def_value: None }]
constexpr Keyboard(Keyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Keyboard(void* ptr) noexcept : UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr Keyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Keyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Keyboard& operator=(Keyboard&& o) noexcept = default;
  constexpr Keyboard& operator=(Keyboard const& o) noexcept = default;
                


// Fields

/// @brief Field KeyCount offset 0
static constexpr int32_t  KeyCount{110};

 UnityEngine::InputSystem::Controls::AnyKeyControl __declspec(property(get=__get__anyKey_k__BackingField, put=__set__anyKey_k__BackingField))  _anyKey_k__BackingField;

constexpr void __set__anyKey_k__BackingField(UnityEngine::InputSystem::Controls::AnyKeyControl value) ;

constexpr UnityEngine::InputSystem::Controls::AnyKeyControl __get__anyKey_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__shiftKey_k__BackingField, put=__set__shiftKey_k__BackingField))  _shiftKey_k__BackingField;

constexpr void __set__shiftKey_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__shiftKey_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__ctrlKey_k__BackingField, put=__set__ctrlKey_k__BackingField))  _ctrlKey_k__BackingField;

constexpr void __set__ctrlKey_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__ctrlKey_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__altKey_k__BackingField, put=__set__altKey_k__BackingField))  _altKey_k__BackingField;

constexpr void __set__altKey_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__altKey_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__imeSelected_k__BackingField, put=__set__imeSelected_k__BackingField))  _imeSelected_k__BackingField;

constexpr void __set__imeSelected_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__imeSelected_k__BackingField() const;

static UnityEngine::InputSystem::Keyboard __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Keyboard value) ;

static UnityEngine::InputSystem::Keyboard __get__current_k__BackingField() ;

 UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>> __declspec(property(get=__get_m_TextInputListeners, put=__set_m_TextInputListeners))  m_TextInputListeners;

constexpr void __set_m_TextInputListeners(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>> __get_m_TextInputListeners() const;

 ::StringW __declspec(property(get=__get_m_KeyboardLayoutName, put=__set_m_KeyboardLayoutName))  m_KeyboardLayoutName;

constexpr void __set_m_KeyboardLayoutName(::StringW value) ;

constexpr ::StringW __get_m_KeyboardLayoutName() const;

 ::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> __declspec(property(get=__get_m_Keys, put=__set_m_Keys))  m_Keys;

constexpr void __set_m_Keys(::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> __get_m_Keys() const;

 UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>> __declspec(property(get=__get_m_ImeCompositionListeners, put=__set_m_ImeCompositionListeners))  m_ImeCompositionListeners;

constexpr void __set_m_ImeCompositionListeners(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>> __get_m_ImeCompositionListeners() const;


// Properties

 ::StringW __declspec(property(get=get_keyboardLayout, put=set_keyboardLayout))  keyboardLayout;

 UnityEngine::InputSystem::Controls::AnyKeyControl __declspec(property(get=get_anyKey, put=set_anyKey))  anyKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_spaceKey))  spaceKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_enterKey))  enterKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_tabKey))  tabKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_backquoteKey))  backquoteKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_quoteKey))  quoteKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_semicolonKey))  semicolonKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_commaKey))  commaKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_periodKey))  periodKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_slashKey))  slashKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_backslashKey))  backslashKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftBracketKey))  leftBracketKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightBracketKey))  rightBracketKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_minusKey))  minusKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_equalsKey))  equalsKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_aKey))  aKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_bKey))  bKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_cKey))  cKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_dKey))  dKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_eKey))  eKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_fKey))  fKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_gKey))  gKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_hKey))  hKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_iKey))  iKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_jKey))  jKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_kKey))  kKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_lKey))  lKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_mKey))  mKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_nKey))  nKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_oKey))  oKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_pKey))  pKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_qKey))  qKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rKey))  rKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_sKey))  sKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_tKey))  tKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_uKey))  uKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_vKey))  vKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_wKey))  wKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_xKey))  xKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_yKey))  yKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_zKey))  zKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit1Key))  digit1Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit2Key))  digit2Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit3Key))  digit3Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit4Key))  digit4Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit5Key))  digit5Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit6Key))  digit6Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit7Key))  digit7Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit8Key))  digit8Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit9Key))  digit9Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_digit0Key))  digit0Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftShiftKey))  leftShiftKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightShiftKey))  rightShiftKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftAltKey))  leftAltKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightAltKey))  rightAltKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftCtrlKey))  leftCtrlKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightCtrlKey))  rightCtrlKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftMetaKey))  leftMetaKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightMetaKey))  rightMetaKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftWindowsKey))  leftWindowsKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightWindowsKey))  rightWindowsKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftAppleKey))  leftAppleKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightAppleKey))  rightAppleKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftCommandKey))  leftCommandKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightCommandKey))  rightCommandKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_contextMenuKey))  contextMenuKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_escapeKey))  escapeKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_leftArrowKey))  leftArrowKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_rightArrowKey))  rightArrowKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_upArrowKey))  upArrowKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_downArrowKey))  downArrowKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_backspaceKey))  backspaceKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_pageDownKey))  pageDownKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_pageUpKey))  pageUpKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_homeKey))  homeKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_endKey))  endKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_insertKey))  insertKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_deleteKey))  deleteKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_capsLockKey))  capsLockKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_scrollLockKey))  scrollLockKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numLockKey))  numLockKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_printScreenKey))  printScreenKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_pauseKey))  pauseKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadEnterKey))  numpadEnterKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadDivideKey))  numpadDivideKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadMultiplyKey))  numpadMultiplyKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadMinusKey))  numpadMinusKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadPlusKey))  numpadPlusKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadPeriodKey))  numpadPeriodKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpadEqualsKey))  numpadEqualsKey;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad0Key))  numpad0Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad1Key))  numpad1Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad2Key))  numpad2Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad3Key))  numpad3Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad4Key))  numpad4Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad5Key))  numpad5Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad6Key))  numpad6Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad7Key))  numpad7Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad8Key))  numpad8Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_numpad9Key))  numpad9Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f1Key))  f1Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f2Key))  f2Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f3Key))  f3Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f4Key))  f4Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f5Key))  f5Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f6Key))  f6Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f7Key))  f7Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f8Key))  f8Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f9Key))  f9Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f10Key))  f10Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f11Key))  f11Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_f12Key))  f12Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_oem1Key))  oem1Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_oem2Key))  oem2Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_oem3Key))  oem3Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_oem4Key))  oem4Key;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_oem5Key))  oem5Key;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_shiftKey, put=set_shiftKey))  shiftKey;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_ctrlKey, put=set_ctrlKey))  ctrlKey;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_altKey, put=set_altKey))  altKey;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_imeSelected, put=set_imeSelected))  imeSelected;

 UnityEngine::InputSystem::Controls::KeyControl __declspec(property(get=get_Item))  Item;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::KeyControl> __declspec(property(get=get_allKeys))  allKeys;

static UnityEngine::InputSystem::Keyboard __declspec(property(get=get_current, put=set_current))  current;

 ::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> __declspec(property(get=get_keys, put=set_keys))  keys;


// Methods

/// @brief Method add_onTextInput addr 0x290b8d4 size 0xe4 virtual false final false
 void add_onTextInput(System::Action_1<char16_t> value) ;

/// @brief Method remove_onTextInput addr 0x290b9b8 size 0x58 virtual false final false
 void remove_onTextInput(System::Action_1<char16_t> value) ;

/// @brief Method add_onIMECompositionChange addr 0x290ba10 size 0xe8 virtual false final false
 void add_onIMECompositionChange(System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString> value) ;

/// @brief Method remove_onIMECompositionChange addr 0x290baf8 size 0x58 virtual false final false
 void remove_onIMECompositionChange(System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString> value) ;

/// @brief Method SetIMEEnabled addr 0x290bb50 size 0x78 virtual false final false
 void SetIMEEnabled(bool enabled) ;

/// @brief Method SetIMECursorPosition addr 0x290bbc8 size 0xa4 virtual false final false
 void SetIMECursorPosition(UnityEngine::Vector2 position) ;

/// @brief Method get_keyboardLayout addr 0x290bc6c size 0x3c virtual false final false
 ::StringW get_keyboardLayout() ;

/// @brief Method set_keyboardLayout addr 0x290bca8 size 0x8 virtual false final false
 void set_keyboardLayout(::StringW value) ;

/// @brief Method get_anyKey addr 0x290bcb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AnyKeyControl get_anyKey() ;

/// @brief Method set_anyKey addr 0x290bcb8 size 0x8 virtual false final false
 void set_anyKey(UnityEngine::InputSystem::Controls::AnyKeyControl value) ;

/// @brief Method get_spaceKey addr 0x290bcc0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_spaceKey() ;

/// @brief Method get_enterKey addr 0x290bd50 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_enterKey() ;

/// @brief Method get_tabKey addr 0x290bd58 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_tabKey() ;

/// @brief Method get_backquoteKey addr 0x290bd60 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_backquoteKey() ;

/// @brief Method get_quoteKey addr 0x290bd68 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_quoteKey() ;

/// @brief Method get_semicolonKey addr 0x290bd70 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_semicolonKey() ;

/// @brief Method get_commaKey addr 0x290bd78 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_commaKey() ;

/// @brief Method get_periodKey addr 0x290bd80 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_periodKey() ;

/// @brief Method get_slashKey addr 0x290bd88 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_slashKey() ;

/// @brief Method get_backslashKey addr 0x290bd90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_backslashKey() ;

/// @brief Method get_leftBracketKey addr 0x290bd98 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftBracketKey() ;

/// @brief Method get_rightBracketKey addr 0x290bda0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightBracketKey() ;

/// @brief Method get_minusKey addr 0x290bda8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_minusKey() ;

/// @brief Method get_equalsKey addr 0x290bdb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_equalsKey() ;

/// @brief Method get_aKey addr 0x290bdb8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_aKey() ;

/// @brief Method get_bKey addr 0x290bdc0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_bKey() ;

/// @brief Method get_cKey addr 0x290bdc8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_cKey() ;

/// @brief Method get_dKey addr 0x290bdd0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_dKey() ;

/// @brief Method get_eKey addr 0x290bdd8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_eKey() ;

/// @brief Method get_fKey addr 0x290bde0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_fKey() ;

/// @brief Method get_gKey addr 0x290bde8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_gKey() ;

/// @brief Method get_hKey addr 0x290bdf0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_hKey() ;

/// @brief Method get_iKey addr 0x290bdf8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_iKey() ;

/// @brief Method get_jKey addr 0x290be00 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_jKey() ;

/// @brief Method get_kKey addr 0x290be08 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_kKey() ;

/// @brief Method get_lKey addr 0x290be10 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_lKey() ;

/// @brief Method get_mKey addr 0x290be18 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_mKey() ;

/// @brief Method get_nKey addr 0x290be20 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_nKey() ;

/// @brief Method get_oKey addr 0x290be28 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_oKey() ;

/// @brief Method get_pKey addr 0x290be30 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_pKey() ;

/// @brief Method get_qKey addr 0x290be38 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_qKey() ;

/// @brief Method get_rKey addr 0x290be40 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rKey() ;

/// @brief Method get_sKey addr 0x290be48 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_sKey() ;

/// @brief Method get_tKey addr 0x290be50 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_tKey() ;

/// @brief Method get_uKey addr 0x290be58 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_uKey() ;

/// @brief Method get_vKey addr 0x290be60 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_vKey() ;

/// @brief Method get_wKey addr 0x290be68 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_wKey() ;

/// @brief Method get_xKey addr 0x290be70 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_xKey() ;

/// @brief Method get_yKey addr 0x290be78 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_yKey() ;

/// @brief Method get_zKey addr 0x290be80 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_zKey() ;

/// @brief Method get_digit1Key addr 0x290be88 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit1Key() ;

/// @brief Method get_digit2Key addr 0x290be90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit2Key() ;

/// @brief Method get_digit3Key addr 0x290be98 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit3Key() ;

/// @brief Method get_digit4Key addr 0x290bea0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit4Key() ;

/// @brief Method get_digit5Key addr 0x290bea8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit5Key() ;

/// @brief Method get_digit6Key addr 0x290beb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit6Key() ;

/// @brief Method get_digit7Key addr 0x290beb8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit7Key() ;

/// @brief Method get_digit8Key addr 0x290bec0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit8Key() ;

/// @brief Method get_digit9Key addr 0x290bec8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit9Key() ;

/// @brief Method get_digit0Key addr 0x290bed0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_digit0Key() ;

/// @brief Method get_leftShiftKey addr 0x290bed8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftShiftKey() ;

/// @brief Method get_rightShiftKey addr 0x290bee0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightShiftKey() ;

/// @brief Method get_leftAltKey addr 0x290bee8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftAltKey() ;

/// @brief Method get_rightAltKey addr 0x290bef0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightAltKey() ;

/// @brief Method get_leftCtrlKey addr 0x290bef8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftCtrlKey() ;

/// @brief Method get_rightCtrlKey addr 0x290bf00 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightCtrlKey() ;

/// @brief Method get_leftMetaKey addr 0x290bf08 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftMetaKey() ;

/// @brief Method get_rightMetaKey addr 0x290bf10 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightMetaKey() ;

/// @brief Method get_leftWindowsKey addr 0x290bf18 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftWindowsKey() ;

/// @brief Method get_rightWindowsKey addr 0x290bf20 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightWindowsKey() ;

/// @brief Method get_leftAppleKey addr 0x290bf28 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftAppleKey() ;

/// @brief Method get_rightAppleKey addr 0x290bf30 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightAppleKey() ;

/// @brief Method get_leftCommandKey addr 0x290bf38 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftCommandKey() ;

/// @brief Method get_rightCommandKey addr 0x290bf40 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightCommandKey() ;

/// @brief Method get_contextMenuKey addr 0x290bf48 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_contextMenuKey() ;

/// @brief Method get_escapeKey addr 0x290bf50 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_escapeKey() ;

/// @brief Method get_leftArrowKey addr 0x290bf58 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_leftArrowKey() ;

/// @brief Method get_rightArrowKey addr 0x290bf60 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_rightArrowKey() ;

/// @brief Method get_upArrowKey addr 0x290bf68 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_upArrowKey() ;

/// @brief Method get_downArrowKey addr 0x290bf70 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_downArrowKey() ;

/// @brief Method get_backspaceKey addr 0x290bf78 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_backspaceKey() ;

/// @brief Method get_pageDownKey addr 0x290bf80 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_pageDownKey() ;

/// @brief Method get_pageUpKey addr 0x290bf88 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_pageUpKey() ;

/// @brief Method get_homeKey addr 0x290bf90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_homeKey() ;

/// @brief Method get_endKey addr 0x290bf98 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_endKey() ;

/// @brief Method get_insertKey addr 0x290bfa0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_insertKey() ;

/// @brief Method get_deleteKey addr 0x290bfa8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_deleteKey() ;

/// @brief Method get_capsLockKey addr 0x290bfb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_capsLockKey() ;

/// @brief Method get_scrollLockKey addr 0x290bfb8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_scrollLockKey() ;

/// @brief Method get_numLockKey addr 0x290bfc0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numLockKey() ;

/// @brief Method get_printScreenKey addr 0x290bfc8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_printScreenKey() ;

/// @brief Method get_pauseKey addr 0x290bfd0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_pauseKey() ;

/// @brief Method get_numpadEnterKey addr 0x290bfd8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadEnterKey() ;

/// @brief Method get_numpadDivideKey addr 0x290bfe0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadDivideKey() ;

/// @brief Method get_numpadMultiplyKey addr 0x290bfe8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadMultiplyKey() ;

/// @brief Method get_numpadMinusKey addr 0x290bff0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadMinusKey() ;

/// @brief Method get_numpadPlusKey addr 0x290bff8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadPlusKey() ;

/// @brief Method get_numpadPeriodKey addr 0x290c000 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadPeriodKey() ;

/// @brief Method get_numpadEqualsKey addr 0x290c008 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpadEqualsKey() ;

/// @brief Method get_numpad0Key addr 0x290c010 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad0Key() ;

/// @brief Method get_numpad1Key addr 0x290c018 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad1Key() ;

/// @brief Method get_numpad2Key addr 0x290c020 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad2Key() ;

/// @brief Method get_numpad3Key addr 0x290c028 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad3Key() ;

/// @brief Method get_numpad4Key addr 0x290c030 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad4Key() ;

/// @brief Method get_numpad5Key addr 0x290c038 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad5Key() ;

/// @brief Method get_numpad6Key addr 0x290c040 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad6Key() ;

/// @brief Method get_numpad7Key addr 0x290c048 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad7Key() ;

/// @brief Method get_numpad8Key addr 0x290c050 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad8Key() ;

/// @brief Method get_numpad9Key addr 0x290c058 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_numpad9Key() ;

/// @brief Method get_f1Key addr 0x290c060 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f1Key() ;

/// @brief Method get_f2Key addr 0x290c068 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f2Key() ;

/// @brief Method get_f3Key addr 0x290c070 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f3Key() ;

/// @brief Method get_f4Key addr 0x290c078 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f4Key() ;

/// @brief Method get_f5Key addr 0x290c080 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f5Key() ;

/// @brief Method get_f6Key addr 0x290c088 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f6Key() ;

/// @brief Method get_f7Key addr 0x290c090 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f7Key() ;

/// @brief Method get_f8Key addr 0x290c098 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f8Key() ;

/// @brief Method get_f9Key addr 0x290c0a0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f9Key() ;

/// @brief Method get_f10Key addr 0x290c0a8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f10Key() ;

/// @brief Method get_f11Key addr 0x290c0b0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f11Key() ;

/// @brief Method get_f12Key addr 0x290c0b8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_f12Key() ;

/// @brief Method get_oem1Key addr 0x290c0c0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_oem1Key() ;

/// @brief Method get_oem2Key addr 0x290c0c8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_oem2Key() ;

/// @brief Method get_oem3Key addr 0x290c0d0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_oem3Key() ;

/// @brief Method get_oem4Key addr 0x290c0d8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_oem4Key() ;

/// @brief Method get_oem5Key addr 0x290c0e0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_oem5Key() ;

/// @brief Method get_shiftKey addr 0x290c0e8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_shiftKey() ;

/// @brief Method set_shiftKey addr 0x290c0f0 size 0x8 virtual false final false
 void set_shiftKey(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_ctrlKey addr 0x290c0f8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_ctrlKey() ;

/// @brief Method set_ctrlKey addr 0x290c100 size 0x8 virtual false final false
 void set_ctrlKey(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_altKey addr 0x290c108 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_altKey() ;

/// @brief Method set_altKey addr 0x290c110 size 0x8 virtual false final false
 void set_altKey(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_imeSelected addr 0x290c118 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_imeSelected() ;

/// @brief Method set_imeSelected addr 0x290c120 size 0x8 virtual false final false
 void set_imeSelected(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_Item addr 0x290bcc8 size 0x88 virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl get_Item(UnityEngine::InputSystem::Key key) ;

/// @brief Method get_allKeys addr 0x290c128 size 0x60 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::KeyControl> get_allKeys() ;

/// @brief Method get_current addr 0x290c188 size 0x48 virtual false final false
static UnityEngine::InputSystem::Keyboard get_current() ;

/// @brief Method set_current addr 0x290c1d0 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Keyboard value) ;

/// @brief Method MakeCurrent addr 0x290c21c size 0x4c virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x290c268 size 0x7c virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x290c2e4 size 0x1dbc virtual true final false
 void FinishSetup() ;

/// @brief Method RefreshConfiguration addr 0x290e0a0 size 0xc4 virtual true final false
 void RefreshConfiguration() ;

/// @brief Method OnTextInput addr 0x290e164 size 0xa0 virtual true final true
 void OnTextInput(char16_t character) ;

/// @brief Method FindKeyOnCurrentKeyboardLayout addr 0x290e204 size 0xcc virtual false final false
 UnityEngine::InputSystem::Controls::KeyControl FindKeyOnCurrentKeyboardLayout(::StringW displayName) ;

/// @brief Method OnIMECompositionChanged addr 0x290e2d0 size 0xfc virtual true final true
 void OnIMECompositionChanged(UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) ;

/// @brief Method get_keys addr 0x290e3cc size 0x8 virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> get_keys() ;

/// @brief Method set_keys addr 0x290e3d4 size 0x8 virtual false final false
 void set_keys(::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> value) ;

// Ctor Parameters []
explicit Keyboard() ;

/// @brief Method .ctor addr 0x290e3dc size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Keyboard);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Keyboard, "UnityEngine.InputSystem", "Keyboard");
