// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::OffsetModifier::OffsetLimits);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetModifier::OffsetLimits*, "RootMotion.FinalIK", "OffsetModifier/OffsetLimits");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits
  // [TokenAttribute] Offset: FFFFFFFF
  class OffsetModifier::OffsetLimits : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x114A980
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0x114A9B8
    // public System.Single spring
    // Size: 0x4
    // Offset: 0x14
    float spring;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114A9F0
    // public System.Boolean x
    // Size: 0x1
    // Offset: 0x18
    bool x;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x114AA28
    // public System.Boolean y
    // Size: 0x1
    // Offset: 0x19
    bool y;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x114AA60
    // public System.Boolean z
    // Size: 0x1
    // Offset: 0x1A
    bool z;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: z and: minX
    char __padding4[0x1] = {};
    // [TooltipAttribute] Offset: 0x114AA98
    // public System.Single minX
    // Size: 0x4
    // Offset: 0x1C
    float minX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114AAD0
    // public System.Single maxX
    // Size: 0x4
    // Offset: 0x20
    float maxX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114AB08
    // public System.Single minY
    // Size: 0x4
    // Offset: 0x24
    float minY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114AB40
    // public System.Single maxY
    // Size: 0x4
    // Offset: 0x28
    float maxY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114AB78
    // public System.Single minZ
    // Size: 0x4
    // Offset: 0x2C
    float minZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114ABB0
    // public System.Single maxZ
    // Size: 0x4
    // Offset: 0x30
    float maxZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effector
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedEffector& dyn_effector();
    // Get instance field reference: public System.Single spring
    [[deprecated("Use field access instead!")]] float& dyn_spring();
    // Get instance field reference: public System.Boolean x
    [[deprecated("Use field access instead!")]] bool& dyn_x();
    // Get instance field reference: public System.Boolean y
    [[deprecated("Use field access instead!")]] bool& dyn_y();
    // Get instance field reference: public System.Boolean z
    [[deprecated("Use field access instead!")]] bool& dyn_z();
    // Get instance field reference: public System.Single minX
    [[deprecated("Use field access instead!")]] float& dyn_minX();
    // Get instance field reference: public System.Single maxX
    [[deprecated("Use field access instead!")]] float& dyn_maxX();
    // Get instance field reference: public System.Single minY
    [[deprecated("Use field access instead!")]] float& dyn_minY();
    // Get instance field reference: public System.Single maxY
    [[deprecated("Use field access instead!")]] float& dyn_maxY();
    // Get instance field reference: public System.Single minZ
    [[deprecated("Use field access instead!")]] float& dyn_minZ();
    // Get instance field reference: public System.Single maxZ
    [[deprecated("Use field access instead!")]] float& dyn_maxZ();
    // public System.Void .ctor()
    // Offset: 0x205E098
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetModifier::OffsetLimits* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::OffsetModifier::OffsetLimits::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetModifier::OffsetLimits*, creationType>()));
    }
    // public System.Void Apply(RootMotion.FinalIK.IKEffector e, UnityEngine.Quaternion rootRotation)
    // Offset: 0x205DA78
    void Apply(::RootMotion::FinalIK::IKEffector* e, ::UnityEngine::Quaternion rootRotation);
    // private System.Single SpringAxis(System.Single value, System.Single min, System.Single max)
    // Offset: 0x205DF90
    float SpringAxis(float value, float min, float max);
    // private System.Single Spring(System.Single value, System.Single limit, System.Boolean negative)
    // Offset: 0x205DFC0
    float Spring(float value, float limit, bool negative);
  }; // RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits
  #pragma pack(pop)
  static check_size<sizeof(OffsetModifier::OffsetLimits), 48 + sizeof(float)> __RootMotion_FinalIK_OffsetModifier_OffsetLimitsSizeCheck;
  static_assert(sizeof(OffsetModifier::OffsetLimits) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::OffsetLimits::*)(::RootMotion::FinalIK::IKEffector*, ::UnityEngine::Quaternion)>(&RootMotion::FinalIK::OffsetModifier::OffsetLimits::Apply)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKEffector")->byval_arg;
    static auto* rootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier::OffsetLimits*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, rootRotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::SpringAxis
// Il2CppName: SpringAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::OffsetModifier::OffsetLimits::*)(float, float, float)>(&RootMotion::FinalIK::OffsetModifier::OffsetLimits::SpringAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier::OffsetLimits*), "SpringAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::Spring
// Il2CppName: Spring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::OffsetModifier::OffsetLimits::*)(float, float, bool)>(&RootMotion::FinalIK::OffsetModifier::OffsetLimits::Spring)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* negative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier::OffsetLimits*), "Spring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, limit, negative});
  }
};
