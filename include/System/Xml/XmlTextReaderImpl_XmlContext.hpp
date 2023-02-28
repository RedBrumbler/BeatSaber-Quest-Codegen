// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.Xml.XmlSpace
#include "System/Xml/XmlSpace.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::XmlContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::XmlContext*, "System.Xml", "XmlTextReaderImpl/XmlContext");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.XmlContext
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::XmlContext : public ::Il2CppObject {
    public:
    public:
    // System.Xml.XmlSpace xmlSpace
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::XmlSpace xmlSpace;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlSpace) == 0x4);
    // Padding between fields: xmlSpace and: xmlLang
    char __padding0[0x4] = {};
    // System.String xmlLang
    // Size: 0x8
    // Offset: 0x18
    ::StringW xmlLang;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String defaultNamespace
    // Size: 0x8
    // Offset: 0x20
    ::StringW defaultNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Xml.XmlTextReaderImpl/System.Xml.XmlContext previousContext
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlTextReaderImpl::XmlContext* previousContext;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlTextReaderImpl::XmlContext*) == 0x8);
    public:
    // Get instance field reference: System.Xml.XmlSpace xmlSpace
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlSpace& dyn_xmlSpace();
    // Get instance field reference: System.String xmlLang
    [[deprecated("Use field access instead!")]] ::StringW& dyn_xmlLang();
    // Get instance field reference: System.String defaultNamespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_defaultNamespace();
    // Get instance field reference: System.Xml.XmlTextReaderImpl/System.Xml.XmlContext previousContext
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlTextReaderImpl::XmlContext*& dyn_previousContext();
    // System.Void .ctor()
    // Offset: 0x27EEE34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::XmlContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::XmlContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::XmlContext*, creationType>()));
    }
    // System.Void .ctor(System.Xml.XmlTextReaderImpl/System.Xml.XmlContext previousContext)
    // Offset: 0x27EEEA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::XmlContext* New_ctor(::System::Xml::XmlTextReaderImpl::XmlContext* previousContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::XmlContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::XmlContext*, creationType>(previousContext)));
    }
  }; // System.Xml.XmlTextReaderImpl/System.Xml.XmlContext
  #pragma pack(pop)
  static check_size<sizeof(XmlTextReaderImpl::XmlContext), 40 + sizeof(::System::Xml::XmlTextReaderImpl::XmlContext*)> __System_Xml_XmlTextReaderImpl_XmlContextSizeCheck;
  static_assert(sizeof(XmlTextReaderImpl::XmlContext) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::XmlContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::XmlContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
