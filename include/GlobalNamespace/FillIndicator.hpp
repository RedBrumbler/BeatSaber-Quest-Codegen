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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FillIndicator
  class FillIndicator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FillIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FillIndicator*, "", "FillIndicator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FillIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  class FillIndicator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _image
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Image* image;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Image _bgImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__bgImage();
    // Get instance field reference: private UnityEngine.UI.Image _image
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__image();
    // public System.Single get_fillAmount()
    // Offset: 0x139C8B8
    float get_fillAmount();
    // public System.Void set_fillAmount(System.Single value)
    // Offset: 0x139C868
    void set_fillAmount(float value);
    // public System.Void .ctor()
    // Offset: 0x139C8D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FillIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FillIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FillIndicator*, creationType>()));
    }
  }; // FillIndicator
  #pragma pack(pop)
  static check_size<sizeof(FillIndicator), 32 + sizeof(::UnityEngine::UI::Image*)> __GlobalNamespace_FillIndicatorSizeCheck;
  static_assert(sizeof(FillIndicator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FillIndicator::get_fillAmount
// Il2CppName: get_fillAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FillIndicator::*)()>(&GlobalNamespace::FillIndicator::get_fillAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FillIndicator*), "get_fillAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FillIndicator::set_fillAmount
// Il2CppName: set_fillAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FillIndicator::*)(float)>(&GlobalNamespace::FillIndicator::set_fillAmount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FillIndicator*), "set_fillAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FillIndicator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
