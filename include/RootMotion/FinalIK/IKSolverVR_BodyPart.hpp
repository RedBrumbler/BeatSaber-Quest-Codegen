// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverVR::BodyPart);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverVR::BodyPart*, "RootMotion.FinalIK", "IKSolverVR/BodyPart");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::BodyPart : public ::Il2CppObject {
    public:
    public:
    // private System.Single <sqrMag>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float sqrMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <mag>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float mag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::RootMotion::FinalIK::IKSolverVR::VirtualBone*> bones;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKSolverVR::VirtualBone*>) == 0x8);
    // protected System.Boolean initiated
    // Size: 0x1
    // Offset: 0x20
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: rootPosition
    char __padding3[0x3] = {};
    // protected UnityEngine.Vector3 rootPosition
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 rootPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // protected UnityEngine.Quaternion rootRotation
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Quaternion rootRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // protected System.Int32 index
    // Size: 0x4
    // Offset: 0x40
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 LOD
    // Size: 0x4
    // Offset: 0x44
    int LOD;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Single <sqrMag>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$sqrMag$k__BackingField();
    // Get instance field reference: private System.Single <mag>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$mag$k__BackingField();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKSolverVR::VirtualBone*>& dyn_bones();
    // Get instance field reference: protected System.Boolean initiated
    [[deprecated("Use field access instead!")]] bool& dyn_initiated();
    // Get instance field reference: protected UnityEngine.Vector3 rootPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rootPosition();
    // Get instance field reference: protected UnityEngine.Quaternion rootRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rootRotation();
    // Get instance field reference: protected System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: protected System.Int32 LOD
    [[deprecated("Use field access instead!")]] int& dyn_LOD();
    // public System.Single get_sqrMag()
    // Offset: 0x244F06C
    float get_sqrMag();
    // private System.Void set_sqrMag(System.Single value)
    // Offset: 0x244F074
    void set_sqrMag(float value);
    // public System.Single get_mag()
    // Offset: 0x244F07C
    float get_mag();
    // private System.Void set_mag(System.Single value)
    // Offset: 0x244F084
    void set_mag(float value);
    // protected System.Void .ctor()
    // Offset: 0x244EFD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::BodyPart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverVR::BodyPart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::BodyPart*, creationType>()));
    }
    // protected System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnRead(::ArrayW<::UnityEngine::Vector3> positions, ::ArrayW<::UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void PreSolve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PreSolve();
    // public System.Void Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(ByRef<::ArrayW<::UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<::UnityEngine::Quaternion>> solvedRotations);
    // public System.Void ApplyOffsets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplyOffsets();
    // public System.Void ResetOffsets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResetOffsets();
    // public System.Void SetLOD(System.Int32 LOD)
    // Offset: 0x244F08C
    void SetLOD(int LOD);
    // public System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x244F094
    void Read(::ArrayW<::UnityEngine::Vector3> positions, ::ArrayW<::UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x244F450
    void MovePosition(::UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x244F5BC
    void MoveRotation(::UnityEngine::Quaternion rotation);
    // public System.Void Translate(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x244F84C
    void Translate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // public System.Void TranslateRoot(UnityEngine.Vector3 newRootPos, UnityEngine.Quaternion newRootRot)
    // Offset: 0x244F8A0
    void TranslateRoot(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot);
    // public System.Void RotateTo(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone bone, UnityEngine.Quaternion rotation, System.Single weight)
    // Offset: 0x244E954
    void RotateTo(::RootMotion::FinalIK::IKSolverVR::VirtualBone* bone, ::UnityEngine::Quaternion rotation, float weight);
    // public System.Void Visualize(UnityEngine.Color color)
    // Offset: 0x244FA8C
    void Visualize(::UnityEngine::Color color);
    // public System.Void Visualize()
    // Offset: 0x244FBD0
    void Visualize();
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::BodyPart), 68 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_BodyPartSizeCheck;
  static_assert(sizeof(IKSolverVR::BodyPart) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::get_sqrMag
// Il2CppName: get_sqrMag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverVR::BodyPart::*)()>(&RootMotion::FinalIK::IKSolverVR::BodyPart::get_sqrMag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "get_sqrMag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::set_sqrMag
// Il2CppName: set_sqrMag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(float)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::set_sqrMag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "set_sqrMag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::get_mag
// Il2CppName: get_mag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverVR::BodyPart::*)()>(&RootMotion::FinalIK::IKSolverVR::BodyPart::get_mag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "get_mag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::set_mag
// Il2CppName: set_mag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(float)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::set_mag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "set_mag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::OnRead
// Il2CppName: OnRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int, int)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::OnRead)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasChest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasNeck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasShoulders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasLegs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rootIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "OnRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::PreSolve
// Il2CppName: PreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)()>(&RootMotion::FinalIK::IKSolverVR::BodyPart::PreSolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "PreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(ByRef<::ArrayW<::UnityEngine::Vector3>>, ByRef<::ArrayW<::UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::Write)> {
  static const MethodInfo* get() {
    static auto* solvedPositions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* solvedRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solvedPositions, solvedRotations});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::ApplyOffsets
// Il2CppName: ApplyOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)()>(&RootMotion::FinalIK::IKSolverVR::BodyPart::ApplyOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "ApplyOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::ResetOffsets
// Il2CppName: ResetOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)()>(&RootMotion::FinalIK::IKSolverVR::BodyPart::ResetOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "ResetOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::SetLOD
// Il2CppName: SetLOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(int)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::SetLOD)> {
  static const MethodInfo* get() {
    static auto* LOD = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "SetLOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LOD});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int, int)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::Read)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasChest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasNeck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasShoulders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasLegs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rootIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::MovePosition
// Il2CppName: MovePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::MovePosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "MovePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::MoveRotation
// Il2CppName: MoveRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::MoveRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "MoveRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::Translate
// Il2CppName: Translate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::Translate)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "Translate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::TranslateRoot
// Il2CppName: TranslateRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::TranslateRoot)> {
  static const MethodInfo* get() {
    static auto* newRootPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newRootRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "TranslateRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newRootPos, newRootRot});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::RotateTo
// Il2CppName: RotateTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::RootMotion::FinalIK::IKSolverVR::VirtualBone*, ::UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::RotateTo)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "RotateTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone, rotation, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::Visualize
// Il2CppName: Visualize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)(::UnityEngine::Color)>(&RootMotion::FinalIK::IKSolverVR::BodyPart::Visualize)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "Visualize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::BodyPart::Visualize
// Il2CppName: Visualize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::BodyPart::*)()>(&RootMotion::FinalIK::IKSolverVR::BodyPart::Visualize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::BodyPart*), "Visualize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
