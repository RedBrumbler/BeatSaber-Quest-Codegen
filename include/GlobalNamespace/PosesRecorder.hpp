// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: PosesRecordingData
#include "GlobalNamespace/PosesRecordingData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: PoseObject
  class PoseObject;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PosesRecorder
  class PosesRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecorder*, "", "PosesRecorder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: 1119BC8
  class PosesRecorder : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PosesRecorder::$$c
    class $$c;
    public:
    // [InjectAttribute] Offset: 0x1133754
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private PosesRecordingData _data
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PosesRecordingData* data;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PosesRecordingData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private UnityEngine.Transform[] _transforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__transforms();
    // Get instance field reference: private PosesRecordingData _data
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PosesRecordingData*& dyn__data();
    // public PosesRecordingData get_data()
    // Offset: 0x1458010
    ::GlobalNamespace::PosesRecordingData* get_data();
    // public System.Void .ctor()
    // Offset: 0x1458538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecorder*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x1458018
    void LateUpdate();
    // public System.Void Init(PoseObject[] poseObjects, PosesRecordingData/ExternalCameraCalibration externalCameraCalibration)
    // Offset: 0x14581FC
    void Init(::ArrayW<::GlobalNamespace::PoseObject*> poseObjects, ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration* externalCameraCalibration);
    // public System.Void StartRecording()
    // Offset: 0x145847C
    void StartRecording();
    // private System.Void RecordTick(System.Single time)
    // Offset: 0x1458034
    void RecordTick(float time);
    // public System.Void StopRecording()
    // Offset: 0x145852C
    void StopRecording();
  }; // PosesRecorder
  #pragma pack(pop)
  static check_size<sizeof(PosesRecorder), 40 + sizeof(::GlobalNamespace::PosesRecordingData*)> __GlobalNamespace_PosesRecorderSizeCheck;
  static_assert(sizeof(PosesRecorder) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingData* (GlobalNamespace::PosesRecorder::*)()>(&GlobalNamespace::PosesRecorder::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesRecorder::*)()>(&GlobalNamespace::PosesRecorder::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesRecorder::*)(::ArrayW<::GlobalNamespace::PoseObject*>, ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration*)>(&GlobalNamespace::PosesRecorder::Init)> {
  static const MethodInfo* get() {
    static auto* poseObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PoseObject"), 1)->byval_arg;
    static auto* externalCameraCalibration = &::il2cpp_utils::GetClassFromName("", "PosesRecordingData/ExternalCameraCalibration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poseObjects, externalCameraCalibration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::StartRecording
// Il2CppName: StartRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesRecorder::*)()>(&GlobalNamespace::PosesRecorder::StartRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder*), "StartRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::RecordTick
// Il2CppName: RecordTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesRecorder::*)(float)>(&GlobalNamespace::PosesRecorder::RecordTick)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder*), "RecordTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecorder::StopRecording
// Il2CppName: StopRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesRecorder::*)()>(&GlobalNamespace::PosesRecorder::StopRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecorder*), "StopRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
