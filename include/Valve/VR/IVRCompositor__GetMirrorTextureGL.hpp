// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
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
NEED_NO_BOX(::Valve::VR::IVRCompositor::_GetMirrorTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRCompositor::_GetMirrorTextureGL*, "Valve.VR", "IVRCompositor/_GetMirrorTextureGL");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureGL
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10DB29C
  class IVRCompositor::_GetMirrorTextureGL : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x272A8C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetMirrorTextureGL* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRCompositor::_GetMirrorTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetMirrorTextureGL*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(Valve.VR.EVREye eEye, ref System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle)
    // Offset: 0x272A8D4
    ::Valve::VR::EVRCompositorError Invoke(::Valve::VR::EVREye eEye, ByRef<uint> pglTextureId, ::System::IntPtr pglSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, ref System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x272AB8C
    ::System::IAsyncResult* BeginInvoke(::Valve::VR::EVREye eEye, ByRef<uint> pglTextureId, ::System::IntPtr pglSharedTextureHandle, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(ref System.UInt32 pglTextureId, System.IAsyncResult result)
    // Offset: 0x272AC5C
    ::Valve::VR::EVRCompositorError EndInvoke(ByRef<uint> pglTextureId, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetMirrorTextureGL
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureGL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureGL::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_GetMirrorTextureGL::*)(::Valve::VR::EVREye, ByRef<uint>, ::System::IntPtr)>(&Valve::VR::IVRCompositor::_GetMirrorTextureGL::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pglSharedTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetMirrorTextureGL*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pglTextureId, pglSharedTextureHandle});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureGL::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRCompositor::_GetMirrorTextureGL::*)(::Valve::VR::EVREye, ByRef<uint>, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetMirrorTextureGL::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pglSharedTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetMirrorTextureGL*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pglTextureId, pglSharedTextureHandle, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetMirrorTextureGL::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_GetMirrorTextureGL::*)(ByRef<uint>, ::System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetMirrorTextureGL::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetMirrorTextureGL*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pglTextureId, result});
  }
};
