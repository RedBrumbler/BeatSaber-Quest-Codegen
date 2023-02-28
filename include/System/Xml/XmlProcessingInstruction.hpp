// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlLinkedNode
#include "System/Xml/XmlLinkedNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Skipping declaration: XmlNode because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlProcessingInstruction
  class XmlProcessingInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlProcessingInstruction*, "System.Xml", "XmlProcessingInstruction");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlProcessingInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.String target
    // Size: 0x8
    // Offset: 0x20
    ::StringW target;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String data
    // Size: 0x8
    // Offset: 0x28
    ::StringW data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String target
    [[deprecated("Use field access instead!")]] ::StringW& dyn_target();
    // Get instance field reference: private System.String data
    [[deprecated("Use field access instead!")]] ::StringW& dyn_data();
    // public System.Void set_Data(System.String value)
    // Offset: 0x165C880
    void set_Data(::StringW value);
    // protected internal System.Void .ctor(System.String target, System.String data, System.Xml.XmlDocument doc)
    // Offset: 0x1655E10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlProcessingInstruction* New_ctor(::StringW target, ::StringW data, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlProcessingInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlProcessingInstruction*, creationType>(target, data, doc)));
    }
    // public override System.String get_Name()
    // Offset: 0x165C80C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x165C868
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_Value()
    // Offset: 0x165C874
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x165C87C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.String get_InnerText()
    // Offset: 0x165C930
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_InnerText()
    ::StringW get_InnerText();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x165C938
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x165C93C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x165C944
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
  }; // System.Xml.XmlProcessingInstruction
  #pragma pack(pop)
  static check_size<sizeof(XmlProcessingInstruction), 40 + sizeof(::StringW)> __System_Xml_XmlProcessingInstructionSizeCheck;
  static_assert(sizeof(XmlProcessingInstruction) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlProcessingInstruction::*)(::StringW)>(&System::Xml::XmlProcessingInstruction::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlProcessingInstruction::*)()>(&System::Xml::XmlProcessingInstruction::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlProcessingInstruction::*)()>(&System::Xml::XmlProcessingInstruction::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlProcessingInstruction::*)()>(&System::Xml::XmlProcessingInstruction::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlProcessingInstruction::*)(::StringW)>(&System::Xml::XmlProcessingInstruction::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::get_InnerText
// Il2CppName: get_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlProcessingInstruction::*)()>(&System::Xml::XmlProcessingInstruction::get_InnerText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "get_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlProcessingInstruction::*)(::StringW)>(&System::Xml::XmlProcessingInstruction::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlProcessingInstruction::*)()>(&System::Xml::XmlProcessingInstruction::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlProcessingInstruction::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlProcessingInstruction::*)(bool)>(&System::Xml::XmlProcessingInstruction::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlProcessingInstruction*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
