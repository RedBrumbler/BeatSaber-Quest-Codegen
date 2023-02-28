// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVRRenderModels::_GetComponentState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRRenderModels::_GetComponentState*, "OVR.OpenVR", "IVRRenderModels/_GetComponentState");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentState
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D6988
  class IVRRenderModels::_GetComponentState : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27BB648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentState* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRRenderModels::_GetComponentState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentState*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x27BB658
    bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27BBAD0
    ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x27BBBC0
    bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentState::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRRenderModels::_GetComponentState::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(&OVR::OpenVR::IVRRenderModels::_GetComponentState::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentState*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentState::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_GetComponentState::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentState::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentState*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentState::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRRenderModels::_GetComponentState::*)(ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentState::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentState*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pState, pComponentState, result});
  }
};
