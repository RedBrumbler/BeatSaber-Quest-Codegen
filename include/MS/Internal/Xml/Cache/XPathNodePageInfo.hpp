// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNode
#include "MS/Internal/Xml/Cache/XPathNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNodePageInfo
  class XPathNodePageInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodePageInfo);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodePageInfo*, "MS.Internal.Xml.Cache", "XPathNodePageInfo");
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.Cache.XPathNodePageInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathNodePageInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 pageNum
    // Size: 0x4
    // Offset: 0x10
    int pageNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeCount
    // Size: 0x4
    // Offset: 0x14
    int nodeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private MS.Internal.Xml.Cache.XPathNode[] pageNext
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageNext;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    public:
    // Get instance field reference: private System.Int32 pageNum
    [[deprecated("Use field access instead!")]] int& dyn_pageNum();
    // Get instance field reference: private System.Int32 nodeCount
    [[deprecated("Use field access instead!")]] int& dyn_nodeCount();
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] pageNext
    [[deprecated("Use field access instead!")]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_pageNext();
    // public System.Int32 get_PageNumber()
    // Offset: 0x1AFA8E0
    int get_PageNumber();
    // public System.Int32 get_NodeCount()
    // Offset: 0x1AFA8E8
    int get_NodeCount();
    // public MS.Internal.Xml.Cache.XPathNode[] get_NextPage()
    // Offset: 0x1AFA8F0
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> get_NextPage();
  }; // MS.Internal.Xml.Cache.XPathNodePageInfo
  #pragma pack(pop)
  static check_size<sizeof(XPathNodePageInfo), 24 + sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>)> __MS_Internal_Xml_Cache_XPathNodePageInfoSizeCheck;
  static_assert(sizeof(XPathNodePageInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber
// Il2CppName: get_PageNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodePageInfo*), "get_PageNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount
// Il2CppName: get_NodeCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodePageInfo*), "get_NodeCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage
// Il2CppName: get_NextPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode> (MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodePageInfo*), "get_NextPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
