// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRDriverManager
#include "OVR/OpenVR/IVRDriverManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRDriverManager/_GetDriverHandle
  // [UnmanagedFunctionPointerAttribute] Offset: DCE7B4
  class IVRDriverManager::_GetDriverHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDriverHandle
    _GetDriverHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE4CEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRDriverManager::_GetDriverHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRDriverManager::_GetDriverHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRDriverManager::_GetDriverHandle*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchDriverName)
    // Offset: 0x1EE4CFC
    uint64_t Invoke(::Il2CppString* pchDriverName);
    // public System.IAsyncResult BeginInvoke(System.String pchDriverName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE5098
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchDriverName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EE50BC
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRDriverManager/_GetDriverHandle
  #pragma pack(pop)
  // Writing MetadataGetter for method: IVRDriverManager::_GetDriverHandle::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVRDriverManager::_GetDriverHandle::*)(::Il2CppObject*, System::IntPtr)>(&IVRDriverManager::_GetDriverHandle::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRDriverManager::_GetDriverHandle*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVRDriverManager::_GetDriverHandle::*)(::Il2CppObject*, System::IntPtr)>(&IVRDriverManager::_GetDriverHandle::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRDriverManager::_GetDriverHandle*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: IVRDriverManager::_GetDriverHandle::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (IVRDriverManager::_GetDriverHandle::*)(::Il2CppString*)>(&IVRDriverManager::_GetDriverHandle::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRDriverManager::_GetDriverHandle*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: IVRDriverManager::_GetDriverHandle::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (IVRDriverManager::_GetDriverHandle::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&IVRDriverManager::_GetDriverHandle::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRDriverManager::_GetDriverHandle*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: IVRDriverManager::_GetDriverHandle::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (IVRDriverManager::_GetDriverHandle::*)(System::IAsyncResult*)>(&IVRDriverManager::_GetDriverHandle::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRDriverManager::_GetDriverHandle*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRDriverManager::_GetDriverHandle*, "OVR.OpenVR", "IVRDriverManager/_GetDriverHandle");
