// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_AreBoundsVisible
  // [UnmanagedFunctionPointerAttribute] Offset: DCD8C8
  class IVRChaperone::_AreBoundsVisible : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _AreBoundsVisible
    _AreBoundsVisible() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B5454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_AreBoundsVisible* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_AreBoundsVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_AreBoundsVisible*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x15AB6C8
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B5464
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B5490
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_AreBoundsVisible
  #pragma pack(pop)
  // Writing MetadataGetter for method: IVRChaperone::_AreBoundsVisible::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVRChaperone::_AreBoundsVisible::*)(::Il2CppObject*, System::IntPtr)>(&IVRChaperone::_AreBoundsVisible::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRChaperone::_AreBoundsVisible*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IVRChaperone::_AreBoundsVisible::*)(::Il2CppObject*, System::IntPtr)>(&IVRChaperone::_AreBoundsVisible::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRChaperone::_AreBoundsVisible*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: IVRChaperone::_AreBoundsVisible::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (IVRChaperone::_AreBoundsVisible::*)()>(&IVRChaperone::_AreBoundsVisible::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRChaperone::_AreBoundsVisible*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IVRChaperone::_AreBoundsVisible::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (IVRChaperone::_AreBoundsVisible::*)(System::AsyncCallback*, ::Il2CppObject*)>(&IVRChaperone::_AreBoundsVisible::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRChaperone::_AreBoundsVisible*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: IVRChaperone::_AreBoundsVisible::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (IVRChaperone::_AreBoundsVisible::*)(System::IAsyncResult*)>(&IVRChaperone::_AreBoundsVisible::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IVRChaperone::_AreBoundsVisible*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_AreBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_AreBoundsVisible");
