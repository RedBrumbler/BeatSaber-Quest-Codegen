// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPositionDisplay
  class MultiplayerPositionDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerPositionDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPositionDisplay*, "", "MultiplayerPositionDisplay");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPositionDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerPositionDisplay : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _leadingColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color leadingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _failedColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color failedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _fadeInDuration
    // Size: 0x4
    // Offset: 0x50
    float fadeInDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _crossFadeDuration
    // Size: 0x4
    // Offset: 0x54
    float crossFadeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutDuration
    // Size: 0x4
    // Offset: 0x58
    float fadeOutDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fadeOutDuration and: scoreProvider
    char __padding6[0x4] = {};
    // [InjectAttribute] Offset: 0x11240EC
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x11240FC
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private System.Boolean _wasFirst
    // Size: 0x1
    // Offset: 0x70
    bool wasFirst;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isFailed
    // Size: 0x1
    // Offset: 0x71
    bool isFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _updatingColor
    // Size: 0x1
    // Offset: 0x72
    bool updatingColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updatingColor and: startColor
    char __padding11[0x1] = {};
    // private UnityEngine.Color _startColor
    // Size: 0x10
    // Offset: 0x74
    ::UnityEngine::Color startColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _targetColor
    // Size: 0x10
    // Offset: 0x84
    ::UnityEngine::Color targetColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _colorAnimationStartTime
    // Size: 0x4
    // Offset: 0x94
    float colorAnimationStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _colorAnimationStartDuration
    // Size: 0x4
    // Offset: 0x98
    float colorAnimationStartDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__text();
    // Get instance field reference: private UnityEngine.Color _normalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__normalColor();
    // Get instance field reference: private UnityEngine.Color _leadingColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__leadingColor();
    // Get instance field reference: private UnityEngine.Color _failedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__failedColor();
    // Get instance field reference: private System.Single _fadeInDuration
    [[deprecated("Use field access instead!")]] float& dyn__fadeInDuration();
    // Get instance field reference: private System.Single _crossFadeDuration
    [[deprecated("Use field access instead!")]] float& dyn__crossFadeDuration();
    // Get instance field reference: private System.Single _fadeOutDuration
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutDuration();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private System.Boolean _wasFirst
    [[deprecated("Use field access instead!")]] bool& dyn__wasFirst();
    // Get instance field reference: private System.Boolean _isFailed
    [[deprecated("Use field access instead!")]] bool& dyn__isFailed();
    // Get instance field reference: private System.Boolean _updatingColor
    [[deprecated("Use field access instead!")]] bool& dyn__updatingColor();
    // Get instance field reference: private UnityEngine.Color _startColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__startColor();
    // Get instance field reference: private UnityEngine.Color _targetColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__targetColor();
    // Get instance field reference: private System.Single _colorAnimationStartTime
    [[deprecated("Use field access instead!")]] float& dyn__colorAnimationStartTime();
    // Get instance field reference: private System.Single _colorAnimationStartDuration
    [[deprecated("Use field access instead!")]] float& dyn__colorAnimationStartDuration();
    // public System.Void .ctor()
    // Offset: 0x13F6AA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerPositionDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerPositionDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerPositionDisplay*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13F64F0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13F65F4
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13F6768
    void Update();
    // private System.Void UpdateColors()
    // Offset: 0x13F67BC
    void UpdateColors();
    // private System.Void UpdatePosition()
    // Offset: 0x13F685C
    void UpdatePosition();
    // private System.Void HandlePlayerFailed()
    // Offset: 0x13F69D8
    void HandlePlayerFailed();
    // private System.Void HandleFirstPlayerDidChange(MultiplayerScoreProvider/RankedPlayer obj)
    // Offset: 0x13F69F0
    void HandleFirstPlayerDidChange(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* obj);
    // private System.Void ChangeColor(UnityEngine.Color toColor, System.Single duration)
    // Offset: 0x13F66E0
    void ChangeColor(::UnityEngine::Color toColor, float duration);
  }; // MultiplayerPositionDisplay
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPositionDisplay), 152 + sizeof(float)> __GlobalNamespace_MultiplayerPositionDisplaySizeCheck;
  static_assert(sizeof(MultiplayerPositionDisplay) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::UpdateColors
// Il2CppName: UpdateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::UpdateColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "UpdateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::UpdatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::HandlePlayerFailed
// Il2CppName: HandlePlayerFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::HandlePlayerFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "HandlePlayerFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::HandleFirstPlayerDidChange
// Il2CppName: HandleFirstPlayerDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerPositionDisplay::HandleFirstPlayerDidChange)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "HandleFirstPlayerDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::ChangeColor
// Il2CppName: ChangeColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)(::UnityEngine::Color, float)>(&GlobalNamespace::MultiplayerPositionDisplay::ChangeColor)> {
  static const MethodInfo* get() {
    static auto* toColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "ChangeColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toColor, duration});
  }
};
