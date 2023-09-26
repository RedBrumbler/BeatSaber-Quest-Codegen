#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__EulerPose_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::*)(float_t, int32_t)>(&GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fc5274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit(float_t maxTimePlayed, int32_t maximumFrequency) noexcept : ::bs_hook::ValueTypeWrapper() {this->maxTimePlayed = maxTimePlayed;
this->maximumFrequency = maximumFrequency;
}
constexpr void GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::__set_maxTimePlayed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::__get_maxTimePlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::__set_maximumFrequency(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::__get_maximumFrequency() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit::_ctor(float_t maxTimePlayed, int32_t maximumFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxTimePlayed, maximumFrequency);
}
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc37b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc384c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.get_hasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc38e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.get_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc38f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.get_isAlwaysWireless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc38f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.get_vrPlatformSDK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRPlatformSDK (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc3900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc39a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc3fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.add_controllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::add_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc4058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.remove_controllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(System::Action)>(&GlobalNamespace::PSVR2Helper::remove_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fc40f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::Awake)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1fc4190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.TryGetPoseOffsetForNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode, ByRef<UnityEngine::Pose>)>(&GlobalNamespace::PSVR2Helper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1fc44a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "TryGetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetNodePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode, int32_t, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>)>(&GlobalNamespace::PSVR2Helper::GetNodePose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1fc44f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetTriggerValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::PSVR2Helper::GetTriggerValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fc4660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetAnyJoystickMaxAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc466c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetThumbstickValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::PSVR2Helper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1fc4674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::GetMenuButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc4748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetMenuButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc4750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.RefreshControllersReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fc4758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::PSVR2Helper::StopHaptics)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fc4774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.TriggerHapticPulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode, float_t, float_t, float_t)>(&GlobalNamespace::PSVR2Helper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fc4778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.GetTRCCompliantHeadsetHapticFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::PSVR2Helper::*)(float_t)>(&GlobalNamespace::PSVR2Helper::GetTRCCompliantHeadsetHapticFrequency)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1fc4818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetTRCCompliantHeadsetHapticFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.HandleApplicationFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::HandleApplicationFocusLost)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fc4a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "HandleApplicationFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.HandleApplicationFocusResumed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::HandleApplicationFocusResumed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fc4a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "HandleApplicationFocusResumed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.InputDeviceChangeTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::InputDeviceChange)>(&GlobalNamespace::PSVR2Helper::InputDeviceChangeTriggered)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x1fc4a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "InputDeviceChangeTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.AddControllerToMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)(UnityEngine::XR::XRNode, UnityEngine::InputSystem::InputDevice)>(&GlobalNamespace::PSVR2Helper::AddControllerToMap)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1fc4d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "AddControllerToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1fc5014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PSVR2Helper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVR2Helper::*)()>(&GlobalNamespace::PSVR2Helper::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x1fc50b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr  GlobalNamespace::PSVR2Helper::operator GlobalNamespace::IVRPlatformHelper() const noexcept {
return GlobalNamespace::IVRPlatformHelper(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__leftController(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration GlobalNamespace::PSVR2Helper::__get__leftController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__rightController(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration GlobalNamespace::PSVR2Helper::__get__rightController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__defaultEulerPose(GlobalNamespace::EulerPose value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EulerPose, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EulerPose>(value));
}
constexpr GlobalNamespace::EulerPose GlobalNamespace::PSVR2Helper::__get__defaultEulerPose() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EulerPose, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__controllers(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController> GlobalNamespace::PSVR2Helper::__get__controllers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__controllersWithRumble(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble> GlobalNamespace::PSVR2Helper::__get__controllersWithRumble() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__timeWhenStartedPlayingHaptic(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PSVR2Helper::__get__timeWhenStartedPlayingHaptic() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__lastTimeWhenTriggeredHaptic(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PSVR2Helper::__get__lastTimeWhenTriggeredHaptic() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__maximumHapticFrequencyLimits(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit> GlobalNamespace::PSVR2Helper::__get__maximumHapticFrequencyLimits() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_controllersDidChangeReferenceEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_controllersDidChangeReferenceEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__hasVrFocus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PSVR2Helper::__get__hasVrFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_inputFocusWasCapturedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_inputFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_inputFocusWasReleasedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_inputFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_vrFocusWasCapturedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_vrFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_vrFocusWasReleasedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_vrFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_hmdUnmountedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_hmdUnmountedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_hmdMountedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_hmdMountedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_controllersDidDisconnectEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PSVR2Helper::__get_controllersDidDisconnectEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PSVR2Helper::add_controllersDidChangeReferenceEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_controllersDidChangeReferenceEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::PSVR2Helper::get_hasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::PSVR2Helper::get_hasVrFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::PSVR2Helper::get_isAlwaysWireless()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::VRPlatformSDK GlobalNamespace::PSVR2Helper::get_vrPlatformSDK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::VRPlatformSDK, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PSVR2Helper::add_inputFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_inputFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::add_inputFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_inputFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::add_vrFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_vrFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::add_vrFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_vrFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::add_hmdUnmountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_hmdUnmountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::add_hmdMountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_hmdMountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::add_controllersDidDisconnectEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "add_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::remove_controllersDidDisconnectEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "remove_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PSVR2Helper::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::PSVR2Helper::TryGetPoseOffsetForNode(UnityEngine::XR::XRNode node, ByRef<UnityEngine::Pose> poseOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "TryGetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node, poseOffset);
}
 bool GlobalNamespace::PSVR2Helper::GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeType, idx, pos, rot);
}
 float_t GlobalNamespace::PSVR2Helper::GetTriggerValue(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, node);
}
 UnityEngine::Vector2 GlobalNamespace::PSVR2Helper::GetAnyJoystickMaxAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector2 GlobalNamespace::PSVR2Helper::GetThumbstickValue(UnityEngine::XR::XRNode nodeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, nodeType);
}
 bool GlobalNamespace::PSVR2Helper::GetMenuButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::PSVR2Helper::GetMenuButtonDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PSVR2Helper::RefreshControllersReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PSVR2Helper::StopHaptics(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::PSVR2Helper::TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, duration, strength, frequency);
}
 int32_t GlobalNamespace::PSVR2Helper::GetTRCCompliantHeadsetHapticFrequency(float_t initialFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "GetTRCCompliantHeadsetHapticFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, initialFrequency);
}
 void GlobalNamespace::PSVR2Helper::HandleApplicationFocusLost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "HandleApplicationFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PSVR2Helper::HandleApplicationFocusResumed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "HandleApplicationFocusResumed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PSVR2Helper::InputDeviceChangeTriggered(UnityEngine::InputSystem::InputDevice inputDevice, UnityEngine::InputSystem::InputDeviceChange inputDeviceChange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "InputDeviceChangeTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputDevice, inputDeviceChange);
}
 void GlobalNamespace::PSVR2Helper::AddControllerToMap(UnityEngine::XR::XRNode forNode, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "AddControllerToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forNode, device);
}
 void GlobalNamespace::PSVR2Helper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::PSVR2Helper::PSVR2Helper()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PSVR2Helper>())) {}
 void GlobalNamespace::PSVR2Helper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PSVR2Helper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
