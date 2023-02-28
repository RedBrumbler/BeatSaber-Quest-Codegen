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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CountdownElementController
  class CountdownElementController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CountdownElementController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownElementController*, "", "CountdownElementController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CountdownElementController
  // [TokenAttribute] Offset: FFFFFFFF
  class CountdownElementController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animation*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.Animation _animation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animation*& dyn__animation();
    // public System.Void .ctor()
    // Offset: 0x1446974
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownElementController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CountdownElementController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownElementController*, creationType>()));
    }
    // public System.Void SetTextAndRunAnimation(System.String text)
    // Offset: 0x144666C
    void SetTextAndRunAnimation(::StringW text);
    // public System.Void StopAndHide()
    // Offset: 0x14467CC
    void StopAndHide();
  }; // CountdownElementController
  #pragma pack(pop)
  static check_size<sizeof(CountdownElementController), 32 + sizeof(::UnityEngine::Animation*)> __GlobalNamespace_CountdownElementControllerSizeCheck;
  static_assert(sizeof(CountdownElementController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CountdownElementController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CountdownElementController::SetTextAndRunAnimation
// Il2CppName: SetTextAndRunAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)(::StringW)>(&GlobalNamespace::CountdownElementController::SetTextAndRunAnimation)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownElementController*), "SetTextAndRunAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownElementController::StopAndHide
// Il2CppName: StopAndHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)()>(&GlobalNamespace::CountdownElementController::StopAndHide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownElementController*), "StopAndHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
