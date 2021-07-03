// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/BodyPart
  class IKSolverVR::BodyPart : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE0BADC
    // private System.Single <sqrMag>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float sqrMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE0BAEC
    // private System.Single <mag>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float mag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HideInInspector] Offset: 0xE0BAFC
    // public RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*) == 0x8);
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
    UnityEngine::Vector3 rootPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected UnityEngine.Quaternion rootRotation
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Quaternion rootRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
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
    // Creating value type constructor for type: BodyPart
    BodyPart(float sqrMag_ = {}, float mag_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones_ = {}, bool initiated_ = {}, UnityEngine::Vector3 rootPosition_ = {}, UnityEngine::Quaternion rootRotation_ = {}, int index_ = {}, int LOD_ = {}) noexcept : sqrMag{sqrMag_}, mag{mag_}, bones{bones_}, initiated{initiated_}, rootPosition{rootPosition_}, rootRotation{rootRotation_}, index{index_}, LOD{LOD_} {}
    // protected System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void OnRead(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void PreSolve()
    // Offset: 0xFFFFFFFF
    void PreSolve();
    // public System.Void Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0xFFFFFFFF
    void Write(::Array<UnityEngine::Vector3>*& solvedPositions, ::Array<UnityEngine::Quaternion>*& solvedRotations);
    // public System.Void ApplyOffsets()
    // Offset: 0xFFFFFFFF
    void ApplyOffsets();
    // public System.Void ResetOffsets()
    // Offset: 0xFFFFFFFF
    void ResetOffsets();
    // public System.Single get_sqrMag()
    // Offset: 0x1DFA6B4
    float get_sqrMag();
    // private System.Void set_sqrMag(System.Single value)
    // Offset: 0x1DFA6BC
    void set_sqrMag(float value);
    // public System.Single get_mag()
    // Offset: 0x1DFA6C4
    float get_mag();
    // private System.Void set_mag(System.Single value)
    // Offset: 0x1DFA6CC
    void set_mag(float value);
    // public System.Void SetLOD(System.Int32 LOD)
    // Offset: 0x1DFA6D4
    void SetLOD(int LOD);
    // public System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x1DFA6DC
    void Read(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x1DFAA98
    void MovePosition(UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1DFAC04
    void MoveRotation(UnityEngine::Quaternion rotation);
    // public System.Void Translate(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1DFAE94
    void Translate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void TranslateRoot(UnityEngine.Vector3 newRootPos, UnityEngine.Quaternion newRootRot)
    // Offset: 0x1DFAEE8
    void TranslateRoot(UnityEngine::Vector3 newRootPos, UnityEngine::Quaternion newRootRot);
    // public System.Void RotateTo(RootMotion.FinalIK.IKSolverVR/VirtualBone bone, UnityEngine.Quaternion rotation, System.Single weight)
    // Offset: 0x1DF9F9C
    void RotateTo(RootMotion::FinalIK::IKSolverVR::VirtualBone* bone, UnityEngine::Quaternion rotation, float weight);
    // public System.Void Visualize(UnityEngine.Color color)
    // Offset: 0x1DFB0D4
    void Visualize(UnityEngine::Color color);
    // public System.Void Visualize()
    // Offset: 0x1DFB218
    void Visualize();
    // protected System.Void .ctor()
    // Offset: 0x1DFA61C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::BodyPart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::BodyPart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::BodyPart*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR/BodyPart
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::BodyPart), 68 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_BodyPartSizeCheck;
  static_assert(sizeof(IKSolverVR::BodyPart) == 0x48);
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::OnRead
  // Il2CppName: OnRead
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Quaternion>*, bool, bool, bool, bool, bool, int, int)>(&IKSolverVR::BodyPart::OnRead)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "OnRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Quaternion>*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::PreSolve
  // Il2CppName: PreSolve
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::PreSolve)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "PreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::Write
  // Il2CppName: Write
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(::Array<UnityEngine::Vector3>*&, ::Array<UnityEngine::Quaternion>*&)>(&IKSolverVR::BodyPart::Write)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Vector3>*&>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Quaternion>*&>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::ApplyOffsets
  // Il2CppName: ApplyOffsets
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::ApplyOffsets)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "ApplyOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::ResetOffsets
  // Il2CppName: ResetOffsets
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::ResetOffsets)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "ResetOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::get_sqrMag
  // Il2CppName: get_sqrMag
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::get_sqrMag)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "get_sqrMag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::set_sqrMag
  // Il2CppName: set_sqrMag
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(float)>(&IKSolverVR::BodyPart::set_sqrMag)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "set_sqrMag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::get_mag
  // Il2CppName: get_mag
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::get_mag)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "get_mag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::set_mag
  // Il2CppName: set_mag
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(float)>(&IKSolverVR::BodyPart::set_mag)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "set_mag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::SetLOD
  // Il2CppName: SetLOD
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(int)>(&IKSolverVR::BodyPart::SetLOD)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "SetLOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::Read
  // Il2CppName: Read
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Quaternion>*, bool, bool, bool, bool, bool, int, int)>(&IKSolverVR::BodyPart::Read)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Quaternion>*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::MovePosition
  // Il2CppName: MovePosition
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(UnityEngine::Vector3)>(&IKSolverVR::BodyPart::MovePosition)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "MovePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::MoveRotation
  // Il2CppName: MoveRotation
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(UnityEngine::Quaternion)>(&IKSolverVR::BodyPart::MoveRotation)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "MoveRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::Translate
  // Il2CppName: Translate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&IKSolverVR::BodyPart::Translate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "Translate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::TranslateRoot
  // Il2CppName: TranslateRoot
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&IKSolverVR::BodyPart::TranslateRoot)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "TranslateRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::RotateTo
  // Il2CppName: RotateTo
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(RootMotion::FinalIK::IKSolverVR::VirtualBone*, UnityEngine::Quaternion, float)>(&IKSolverVR::BodyPart::RotateTo)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "RotateTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::IKSolverVR::VirtualBone*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::Visualize
  // Il2CppName: Visualize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)(UnityEngine::Color)>(&IKSolverVR::BodyPart::Visualize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "Visualize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::Visualize
  // Il2CppName: Visualize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::Visualize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), "Visualize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IKSolverVR::BodyPart::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IKSolverVR::BodyPart::*)()>(&IKSolverVR::BodyPart::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IKSolverVR::BodyPart*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::BodyPart*, "RootMotion.FinalIK", "IKSolverVR/BodyPart");
