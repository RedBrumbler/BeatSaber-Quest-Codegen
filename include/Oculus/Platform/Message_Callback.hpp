// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Message::Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message::Callback*, "Oculus.Platform", "Message/Callback");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Message/Oculus.Platform.Callback
  // [TokenAttribute] Offset: FFFFFFFF
  class Message::Callback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A2E400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Message::Callback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Message::Callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Message::Callback*, creationType>(object, method)));
    }
    // public System.Void Invoke(Oculus.Platform.Message message)
    // Offset: 0x1A22A84
    void Invoke(::Oculus::Platform::Message* message);
    // public System.IAsyncResult BeginInvoke(Oculus.Platform.Message message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A2E410
    ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message* message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A2E434
    void EndInvoke(::System::IAsyncResult* result);
  }; // Oculus.Platform.Message/Oculus.Platform.Callback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Message::Callback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Message::Callback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Message::Callback::*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Message::Callback::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Message::Callback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Message::Callback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Oculus::Platform::Message::Callback::*)(::Oculus::Platform::Message*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Oculus::Platform::Message::Callback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Message::Callback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, callback, object});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Message::Callback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Message::Callback::*)(::System::IAsyncResult*)>(&Oculus::Platform::Message::Callback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Message::Callback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
