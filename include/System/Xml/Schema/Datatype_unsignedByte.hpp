// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_unsignedShort
#include "System/Xml/Schema/Datatype_unsignedShort.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: FacetsChecker
  class FacetsChecker;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_unsignedByte
  class Datatype_unsignedByte;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_unsignedByte);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_unsignedByte*, "System.Xml.Schema", "Datatype_unsignedByte");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_unsignedByte
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_unsignedByte : public ::System::Xml::Schema::Datatype_unsignedShort {
    public:
    // Get static field: static private readonly System.Type atomicValueType
    static ::System::Type* _get_atomicValueType();
    // Set static field: static private readonly System.Type atomicValueType
    static void _set_atomicValueType(::System::Type* value);
    // Get static field: static private readonly System.Type listValueType
    static ::System::Type* _get_listValueType();
    // Set static field: static private readonly System.Type listValueType
    static void _set_listValueType(::System::Type* value);
    // Get static field: static private readonly System.Xml.Schema.FacetsChecker numeric10FacetsChecker
    static ::System::Xml::Schema::FacetsChecker* _get_numeric10FacetsChecker();
    // Set static field: static private readonly System.Xml.Schema.FacetsChecker numeric10FacetsChecker
    static void _set_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value);
    // override System.Xml.Schema.FacetsChecker get_FacetsChecker()
    // Offset: 0x1D18250
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Xml.Schema.FacetsChecker Datatype_unsignedShort::get_FacetsChecker()
    ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1D182B8
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_unsignedShort::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public override System.Type get_ValueType()
    // Offset: 0x1D1835C
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Type Datatype_unsignedShort::get_ValueType()
    ::System::Type* get_ValueType();
    // override System.Type get_ListValueType()
    // Offset: 0x1D183C4
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Type Datatype_unsignedShort::get_ListValueType()
    ::System::Type* get_ListValueType();
    // public System.Void .ctor()
    // Offset: 0x1D18578
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Void Datatype_unsignedShort::.ctor()
    // Base method: System.Void Datatype_unsignedInt::.ctor()
    // Base method: System.Void Datatype_unsignedLong::.ctor()
    // Base method: System.Void Datatype_nonNegativeInteger::.ctor()
    // Base method: System.Void Datatype_integer::.ctor()
    // Base method: System.Void Datatype_decimal::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_unsignedByte* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_unsignedByte::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_unsignedByte*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D18640
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Void Datatype_unsignedShort::.cctor()
    // Base method: System.Void Datatype_unsignedInt::.cctor()
    // Base method: System.Void Datatype_unsignedLong::.cctor()
    // Base method: System.Void Datatype_nonNegativeInteger::.cctor()
    // Base method: System.Void Datatype_decimal::.cctor()
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
    // override System.Int32 Compare(System.Object value1, System.Object value2)
    // Offset: 0x1D182C0
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Int32 Datatype_unsignedShort::Compare(System.Object value1, System.Object value2)
    int Compare(::Il2CppObject* value1, ::Il2CppObject* value2);
    // override System.Exception TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0x1D1842C
    // Implemented from: System.Xml.Schema.Datatype_unsignedShort
    // Base method: System.Exception Datatype_unsignedShort::TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
  }; // System.Xml.Schema.Datatype_unsignedByte
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::get_FacetsChecker
// Il2CppName: get_FacetsChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetsChecker* (System::Xml::Schema::Datatype_unsignedByte::*)()>(&System::Xml::Schema::Datatype_unsignedByte::get_FacetsChecker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), "get_FacetsChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_unsignedByte::*)()>(&System::Xml::Schema::Datatype_unsignedByte::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_unsignedByte::*)()>(&System::Xml::Schema::Datatype_unsignedByte::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::get_ListValueType
// Il2CppName: get_ListValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_unsignedByte::*)()>(&System::Xml::Schema::Datatype_unsignedByte::get_ListValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), "get_ListValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_unsignedByte::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::Datatype_unsignedByte::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Schema::Datatype_unsignedByte::Compare)> {
  static const MethodInfo* get() {
    static auto* value1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value1, value2});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_unsignedByte::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Datatype_unsignedByte::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::Datatype_unsignedByte::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_unsignedByte*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, typedValue});
  }
};
