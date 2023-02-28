// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
NEED_NO_BOX(::Valve::VR::IVRSystem::_GetProjectionRaw);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_GetProjectionRaw*, "Valve.VR", "IVRSystem/_GetProjectionRaw");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetProjectionRaw
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10DA694
  class IVRSystem::_GetProjectionRaw : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x232942C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetProjectionRaw* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_GetProjectionRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetProjectionRaw*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom)
    // Offset: 0x232943C
    void Invoke(::Valve::VR::EVREye eEye, ByRef<float> pfLeft, ByRef<float> pfRight, ByRef<float> pfTop, ByRef<float> pfBottom);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x232972C
    ::System::IAsyncResult* BeginInvoke(::Valve::VR::EVREye eEye, ByRef<float> pfLeft, ByRef<float> pfRight, ByRef<float> pfTop, ByRef<float> pfBottom, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.IAsyncResult result)
    // Offset: 0x2329830
    void EndInvoke(ByRef<float> pfLeft, ByRef<float> pfRight, ByRef<float> pfTop, ByRef<float> pfBottom, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetProjectionRaw
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionRaw::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionRaw::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetProjectionRaw::*)(::Valve::VR::EVREye, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&Valve::VR::IVRSystem::_GetProjectionRaw::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pfLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfRight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfTop = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfBottom = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetProjectionRaw*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pfLeft, pfRight, pfTop, pfBottom});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionRaw::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_GetProjectionRaw::*)(::Valve::VR::EVREye, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetProjectionRaw::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pfLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfRight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfTop = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfBottom = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetProjectionRaw*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionRaw::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetProjectionRaw::*)(ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>, ::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetProjectionRaw::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pfLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfRight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfTop = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfBottom = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetProjectionRaw*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfLeft, pfRight, pfTop, pfBottom, result});
  }
};
