// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationPlayableExtensions
  class AnimationPlayableExtensions : public ::CsObject {
    public:
    // static public System.Void SetAnimatedProperties(U playable, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetAnimatedProperties(U playable, UnityEngine::AnimationClip* clip) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Animations", "AnimationPlayableExtensions", "SetAnimatedProperties", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, clip));
    }
    // static System.Void SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle playable, UnityEngine.AnimationClip animatedProperties)
    // Offset: 0x1936804
    static void SetAnimatedPropertiesInternal(UnityEngine::Playables::PlayableHandle& playable, UnityEngine::AnimationClip* animatedProperties);
  }; // UnityEngine.Animations.AnimationPlayableExtensions
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationPlayableExtensions*, "UnityEngine.Animations", "AnimationPlayableExtensions");
#pragma pack(pop)
