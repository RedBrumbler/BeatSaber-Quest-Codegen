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
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: TwistRelaxer
  class TwistRelaxer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::TwistRelaxer);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.TwistRelaxer
  // [TokenAttribute] Offset: FFFFFFFF
  class TwistRelaxer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public RootMotion.FinalIK.IK ik
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::IK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IK*) == 0x8);
    // [TooltipAttribute] Offset: 0x1146938
    // public UnityEngine.Transform parent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* parent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x1146970
    // public UnityEngine.Transform child
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* child;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x11469A8
    // [RangeAttribute] Offset: 0x11469A8
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x30
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x11469FC
    // [RangeAttribute] Offset: 0x11469FC
    // public System.Single parentChildCrossfade
    // Size: 0x4
    // Offset: 0x34
    float parentChildCrossfade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1146A50
    // [RangeAttribute] Offset: 0x1146A50
    // public System.Single twistAngleOffset
    // Size: 0x4
    // Offset: 0x38
    float twistAngleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 twistAxis
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 twistAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axisRelativeToParentDefault
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 axisRelativeToParentDefault;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axisRelativeToChildDefault
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 axisRelativeToChildDefault;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.IK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IK*& dyn_ik();
    // Get instance field reference: public UnityEngine.Transform parent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_parent();
    // Get instance field reference: public UnityEngine.Transform child
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_child();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: public System.Single parentChildCrossfade
    [[deprecated("Use field access instead!")]] float& dyn_parentChildCrossfade();
    // Get instance field reference: public System.Single twistAngleOffset
    [[deprecated("Use field access instead!")]] float& dyn_twistAngleOffset();
    // Get instance field reference: private UnityEngine.Vector3 twistAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_twistAxis();
    // Get instance field reference: private UnityEngine.Vector3 axis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_axis();
    // Get instance field reference: private UnityEngine.Vector3 axisRelativeToParentDefault
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_axisRelativeToParentDefault();
    // Get instance field reference: private UnityEngine.Vector3 axisRelativeToChildDefault
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_axisRelativeToChildDefault();
    // public System.Void .ctor()
    // Offset: 0x2066CDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwistRelaxer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::TwistRelaxer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwistRelaxer*, creationType>()));
    }
    // public System.Void Relax()
    // Offset: 0x2066274
    void Relax();
    // private System.Void Start()
    // Offset: 0x2066654
    void Start();
    // private System.Void OnPostUpdate()
    // Offset: 0x2066AC8
    void OnPostUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x2066B50
    void LateUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x2066BD8
    void OnDestroy();
  }; // RootMotion.FinalIK.TwistRelaxer
  #pragma pack(pop)
  static check_size<sizeof(TwistRelaxer), 96 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_TwistRelaxerSizeCheck;
  static_assert(sizeof(TwistRelaxer) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::Relax
// Il2CppName: Relax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::Relax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "Relax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::OnPostUpdate
// Il2CppName: OnPostUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::OnPostUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "OnPostUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
