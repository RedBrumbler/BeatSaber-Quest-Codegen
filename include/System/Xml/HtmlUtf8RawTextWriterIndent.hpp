// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.HtmlUtf8RawTextWriter
#include "System/Xml/HtmlUtf8RawTextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: HtmlUtf8RawTextWriterIndent
  class HtmlUtf8RawTextWriterIndent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriterIndent*, "System.Xml", "HtmlUtf8RawTextWriterIndent");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xC9
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.HtmlUtf8RawTextWriterIndent
  // [TokenAttribute] Offset: FFFFFFFF
  class HtmlUtf8RawTextWriterIndent : public ::System::Xml::HtmlUtf8RawTextWriter {
    public:
    // Writing base type padding for base size: 0xB1 to desired offset: 0xB4
    char ___base_padding[0x3] = {};
    public:
    // private System.Int32 indentLevel
    // Size: 0x4
    // Offset: 0xB4
    int indentLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 endBlockPos
    // Size: 0x4
    // Offset: 0xB8
    int endBlockPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: endBlockPos and: indentChars
    char __padding1[0x4] = {};
    // private System.String indentChars
    // Size: 0x8
    // Offset: 0xC0
    ::StringW indentChars;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean newLineOnAttributes
    // Size: 0x1
    // Offset: 0xC8
    bool newLineOnAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 indentLevel
    [[deprecated("Use field access instead!")]] int& dyn_indentLevel();
    // Get instance field reference: private System.Int32 endBlockPos
    [[deprecated("Use field access instead!")]] int& dyn_endBlockPos();
    // Get instance field reference: private System.String indentChars
    [[deprecated("Use field access instead!")]] ::StringW& dyn_indentChars();
    // Get instance field reference: private System.Boolean newLineOnAttributes
    [[deprecated("Use field access instead!")]] bool& dyn_newLineOnAttributes();
    // private System.Void WriteIndent()
    // Offset: 0x1B09FE0
    void WriteIndent();
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x1B09D80
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Base method: System.Void XmlUtf8RawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlUtf8RawTextWriterIndent* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::HtmlUtf8RawTextWriterIndent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlUtf8RawTextWriterIndent*, creationType>(stream, settings)));
    }
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x1B09DF8
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1B09E20
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // override System.Void StartElementContent()
    // Offset: 0x1B0A034
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1B0A0BC
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1B0A15C
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);
    // protected override System.Void FlushBuffer()
    // Offset: 0x1B0A1D4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::FlushBuffer()
    void FlushBuffer();
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x1B09DD0
    // Implemented from: System.Xml.HtmlUtf8RawTextWriter
    // Base method: System.Void HtmlUtf8RawTextWriter::Init(System.Xml.XmlWriterSettings settings)
    void Init(::System::Xml::XmlWriterSettings* settings);
  }; // System.Xml.HtmlUtf8RawTextWriterIndent
  #pragma pack(pop)
  static check_size<sizeof(HtmlUtf8RawTextWriterIndent), 200 + sizeof(bool)> __System_Xml_HtmlUtf8RawTextWriterIndentSizeCheck;
  static_assert(sizeof(HtmlUtf8RawTextWriterIndent) == 0xC9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::WriteIndent
// Il2CppName: WriteIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)()>(&System::Xml::HtmlUtf8RawTextWriterIndent::WriteIndent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "WriteIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlUtf8RawTextWriterIndent::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlUtf8RawTextWriterIndent::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)()>(&System::Xml::HtmlUtf8RawTextWriterIndent::StartElementContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlUtf8RawTextWriterIndent::WriteEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::HtmlUtf8RawTextWriterIndent::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::FlushBuffer
// Il2CppName: FlushBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)()>(&System::Xml::HtmlUtf8RawTextWriterIndent::FlushBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "FlushBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriterIndent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriterIndent::*)(::System::Xml::XmlWriterSettings*)>(&System::Xml::HtmlUtf8RawTextWriterIndent::Init)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriterIndent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
