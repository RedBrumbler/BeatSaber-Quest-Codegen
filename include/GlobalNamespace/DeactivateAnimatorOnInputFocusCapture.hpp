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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DeactivateAnimatorOnInputFocusCapture
  class DeactivateAnimatorOnInputFocusCapture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*, "", "DeactivateAnimatorOnInputFocusCapture");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: DeactivateAnimatorOnInputFocusCapture
  // [TokenAttribute] Offset: FFFFFFFF
  class DeactivateAnimatorOnInputFocusCapture : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0x10F8320
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Boolean _wasEnabled
    // Size: 0x1
    // Offset: 0x28
    bool wasEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private System.Boolean _wasEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__wasEnabled();
    // public System.Void .ctor()
    // Offset: 0x1620D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeactivateAnimatorOnInputFocusCapture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeactivateAnimatorOnInputFocusCapture*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1620938
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1620B94
    void OnDestroy();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x1620B48
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x1620D30
    void HandleInputFocusReleased();
  }; // DeactivateAnimatorOnInputFocusCapture
  #pragma pack(pop)
  static check_size<sizeof(DeactivateAnimatorOnInputFocusCapture), 40 + sizeof(bool)> __GlobalNamespace_DeactivateAnimatorOnInputFocusCaptureSizeCheck;
  static_assert(sizeof(DeactivateAnimatorOnInputFocusCapture) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured
// Il2CppName: HandleInputFocusCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*), "HandleInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased
// Il2CppName: HandleInputFocusReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*), "HandleInputFocusReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
