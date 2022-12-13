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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DroppedFramesLabel
  class DroppedFramesLabel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DroppedFramesLabel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroppedFramesLabel*, "", "DroppedFramesLabel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: DroppedFramesLabel
  // [TokenAttribute] Offset: FFFFFFFF
  class DroppedFramesLabel : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Int32 _expectedFrameRate
    // Size: 0x4
    // Offset: 0x20
    int expectedFrameRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _resetInterval
    // Size: 0x4
    // Offset: 0x24
    int resetInterval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _totalNumberOfDroppedFrames
    // Size: 0x4
    // Offset: 0x28
    int totalNumberOfDroppedFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _syncedFrameTime
    // Size: 0x4
    // Offset: 0x2C
    float syncedFrameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _intervalTime
    // Size: 0x4
    // Offset: 0x30
    float intervalTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxFrameTimeInInterval
    // Size: 0x4
    // Offset: 0x34
    float maxFrameTimeInInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _frameCountInInterval
    // Size: 0x4
    // Offset: 0x38
    int frameCountInInterval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private System.Int32 _expectedFrameRate
    [[deprecated("Use field access instead!")]] int& dyn__expectedFrameRate();
    // Get instance field reference: private System.Int32 _resetInterval
    [[deprecated("Use field access instead!")]] int& dyn__resetInterval();
    // Get instance field reference: private System.Int32 _totalNumberOfDroppedFrames
    [[deprecated("Use field access instead!")]] int& dyn__totalNumberOfDroppedFrames();
    // Get instance field reference: private System.Single _syncedFrameTime
    [[deprecated("Use field access instead!")]] float& dyn__syncedFrameTime();
    // Get instance field reference: private System.Single _intervalTime
    [[deprecated("Use field access instead!")]] float& dyn__intervalTime();
    // Get instance field reference: private System.Single _maxFrameTimeInInterval
    [[deprecated("Use field access instead!")]] float& dyn__maxFrameTimeInInterval();
    // Get instance field reference: private System.Int32 _frameCountInInterval
    [[deprecated("Use field access instead!")]] int& dyn__frameCountInInterval();
    // public System.Void .ctor()
    // Offset: 0x161E390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DroppedFramesLabel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DroppedFramesLabel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DroppedFramesLabel*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x161E10C
    void Start();
    // protected System.Void Update()
    // Offset: 0x161E180
    void Update();
    // private System.Void RefreshText()
    // Offset: 0x161E26C
    void RefreshText();
  }; // DroppedFramesLabel
  #pragma pack(pop)
  static check_size<sizeof(DroppedFramesLabel), 56 + sizeof(int)> __GlobalNamespace_DroppedFramesLabelSizeCheck;
  static_assert(sizeof(DroppedFramesLabel) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroppedFramesLabel::*)()>(&GlobalNamespace::DroppedFramesLabel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroppedFramesLabel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroppedFramesLabel::*)()>(&GlobalNamespace::DroppedFramesLabel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroppedFramesLabel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::RefreshText
// Il2CppName: RefreshText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroppedFramesLabel::*)()>(&GlobalNamespace::DroppedFramesLabel::RefreshText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroppedFramesLabel*), "RefreshText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
