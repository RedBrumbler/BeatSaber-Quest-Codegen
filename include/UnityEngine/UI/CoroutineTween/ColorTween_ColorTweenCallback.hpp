// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine/UI/CoroutineTween/ColorTween.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback*, "UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenCallback");
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorTween::ColorTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1982864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTween::ColorTweenCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTween::ColorTweenCallback*, creationType>()));
    }
  }; // UnityEngine.UI.CoroutineTween.ColorTween/UnityEngine.UI.CoroutineTween.ColorTweenCallback
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
