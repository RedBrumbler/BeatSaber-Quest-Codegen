// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
NEED_NO_BOX(::Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*, "Valve.VR", "IVRScreenshots/_GetScreenshotPropertyFilename");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyFilename
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10DBC60
  class IVRScreenshots::_GetScreenshotPropertyFilename : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x231F03C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_GetScreenshotPropertyFilename* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_GetScreenshotPropertyFilename*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x231F04C
    uint Invoke(uint screenshotHandle, ::Valve::VR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint cchFilename, ByRef<::Valve::VR::EVRScreenshotError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x231F324
    ::System::IAsyncResult* BeginInvoke(uint screenshotHandle, ::Valve::VR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint cchFilename, ByRef<::Valve::VR::EVRScreenshotError> pError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x231F410
    uint EndInvoke(ByRef<::Valve::VR::EVRScreenshotError> pError, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyFilename
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(uint, ::Valve::VR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint, ByRef<::Valve::VR::EVRScreenshotError>)>(&Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::Invoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* filenameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotPropertyFilenames")->byval_arg;
    static auto* pchFilename = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* cchFilename = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, filenameType, pchFilename, cchFilename, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(uint, ::Valve::VR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint, ByRef<::Valve::VR::EVRScreenshotError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* filenameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotPropertyFilenames")->byval_arg;
    static auto* pchFilename = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* cchFilename = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(ByRef<::Valve::VR::EVRScreenshotError>, ::System::IAsyncResult*)>(&Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
