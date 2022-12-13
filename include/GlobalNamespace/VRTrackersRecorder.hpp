// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRTrackersRecorder
  class VRTrackersRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRTrackersRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRTrackersRecorder*, "", "VRTrackersRecorder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::VRTrackersRecorder::SavedData
    class SavedData;
    // Nested type: ::GlobalNamespace::VRTrackersRecorder::RecordMode
    struct RecordMode;
    // Nested type: ::GlobalNamespace::VRTrackersRecorder::Keyframe
    class Keyframe;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VRTrackersRecorder/RecordMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct RecordMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RecordMode
      constexpr RecordMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VRTrackersRecorder/RecordMode Record
      static constexpr const int Record = 0;
      // Get static field: static public VRTrackersRecorder/RecordMode Record
      static ::GlobalNamespace::VRTrackersRecorder::RecordMode _get_Record();
      // Set static field: static public VRTrackersRecorder/RecordMode Record
      static void _set_Record(::GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // static field const value: static public VRTrackersRecorder/RecordMode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public VRTrackersRecorder/RecordMode Playback
      static ::GlobalNamespace::VRTrackersRecorder::RecordMode _get_Playback();
      // Set static field: static public VRTrackersRecorder/RecordMode Playback
      static void _set_Playback(::GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // static field const value: static public VRTrackersRecorder/RecordMode Off
      static constexpr const int Off = 2;
      // Get static field: static public VRTrackersRecorder/RecordMode Off
      static ::GlobalNamespace::VRTrackersRecorder::RecordMode _get_Off();
      // Set static field: static public VRTrackersRecorder/RecordMode Off
      static void _set_Off(::GlobalNamespace::VRTrackersRecorder::RecordMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // VRTrackersRecorder/RecordMode
    #pragma pack(pop)
    static check_size<sizeof(VRTrackersRecorder::RecordMode), 0 + sizeof(int)> __GlobalNamespace_VRTrackersRecorder_RecordModeSizeCheck;
    static_assert(sizeof(VRTrackersRecorder::RecordMode) == 0x4);
    public:
    // private FloatSO _songTime
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FloatSO* songTime;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSO*) == 0x8);
    // private System.String _saveFilename
    // Size: 0x8
    // Offset: 0x20
    ::StringW saveFilename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VRTrackersRecorder/RecordMode _mode
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::VRTrackersRecorder::RecordMode mode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRTrackersRecorder::RecordMode) == 0x4);
    // Padding between fields: mode and: originTransform
    char __padding2[0x4] = {};
    // private UnityEngine.Transform _originTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* originTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform[] _playbackTransforms
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Transform*> playbackTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private System.Collections.Generic.List`1<VRTrackersRecorder/Keyframe> _keyframes
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::GlobalNamespace::VRTrackersRecorder::Keyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::VRTrackersRecorder::Keyframe*>*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0x48
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: keyframeIndex and: newPosesAction
    char __padding6[0x4] = {};
    // private SteamVR_Events/Action _newPosesAction
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SteamVR_Events::Action* newPosesAction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private UnityEngine.Vector3 _loadedOriginPos
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 loadedOriginPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _loadedOriginRot
    // Size: 0x10
    // Offset: 0x64
    ::UnityEngine::Quaternion loadedOriginRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FloatSO _songTime
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSO*& dyn__songTime();
    // Get instance field reference: private System.String _saveFilename
    [[deprecated("Use field access instead!")]] ::StringW& dyn__saveFilename();
    // Get instance field reference: private VRTrackersRecorder/RecordMode _mode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRTrackersRecorder::RecordMode& dyn__mode();
    // Get instance field reference: private UnityEngine.Transform _originTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__originTransform();
    // Get instance field reference: private UnityEngine.Transform[] _playbackTransforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__playbackTransforms();
    // Get instance field reference: private System.Collections.Generic.List`1<VRTrackersRecorder/Keyframe> _keyframes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::VRTrackersRecorder::Keyframe*>*& dyn__keyframes();
    // Get instance field reference: private System.Int32 _keyframeIndex
    [[deprecated("Use field access instead!")]] int& dyn__keyframeIndex();
    // Get instance field reference: private SteamVR_Events/Action _newPosesAction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Events::Action*& dyn__newPosesAction();
    // Get instance field reference: private UnityEngine.Vector3 _loadedOriginPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__loadedOriginPos();
    // Get instance field reference: private UnityEngine.Quaternion _loadedOriginRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__loadedOriginRot();
    // public System.Void .ctor()
    // Offset: 0x165D2F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRTrackersRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x165C224
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x165C8A0
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x165CBD4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x165CBF8
    void OnDisable();
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0x165CC1C
    void OnNewPoses(::ArrayW<::Valve::VR::TrackedDevicePose_t> poses);
    // protected System.Void Update()
    // Offset: 0x165CE90
    void Update();
    // private System.Void Save()
    // Offset: 0x165C8B0
    void Save();
    // private System.Void Load()
    // Offset: 0x165C3BC
    void Load();
  }; // VRTrackersRecorder
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder), 100 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_VRTrackersRecorderSizeCheck;
  static_assert(sizeof(VRTrackersRecorder) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRTrackersRecorder::RecordMode, "", "VRTrackersRecorder/RecordMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::OnNewPoses
// Il2CppName: OnNewPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)(::ArrayW<::Valve::VR::TrackedDevicePose_t>)>(&GlobalNamespace::VRTrackersRecorder::OnNewPoses)> {
  static const MethodInfo* get() {
    static auto* poses = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "OnNewPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poses});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTrackersRecorder::*)()>(&GlobalNamespace::VRTrackersRecorder::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTrackersRecorder*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
