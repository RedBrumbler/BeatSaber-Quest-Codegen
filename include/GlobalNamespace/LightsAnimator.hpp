// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: ColorTween
  class ColorTween;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightsAnimator
  class LightsAnimator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LightsAnimator::$DisableDirectionalLightsCoroutine$d__11
    class $DisableDirectionalLightsCoroutine$d__11;
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*) == 0x8);
    // private DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::DirectionalLight*>* directionalLights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DirectionalLight*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D1FC
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.ColorTween _tween
    // Size: 0x8
    // Offset: 0x30
    Tweening::ColorTween* tween;
    // Field size check
    static_assert(sizeof(Tweening::ColorTween*) == 0x8);
    // Creating value type constructor for type: LightsAnimator
    LightsAnimator(::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights_ = {}, ::Array<GlobalNamespace::DirectionalLight*>* directionalLights_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::ColorTween* tween_ = {}) noexcept : lights{lights_}, directionalLights{directionalLights_}, tweeningManager{tweeningManager_}, tween{tween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x120535C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1205480
    void OnDestroy();
    // public System.Void AnimateToColor(UnityEngine.Color color, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x1205518
    void AnimateToColor(UnityEngine::Color color, float duration, Tweening::EaseType easeType);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1205628
    void SetColor(UnityEngine::Color color);
    // private System.Void SetLightsColor(UnityEngine.Color color)
    // Offset: 0x120568C
    void SetLightsColor(UnityEngine::Color color);
    // public System.Void SetLightsWidth(System.Single width)
    // Offset: 0x1205794
    void SetLightsWidth(float width);
    // public System.Void DisableDirectionalLights(System.Single delay)
    // Offset: 0x1205810
    void DisableDirectionalLights(float delay);
    // private System.Collections.IEnumerator DisableDirectionalLightsCoroutine(System.Single delay)
    // Offset: 0x1205850
    System::Collections::IEnumerator* DisableDirectionalLightsCoroutine(float delay);
    // public System.Void .ctor()
    // Offset: 0x12058FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightsAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightsAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightsAnimator*, creationType>()));
    }
  }; // LightsAnimator
  #pragma pack(pop)
  static check_size<sizeof(LightsAnimator), 48 + sizeof(Tweening::ColorTween*)> __GlobalNamespace_LightsAnimatorSizeCheck;
  static_assert(sizeof(LightsAnimator) == 0x38);
  // Writing MetadataGetter for method: LightsAnimator::Awake
  // Il2CppName: Awake
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)()>(&LightsAnimator::Awake)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::OnDestroy
  // Il2CppName: OnDestroy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)()>(&LightsAnimator::OnDestroy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::AnimateToColor
  // Il2CppName: AnimateToColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)(UnityEngine::Color, float, Tweening::EaseType)>(&LightsAnimator::AnimateToColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "AnimateToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<Tweening::EaseType>()});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::SetColor
  // Il2CppName: SetColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)(UnityEngine::Color)>(&LightsAnimator::SetColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::SetLightsColor
  // Il2CppName: SetLightsColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)(UnityEngine::Color)>(&LightsAnimator::SetLightsColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "SetLightsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::SetLightsWidth
  // Il2CppName: SetLightsWidth
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)(float)>(&LightsAnimator::SetLightsWidth)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "SetLightsWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::DisableDirectionalLights
  // Il2CppName: DisableDirectionalLights
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)(float)>(&LightsAnimator::DisableDirectionalLights)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "DisableDirectionalLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::DisableDirectionalLightsCoroutine
  // Il2CppName: DisableDirectionalLightsCoroutine
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (LightsAnimator::*)(float)>(&LightsAnimator::DisableDirectionalLightsCoroutine)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), "DisableDirectionalLightsCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: LightsAnimator::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)()>(&LightsAnimator::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LightsAnimator::*)()>(&LightsAnimator::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LightsAnimator*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightsAnimator*, "", "LightsAnimator");
