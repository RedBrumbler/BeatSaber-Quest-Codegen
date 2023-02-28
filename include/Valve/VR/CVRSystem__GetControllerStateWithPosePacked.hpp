// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRSystem::_GetControllerStateWithPosePacked);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*, "Valve.VR", "CVRSystem/_GetControllerStateWithPosePacked");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRSystem/Valve.VR._GetControllerStateWithPosePacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10DBD28
  class CVRSystem::_GetControllerStateWithPosePacked : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8D724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem::_GetControllerStateWithPosePacked* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem::_GetControllerStateWithPosePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1C8D0F0
    bool Invoke(::Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, ByRef<::Valve::VR::VRControllerState_t_Packed> pControllerState, uint unControllerStateSize, ByRef<::Valve::VR::TrackedDevicePose_t> pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8D734
    ::System::IAsyncResult* BeginInvoke(::Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, ByRef<::Valve::VR::VRControllerState_t_Packed> pControllerState, uint unControllerStateSize, ByRef<::Valve::VR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1C8D83C
    bool EndInvoke(ByRef<::Valve::VR::VRControllerState_t_Packed> pControllerState, ByRef<::Valve::VR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);
  }; // Valve.VR.CVRSystem/Valve.VR._GetControllerStateWithPosePacked
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::*)(::Valve::VR::ETrackingUniverseOrigin, uint, ByRef<::Valve::VR::VRControllerState_t_Packed>, uint, ByRef<::Valve::VR::TrackedDevicePose_t>)>(&Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::*)(::Valve::VR::ETrackingUniverseOrigin, uint, ByRef<::Valve::VR::VRControllerState_t_Packed>, uint, ByRef<::Valve::VR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::*)(ByRef<::Valve::VR::VRControllerState_t_Packed>, ByRef<::Valve::VR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pTrackedDevicePose, result});
  }
};
