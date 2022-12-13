// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.Xml.XmlNamespaceManager
#include "System/Xml/XmlNamespaceManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::NoNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::NoNamespaceManager*, "System.Xml", "XmlTextReaderImpl/NoNamespaceManager");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.NoNamespaceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::NoNamespaceManager : public ::System::Xml::XmlNamespaceManager {
    public:
    // public override System.String get_DefaultNamespace()
    // Offset: 0x27DB984
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.String XmlNamespaceManager::get_DefaultNamespace()
    ::StringW get_DefaultNamespace();
    // public System.Void .ctor()
    // Offset: 0x27DB97C
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Void XmlNamespaceManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::NoNamespaceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::NoNamespaceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::NoNamespaceManager*, creationType>()));
    }
    // public override System.Void PushScope()
    // Offset: 0x27DB9D4
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Void XmlNamespaceManager::PushScope()
    void PushScope();
    // public override System.Boolean PopScope()
    // Offset: 0x27DB9D8
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Boolean XmlNamespaceManager::PopScope()
    bool PopScope();
    // public override System.Void AddNamespace(System.String prefix, System.String uri)
    // Offset: 0x27DB9E0
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Void XmlNamespaceManager::AddNamespace(System.String prefix, System.String uri)
    void AddNamespace(::StringW prefix, ::StringW uri);
    // public override System.Void RemoveNamespace(System.String prefix, System.String uri)
    // Offset: 0x27DB9E4
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Void XmlNamespaceManager::RemoveNamespace(System.String prefix, System.String uri)
    void RemoveNamespace(::StringW prefix, ::StringW uri);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x27DB9E8
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Collections.IEnumerator XmlNamespaceManager::GetEnumerator()
    ::System::Collections::IEnumerator* GetEnumerator();
    // public override System.String LookupNamespace(System.String prefix)
    // Offset: 0x27DB9F0
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.String XmlNamespaceManager::LookupNamespace(System.String prefix)
    ::StringW LookupNamespace(::StringW prefix);
    // public override System.String LookupPrefix(System.String uri)
    // Offset: 0x27DBA40
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.String XmlNamespaceManager::LookupPrefix(System.String uri)
    ::StringW LookupPrefix(::StringW uri);
  }; // System.Xml.XmlTextReaderImpl/System.Xml.NoNamespaceManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::get_DefaultNamespace
// Il2CppName: get_DefaultNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)()>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::get_DefaultNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "get_DefaultNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::PushScope
// Il2CppName: PushScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)()>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::PushScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "PushScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::PopScope
// Il2CppName: PopScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)()>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::PopScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "PopScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::AddNamespace
// Il2CppName: AddNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::AddNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "AddNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, uri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::RemoveNamespace
// Il2CppName: RemoveNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::RemoveNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "RemoveNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, uri});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)()>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NoNamespaceManager::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::NoNamespaceManager::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::NoNamespaceManager::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NoNamespaceManager*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
