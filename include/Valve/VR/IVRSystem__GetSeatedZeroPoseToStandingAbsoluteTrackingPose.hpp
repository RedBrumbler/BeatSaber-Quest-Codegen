// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
NEED_NO_BOX(::Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*, "Valve.VR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetSeatedZeroPoseToStandingAbsoluteTrackingPose
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D4B80
  class IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23179D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*, creationType>(object, method)));
    }
    // public Valve.VR.HmdMatrix34_t Invoke()
    // Offset: 0x23179E8
    ::Valve::VR::HmdMatrix34_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x2317C28
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x2317C54
    ::Valve::VR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetSeatedZeroPoseToStandingAbsoluteTrackingPose
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::HmdMatrix34_t (Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)()>(&Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::HmdMatrix34_t (Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::*)(::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
