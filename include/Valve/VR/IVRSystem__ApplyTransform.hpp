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
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
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
NEED_NO_BOX(::Valve::VR::IVRSystem::_ApplyTransform);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_ApplyTransform*, "Valve.VR", "IVRSystem/_ApplyTransform");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._ApplyTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10DA7C0
  class IVRSystem::_ApplyTransform : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2324800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ApplyTransform* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_ApplyTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ApplyTransform*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform)
    // Offset: 0x2324810
    void Invoke(ByRef<::Valve::VR::TrackedDevicePose_t> pOutputPose, ByRef<::Valve::VR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::Valve::VR::HmdMatrix34_t> pTransform);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2324A9C
    ::System::IAsyncResult* BeginInvoke(ByRef<::Valve::VR::TrackedDevicePose_t> pOutputPose, ByRef<::Valve::VR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::Valve::VR::HmdMatrix34_t> pTransform, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform, System.IAsyncResult result)
    // Offset: 0x2324B70
    void EndInvoke(ByRef<::Valve::VR::TrackedDevicePose_t> pOutputPose, ByRef<::Valve::VR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::Valve::VR::HmdMatrix34_t> pTransform, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._ApplyTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ApplyTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ApplyTransform::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_ApplyTransform::*)(ByRef<::Valve::VR::TrackedDevicePose_t>, ByRef<::Valve::VR::TrackedDevicePose_t>, ByRef<::Valve::VR::HmdMatrix34_t>)>(&Valve::VR::IVRSystem::_ApplyTransform::Invoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pTransform = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_ApplyTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pTrackedDevicePose, pTransform});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ApplyTransform::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_ApplyTransform::*)(ByRef<::Valve::VR::TrackedDevicePose_t>, ByRef<::Valve::VR::TrackedDevicePose_t>, ByRef<::Valve::VR::HmdMatrix34_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_ApplyTransform::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pTransform = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_ApplyTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pTrackedDevicePose, pTransform, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_ApplyTransform::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_ApplyTransform::*)(ByRef<::Valve::VR::TrackedDevicePose_t>, ByRef<::Valve::VR::TrackedDevicePose_t>, ByRef<::Valve::VR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_ApplyTransform::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pTransform = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_ApplyTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pTrackedDevicePose, pTransform, result});
  }
};
