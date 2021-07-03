// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlaySortOrder
  // [UnmanagedFunctionPointerAttribute] Offset: DD407C
  class IVROverlay::_GetOverlaySortOrder : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlaySortOrder
    _GetOverlaySortOrder() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC94F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlaySortOrder* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlaySortOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlaySortOrder*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder)
    // Offset: 0x1FC9500
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punSortOrder);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC9784
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 punSortOrder, System.IAsyncResult result)
    // Offset: 0x1FC9834
    Valve::VR::EVROverlayError EndInvoke(uint& punSortOrder, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlaySortOrder
  #pragma pack(pop)
  // Writing MetadataGetter for method: IVROverlay::_GetOverlaySortOrder::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVROverlay::_GetOverlaySortOrder::*)(::Il2CppObject*, System::IntPtr)>(&IVROverlay::_GetOverlaySortOrder::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_GetOverlaySortOrder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVROverlay::_GetOverlaySortOrder::*)(::Il2CppObject*, System::IntPtr)>(&IVROverlay::_GetOverlaySortOrder::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_GetOverlaySortOrder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: IVROverlay::_GetOverlaySortOrder::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (IVROverlay::_GetOverlaySortOrder::*)(uint64_t, uint&)>(&IVROverlay::_GetOverlaySortOrder::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_GetOverlaySortOrder*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint&>()});
    }
  };
  // Writing MetadataGetter for method: IVROverlay::_GetOverlaySortOrder::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (IVROverlay::_GetOverlaySortOrder::*)(uint64_t, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&IVROverlay::_GetOverlaySortOrder::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_GetOverlaySortOrder*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: IVROverlay::_GetOverlaySortOrder::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (IVROverlay::_GetOverlaySortOrder::*)(uint&, System::IAsyncResult*)>(&IVROverlay::_GetOverlaySortOrder::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_GetOverlaySortOrder*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlaySortOrder*, "Valve.VR", "IVROverlay/_GetOverlaySortOrder");
