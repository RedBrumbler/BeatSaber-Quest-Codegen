// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNavigatorKeyComparer
  class XPathNavigatorKeyComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XPath::XPathNavigatorKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNavigatorKeyComparer*, "System.Xml.XPath", "XPathNavigatorKeyComparer");
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XPath.XPathNavigatorKeyComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathNavigatorKeyComparer : public ::Il2CppObject/*, public ::System::Collections::IEqualityComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEqualityComparer
    operator ::System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: i_IEqualityComparer
    inline ::System::Collections::IEqualityComparer* i_IEqualityComparer() noexcept {
      return reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1C66A04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XPathNavigatorKeyComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XPath::XPathNavigatorKeyComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XPathNavigatorKeyComparer*, creationType>()));
    }
    // private System.Boolean System.Collections.IEqualityComparer.Equals(System.Object obj1, System.Object obj2)
    // Offset: 0x1C66A0C
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* obj1, ::Il2CppObject* obj2);
    // private System.Int32 System.Collections.IEqualityComparer.GetHashCode(System.Object obj)
    // Offset: 0x1C66AF0
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
  }; // System.Xml.XPath.XPathNavigatorKeyComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigatorKeyComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_Equals
// Il2CppName: System.Collections.IEqualityComparer.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathNavigatorKeyComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_Equals)> {
  static const MethodInfo* get() {
    static auto* obj1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* obj2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigatorKeyComparer*), "System.Collections.IEqualityComparer.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj1, obj2});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_GetHashCode
// Il2CppName: System.Collections.IEqualityComparer.GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XPath::XPathNavigatorKeyComparer::*)(::Il2CppObject*)>(&System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathNavigatorKeyComparer*), "System.Collections.IEqualityComparer.GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
