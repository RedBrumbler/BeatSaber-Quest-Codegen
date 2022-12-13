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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BlurredCoverImageView
  class BlurredCoverImageView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BlurredCoverImageView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlurredCoverImageView*, "", "BlurredCoverImageView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BlurredCoverImageView
  // [TokenAttribute] Offset: FFFFFFFF
  class BlurredCoverImageView : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BlurredCoverImageView::$SetTextureAsync$d__6
    struct $SetTextureAsync$d__6;
    public:
    // private HMUI.ImageView _coverImage
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::ImageView* coverImage;
    // Field size check
    static_assert(sizeof(::HMUI::ImageView*) == 0x8);
    // [SpaceAttribute] Offset: 0x112CA90
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // private System.String _settingTextureForLevelId
    // Size: 0x8
    // Offset: 0x28
    ::StringW settingTextureForLevelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // private UnityEngine.Texture2D _blurredCoverTexture
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Texture2D* blurredCoverTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.ImageView _coverImage
    [[deprecated("Use field access instead!")]] ::HMUI::ImageView*& dyn__coverImage();
    // Get instance field reference: private KawaseBlurRendererSO _kawaseBlurRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KawaseBlurRendererSO*& dyn__kawaseBlurRenderer();
    // Get instance field reference: private System.String _settingTextureForLevelId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__settingTextureForLevelId();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // Get instance field reference: private UnityEngine.Texture2D _blurredCoverTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn__blurredCoverTexture();
    // public System.Void .ctor()
    // Offset: 0x1400530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlurredCoverImageView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BlurredCoverImageView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlurredCoverImageView*, creationType>()));
    }
    // protected System.Void OnDestroy()
    // Offset: 0x14003A4
    void OnDestroy();
    // public System.Void SetTextureAsync(IPreviewBeatmapLevel level)
    // Offset: 0x140046C
    void SetTextureAsync(::GlobalNamespace::IPreviewBeatmapLevel* level);
  }; // BlurredCoverImageView
  #pragma pack(pop)
  static check_size<sizeof(BlurredCoverImageView), 56 + sizeof(::UnityEngine::Texture2D*)> __GlobalNamespace_BlurredCoverImageViewSizeCheck;
  static_assert(sizeof(BlurredCoverImageView) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlurredCoverImageView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BlurredCoverImageView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlurredCoverImageView::*)()>(&GlobalNamespace::BlurredCoverImageView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlurredCoverImageView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlurredCoverImageView::SetTextureAsync
// Il2CppName: SetTextureAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlurredCoverImageView::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::BlurredCoverImageView::SetTextureAsync)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlurredCoverImageView*), "SetTextureAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
