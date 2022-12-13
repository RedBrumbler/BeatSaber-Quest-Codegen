// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeChangedEventArgs
  class XmlNodeChangedEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeChangedEventHandler
  class XmlNodeChangedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventHandler*, "System.Xml", "XmlNodeChangedEventHandler");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlNodeChangedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNodeChangedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x163B0DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNodeChangedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlNodeChangedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNodeChangedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Xml.XmlNodeChangedEventArgs e)
    // Offset: 0x163B0EC
    void Invoke(::Il2CppObject* sender, ::System::Xml::XmlNodeChangedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.Xml.XmlNodeChangedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x163B4D4
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::Xml::XmlNodeChangedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x163B504
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.XmlNodeChangedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlNodeChangedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlNodeChangedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNodeChangedEventHandler::*)(::Il2CppObject*, ::System::Xml::XmlNodeChangedEventArgs*)>(&System::Xml::XmlNodeChangedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeChangedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNodeChangedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::XmlNodeChangedEventHandler::*)(::Il2CppObject*, ::System::Xml::XmlNodeChangedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::XmlNodeChangedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeChangedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeChangedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNodeChangedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNodeChangedEventHandler::*)(::System::IAsyncResult*)>(&System::Xml::XmlNodeChangedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeChangedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
