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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SliderMeshConstructor
  class SliderMeshConstructor;
  // Forward declaring type: PathsHolder
  class PathsHolder;
  // Forward declaring type: SliderData
  class SliderData;
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderMeshController
  class SliderMeshController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderMeshController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshController*, "", "SliderMeshController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: SliderMeshController
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderMeshController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 _numberOfFixedVertexPathSegments
    // Size: 0x4
    // Offset: 0x18
    int numberOfFixedVertexPathSegments;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _controlPointDistancePerSqrtNotesDistance
    // Size: 0x4
    // Offset: 0x1C
    float controlPointDistancePerSqrtNotesDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _middleAnchorPointOffsetAmount
    // Size: 0x4
    // Offset: 0x20
    float middleAnchorPointOffsetAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _middleControlPointZDistanceModifier
    // Size: 0x4
    // Offset: 0x24
    float middleControlPointZDistanceModifier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _middleControlPointYDistanceModifier
    // Size: 0x4
    // Offset: 0x28
    float middleControlPointYDistanceModifier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _middleControlPointXDistanceModifier
    // Size: 0x4
    // Offset: 0x2C
    float middleControlPointXDistanceModifier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x111E1AC
    // private SliderMeshConstructor _sliderMeshConstructor
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SliderMeshConstructor* sliderMeshConstructor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderMeshConstructor*) == 0x8);
    // private PathsHolder _pathsHolder
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PathsHolder* pathsHolder;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PathsHolder*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _reusableAnchorsList
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* reusableAnchorsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private readonly UnityEngine.Vector3[] _reusableControlPointsArray4
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Vector3> reusableControlPointsArray4;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private readonly UnityEngine.Vector3[] _reusableControlPointsArray2
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> reusableControlPointsArray2;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kDefaultGameNoteSize
    static constexpr const float kDefaultGameNoteSize = 0.45;
    // Get static field: static public System.Single kDefaultGameNoteSize
    static float _get_kDefaultGameNoteSize();
    // Set static field: static public System.Single kDefaultGameNoteSize
    static void _set_kDefaultGameNoteSize(float value);
    // Get instance field reference: private System.Int32 _numberOfFixedVertexPathSegments
    [[deprecated("Use field access instead!")]] int& dyn__numberOfFixedVertexPathSegments();
    // Get instance field reference: private System.Single _controlPointDistancePerSqrtNotesDistance
    [[deprecated("Use field access instead!")]] float& dyn__controlPointDistancePerSqrtNotesDistance();
    // Get instance field reference: private System.Single _middleAnchorPointOffsetAmount
    [[deprecated("Use field access instead!")]] float& dyn__middleAnchorPointOffsetAmount();
    // Get instance field reference: private System.Single _middleControlPointZDistanceModifier
    [[deprecated("Use field access instead!")]] float& dyn__middleControlPointZDistanceModifier();
    // Get instance field reference: private System.Single _middleControlPointYDistanceModifier
    [[deprecated("Use field access instead!")]] float& dyn__middleControlPointYDistanceModifier();
    // Get instance field reference: private System.Single _middleControlPointXDistanceModifier
    [[deprecated("Use field access instead!")]] float& dyn__middleControlPointXDistanceModifier();
    // Get instance field reference: private SliderMeshConstructor _sliderMeshConstructor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderMeshConstructor*& dyn__sliderMeshConstructor();
    // Get instance field reference: private PathsHolder _pathsHolder
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PathsHolder*& dyn__pathsHolder();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _reusableAnchorsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn__reusableAnchorsList();
    // Get instance field reference: private readonly UnityEngine.Vector3[] _reusableControlPointsArray4
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__reusableControlPointsArray4();
    // Get instance field reference: private readonly UnityEngine.Vector3[] _reusableControlPointsArray2
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__reusableControlPointsArray2();
    // public System.Single get_pathLength()
    // Offset: 0x147DD20
    float get_pathLength();
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x147DD48
    ::UnityEngine::Mesh* get_mesh();
    // public PathsHolder get_pathsHolder()
    // Offset: 0x147DD64
    ::GlobalNamespace::PathsHolder* get_pathsHolder();
    // public System.Void .ctor()
    // Offset: 0x147E8CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderMeshController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderMeshController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderMeshController*, creationType>()));
    }
    // public System.Void CreateBezierPathAndMesh(SliderData sliderData, UnityEngine.Vector3 headNotePos, UnityEngine.Vector3 tailNotePos, System.Single jumpSpeed, System.Single noteUniformScale)
    // Offset: 0x147DD6C
    void CreateBezierPathAndMesh(::GlobalNamespace::SliderData* sliderData, ::UnityEngine::Vector3 headNotePos, ::UnityEngine::Vector3 tailNotePos, float jumpSpeed, float noteUniformScale);
    // static private UnityEngine.Vector3 CutDirectionToControlPointPosition(NoteCutDirection noteCutDirection)
    // Offset: 0x147E730
    static ::UnityEngine::Vector3 CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection noteCutDirection);
  }; // SliderMeshController
  #pragma pack(pop)
  static check_size<sizeof(SliderMeshController), 80 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __GlobalNamespace_SliderMeshControllerSizeCheck;
  static_assert(sizeof(SliderMeshController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshController::get_pathLength
// Il2CppName: get_pathLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SliderMeshController::*)()>(&GlobalNamespace::SliderMeshController::get_pathLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshController*), "get_pathLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshController::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (GlobalNamespace::SliderMeshController::*)()>(&GlobalNamespace::SliderMeshController::get_mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshController*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshController::get_pathsHolder
// Il2CppName: get_pathsHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PathsHolder* (GlobalNamespace::SliderMeshController::*)()>(&GlobalNamespace::SliderMeshController::get_pathsHolder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshController*), "get_pathsHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshController::CreateBezierPathAndMesh
// Il2CppName: CreateBezierPathAndMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderMeshController::*)(::GlobalNamespace::SliderData*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float)>(&GlobalNamespace::SliderMeshController::CreateBezierPathAndMesh)> {
  static const MethodInfo* get() {
    static auto* sliderData = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* headNotePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tailNotePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteUniformScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshController*), "CreateBezierPathAndMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderData, headNotePos, tailNotePos, jumpSpeed, noteUniformScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderMeshController::CutDirectionToControlPointPosition
// Il2CppName: CutDirectionToControlPointPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::SliderMeshController::CutDirectionToControlPointPosition)> {
  static const MethodInfo* get() {
    static auto* noteCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderMeshController*), "CutDirectionToControlPointPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutDirection});
  }
};
