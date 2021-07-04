// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  // [UnmanagedFunctionPointerAttribute] Offset: DD3B18
  class IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLiveCollisionBoundsTagsInfo
    _GetLiveCollisionBoundsTagsInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D98B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount)
    // Offset: 0x16D3088
    bool Invoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D98C0
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punTagCount, System.IAsyncResult result)
    // Offset: 0x16D995C
    bool EndInvoke(uint& punTagCount, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, "Valve.VR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::*)(::Array<uint8_t>*&, uint&)>(&Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::Invoke)> {
  const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* punTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer, punTagCount});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::*)(::Array<uint8_t>*&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* punTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer, punTagCount, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::*)(uint&, System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::EndInvoke)> {
  const MethodInfo* get() {
    static auto* punTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punTagCount, result});
  }
};
