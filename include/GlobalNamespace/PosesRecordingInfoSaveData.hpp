// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PosesRecordingInfoSaveData
  class PosesRecordingInfoSaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesRecordingInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingInfoSaveData*, "", "PosesRecordingInfoSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecordingInfoSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesRecordingInfoSaveData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData
    class ExternalCameraCalibrationSaveData;
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] _objectIds
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> objectIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData _externalCameraCalibration
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData* externalCameraCalibration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData*) == 0x8);
    // private System.String _dataFileName
    // Size: 0x8
    // Offset: 0x28
    ::StringW dataFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "1.0.0";
    // Get static field: static private System.String kCurrentVersion
    static ::StringW _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::StringW value);
    // Get instance field reference: private System.String _version
    [[deprecated("Use field access instead!")]] ::StringW& dyn__version();
    // Get instance field reference: private System.String[] _objectIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__objectIds();
    // Get instance field reference: private PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData _externalCameraCalibration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData*& dyn__externalCameraCalibration();
    // Get instance field reference: private System.String _dataFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__dataFileName();
    // public System.String get_version()
    // Offset: 0x14587CC
    ::StringW get_version();
    // public System.String[] get_objectIds()
    // Offset: 0x14587D4
    ::ArrayW<::StringW> get_objectIds();
    // public PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData get_externalCameraCalibration()
    // Offset: 0x14587DC
    ::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData* get_externalCameraCalibration();
    // public System.String get_dataFileName()
    // Offset: 0x14587E4
    ::StringW get_dataFileName();
    // public System.Void .ctor(System.String[] objectIds, PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData externalCameraCalibration, System.String dataFileName)
    // Offset: 0x14587EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingInfoSaveData* New_ctor(::ArrayW<::StringW> objectIds, ::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData* externalCameraCalibration, ::StringW dataFileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingInfoSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingInfoSaveData*, creationType>(objectIds, externalCameraCalibration, dataFileName)));
    }
  }; // PosesRecordingInfoSaveData
  #pragma pack(pop)
  static check_size<sizeof(PosesRecordingInfoSaveData), 40 + sizeof(::StringW)> __GlobalNamespace_PosesRecordingInfoSaveDataSizeCheck;
  static_assert(sizeof(PosesRecordingInfoSaveData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingInfoSaveData::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&GlobalNamespace::PosesRecordingInfoSaveData::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingInfoSaveData*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingInfoSaveData::get_objectIds
// Il2CppName: get_objectIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&GlobalNamespace::PosesRecordingInfoSaveData::get_objectIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingInfoSaveData*), "get_objectIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingInfoSaveData::get_externalCameraCalibration
// Il2CppName: get_externalCameraCalibration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData* (GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&GlobalNamespace::PosesRecordingInfoSaveData::get_externalCameraCalibration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingInfoSaveData*), "get_externalCameraCalibration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingInfoSaveData::get_dataFileName
// Il2CppName: get_dataFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PosesRecordingInfoSaveData::*)()>(&GlobalNamespace::PosesRecordingInfoSaveData::get_dataFileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingInfoSaveData*), "get_dataFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingInfoSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
