#pragma once
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ITextInputReceiver_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.add_onTextInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(System::Action_1<char16_t>)>(&UnityEngine::InputSystem::Keyboard::add_onTextInput)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x290b8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "add_onTextInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.remove_onTextInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(System::Action_1<char16_t>)>(&UnityEngine::InputSystem::Keyboard::remove_onTextInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x290b9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "remove_onTextInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.add_onIMECompositionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>)>(&UnityEngine::InputSystem::Keyboard::add_onIMECompositionChange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x290ba10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "add_onIMECompositionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.remove_onIMECompositionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>)>(&UnityEngine::InputSystem::Keyboard::remove_onIMECompositionChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x290baf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "remove_onIMECompositionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.SetIMEEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(bool)>(&UnityEngine::InputSystem::Keyboard::SetIMEEnabled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x290bb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "SetIMEEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.SetIMECursorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::Vector2)>(&UnityEngine::InputSystem::Keyboard::SetIMECursorPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x290bbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "SetIMECursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_keyboardLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_keyboardLayout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x290bc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_keyboardLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_keyboardLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(::StringW)>(&UnityEngine::InputSystem::Keyboard::set_keyboardLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_keyboardLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_anyKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::AnyKeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_anyKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_anyKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::Controls::AnyKeyControl)>(&UnityEngine::InputSystem::Keyboard::set_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_anyKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::AnyKeyControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_spaceKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_spaceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_spaceKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_enterKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_enterKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_enterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_tabKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_tabKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_tabKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_backquoteKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_backquoteKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_backquoteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_quoteKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_quoteKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_quoteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_semicolonKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_semicolonKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_semicolonKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_commaKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_commaKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_commaKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_periodKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_periodKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_periodKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_slashKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_slashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_slashKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_backslashKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_backslashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_backslashKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftBracketKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftBracketKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftBracketKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightBracketKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightBracketKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightBracketKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_minusKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_minusKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_minusKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_equalsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_equalsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_equalsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_aKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_aKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_aKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_bKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_bKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_bKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_cKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_cKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_cKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_dKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_dKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_dKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_eKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_eKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_eKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_fKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_fKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_fKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_gKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_gKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_gKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_hKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_hKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_hKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_iKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_iKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_iKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_jKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_jKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_jKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_kKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_kKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_kKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_lKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_lKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_lKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_mKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_mKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_mKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_nKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_nKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_nKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_oKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_oKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_pKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_pKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_qKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_qKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_qKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_sKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_sKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_sKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_tKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_tKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_tKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_uKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_uKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_uKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_vKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_vKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_vKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_wKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_wKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_wKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_xKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_xKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_xKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_yKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_yKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_yKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_zKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_zKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_zKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit1Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit2Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit3Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290be98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit4Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit5Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit6Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit6Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290beb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit6Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit7Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit7Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290beb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit7Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit8Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit8Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit8Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit9Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit9Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit9Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_digit0Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_digit0Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit0Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftShiftKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftShiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftShiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightShiftKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightShiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightShiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftAltKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftAltKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftAltKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightAltKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightAltKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightAltKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftCtrlKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftCtrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftCtrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightCtrlKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightCtrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightCtrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftMetaKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftMetaKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftMetaKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightMetaKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightMetaKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightMetaKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftWindowsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftWindowsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftWindowsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightWindowsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightWindowsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightWindowsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftAppleKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftAppleKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftAppleKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightAppleKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightAppleKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightAppleKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftCommandKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftCommandKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftCommandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightCommandKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightCommandKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightCommandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_contextMenuKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_contextMenuKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_contextMenuKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_escapeKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_escapeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_escapeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_leftArrowKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_leftArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_rightArrowKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_rightArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_upArrowKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_upArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_upArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_downArrowKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_downArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_downArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_backspaceKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_backspaceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_backspaceKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_pageDownKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_pageDownKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pageDownKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_pageUpKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_pageUpKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pageUpKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_homeKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_homeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_homeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_endKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_endKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_endKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_insertKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_insertKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_insertKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_deleteKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_deleteKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_deleteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_capsLockKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_capsLockKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_capsLockKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_scrollLockKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_scrollLockKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_scrollLockKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numLockKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numLockKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numLockKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_printScreenKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_printScreenKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_printScreenKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_pauseKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_pauseKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pauseKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadEnterKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadEnterKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadEnterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadDivideKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadDivideKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadDivideKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadMultiplyKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadMultiplyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadMultiplyKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadMinusKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadMinusKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadMinusKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadPlusKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadPlusKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290bff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadPlusKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadPeriodKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadPeriodKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadPeriodKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpadEqualsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpadEqualsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadEqualsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad0Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad0Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad0Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad1Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad2Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad3Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad4Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad5Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad6Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad6Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad6Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad7Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad7Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad7Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad8Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad8Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad8Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_numpad9Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_numpad9Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad9Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f1Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f2Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f3Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f4Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f5Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f6Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f6Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f6Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f7Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f7Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f7Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f8Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f8Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f8Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f9Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f9Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f9Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f10Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f10Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f10Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f11Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f11Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f11Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_f12Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_f12Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f12Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_oem1Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_oem1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_oem2Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_oem2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_oem3Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_oem3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_oem4Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_oem4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_oem5Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_oem5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_shiftKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::ButtonControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_shiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_shiftKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::Controls::ButtonControl)>(&UnityEngine::InputSystem::Keyboard::set_shiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_ctrlKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::ButtonControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_ctrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_ctrlKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::Controls::ButtonControl)>(&UnityEngine::InputSystem::Keyboard::set_ctrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_altKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::ButtonControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_altKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_altKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::Controls::ButtonControl)>(&UnityEngine::InputSystem::Keyboard::set_altKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_imeSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::ButtonControl (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_imeSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_imeSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_imeSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::Controls::ButtonControl)>(&UnityEngine::InputSystem::Keyboard::set_imeSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290c120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_imeSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::Key)>(&UnityEngine::InputSystem::Keyboard::get_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x290bcc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Key>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_allKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::KeyControl> (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_allKeys)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x290c128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_allKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Keyboard (*)()>(&UnityEngine::InputSystem::Keyboard::get_current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x290c188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::Keyboard)>(&UnityEngine::InputSystem::Keyboard::set_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x290c1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Keyboard>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.MakeCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::MakeCurrent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x290c21c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Keyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.OnRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::OnRemoved)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x290c268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Keyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::FinishSetup)> {
  constexpr static std::size_t size = 0x1dbc;
  constexpr static std::size_t addrs = 0x290c2e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Keyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.RefreshConfiguration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::RefreshConfiguration)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x290e0a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Keyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.OnTextInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(char16_t)>(&UnityEngine::InputSystem::Keyboard::OnTextInput)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x290e164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "OnTextInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.FindKeyOnCurrentKeyboardLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::KeyControl (UnityEngine::InputSystem::Keyboard::*)(::StringW)>(&UnityEngine::InputSystem::Keyboard::FindKeyOnCurrentKeyboardLayout)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x290e204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "FindKeyOnCurrentKeyboardLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.OnIMECompositionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(UnityEngine::InputSystem::LowLevel::IMECompositionString)>(&UnityEngine::InputSystem::Keyboard::OnIMECompositionChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x290e2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "OnIMECompositionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IMECompositionString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.get_keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::get_keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290e3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard.set_keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)(::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>)>(&UnityEngine::InputSystem::Keyboard::set_keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290e3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Keyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Keyboard::*)()>(&UnityEngine::InputSystem::Keyboard::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x290e3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::ITextInputReceiver
constexpr  UnityEngine::InputSystem::Keyboard::operator UnityEngine::InputSystem::LowLevel::ITextInputReceiver() const noexcept {
return UnityEngine::InputSystem::LowLevel::ITextInputReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set__anyKey_k__BackingField(UnityEngine::InputSystem::Controls::AnyKeyControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::AnyKeyControl, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::AnyKeyControl>(value));
}
constexpr UnityEngine::InputSystem::Controls::AnyKeyControl UnityEngine::InputSystem::Keyboard::__get__anyKey_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::AnyKeyControl, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set__shiftKey_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::__get__shiftKey_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set__ctrlKey_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::__get__ctrlKey_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set__altKey_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::__get__altKey_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set__imeSelected_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::__get__imeSelected_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::Keyboard::__set__current_k__BackingField(UnityEngine::InputSystem::Keyboard value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Keyboard, "<current>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get>(std::forward<UnityEngine::InputSystem::Keyboard>(value));
}
 UnityEngine::InputSystem::Keyboard UnityEngine::InputSystem::Keyboard::__get__current_k__BackingField()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Keyboard, "<current>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get>();
}
constexpr void UnityEngine::InputSystem::Keyboard::__set_m_TextInputListeners(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>> UnityEngine::InputSystem::Keyboard::__get_m_TextInputListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<char16_t>>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set_m_KeyboardLayoutName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x198>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Keyboard::__get_m_KeyboardLayoutName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x198>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set_m_Keys(::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> UnityEngine::InputSystem::Keyboard::__get_m_Keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Keyboard::__set_m_ImeCompositionListeners(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>> UnityEngine::InputSystem::Keyboard::__get_m_ImeCompositionListeners() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::Keyboard::add_onTextInput(System::Action_1<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "add_onTextInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::Keyboard::remove_onTextInput(System::Action_1<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "remove_onTextInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::Keyboard::add_onIMECompositionChange(System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "add_onIMECompositionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::Keyboard::remove_onIMECompositionChange(System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "remove_onIMECompositionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::InputSystem::LowLevel::IMECompositionString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::Keyboard::SetIMEEnabled(bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "SetIMEEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enabled);
}
 void UnityEngine::InputSystem::Keyboard::SetIMECursorPosition(UnityEngine::Vector2 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "SetIMECursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position);
}
 ::StringW UnityEngine::InputSystem::Keyboard::get_keyboardLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_keyboardLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_keyboardLayout(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_keyboardLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::AnyKeyControl UnityEngine::InputSystem::Keyboard::get_anyKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_anyKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::AnyKeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_anyKey(UnityEngine::InputSystem::Controls::AnyKeyControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_anyKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::AnyKeyControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_spaceKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_spaceKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_enterKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_enterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_tabKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_tabKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_backquoteKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_backquoteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_quoteKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_quoteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_semicolonKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_semicolonKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_commaKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_commaKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_periodKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_periodKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_slashKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_slashKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_backslashKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_backslashKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftBracketKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftBracketKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightBracketKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightBracketKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_minusKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_minusKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_equalsKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_equalsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_aKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_aKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_bKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_bKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_cKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_cKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_dKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_dKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_eKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_eKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_fKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_fKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_gKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_gKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_hKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_hKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_iKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_iKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_jKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_jKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_kKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_kKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_lKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_lKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_mKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_mKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_nKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_nKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_oKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_pKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_qKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_qKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_sKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_sKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_tKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_tKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_uKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_uKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_vKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_vKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_wKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_wKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_xKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_xKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_yKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_yKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_zKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_zKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit1Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit2Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit3Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit4Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit5Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit6Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit6Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit7Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit7Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit8Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit8Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit9Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit9Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_digit0Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_digit0Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftShiftKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftShiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightShiftKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightShiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftAltKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftAltKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightAltKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightAltKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftCtrlKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftCtrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightCtrlKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightCtrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftMetaKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftMetaKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightMetaKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightMetaKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftWindowsKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftWindowsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightWindowsKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightWindowsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftAppleKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftAppleKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightAppleKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightAppleKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftCommandKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftCommandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightCommandKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightCommandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_contextMenuKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_contextMenuKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_escapeKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_escapeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_leftArrowKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_leftArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_rightArrowKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_rightArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_upArrowKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_upArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_downArrowKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_downArrowKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_backspaceKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_backspaceKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_pageDownKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pageDownKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_pageUpKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pageUpKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_homeKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_homeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_endKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_endKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_insertKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_insertKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_deleteKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_deleteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_capsLockKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_capsLockKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_scrollLockKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_scrollLockKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numLockKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numLockKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_printScreenKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_printScreenKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_pauseKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_pauseKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadEnterKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadEnterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadDivideKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadDivideKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadMultiplyKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadMultiplyKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadMinusKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadMinusKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadPlusKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadPlusKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadPeriodKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadPeriodKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpadEqualsKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpadEqualsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad0Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad0Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad1Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad2Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad3Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad4Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad5Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad6Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad6Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad7Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad7Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad8Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad8Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_numpad9Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_numpad9Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f1Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f2Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f3Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f4Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f5Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f6Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f6Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f7Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f7Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f8Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f8Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f9Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f9Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f10Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f10Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f11Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f11Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_f12Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_f12Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_oem1Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem1Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_oem2Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem2Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_oem3Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem3Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_oem4Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem4Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_oem5Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_oem5Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::get_shiftKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_shiftKey(UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::get_ctrlKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_ctrlKey(UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::get_altKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_altKey(UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::InputSystem::Keyboard::get_imeSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_imeSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_imeSelected(UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_imeSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::get_Item(UnityEngine::InputSystem::Key key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Key>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method, key);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::KeyControl> UnityEngine::InputSystem::Keyboard::get_allKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_allKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Controls::KeyControl>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Keyboard UnityEngine::InputSystem::Keyboard::get_current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Keyboard, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_current(UnityEngine::InputSystem::Keyboard value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Keyboard>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::InputSystem::Keyboard::MakeCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "MakeCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::OnRemoved()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "OnRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::RefreshConfiguration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "RefreshConfiguration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::OnTextInput(char16_t character)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "OnTextInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, character);
}
 UnityEngine::InputSystem::Controls::KeyControl UnityEngine::InputSystem::Keyboard::FindKeyOnCurrentKeyboardLayout(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "FindKeyOnCurrentKeyboardLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::KeyControl, false>(const_cast<void*>(instance), ___internal_method, displayName);
}
 void UnityEngine::InputSystem::Keyboard::OnIMECompositionChanged(UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "OnIMECompositionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IMECompositionString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, compositionString);
}
 ::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> UnityEngine::InputSystem::Keyboard::get_keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "get_keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Keyboard::set_keys(::ArrayW<UnityEngine::InputSystem::Controls::KeyControl> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            "set_keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Controls::KeyControl>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Keyboard::Keyboard()  : UnityEngine::InputSystem::InputDevice(THROW_UNLESS(::il2cpp_utils::New<Keyboard>())) {}
 void UnityEngine::InputSystem::Keyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Keyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
