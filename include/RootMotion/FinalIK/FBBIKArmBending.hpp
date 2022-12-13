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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FBBIKArmBending
  class FBBIKArmBending;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKArmBending);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKArmBending*, "RootMotion.FinalIK", "FBBIKArmBending");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBBIKArmBending
  // [TokenAttribute] Offset: FFFFFFFF
  class FBBIKArmBending : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // public UnityEngine.Vector3 bendDirectionOffsetLeft
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 bendDirectionOffsetLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bendDirectionOffsetRight
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 bendDirectionOffsetRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 characterSpaceBendOffsetLeft
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 characterSpaceBendOffsetLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 characterSpaceBendOffsetRight
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 characterSpaceBendOffsetRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion leftHandTargetRotation
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Quaternion leftHandTargetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion rightHandTargetRotation
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Quaternion rightHandTargetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x70
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedIK*& dyn_ik();
    // Get instance field reference: public UnityEngine.Vector3 bendDirectionOffsetLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bendDirectionOffsetLeft();
    // Get instance field reference: public UnityEngine.Vector3 bendDirectionOffsetRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bendDirectionOffsetRight();
    // Get instance field reference: public UnityEngine.Vector3 characterSpaceBendOffsetLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_characterSpaceBendOffsetLeft();
    // Get instance field reference: public UnityEngine.Vector3 characterSpaceBendOffsetRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_characterSpaceBendOffsetRight();
    // Get instance field reference: private UnityEngine.Quaternion leftHandTargetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_leftHandTargetRotation();
    // Get instance field reference: private UnityEngine.Quaternion rightHandTargetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rightHandTargetRotation();
    // Get instance field reference: private System.Boolean initiated
    [[deprecated("Use field access instead!")]] bool& dyn_initiated();
    // public System.Void .ctor()
    // Offset: 0x22FAD90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKArmBending* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FBBIKArmBending::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKArmBending*, creationType>()));
    }
    // private System.Void LateUpdate()
    // Offset: 0x22FA570
    void LateUpdate();
    // private System.Void OnPostFBBIK()
    // Offset: 0x22FAAD8
    void OnPostFBBIK();
    // private System.Void OnDestroy()
    // Offset: 0x22FAC98
    void OnDestroy();
  }; // RootMotion.FinalIK.FBBIKArmBending
  #pragma pack(pop)
  static check_size<sizeof(FBBIKArmBending), 112 + sizeof(bool)> __RootMotion_FinalIK_FBBIKArmBendingSizeCheck;
  static_assert(sizeof(FBBIKArmBending) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKArmBending::*)()>(&RootMotion::FinalIK::FBBIKArmBending::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKArmBending*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::OnPostFBBIK
// Il2CppName: OnPostFBBIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKArmBending::*)()>(&RootMotion::FinalIK::FBBIKArmBending::OnPostFBBIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKArmBending*), "OnPostFBBIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKArmBending::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKArmBending::*)()>(&RootMotion::FinalIK::FBBIKArmBending::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKArmBending*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
