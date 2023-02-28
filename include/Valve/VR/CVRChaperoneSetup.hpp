// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.HmdQuad_t
#include "Valve/VR/HmdQuad_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRChaperoneSetup
  class CVRChaperoneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRChaperoneSetup);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRChaperoneSetup*, "Valve.VR", "CVRChaperoneSetup");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRChaperoneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRChaperoneSetup : public ::Il2CppObject {
    public:
    public:
    // private Valve.VR.IVRChaperoneSetup FnTable
    // Size: 0xA0
    // Offset: 0x10
    ::Valve::VR::IVRChaperoneSetup FnTable;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRChaperoneSetup) == 0xA0);
    public:
    // Creating conversion operator: operator ::Valve::VR::IVRChaperoneSetup
    constexpr operator ::Valve::VR::IVRChaperoneSetup() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRChaperoneSetup FnTable
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVRChaperoneSetup& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1C88650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperoneSetup* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRChaperoneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperoneSetup*, creationType>(pInterface)));
    }
    // public System.Boolean CommitWorkingCopy(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0x1C88758
    bool CommitWorkingCopy(::Valve::VR::EChaperoneConfigFile configFile);
    // public System.Void RevertWorkingCopy()
    // Offset: 0x1C889EC
    void RevertWorkingCopy();
    // public System.Boolean GetWorkingPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x1C88A08
    bool GetWorkingPlayAreaSize(ByRef<float> pSizeX, ByRef<float> pSizeZ);
    // public System.Boolean GetWorkingPlayAreaRect(ref Valve.VR.HmdQuad_t rect)
    // Offset: 0x1C88A2C
    bool GetWorkingPlayAreaRect(ByRef<::Valve::VR::HmdQuad_t> rect);
    // public System.Boolean GetWorkingCollisionBoundsInfo(out Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1C88A48
    bool GetWorkingCollisionBoundsInfo(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>> pQuadsBuffer);
    // public System.Boolean GetLiveCollisionBoundsInfo(out Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1C88AE8
    bool GetLiveCollisionBoundsInfo(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>> pQuadsBuffer);
    // public System.Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x1C88DFC
    bool GetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::Valve::VR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Boolean GetWorkingStandingZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x1C88E18
    bool GetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::Valve::VR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingPlayAreaSize(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x1C88E34
    void SetWorkingPlayAreaSize(float sizeX, float sizeZ);
    // public System.Void SetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1C88E50
    void SetWorkingCollisionBoundsInfo(::ArrayW<::Valve::VR::HmdQuad_t> pQuadsBuffer);
    // public System.Void SetWorkingSeatedZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x1C88E78
    void SetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::Valve::VR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingStandingZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x1C88E94
    void SetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::Valve::VR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose);
    // public System.Void ReloadFromDisk(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0x1C88EB0
    void ReloadFromDisk(::Valve::VR::EChaperoneConfigFile configFile);
    // public System.Boolean GetLiveSeatedZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x1C88ECC
    bool GetLiveSeatedZeroPoseToRawTrackingPose(ByRef<::Valve::VR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0x1C88EE8
    void SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t> pTagsBuffer);
    // public System.Boolean GetLiveCollisionBoundsTagsInfo(out System.Byte[] pTagsBuffer)
    // Offset: 0x1C88F10
    bool GetLiveCollisionBoundsTagsInfo(ByRef<::ArrayW<uint8_t>> pTagsBuffer);
    // public System.Boolean SetWorkingPhysicalBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1C89224
    bool SetWorkingPhysicalBoundsInfo(::ArrayW<::Valve::VR::HmdQuad_t> pQuadsBuffer);
    // public System.Boolean GetLivePhysicalBoundsInfo(out Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1C8924C
    bool GetLivePhysicalBoundsInfo(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>> pQuadsBuffer);
    // public System.Boolean ExportLiveToBuffer(System.Text.StringBuilder pBuffer, ref System.UInt32 pnBufferLength)
    // Offset: 0x1C892EC
    bool ExportLiveToBuffer(::System::Text::StringBuilder* pBuffer, ByRef<uint> pnBufferLength);
    // public System.Boolean ImportFromBufferToWorking(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x1C896FC
    bool ImportFromBufferToWorking(::StringW pBuffer, uint nImportFlags);
  }; // Valve.VR.CVRChaperoneSetup
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperoneSetup), 16 + sizeof(::Valve::VR::IVRChaperoneSetup)> __Valve_VR_CVRChaperoneSetupSizeCheck;
  static_assert(sizeof(CVRChaperoneSetup) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::CommitWorkingCopy
// Il2CppName: CommitWorkingCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(::Valve::VR::EChaperoneConfigFile)>(&Valve::VR::CVRChaperoneSetup::CommitWorkingCopy)> {
  static const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("Valve.VR", "EChaperoneConfigFile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "CommitWorkingCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::RevertWorkingCopy
// Il2CppName: RevertWorkingCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)()>(&Valve::VR::CVRChaperoneSetup::RevertWorkingCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "RevertWorkingCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetWorkingPlayAreaSize
// Il2CppName: GetWorkingPlayAreaSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<float>, ByRef<float>)>(&Valve::VR::CVRChaperoneSetup::GetWorkingPlayAreaSize)> {
  static const MethodInfo* get() {
    static auto* pSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pSizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetWorkingPlayAreaSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSizeX, pSizeZ});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetWorkingPlayAreaRect
// Il2CppName: GetWorkingPlayAreaRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::Valve::VR::HmdQuad_t>)>(&Valve::VR::CVRChaperoneSetup::GetWorkingPlayAreaRect)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetWorkingPlayAreaRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo
// Il2CppName: GetWorkingCollisionBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>>)>(&Valve::VR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo
// Il2CppName: GetLiveCollisionBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>>)>(&Valve::VR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetLiveCollisionBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose
// Il2CppName: GetWorkingSeatedZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose)> {
  static const MethodInfo* get() {
    static auto* pmatSeatedZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetWorkingSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pmatSeatedZeroPoseToRawTrackingPose});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose
// Il2CppName: GetWorkingStandingZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose)> {
  static const MethodInfo* get() {
    static auto* pmatStandingZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetWorkingStandingZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pmatStandingZeroPoseToRawTrackingPose});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::SetWorkingPlayAreaSize
// Il2CppName: SetWorkingPlayAreaSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)(float, float)>(&Valve::VR::CVRChaperoneSetup::SetWorkingPlayAreaSize)> {
  static const MethodInfo* get() {
    static auto* sizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "SetWorkingPlayAreaSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeX, sizeZ});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo
// Il2CppName: SetWorkingCollisionBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)(::ArrayW<::Valve::VR::HmdQuad_t>)>(&Valve::VR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "SetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose
// Il2CppName: SetWorkingSeatedZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)(ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose)> {
  static const MethodInfo* get() {
    static auto* pMatSeatedZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "SetWorkingSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMatSeatedZeroPoseToRawTrackingPose});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose
// Il2CppName: SetWorkingStandingZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)(ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose)> {
  static const MethodInfo* get() {
    static auto* pMatStandingZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "SetWorkingStandingZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMatStandingZeroPoseToRawTrackingPose});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::ReloadFromDisk
// Il2CppName: ReloadFromDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)(::Valve::VR::EChaperoneConfigFile)>(&Valve::VR::CVRChaperoneSetup::ReloadFromDisk)> {
  static const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("Valve.VR", "EChaperoneConfigFile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "ReloadFromDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose
// Il2CppName: GetLiveSeatedZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose)> {
  static const MethodInfo* get() {
    static auto* pmatSeatedZeroPoseToRawTrackingPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetLiveSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pmatSeatedZeroPoseToRawTrackingPose});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo
// Il2CppName: SetWorkingCollisionBoundsTagsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperoneSetup::*)(::ArrayW<uint8_t>)>(&Valve::VR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo)> {
  static const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "SetWorkingCollisionBoundsTagsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo
// Il2CppName: GetLiveCollisionBoundsTagsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::ArrayW<uint8_t>>)>(&Valve::VR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo)> {
  static const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetLiveCollisionBoundsTagsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo
// Il2CppName: SetWorkingPhysicalBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(::ArrayW<::Valve::VR::HmdQuad_t>)>(&Valve::VR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "SetWorkingPhysicalBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo
// Il2CppName: GetLivePhysicalBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(ByRef<::ArrayW<::Valve::VR::HmdQuad_t>>)>(&Valve::VR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo)> {
  static const MethodInfo* get() {
    static auto* pQuadsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "GetLivePhysicalBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pQuadsBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::ExportLiveToBuffer
// Il2CppName: ExportLiveToBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(::System::Text::StringBuilder*, ByRef<uint>)>(&Valve::VR::CVRChaperoneSetup::ExportLiveToBuffer)> {
  static const MethodInfo* get() {
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* pnBufferLength = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "ExportLiveToBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pBuffer, pnBufferLength});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperoneSetup::ImportFromBufferToWorking
// Il2CppName: ImportFromBufferToWorking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperoneSetup::*)(::StringW, uint)>(&Valve::VR::CVRChaperoneSetup::ImportFromBufferToWorking)> {
  static const MethodInfo* get() {
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nImportFlags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperoneSetup*), "ImportFromBufferToWorking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pBuffer, nImportFlags});
  }
};
