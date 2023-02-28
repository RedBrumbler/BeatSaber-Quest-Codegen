// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.InteriorNode
#include "System/Xml/Schema/InteriorNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: BitSet
  class BitSet;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: PlusNode
  class PlusNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::PlusNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::PlusNode*, "System.Xml.Schema", "PlusNode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.PlusNode
  // [TokenAttribute] Offset: FFFFFFFF
  class PlusNode : public ::System::Xml::Schema::InteriorNode {
    public:
    // public override System.Boolean get_IsNullable()
    // Offset: 0x1D3287C
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Boolean SyntaxTreeNode::get_IsNullable()
    bool get_IsNullable();
    // public System.Void .ctor()
    // Offset: 0x1D311F4
    // Implemented from: System.Xml.Schema.InteriorNode
    // Base method: System.Void InteriorNode::.ctor()
    // Base method: System.Void SyntaxTreeNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlusNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::PlusNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlusNode*, creationType>()));
    }
    // public override System.Void ConstructPos(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    // Offset: 0x1D327C8
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Void SyntaxTreeNode::ConstructPos(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos);
  }; // System.Xml.Schema.PlusNode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::PlusNode::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::PlusNode::*)()>(&System::Xml::Schema::PlusNode::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::PlusNode*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::PlusNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::PlusNode::ConstructPos
// Il2CppName: ConstructPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::PlusNode::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::PlusNode::ConstructPos)> {
  static const MethodInfo* get() {
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* lastpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::PlusNode*), "ConstructPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstpos, lastpos, followpos});
  }
};
