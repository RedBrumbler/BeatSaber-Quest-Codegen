#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayAudioOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipQueue_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedAudioClipSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::*)(GlobalNamespace::AudioClipQueue)>(&GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x20f4ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AudioClipQueue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding.Deinit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::*)()>(&GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::Deinit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20f5010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            "Deinit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding.HandleGameEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::*)()>(&GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20f50a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            "HandleGameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::*)()>(&GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__set__signal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__get__signal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__set__delay(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__get__delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__set__localizedAudioClips(::ArrayW<GlobalNamespace::LocalizedAudioClipSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::LocalizedAudioClipSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::LocalizedAudioClipSO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::LocalizedAudioClipSO> GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__get__localizedAudioClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::LocalizedAudioClipSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__set__audioClipQueue(GlobalNamespace::AudioClipQueue value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipQueue, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioClipQueue>(value));
}
constexpr GlobalNamespace::AudioClipQueue GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__get__audioClipQueue() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipQueue, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__set__randomObjectPicker(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO>>(value));
}
constexpr GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO> GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::__get__randomObjectPicker() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::Init(GlobalNamespace::AudioClipQueue audioClipQueue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AudioClipQueue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioClipQueue);
}
 void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::Deinit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            "Deinit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::HandleGameEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            "HandleGameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>())) {}
 void GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::PlayAudioOnGameEventController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20f4e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayAudioOnGameEventController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayAudioOnGameEventController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x20f4fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayAudioOnGameEventController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayAudioOnGameEventController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f509c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayAudioOnGameEventController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__set__audioClipQueue(GlobalNamespace::AudioClipQueue value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipQueue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioClipQueue>(value));
}
constexpr GlobalNamespace::AudioClipQueue GlobalNamespace::PlayAudioOnGameEventController::__get__audioClipQueue() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipQueue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__set__eventAudioBindings(::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding> GlobalNamespace::PlayAudioOnGameEventController::__get__eventAudioBindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PlayAudioOnGameEventController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayAudioOnGameEventController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayAudioOnGameEventController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayAudioOnGameEventController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::PlayAudioOnGameEventController::PlayAudioOnGameEventController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlayAudioOnGameEventController>())) {}
 void GlobalNamespace::PlayAudioOnGameEventController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayAudioOnGameEventController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
