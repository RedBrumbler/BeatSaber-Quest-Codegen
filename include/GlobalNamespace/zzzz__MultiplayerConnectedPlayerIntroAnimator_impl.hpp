#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerIntroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator.SetBeforeIntroValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211873c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>::get(),
                            "SetBeforeIntroValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2118758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__set__introPlayableDirector(UnityEngine::Playables::PlayableDirector value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableDirector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Playables::PlayableDirector>(value));
}
constexpr UnityEngine::Playables::PlayableDirector GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__get__introPlayableDirector() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableDirector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>::get(),
                            "SetBeforeIntroValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::MultiplayerConnectedPlayerIntroAnimator()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerConnectedPlayerIntroAnimator>())) {}
 void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
