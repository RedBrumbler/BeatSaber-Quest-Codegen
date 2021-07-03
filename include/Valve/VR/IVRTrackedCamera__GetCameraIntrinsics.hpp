// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics
  // [UnmanagedFunctionPointerAttribute] Offset: DD362C
  class IVRTrackedCamera::_GetCameraIntrinsics : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraIntrinsics
    _GetCameraIntrinsics() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9E6D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraIntrinsics* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_GetCameraIntrinsics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraIntrinsics*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.HmdVector2_t pFocalLength, ref Valve.VR.HmdVector2_t pCenter)
    // Offset: 0x1C9E6E8
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.HmdVector2_t pFocalLength, ref Valve.VR.HmdVector2_t pCenter, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9E9A4
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref Valve.VR.HmdVector2_t pFocalLength, ref Valve.VR.HmdVector2_t pCenter, System.IAsyncResult result)
    // Offset: 0x1C9EA8C
    Valve::VR::EVRTrackedCameraError EndInvoke(Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetCameraIntrinsics
  #pragma pack(pop)
  // Writing MetadataGetter for method: IVRTrackedCamera::_GetCameraIntrinsics::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVRTrackedCamera::_GetCameraIntrinsics::*)(::Il2CppObject*, System::IntPtr)>(&IVRTrackedCamera::_GetCameraIntrinsics::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRTrackedCamera::_GetCameraIntrinsics*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVRTrackedCamera::_GetCameraIntrinsics::*)(::Il2CppObject*, System::IntPtr)>(&IVRTrackedCamera::_GetCameraIntrinsics::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRTrackedCamera::_GetCameraIntrinsics*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: IVRTrackedCamera::_GetCameraIntrinsics::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (IVRTrackedCamera::_GetCameraIntrinsics::*)(uint, Valve::VR::EVRTrackedCameraFrameType, Valve::VR::HmdVector2_t&, Valve::VR::HmdVector2_t&)>(&IVRTrackedCamera::_GetCameraIntrinsics::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRTrackedCamera::_GetCameraIntrinsics*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRTrackedCameraFrameType>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdVector2_t&>()});
    }
  };
  // Writing MetadataGetter for method: IVRTrackedCamera::_GetCameraIntrinsics::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (IVRTrackedCamera::_GetCameraIntrinsics::*)(uint, Valve::VR::EVRTrackedCameraFrameType, Valve::VR::HmdVector2_t&, Valve::VR::HmdVector2_t&, System::AsyncCallback*, ::Il2CppObject*)>(&IVRTrackedCamera::_GetCameraIntrinsics::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRTrackedCamera::_GetCameraIntrinsics*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRTrackedCameraFrameType>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: IVRTrackedCamera::_GetCameraIntrinsics::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (IVRTrackedCamera::_GetCameraIntrinsics::*)(Valve::VR::HmdVector2_t&, Valve::VR::HmdVector2_t&, System::IAsyncResult*)>(&IVRTrackedCamera::_GetCameraIntrinsics::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRTrackedCamera::_GetCameraIntrinsics*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetCameraIntrinsics*, "Valve.VR", "IVRTrackedCamera/_GetCameraIntrinsics");
