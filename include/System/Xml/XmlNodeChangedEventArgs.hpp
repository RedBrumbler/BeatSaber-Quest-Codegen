// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.Xml.XmlNodeChangedAction
#include "System/Xml/XmlNodeChangedAction.hpp"
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
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeChangedEventArgs
  class XmlNodeChangedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventArgs*, "System.Xml", "XmlNodeChangedEventArgs");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlNodeChangedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNodeChangedEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Xml.XmlNodeChangedAction action
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::XmlNodeChangedAction action;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNodeChangedAction) == 0x4);
    // Padding between fields: action and: node
    char __padding0[0x4] = {};
    // private System.Xml.XmlNode node
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlNode* node;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    // private System.Xml.XmlNode oldParent
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlNode* oldParent;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    // private System.Xml.XmlNode newParent
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlNode* newParent;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    // private System.String oldValue
    // Size: 0x8
    // Offset: 0x30
    ::StringW oldValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String newValue
    // Size: 0x8
    // Offset: 0x38
    ::StringW newValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlNodeChangedAction action
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNodeChangedAction& dyn_action();
    // Get instance field reference: private System.Xml.XmlNode node
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNode*& dyn_node();
    // Get instance field reference: private System.Xml.XmlNode oldParent
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNode*& dyn_oldParent();
    // Get instance field reference: private System.Xml.XmlNode newParent
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNode*& dyn_newParent();
    // Get instance field reference: private System.String oldValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_oldValue();
    // Get instance field reference: private System.String newValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_newValue();
    // public System.Xml.XmlNodeChangedAction get_Action()
    // Offset: 0x165BFCC
    ::System::Xml::XmlNodeChangedAction get_Action();
    // public System.Void .ctor(System.Xml.XmlNode node, System.Xml.XmlNode oldParent, System.Xml.XmlNode newParent, System.String oldValue, System.String newValue, System.Xml.XmlNodeChangedAction action)
    // Offset: 0x165BF20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNodeChangedEventArgs* New_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlNodeChangedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNodeChangedEventArgs*, creationType>(node, oldParent, newParent, oldValue, newValue, action)));
    }
  }; // System.Xml.XmlNodeChangedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(XmlNodeChangedEventArgs), 56 + sizeof(::StringW)> __System_Xml_XmlNodeChangedEventArgsSizeCheck;
  static_assert(sizeof(XmlNodeChangedEventArgs) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlNodeChangedEventArgs::get_Action
// Il2CppName: get_Action
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeChangedAction (System::Xml::XmlNodeChangedEventArgs::*)()>(&System::Xml::XmlNodeChangedEventArgs::get_Action)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeChangedEventArgs*), "get_Action", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNodeChangedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
