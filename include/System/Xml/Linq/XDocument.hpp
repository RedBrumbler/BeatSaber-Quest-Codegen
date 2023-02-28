// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XContainer
#include "System/Xml/Linq/XContainer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XDeclaration
  class XDeclaration;
  // Forward declaring type: XElement
  class XElement;
  // Skipping declaration: XNode because it is already included!
  // Forward declaring type: XAttribute
  class XAttribute;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XDocument
  class XDocument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDocument*, "System.Xml.Linq", "XDocument");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XDocument
  // [TokenAttribute] Offset: FFFFFFFF
  class XDocument : public ::System::Xml::Linq::XContainer {
    public:
    public:
    // private System.Xml.Linq.XDeclaration declaration
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Linq::XDeclaration* declaration;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XDeclaration*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Linq.XDeclaration declaration
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XDeclaration*& dyn_declaration();
    // public System.Xml.Linq.XDeclaration get_Declaration()
    // Offset: 0x2B50F2C
    ::System::Xml::Linq::XDeclaration* get_Declaration();
    // public System.Void set_Declaration(System.Xml.Linq.XDeclaration value)
    // Offset: 0x2B50F34
    void set_Declaration(::System::Xml::Linq::XDeclaration* value);
    // public System.Xml.Linq.XElement get_Root()
    // Offset: 0x2B50F44
    ::System::Xml::Linq::XElement* get_Root();
    // public System.Void .ctor(System.Xml.Linq.XDocument other)
    // Offset: 0x2B50EA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDocument* New_ctor(::System::Xml::Linq::XDocument* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XDocument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDocument*, creationType>(other)));
    }
    // private T GetFirstNode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetFirstNode() {
      static_assert(std::is_convertible_v<T, ::System::Xml::Linq::XNode*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XDocument::GetFirstNode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetFirstNode", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // static System.Boolean IsWhitespace(System.String s)
    // Offset: 0x2B51210
    static bool IsWhitespace(::StringW s);
    // private System.Void ValidateDocument(System.Xml.Linq.XNode previous, System.Xml.XmlNodeType allowBefore, System.Xml.XmlNodeType allowAfter)
    // Offset: 0x2B514A8
    void ValidateDocument(::System::Xml::Linq::XNode* previous, ::System::Xml::XmlNodeType allowBefore, ::System::Xml::XmlNodeType allowAfter);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x2B50F3C
    // Implemented from: System.Xml.Linq.XObject
    // Base method: System.Xml.XmlNodeType XObject::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public System.Void .ctor()
    // Offset: 0x2B50E9C
    // Implemented from: System.Xml.Linq.XContainer
    // Base method: System.Void XContainer::.ctor()
    // Base method: System.Void XNode::.ctor()
    // Base method: System.Void XObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDocument* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XDocument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDocument*, creationType>()));
    }
    // public override System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x2B50F94
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::WriteTo(System.Xml.XmlWriter writer)
    void WriteTo(::System::Xml::XmlWriter* writer);
    // override System.Void AddAttribute(System.Xml.Linq.XAttribute a)
    // Offset: 0x2B510B8
    // Implemented from: System.Xml.Linq.XContainer
    // Base method: System.Void XContainer::AddAttribute(System.Xml.Linq.XAttribute a)
    void AddAttribute(::System::Xml::Linq::XAttribute* a);
    // override System.Void AddAttributeSkipNotify(System.Xml.Linq.XAttribute a)
    // Offset: 0x2B51134
    // Implemented from: System.Xml.Linq.XContainer
    // Base method: System.Void XContainer::AddAttributeSkipNotify(System.Xml.Linq.XAttribute a)
    void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);
    // override System.Xml.Linq.XNode CloneNode()
    // Offset: 0x2B511B0
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Xml.Linq.XNode XNode::CloneNode()
    ::System::Xml::Linq::XNode* CloneNode();
    // override System.Void ValidateNode(System.Xml.Linq.XNode node, System.Xml.Linq.XNode previous)
    // Offset: 0x2B512A0
    // Implemented from: System.Xml.Linq.XContainer
    // Base method: System.Void XContainer::ValidateNode(System.Xml.Linq.XNode node, System.Xml.Linq.XNode previous)
    void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous);
    // override System.Void ValidateString(System.String s)
    // Offset: 0x2B515E4
    // Implemented from: System.Xml.Linq.XContainer
    // Base method: System.Void XContainer::ValidateString(System.String s)
    void ValidateString(::StringW s);
  }; // System.Xml.Linq.XDocument
  #pragma pack(pop)
  static check_size<sizeof(XDocument), 48 + sizeof(::System::Xml::Linq::XDeclaration*)> __System_Xml_Linq_XDocumentSizeCheck;
  static_assert(sizeof(XDocument) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::get_Declaration
// Il2CppName: get_Declaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XDeclaration* (System::Xml::Linq::XDocument::*)()>(&System::Xml::Linq::XDocument::get_Declaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "get_Declaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::set_Declaration
// Il2CppName: set_Declaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XDeclaration*)>(&System::Xml::Linq::XDocument::set_Declaration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XDeclaration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "set_Declaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::get_Root
// Il2CppName: get_Root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XElement* (System::Xml::Linq::XDocument::*)()>(&System::Xml::Linq::XDocument::get_Root)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "get_Root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::GetFirstNode
// Il2CppName: GetFirstNode
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::IsWhitespace
// Il2CppName: IsWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Xml::Linq::XDocument::IsWhitespace)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "IsWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::ValidateDocument
// Il2CppName: ValidateDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XNode*, ::System::Xml::XmlNodeType, ::System::Xml::XmlNodeType)>(&System::Xml::Linq::XDocument::ValidateDocument)> {
  static const MethodInfo* get() {
    static auto* previous = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    static auto* allowBefore = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    static auto* allowAfter = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "ValidateDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previous, allowBefore, allowAfter});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::Linq::XDocument::*)()>(&System::Xml::Linq::XDocument::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::System::Xml::XmlWriter*)>(&System::Xml::Linq::XDocument::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::AddAttribute
// Il2CppName: AddAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XAttribute*)>(&System::Xml::Linq::XDocument::AddAttribute)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "AddAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::AddAttributeSkipNotify
// Il2CppName: AddAttributeSkipNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XAttribute*)>(&System::Xml::Linq::XDocument::AddAttributeSkipNotify)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "AddAttributeSkipNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XDocument::*)()>(&System::Xml::Linq::XDocument::CloneNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::ValidateNode
// Il2CppName: ValidateNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*)>(&System::Xml::Linq::XDocument::ValidateNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    static auto* previous = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "ValidateNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, previous});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XDocument::ValidateString
// Il2CppName: ValidateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XDocument::*)(::StringW)>(&System::Xml::Linq::XDocument::ValidateString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XDocument*), "ValidateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
