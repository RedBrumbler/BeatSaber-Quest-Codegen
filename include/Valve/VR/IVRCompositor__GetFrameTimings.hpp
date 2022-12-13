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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
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
NEED_NO_BOX(::Valve::VR::IVRCompositor::_GetFrameTimings);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRCompositor::_GetFrameTimings*, "Valve.VR", "IVRCompositor/_GetFrameTimings");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetFrameTimings
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D54A4
  class IVRCompositor::_GetFrameTimings : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2716FD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetFrameTimings* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRCompositor::_GetFrameTimings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetFrameTimings*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x2716FE4
    uint Invoke(ByRef<::Valve::VR::Compositor_FrameTiming> pTiming, uint nFrames);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2717260
    ::System::IAsyncResult* BeginInvoke(ByRef<::Valve::VR::Compositor_FrameTiming> pTiming, uint nFrames, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x2717314
    uint EndInvoke(ByRef<::Valve::VR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetFrameTimings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetFrameTimings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetFrameTimings::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRCompositor::_GetFrameTimings::*)(ByRef<::Valve::VR::Compositor_FrameTiming>, uint)>(&Valve::VR::IVRCompositor::_GetFrameTimings::Invoke)> {
  static const MethodInfo* get() {
    static auto* pTiming = &::il2cpp_utils::GetClassFromName("Valve.VR", "Compositor_FrameTiming")->this_arg;
    static auto* nFrames = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetFrameTimings*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTiming, nFrames});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetFrameTimings::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRCompositor::_GetFrameTimings::*)(ByRef<::Valve::VR::Compositor_FrameTiming>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetFrameTimings::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pTiming = &::il2cpp_utils::GetClassFromName("Valve.VR", "Compositor_FrameTiming")->this_arg;
    static auto* nFrames = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetFrameTimings*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTiming, nFrames, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetFrameTimings::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRCompositor::_GetFrameTimings::*)(ByRef<::Valve::VR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetFrameTimings::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pTiming = &::il2cpp_utils::GetClassFromName("Valve.VR", "Compositor_FrameTiming")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetFrameTimings*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTiming, result});
  }
};
