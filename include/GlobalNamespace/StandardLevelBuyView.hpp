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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelBuyView
  class StandardLevelBuyView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyView*, "", "StandardLevelBuyView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelBuyView
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelBuyView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // private UnityEngine.UI.Button _buyButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* buyButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LevelBar _levelBar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private UnityEngine.UI.Button _buyButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__buyButton();
    // public UnityEngine.UI.Button get_buyButton()
    // Offset: 0x1423F48
    ::UnityEngine::UI::Button* get_buyButton();
    // public System.Void .ctor()
    // Offset: 0x1423F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelBuyView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelBuyView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelBuyView*, creationType>()));
    }
    // public System.Void SetContent(IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x1423F50
    void SetContent(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);
  }; // StandardLevelBuyView
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelBuyView), 32 + sizeof(::UnityEngine::UI::Button*)> __GlobalNamespace_StandardLevelBuyViewSizeCheck;
  static_assert(sizeof(StandardLevelBuyView) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyView::get_buyButton
// Il2CppName: get_buyButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyView::*)()>(&GlobalNamespace::StandardLevelBuyView::get_buyButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyView*), "get_buyButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyView::SetContent
// Il2CppName: SetContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelBuyView::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::StandardLevelBuyView::SetContent)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyView*), "SetContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevel});
  }
};
