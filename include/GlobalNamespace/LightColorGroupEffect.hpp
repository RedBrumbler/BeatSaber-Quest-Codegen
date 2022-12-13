// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: IBpmController
  class IBpmController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: LightColorBeatmapEventData
  class LightColorBeatmapEventData;
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: SongTimeTweeningManager
  class SongTimeTweeningManager;
  // Forward declaring type: FloatTween
  class FloatTween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightColorGroupEffect
  class LightColorGroupEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffect*, "", "LightColorGroupEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x99
  #pragma pack(push, 1)
  // Autogenerated type: LightColorGroupEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LightColorGroupEffect : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::LightColorGroupEffect::InitData
    class InitData;
    public:
    // protected readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // private readonly System.Int32 _lightId
    // Size: 0x4
    // Offset: 0x18
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lightId and: lightManager
    char __padding1[0x4] = {};
    // private readonly LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    // private readonly Tweening.SongTimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    ::Tweening::SongTimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::SongTimeTweeningManager*) == 0x8);
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private readonly IBpmController _bpmController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IBpmController* bpmController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBpmController*) == 0x8);
    // private readonly Tweening.FloatTween _floatTween
    // Size: 0x8
    // Offset: 0x40
    ::Tweening::FloatTween* floatTween;
    // Field size check
    static_assert(sizeof(::Tweening::FloatTween*) == 0x8);
    // private readonly BeatmapDataCallbackWrapper _lightColorBeatmapEventCallbackWrapper
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapDataCallbackWrapper* lightColorBeatmapEventCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private System.Single _fromStrobeFrequency
    // Size: 0x4
    // Offset: 0x50
    float fromStrobeFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _toStrobeFrequency
    // Size: 0x4
    // Offset: 0x54
    float toStrobeFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _fromColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color fromColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _toColor
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color toColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _alternativeFromColor
    // Size: 0x10
    // Offset: 0x78
    ::UnityEngine::Color alternativeFromColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _alternativeToColor
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Color alternativeToColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _usingBoostColors
    // Size: 0x1
    // Offset: 0x98
    bool usingBoostColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x111F8B0
    // Get static field: static private readonly UnityEngine.Color offColor
    static ::UnityEngine::Color _get_offColor();
    // Set static field: static private readonly UnityEngine.Color offColor
    static void _set_offColor(::UnityEngine::Color value);
    // Get instance field reference: protected readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private readonly System.Int32 _lightId
    [[deprecated("Use field access instead!")]] int& dyn__lightId();
    // Get instance field reference: private readonly LightWithIdManager _lightManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private readonly Tweening.SongTimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::SongTimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly IBpmController _bpmController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBpmController*& dyn__bpmController();
    // Get instance field reference: private readonly Tweening.FloatTween _floatTween
    [[deprecated("Use field access instead!")]] ::Tweening::FloatTween*& dyn__floatTween();
    // Get instance field reference: private readonly BeatmapDataCallbackWrapper _lightColorBeatmapEventCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__lightColorBeatmapEventCallbackWrapper();
    // Get instance field reference: private System.Single _fromStrobeFrequency
    [[deprecated("Use field access instead!")]] float& dyn__fromStrobeFrequency();
    // Get instance field reference: private System.Single _toStrobeFrequency
    [[deprecated("Use field access instead!")]] float& dyn__toStrobeFrequency();
    // Get instance field reference: private UnityEngine.Color _fromColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__fromColor();
    // Get instance field reference: private UnityEngine.Color _toColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__toColor();
    // Get instance field reference: private UnityEngine.Color _alternativeFromColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__alternativeFromColor();
    // Get instance field reference: private UnityEngine.Color _alternativeToColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__alternativeToColor();
    // Get instance field reference: private System.Boolean _usingBoostColors
    [[deprecated("Use field access instead!")]] bool& dyn__usingBoostColors();
    // public System.Void .ctor(LightColorGroupEffect/InitData initData, LightWithIdManager lightManager, Tweening.SongTimeTweeningManager tweeningManager, ColorManager colorManager, BeatmapCallbacksController beatmapCallbacksController, IBpmController bpmController)
    // Offset: 0x151C6DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightColorGroupEffect* New_ctor(::GlobalNamespace::LightColorGroupEffect::InitData* initData, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::IBpmController* bpmController) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightColorGroupEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightColorGroupEffect*, creationType>(initData, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController)));
    }
    // static private System.Void .cctor()
    // Offset: 0x151D130
    static void _cctor();
    // public System.Void Cleanup()
    // Offset: 0x151C974
    void Cleanup();
    // private System.Void HandleColorChangeBeatmapEvent(LightColorBeatmapEventData currentEventData)
    // Offset: 0x151CA20
    void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEventData);
    // public System.Void UseBoostColors(System.Boolean useBoostColors)
    // Offset: 0x151CE8C
    void UseBoostColors(bool useBoostColors);
    // protected UnityEngine.Color GetColor(EnvironmentColorType colorType, System.Boolean colorBoost, System.Single brightness)
    // Offset: 0x151CF78
    ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float brightness);
    // private System.Void SetData(UnityEngine.Color fromColor, UnityEngine.Color toColor, UnityEngine.Color alternativeFromColor, UnityEngine.Color alternativeToColor, System.Single fromStrobeBeatFrequency, System.Single toStrobeBeatFrequency)
    // Offset: 0x151CFB0
    void SetData(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor, ::UnityEngine::Color alternativeToColor, float fromStrobeBeatFrequency, float toStrobeBeatFrequency);
    // private System.Void SetColor(System.Single t)
    // Offset: 0x151CD48
    void SetColor(float t);
  }; // LightColorGroupEffect
  #pragma pack(pop)
  static check_size<sizeof(LightColorGroupEffect), 152 + sizeof(bool)> __GlobalNamespace_LightColorGroupEffectSizeCheck;
  static_assert(sizeof(LightColorGroupEffect) == 0x99);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LightColorGroupEffect::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorGroupEffect::*)()>(&GlobalNamespace::LightColorGroupEffect::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::HandleColorChangeBeatmapEvent
// Il2CppName: HandleColorChangeBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(&GlobalNamespace::LightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* currentEventData = &::il2cpp_utils::GetClassFromName("", "LightColorBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), "HandleColorChangeBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::UseBoostColors
// Il2CppName: UseBoostColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorGroupEffect::*)(bool)>(&GlobalNamespace::LightColorGroupEffect::UseBoostColors)> {
  static const MethodInfo* get() {
    static auto* useBoostColors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), "UseBoostColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useBoostColors});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float)>(&GlobalNamespace::LightColorGroupEffect::GetColor)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "EnvironmentColorType")->byval_arg;
    static auto* colorBoost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* brightness = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType, colorBoost, brightness});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorGroupEffect::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, float, float)>(&GlobalNamespace::LightColorGroupEffect::SetData)> {
  static const MethodInfo* get() {
    static auto* fromColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* toColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* alternativeFromColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* alternativeToColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* fromStrobeBeatFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toStrobeBeatFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromColor, toColor, alternativeFromColor, alternativeToColor, fromStrobeBeatFrequency, toStrobeBeatFrequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightColorGroupEffect::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorGroupEffect::*)(float)>(&GlobalNamespace::LightColorGroupEffect::SetColor)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightColorGroupEffect*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
