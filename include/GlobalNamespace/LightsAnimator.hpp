// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
  // Forward declaring type: ColorTween
  class ColorTween;
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
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightsAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightsAnimator*, "", "LightsAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightsAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class LightsAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::LightsAnimator::$DisableDirectionalLightsCoroutine$d__11
    class $DisableDirectionalLightsCoroutine$d__11;
    public:
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> lights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>) == 0x8);
    // private DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::DirectionalLight*> directionalLights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::DirectionalLight*>) == 0x8);
    // [InjectAttribute] Offset: 0x1127A80
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // private Tweening.ColorTween _tween
    // Size: 0x8
    // Offset: 0x30
    ::Tweening::ColorTween* tween;
    // Field size check
    static_assert(sizeof(::Tweening::ColorTween*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TubeBloomPrePassLight[] _lights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>& dyn__lights();
    // Get instance field reference: private DirectionalLight[] _directionalLights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::DirectionalLight*>& dyn__directionalLights();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private Tweening.ColorTween _tween
    [[deprecated("Use field access instead!")]] ::Tweening::ColorTween*& dyn__tween();
    // public System.Void .ctor()
    // Offset: 0x15870CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightsAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightsAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightsAnimator*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1586B2C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1586C50
    void OnDestroy();
    // public System.Void AnimateToColor(UnityEngine.Color color, System.Single duration, EaseType easeType)
    // Offset: 0x1586CE8
    void AnimateToColor(::UnityEngine::Color color, float duration, ::GlobalNamespace::EaseType easeType);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1586DF8
    void SetColor(::UnityEngine::Color color);
    // private System.Void SetLightsColor(UnityEngine.Color color)
    // Offset: 0x1586E5C
    void SetLightsColor(::UnityEngine::Color color);
    // public System.Void SetLightsWidth(System.Single width)
    // Offset: 0x1586F64
    void SetLightsWidth(float width);
    // public System.Void DisableDirectionalLights(System.Single delay)
    // Offset: 0x1586FE0
    void DisableDirectionalLights(float delay);
    // private System.Collections.IEnumerator DisableDirectionalLightsCoroutine(System.Single delay)
    // Offset: 0x1587020
    ::System::Collections::IEnumerator* DisableDirectionalLightsCoroutine(float delay);
  }; // LightsAnimator
  #pragma pack(pop)
  static check_size<sizeof(LightsAnimator), 48 + sizeof(::Tweening::ColorTween*)> __GlobalNamespace_LightsAnimatorSizeCheck;
  static_assert(sizeof(LightsAnimator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)()>(&GlobalNamespace::LightsAnimator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)()>(&GlobalNamespace::LightsAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::AnimateToColor
// Il2CppName: AnimateToColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)(::UnityEngine::Color, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::LightsAnimator::AnimateToColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "AnimateToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)(::UnityEngine::Color)>(&GlobalNamespace::LightsAnimator::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::SetLightsColor
// Il2CppName: SetLightsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)(::UnityEngine::Color)>(&GlobalNamespace::LightsAnimator::SetLightsColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "SetLightsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::SetLightsWidth
// Il2CppName: SetLightsWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)(float)>(&GlobalNamespace::LightsAnimator::SetLightsWidth)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "SetLightsWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::DisableDirectionalLights
// Il2CppName: DisableDirectionalLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightsAnimator::*)(float)>(&GlobalNamespace::LightsAnimator::DisableDirectionalLights)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "DisableDirectionalLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightsAnimator::DisableDirectionalLightsCoroutine
// Il2CppName: DisableDirectionalLightsCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::LightsAnimator::*)(float)>(&GlobalNamespace::LightsAnimator::DisableDirectionalLightsCoroutine)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightsAnimator*), "DisableDirectionalLightsCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
