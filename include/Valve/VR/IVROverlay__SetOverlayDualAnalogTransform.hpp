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
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
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
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayDualAnalogTransform
  // [UnmanagedFunctionPointerAttribute] Offset: DD4338
  class IVROverlay::_SetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayDualAnalogTransform
    _SetOverlayDualAnalogTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCFFEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayDualAnalogTransform*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius)
    // Offset: 0x1FCFFFC
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlay, Valve::VR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FD02BC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, Valve::VR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FD03A8
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayDualAnalogTransform
  #pragma pack(pop)
  // Writing MetadataGetter for method: IVROverlay::_SetOverlayDualAnalogTransform::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVROverlay::_SetOverlayDualAnalogTransform::*)(::Il2CppObject*, System::IntPtr)>(&IVROverlay::_SetOverlayDualAnalogTransform::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_SetOverlayDualAnalogTransform*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVROverlay::_SetOverlayDualAnalogTransform::*)(::Il2CppObject*, System::IntPtr)>(&IVROverlay::_SetOverlayDualAnalogTransform::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_SetOverlayDualAnalogTransform*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: IVROverlay::_SetOverlayDualAnalogTransform::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (IVROverlay::_SetOverlayDualAnalogTransform::*)(uint64_t, Valve::VR::EDualAnalogWhich, System::IntPtr, float)>(&IVROverlay::_SetOverlayDualAnalogTransform::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_SetOverlayDualAnalogTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EDualAnalogWhich>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (IVROverlay::_SetOverlayDualAnalogTransform::*)(uint64_t, Valve::VR::EDualAnalogWhich, System::IntPtr, float, System::AsyncCallback*, ::Il2CppObject*)>(&IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_SetOverlayDualAnalogTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EDualAnalogWhich>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (IVROverlay::_SetOverlayDualAnalogTransform::*)(System::IAsyncResult*)>(&IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVROverlay::_SetOverlayDualAnalogTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform*, "Valve.VR", "IVROverlay/_SetOverlayDualAnalogTransform");
