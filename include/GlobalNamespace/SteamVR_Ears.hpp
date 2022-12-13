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
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Ears
  class SteamVR_Ears;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Ears);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Ears*, "", "SteamVR_Ears");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Ears
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10D4838
  class SteamVR_Ears : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public SteamVR_Camera vrcam
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SteamVR_Camera* vrcam;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Camera*) == 0x8);
    // private System.Boolean usingSpeakers
    // Size: 0x1
    // Offset: 0x20
    bool usingSpeakers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingSpeakers and: offset
    char __padding1[0x3] = {};
    // private UnityEngine.Quaternion offset
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Quaternion offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SteamVR_Camera vrcam
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Camera*& dyn_vrcam();
    // Get instance field reference: private System.Boolean usingSpeakers
    [[deprecated("Use field access instead!")]] bool& dyn_usingSpeakers();
    // Get instance field reference: private UnityEngine.Quaternion offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_offset();
    // public System.Void .ctor()
    // Offset: 0x18DA410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Ears* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Ears::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Ears*, creationType>()));
    }
    // private System.Void OnNewPosesApplied()
    // Offset: 0x18DA024
    void OnNewPosesApplied();
    // private System.Void OnEnable()
    // Offset: 0x18DA198
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18DA33C
    void OnDisable();
  }; // SteamVR_Ears
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Ears), 36 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_SteamVR_EarsSizeCheck;
  static_assert(sizeof(SteamVR_Ears) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::OnNewPosesApplied
// Il2CppName: OnNewPosesApplied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Ears::*)()>(&GlobalNamespace::SteamVR_Ears::OnNewPosesApplied)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Ears*), "OnNewPosesApplied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Ears::*)()>(&GlobalNamespace::SteamVR_Ears::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Ears*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Ears::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Ears::*)()>(&GlobalNamespace::SteamVR_Ears::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Ears*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
