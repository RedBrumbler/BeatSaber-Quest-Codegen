// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_PollNextOverlayEvent);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_PollNextOverlayEvent*, "Valve.VR", "IVROverlay/_PollNextOverlayEvent");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._PollNextOverlayEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D5AD0
  class IVROverlay::_PollNextOverlayEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2727F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_PollNextOverlayEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_PollNextOverlayEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_PollNextOverlayEvent*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x2727F30
    bool Invoke(uint64_t ulOverlayHandle, ByRef<::Valve::VR::VREvent_t> pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27281D0
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::Valve::VR::VREvent_t> pEvent, uint uncbVREvent, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t pEvent, System.IAsyncResult result)
    // Offset: 0x27282A4
    bool EndInvoke(ByRef<::Valve::VR::VREvent_t> pEvent, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._PollNextOverlayEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_PollNextOverlayEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_PollNextOverlayEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVROverlay::_PollNextOverlayEvent::*)(uint64_t, ByRef<::Valve::VR::VREvent_t>, uint)>(&Valve::VR::IVROverlay::_PollNextOverlayEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_PollNextOverlayEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pEvent, uncbVREvent});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_PollNextOverlayEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_PollNextOverlayEvent::*)(uint64_t, ByRef<::Valve::VR::VREvent_t>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_PollNextOverlayEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_PollNextOverlayEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pEvent, uncbVREvent, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_PollNextOverlayEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVROverlay::_PollNextOverlayEvent::*)(ByRef<::Valve::VR::VREvent_t>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_PollNextOverlayEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_PollNextOverlayEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, result});
  }
};
