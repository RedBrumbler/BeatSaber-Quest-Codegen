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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRCameraRig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCameraRig*, "", "OVRCameraRig");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: OVRCameraRig
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class OVRCameraRig : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform <trackingSpace>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* trackingSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <leftEyeAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* leftEyeAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <centerEyeAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* centerEyeAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <rightEyeAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* rightEyeAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <leftHandAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* leftHandAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <rightHandAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* rightHandAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <leftControllerAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* leftControllerAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <rightControllerAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* rightControllerAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform <trackerAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* trackerAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Action`1<OVRCameraRig> UpdatedAnchors
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_1<::GlobalNamespace::OVRCameraRig*>* UpdatedAnchors;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::OVRCameraRig*>*) == 0x8);
    // public System.Boolean usePerEyeCameras
    // Size: 0x1
    // Offset: 0x68
    bool usePerEyeCameras;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean useFixedUpdateForTracking
    // Size: 0x1
    // Offset: 0x69
    bool useFixedUpdateForTracking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disableEyeAnchorCameras
    // Size: 0x1
    // Offset: 0x6A
    bool disableEyeAnchorCameras;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _skipUpdate
    // Size: 0x1
    // Offset: 0x6B
    bool skipUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: skipUpdate and: trackingSpaceName
    char __padding13[0x4] = {};
    // protected readonly System.String trackingSpaceName
    // Size: 0x8
    // Offset: 0x70
    ::StringW trackingSpaceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String trackerAnchorName
    // Size: 0x8
    // Offset: 0x78
    ::StringW trackerAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String leftEyeAnchorName
    // Size: 0x8
    // Offset: 0x80
    ::StringW leftEyeAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String centerEyeAnchorName
    // Size: 0x8
    // Offset: 0x88
    ::StringW centerEyeAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String rightEyeAnchorName
    // Size: 0x8
    // Offset: 0x90
    ::StringW rightEyeAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String leftHandAnchorName
    // Size: 0x8
    // Offset: 0x98
    ::StringW leftHandAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String rightHandAnchorName
    // Size: 0x8
    // Offset: 0xA0
    ::StringW rightHandAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String leftControllerAnchorName
    // Size: 0x8
    // Offset: 0xA8
    ::StringW leftControllerAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected readonly System.String rightControllerAnchorName
    // Size: 0x8
    // Offset: 0xB0
    ::StringW rightControllerAnchorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected UnityEngine.Camera _centerEyeCamera
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Camera* centerEyeCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // protected UnityEngine.Camera _leftEyeCamera
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::Camera* leftEyeCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // protected UnityEngine.Camera _rightEyeCamera
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Camera* rightEyeCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform <trackingSpace>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$trackingSpace$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <leftEyeAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$leftEyeAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <centerEyeAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$centerEyeAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <rightEyeAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$rightEyeAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <leftHandAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$leftHandAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <rightHandAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$rightHandAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <leftControllerAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$leftControllerAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <rightControllerAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$rightControllerAnchor$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform <trackerAnchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_$trackerAnchor$k__BackingField();
    // Get instance field reference: private System.Action`1<OVRCameraRig> UpdatedAnchors
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::OVRCameraRig*>*& dyn_UpdatedAnchors();
    // Get instance field reference: public System.Boolean usePerEyeCameras
    [[deprecated("Use field access instead!")]] bool& dyn_usePerEyeCameras();
    // Get instance field reference: public System.Boolean useFixedUpdateForTracking
    [[deprecated("Use field access instead!")]] bool& dyn_useFixedUpdateForTracking();
    // Get instance field reference: public System.Boolean disableEyeAnchorCameras
    [[deprecated("Use field access instead!")]] bool& dyn_disableEyeAnchorCameras();
    // Get instance field reference: protected System.Boolean _skipUpdate
    [[deprecated("Use field access instead!")]] bool& dyn__skipUpdate();
    // Get instance field reference: protected readonly System.String trackingSpaceName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_trackingSpaceName();
    // Get instance field reference: protected readonly System.String trackerAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_trackerAnchorName();
    // Get instance field reference: protected readonly System.String leftEyeAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_leftEyeAnchorName();
    // Get instance field reference: protected readonly System.String centerEyeAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_centerEyeAnchorName();
    // Get instance field reference: protected readonly System.String rightEyeAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_rightEyeAnchorName();
    // Get instance field reference: protected readonly System.String leftHandAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_leftHandAnchorName();
    // Get instance field reference: protected readonly System.String rightHandAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_rightHandAnchorName();
    // Get instance field reference: protected readonly System.String leftControllerAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_leftControllerAnchorName();
    // Get instance field reference: protected readonly System.String rightControllerAnchorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_rightControllerAnchorName();
    // Get instance field reference: protected UnityEngine.Camera _centerEyeCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__centerEyeCamera();
    // Get instance field reference: protected UnityEngine.Camera _leftEyeCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__leftEyeCamera();
    // Get instance field reference: protected UnityEngine.Camera _rightEyeCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__rightEyeCamera();
    // public UnityEngine.Camera get_leftEyeCamera()
    // Offset: 0x16AA584
    ::UnityEngine::Camera* get_leftEyeCamera();
    // public UnityEngine.Camera get_rightEyeCamera()
    // Offset: 0x16AA5A0
    ::UnityEngine::Camera* get_rightEyeCamera();
    // public UnityEngine.Transform get_trackingSpace()
    // Offset: 0x16AA5BC
    ::UnityEngine::Transform* get_trackingSpace();
    // private System.Void set_trackingSpace(UnityEngine.Transform value)
    // Offset: 0x16AA5C4
    void set_trackingSpace(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftEyeAnchor()
    // Offset: 0x16AA5CC
    ::UnityEngine::Transform* get_leftEyeAnchor();
    // private System.Void set_leftEyeAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA5D4
    void set_leftEyeAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_centerEyeAnchor()
    // Offset: 0x16AA5DC
    ::UnityEngine::Transform* get_centerEyeAnchor();
    // private System.Void set_centerEyeAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA5E4
    void set_centerEyeAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightEyeAnchor()
    // Offset: 0x16AA5EC
    ::UnityEngine::Transform* get_rightEyeAnchor();
    // private System.Void set_rightEyeAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA5F4
    void set_rightEyeAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftHandAnchor()
    // Offset: 0x16AA5FC
    ::UnityEngine::Transform* get_leftHandAnchor();
    // private System.Void set_leftHandAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA604
    void set_leftHandAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightHandAnchor()
    // Offset: 0x16AA60C
    ::UnityEngine::Transform* get_rightHandAnchor();
    // private System.Void set_rightHandAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA614
    void set_rightHandAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftControllerAnchor()
    // Offset: 0x16AA61C
    ::UnityEngine::Transform* get_leftControllerAnchor();
    // private System.Void set_leftControllerAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA624
    void set_leftControllerAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightControllerAnchor()
    // Offset: 0x16AA62C
    ::UnityEngine::Transform* get_rightControllerAnchor();
    // private System.Void set_rightControllerAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA634
    void set_rightControllerAnchor(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_trackerAnchor()
    // Offset: 0x16AA63C
    ::UnityEngine::Transform* get_trackerAnchor();
    // private System.Void set_trackerAnchor(UnityEngine.Transform value)
    // Offset: 0x16AA644
    void set_trackerAnchor(::UnityEngine::Transform* value);
    // public System.Void add_UpdatedAnchors(System.Action`1<OVRCameraRig> value)
    // Offset: 0x16AA64C
    void add_UpdatedAnchors(::System::Action_1<::GlobalNamespace::OVRCameraRig*>* value);
    // public System.Void remove_UpdatedAnchors(System.Action`1<OVRCameraRig> value)
    // Offset: 0x16AA6F0
    void remove_UpdatedAnchors(::System::Action_1<::GlobalNamespace::OVRCameraRig*>* value);
    // public System.Void .ctor()
    // Offset: 0x16AC698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCameraRig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRCameraRig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCameraRig*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x16AA794
    void Awake();
    // protected System.Void Start()
    // Offset: 0x16AA7A8
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0x16AA838
    void FixedUpdate();
    // protected System.Void Update()
    // Offset: 0x16AA858
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x16AA87C
    void OnDestroy();
    // protected System.Void UpdateAnchors(System.Boolean updateEyeAnchors, System.Boolean updateHandAnchors)
    // Offset: 0x16AA8F4
    void UpdateAnchors(bool updateEyeAnchors, bool updateHandAnchors);
    // protected System.Void OnBeforeRenderCallback()
    // Offset: 0x16AB768
    void OnBeforeRenderCallback();
    // protected System.Void RaiseUpdatedAnchorsEvent()
    // Offset: 0x16AB874
    void RaiseUpdatedAnchorsEvent();
    // public System.Void EnsureGameObjectIntegrity()
    // Offset: 0x16AB8D8
    void EnsureGameObjectIntegrity();
    // protected UnityEngine.Transform ConfigureAnchor(UnityEngine.Transform root, System.String name)
    // Offset: 0x16AC164
    ::UnityEngine::Transform* ConfigureAnchor(::UnityEngine::Transform* root, ::StringW name);
    // public UnityEngine.Matrix4x4 ComputeTrackReferenceMatrix()
    // Offset: 0x16AC39C
    ::UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix();
  }; // OVRCameraRig
  #pragma pack(pop)
  static check_size<sizeof(OVRCameraRig), 200 + sizeof(::UnityEngine::Camera*)> __GlobalNamespace_OVRCameraRigSizeCheck;
  static_assert(sizeof(OVRCameraRig) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_leftEyeCamera
// Il2CppName: get_leftEyeCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_leftEyeCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_leftEyeCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_rightEyeCamera
// Il2CppName: get_rightEyeCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_rightEyeCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_rightEyeCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_trackingSpace
// Il2CppName: get_trackingSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_trackingSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_trackingSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_trackingSpace
// Il2CppName: set_trackingSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_trackingSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_trackingSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_leftEyeAnchor
// Il2CppName: get_leftEyeAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_leftEyeAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_leftEyeAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_leftEyeAnchor
// Il2CppName: set_leftEyeAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_leftEyeAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_leftEyeAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_centerEyeAnchor
// Il2CppName: get_centerEyeAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_centerEyeAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_centerEyeAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_centerEyeAnchor
// Il2CppName: set_centerEyeAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_centerEyeAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_centerEyeAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_rightEyeAnchor
// Il2CppName: get_rightEyeAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_rightEyeAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_rightEyeAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_rightEyeAnchor
// Il2CppName: set_rightEyeAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_rightEyeAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_rightEyeAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_leftHandAnchor
// Il2CppName: get_leftHandAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_leftHandAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_leftHandAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_leftHandAnchor
// Il2CppName: set_leftHandAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_leftHandAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_leftHandAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_rightHandAnchor
// Il2CppName: get_rightHandAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_rightHandAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_rightHandAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_rightHandAnchor
// Il2CppName: set_rightHandAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_rightHandAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_rightHandAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_leftControllerAnchor
// Il2CppName: get_leftControllerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_leftControllerAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_leftControllerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_leftControllerAnchor
// Il2CppName: set_leftControllerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_leftControllerAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_leftControllerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_rightControllerAnchor
// Il2CppName: get_rightControllerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_rightControllerAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_rightControllerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_rightControllerAnchor
// Il2CppName: set_rightControllerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_rightControllerAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_rightControllerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::get_trackerAnchor
// Il2CppName: get_trackerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::get_trackerAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "get_trackerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::set_trackerAnchor
// Il2CppName: set_trackerAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*)>(&GlobalNamespace::OVRCameraRig::set_trackerAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "set_trackerAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::add_UpdatedAnchors
// Il2CppName: add_UpdatedAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::System::Action_1<::GlobalNamespace::OVRCameraRig*>*)>(&GlobalNamespace::OVRCameraRig::add_UpdatedAnchors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRCameraRig")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "add_UpdatedAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::remove_UpdatedAnchors
// Il2CppName: remove_UpdatedAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(::System::Action_1<::GlobalNamespace::OVRCameraRig*>*)>(&GlobalNamespace::OVRCameraRig::remove_UpdatedAnchors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRCameraRig")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "remove_UpdatedAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::UpdateAnchors
// Il2CppName: UpdateAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)(bool, bool)>(&GlobalNamespace::OVRCameraRig::UpdateAnchors)> {
  static const MethodInfo* get() {
    static auto* updateEyeAnchors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateHandAnchors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "UpdateAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateEyeAnchors, updateHandAnchors});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::OnBeforeRenderCallback
// Il2CppName: OnBeforeRenderCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::OnBeforeRenderCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "OnBeforeRenderCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::RaiseUpdatedAnchorsEvent
// Il2CppName: RaiseUpdatedAnchorsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::RaiseUpdatedAnchorsEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "RaiseUpdatedAnchorsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::EnsureGameObjectIntegrity
// Il2CppName: EnsureGameObjectIntegrity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::EnsureGameObjectIntegrity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "EnsureGameObjectIntegrity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::ConfigureAnchor
// Il2CppName: ConfigureAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCameraRig::*)(::UnityEngine::Transform*, ::StringW)>(&GlobalNamespace::OVRCameraRig::ConfigureAnchor)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "ConfigureAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCameraRig::ComputeTrackReferenceMatrix
// Il2CppName: ComputeTrackReferenceMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (GlobalNamespace::OVRCameraRig::*)()>(&GlobalNamespace::OVRCameraRig::ComputeTrackReferenceMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCameraRig*), "ComputeTrackReferenceMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
