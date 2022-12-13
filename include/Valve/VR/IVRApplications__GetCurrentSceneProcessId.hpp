// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRApplications::_GetCurrentSceneProcessId);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRApplications::_GetCurrentSceneProcessId*, "Valve.VR", "IVRApplications/_GetCurrentSceneProcessId");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/Valve.VR._GetCurrentSceneProcessId
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D51AC
  class IVRApplications::_GetCurrentSceneProcessId : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C7EF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetCurrentSceneProcessId* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRApplications::_GetCurrentSceneProcessId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetCurrentSceneProcessId*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke()
    // Offset: 0x1C777BC
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C7EF74
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C7EFA0
    uint EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/Valve.VR._GetCurrentSceneProcessId
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetCurrentSceneProcessId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetCurrentSceneProcessId::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRApplications::_GetCurrentSceneProcessId::*)()>(&Valve::VR::IVRApplications::_GetCurrentSceneProcessId::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetCurrentSceneProcessId*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetCurrentSceneProcessId::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRApplications::_GetCurrentSceneProcessId::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_GetCurrentSceneProcessId::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetCurrentSceneProcessId*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetCurrentSceneProcessId::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRApplications::_GetCurrentSceneProcessId::*)(::System::IAsyncResult*)>(&Valve::VR::IVRApplications::_GetCurrentSceneProcessId::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetCurrentSceneProcessId*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
