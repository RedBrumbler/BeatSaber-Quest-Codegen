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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerTransforms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerTransforms*, "", "PlayerTransforms");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: PlayerTransforms
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerTransforms : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _originTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* originTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _overrideHeadPos
    // Size: 0x1
    // Offset: 0x38
    bool overrideHeadPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideHeadPos and: overriddenHeadPos
    char __padding4[0x3] = {};
    // private UnityEngine.Vector3 _overriddenHeadPos
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 overriddenHeadPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _headWorldPos
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 headWorldPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _headWorldRot
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Quaternion headWorldRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _headPseudoLocalPos
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 headPseudoLocalPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _headPseudoLocalRot
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Quaternion headPseudoLocalRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _leftHandPseudoLocalPos
    // Size: 0xC
    // Offset: 0x80
    ::UnityEngine::Vector3 leftHandPseudoLocalPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _leftHandPseudoLocalRot
    // Size: 0x10
    // Offset: 0x8C
    ::UnityEngine::Quaternion leftHandPseudoLocalRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _rightHandPseudoLocalPos
    // Size: 0xC
    // Offset: 0x9C
    ::UnityEngine::Vector3 rightHandPseudoLocalPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rightHandPseudoLocalRot
    // Size: 0x10
    // Offset: 0xA8
    ::UnityEngine::Quaternion rightHandPseudoLocalRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform _originParentTransform
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Transform* originParentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _useOriginParentTransformForPseudoLocalCalculations
    // Size: 0x1
    // Offset: 0xC0
    bool useOriginParentTransformForPseudoLocalCalculations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _headTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__headTransform();
    // Get instance field reference: private UnityEngine.Transform _originTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__originTransform();
    // Get instance field reference: private UnityEngine.Transform _leftHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__leftHandTransform();
    // Get instance field reference: private UnityEngine.Transform _rightHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__rightHandTransform();
    // Get instance field reference: private System.Boolean _overrideHeadPos
    [[deprecated("Use field access instead!")]] bool& dyn__overrideHeadPos();
    // Get instance field reference: private UnityEngine.Vector3 _overriddenHeadPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__overriddenHeadPos();
    // Get instance field reference: private UnityEngine.Vector3 _headWorldPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__headWorldPos();
    // Get instance field reference: private UnityEngine.Quaternion _headWorldRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__headWorldRot();
    // Get instance field reference: private UnityEngine.Vector3 _headPseudoLocalPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__headPseudoLocalPos();
    // Get instance field reference: private UnityEngine.Quaternion _headPseudoLocalRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__headPseudoLocalRot();
    // Get instance field reference: private UnityEngine.Vector3 _leftHandPseudoLocalPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__leftHandPseudoLocalPos();
    // Get instance field reference: private UnityEngine.Quaternion _leftHandPseudoLocalRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__leftHandPseudoLocalRot();
    // Get instance field reference: private UnityEngine.Vector3 _rightHandPseudoLocalPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__rightHandPseudoLocalPos();
    // Get instance field reference: private UnityEngine.Quaternion _rightHandPseudoLocalRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__rightHandPseudoLocalRot();
    // Get instance field reference: private UnityEngine.Transform _originParentTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__originParentTransform();
    // Get instance field reference: private System.Boolean _useOriginParentTransformForPseudoLocalCalculations
    [[deprecated("Use field access instead!")]] bool& dyn__useOriginParentTransformForPseudoLocalCalculations();
    // public UnityEngine.Vector3 get_headWorldPos()
    // Offset: 0x158BFD4
    ::UnityEngine::Vector3 get_headWorldPos();
    // public UnityEngine.Quaternion get_headWorldRot()
    // Offset: 0x158BFE0
    ::UnityEngine::Quaternion get_headWorldRot();
    // public UnityEngine.Vector3 get_headPseudoLocalPos()
    // Offset: 0x158BFEC
    ::UnityEngine::Vector3 get_headPseudoLocalPos();
    // public UnityEngine.Quaternion get_headPseudoLocalRot()
    // Offset: 0x158BFF8
    ::UnityEngine::Quaternion get_headPseudoLocalRot();
    // public UnityEngine.Vector3 get_leftHandPseudoLocalPos()
    // Offset: 0x158C004
    ::UnityEngine::Vector3 get_leftHandPseudoLocalPos();
    // public UnityEngine.Quaternion get_leftHandPseudoLocalRot()
    // Offset: 0x158C010
    ::UnityEngine::Quaternion get_leftHandPseudoLocalRot();
    // public UnityEngine.Vector3 get_rightHandPseudoLocalPos()
    // Offset: 0x158C01C
    ::UnityEngine::Vector3 get_rightHandPseudoLocalPos();
    // public UnityEngine.Quaternion get_rightHandPseudoLocalRot()
    // Offset: 0x158C028
    ::UnityEngine::Quaternion get_rightHandPseudoLocalRot();
    // public System.Void .ctor()
    // Offset: 0x158C47C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTransforms* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerTransforms::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTransforms*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x158C034
    void Awake();
    // public System.Void OverrideHeadPos(UnityEngine.Vector3 pos)
    // Offset: 0x158C0C8
    void OverrideHeadPos(::UnityEngine::Vector3 pos);
    // protected System.Void Update()
    // Offset: 0x158C0E4
    void Update();
    // public System.Single MoveTowardsHead(System.Single start, System.Single end, UnityEngine.Quaternion noteInverseWorldRotation, System.Single t)
    // Offset: 0x158C2C0
    float MoveTowardsHead(float start, float end, ::UnityEngine::Quaternion noteInverseWorldRotation, float t);
    // public System.Single GetZPosOffsetByHeadPosAtTime(System.Single start, System.Single end, System.Single t)
    // Offset: 0x158C470
    float GetZPosOffsetByHeadPosAtTime(float start, float end, float t);
    // private System.Single GetZPos(System.Single start, System.Single end, System.Single headOffsetZ, System.Single t)
    // Offset: 0x158C3D0
    float GetZPos(float start, float end, float headOffsetZ, float t);
    // public System.Single HeadOffsetZ(UnityEngine.Quaternion noteInverseWorldRotation)
    // Offset: 0x158C310
    float HeadOffsetZ(::UnityEngine::Quaternion noteInverseWorldRotation);
  }; // PlayerTransforms
  #pragma pack(pop)
  static check_size<sizeof(PlayerTransforms), 192 + sizeof(bool)> __GlobalNamespace_PlayerTransformsSizeCheck;
  static_assert(sizeof(PlayerTransforms) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headWorldPos
// Il2CppName: get_headWorldPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headWorldPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headWorldPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headWorldRot
// Il2CppName: get_headWorldRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headWorldRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headWorldRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headPseudoLocalPos
// Il2CppName: get_headPseudoLocalPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headPseudoLocalPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headPseudoLocalPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headPseudoLocalRot
// Il2CppName: get_headPseudoLocalRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headPseudoLocalRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headPseudoLocalRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalPos
// Il2CppName: get_leftHandPseudoLocalPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_leftHandPseudoLocalPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalRot
// Il2CppName: get_leftHandPseudoLocalRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_leftHandPseudoLocalRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalPos
// Il2CppName: get_rightHandPseudoLocalPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_rightHandPseudoLocalPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalRot
// Il2CppName: get_rightHandPseudoLocalRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_rightHandPseudoLocalRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::OverrideHeadPos
// Il2CppName: OverrideHeadPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerTransforms::*)(::UnityEngine::Vector3)>(&GlobalNamespace::PlayerTransforms::OverrideHeadPos)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "OverrideHeadPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::MoveTowardsHead
// Il2CppName: MoveTowardsHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(float, float, ::UnityEngine::Quaternion, float)>(&GlobalNamespace::PlayerTransforms::MoveTowardsHead)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteInverseWorldRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "MoveTowardsHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, noteInverseWorldRotation, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::GetZPosOffsetByHeadPosAtTime
// Il2CppName: GetZPosOffsetByHeadPosAtTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(float, float, float)>(&GlobalNamespace::PlayerTransforms::GetZPosOffsetByHeadPosAtTime)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "GetZPosOffsetByHeadPosAtTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::GetZPos
// Il2CppName: GetZPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(float, float, float, float)>(&GlobalNamespace::PlayerTransforms::GetZPos)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headOffsetZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "GetZPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, headOffsetZ, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::HeadOffsetZ
// Il2CppName: HeadOffsetZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(::UnityEngine::Quaternion)>(&GlobalNamespace::PlayerTransforms::HeadOffsetZ)> {
  static const MethodInfo* get() {
    static auto* noteInverseWorldRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "HeadOffsetZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteInverseWorldRotation});
  }
};
