// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.Texture_t
#include "OVR/OpenVR/Texture_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*, "OVR.OpenVR", "IVRCompositor/_SetSkyboxOverride");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/OVR.OpenVR._SetSkyboxOverride
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D5FEC
  class IVRCompositor::_SetSkyboxOverride : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2571B08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_SetSkyboxOverride* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_SetSkyboxOverride*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRCompositorError Invoke(in OVR.OpenVR.Texture_t[] pTextures, System.UInt32 unTextureCount)
    // Offset: 0x2571B18
    ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t>> pTextures, uint unTextureCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.Texture_t[] pTextures, System.UInt32 unTextureCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2571D90
    ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t>> pTextures, uint unTextureCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2571E2C
    ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/OVR.OpenVR._SetSkyboxOverride
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::*)(ByRef<::ArrayW<::OVR::OpenVR::Texture_t>>, uint)>(&OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::Invoke)> {
  static const MethodInfo* get() {
    static auto* pTextures = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "Texture_t"), 1)->this_arg;
    static auto* unTextureCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTextures, unTextureCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::*)(ByRef<::ArrayW<::OVR::OpenVR::Texture_t>>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pTextures = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "Texture_t"), 1)->this_arg;
    static auto* unTextureCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTextures, unTextureCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
