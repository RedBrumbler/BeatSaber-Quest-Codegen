// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlNode
#include "Newtonsoft/Json/Converters/IXmlNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XmlNodeWrapper
  class XmlNodeWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlNodeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlNodeWrapper*, "Newtonsoft.Json.Converters", "XmlNodeWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XmlNodeWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNodeWrapper : public ::Il2CppObject/*, public ::Newtonsoft::Json::Converters::IXmlNode*/ {
    public:
    public:
    // private readonly System.Xml.XmlNode _node
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlNode* node;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _childNodes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* childNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*) == 0x8);
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _attributes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* attributes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlNode
    operator ::Newtonsoft::Json::Converters::IXmlNode() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlNode*>(this);
    }
    // Creating interface conversion operator: i_IXmlNode
    inline ::Newtonsoft::Json::Converters::IXmlNode* i_IXmlNode() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Converters::IXmlNode*>(this);
    }
    // Get instance field reference: private readonly System.Xml.XmlNode _node
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNode*& dyn__node();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _childNodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& dyn__childNodes();
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> _attributes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& dyn__attributes();
    // public System.Object get_WrappedNode()
    // Offset: 0x18135D4
    ::Il2CppObject* get_WrappedNode();
    // public System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x18135DC
    ::System::Xml::XmlNodeType get_NodeType();
    // public System.String get_LocalName()
    // Offset: 0x18135FC
    ::StringW get_LocalName();
    // public System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_ChildNodes()
    // Offset: 0x1813620
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();
    // public System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> get_Attributes()
    // Offset: 0x1813900
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();
    // public Newtonsoft.Json.Converters.IXmlNode get_ParentNode()
    // Offset: 0x1813C04
    ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();
    // public System.String get_Value()
    // Offset: 0x1813CA8
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x180C41C
    void set_Value(::StringW value);
    // public System.String get_NamespaceUri()
    // Offset: 0x1813D7C
    ::StringW get_NamespaceUri();
    // public System.Void .ctor(System.Xml.XmlNode node)
    // Offset: 0x180BB6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNodeWrapper* New_ctor(::System::Xml::XmlNode* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XmlNodeWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNodeWrapper*, creationType>(node)));
    }
    // static Newtonsoft.Json.Converters.IXmlNode WrapNode(System.Xml.XmlNode node)
    // Offset: 0x180E5FC
    static ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::XmlNode* node);
    // public Newtonsoft.Json.Converters.IXmlNode AppendChild(Newtonsoft.Json.Converters.IXmlNode newChild)
    // Offset: 0x1813CC8
    ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);
  }; // Newtonsoft.Json.Converters.XmlNodeWrapper
  #pragma pack(pop)
  static check_size<sizeof(XmlNodeWrapper), 32 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*)> __Newtonsoft_Json_Converters_XmlNodeWrapperSizeCheck;
  static_assert(sizeof(XmlNodeWrapper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_WrappedNode
// Il2CppName: get_WrappedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_WrappedNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_WrappedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_ChildNodes
// Il2CppName: get_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_ChildNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::XmlNodeWrapper::*)(::StringW)>(&Newtonsoft::Json::Converters::XmlNodeWrapper::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::get_NamespaceUri
// Il2CppName: get_NamespaceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XmlNodeWrapper::*)()>(&Newtonsoft::Json::Converters::XmlNodeWrapper::get_NamespaceUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "get_NamespaceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::WrapNode
// Il2CppName: WrapNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (*)(::System::Xml::XmlNode*)>(&Newtonsoft::Json::Converters::XmlNodeWrapper::WrapNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "WrapNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XmlNodeWrapper::AppendChild
// Il2CppName: AppendChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (Newtonsoft::Json::Converters::XmlNodeWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&Newtonsoft::Json::Converters::XmlNodeWrapper::AppendChild)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Converters", "IXmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XmlNodeWrapper*), "AppendChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild});
  }
};
