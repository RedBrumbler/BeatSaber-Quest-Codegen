#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterScreenLayoutAnimator_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.StartCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2182858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "StartCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.StopCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(bool)>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2182a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "StopCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.Move
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x21828dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "Move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2182ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator._Move_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_Move_b__7_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2182ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "<Move>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__nextLevelTransform(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__nextLevelBasePosition(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelBasePosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__nextLevelCountdownPosition(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelCountdownPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__transitionDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__transitionDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__tweeningManager(Tweening::TimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::TimeTweeningManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::TimeTweeningManager>(value));
}
constexpr Tweening::TimeTweeningManager GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::TimeTweeningManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "StartCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown(bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "StopCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, instant);
}
 void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move(UnityEngine::Vector3 from, UnityEngine::Vector3 to, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "Move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, from, to, duration);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::MultiplayerLobbyCenterScreenLayoutAnimator()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLobbyCenterScreenLayoutAnimator>())) {}
 void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_Move_b__7_0(UnityEngine::Vector3 pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>::get(),
                            "<Move>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
