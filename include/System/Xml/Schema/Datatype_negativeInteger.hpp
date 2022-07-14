// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_nonPositiveInteger
#include "System/Xml/Schema/Datatype_nonPositiveInteger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: FacetsChecker
  class FacetsChecker;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_negativeInteger
  class Datatype_negativeInteger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_negativeInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_negativeInteger*, "System.Xml.Schema", "Datatype_negativeInteger");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_negativeInteger
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_negativeInteger : public ::System::Xml::Schema::Datatype_nonPositiveInteger {
    public:
    // Get static field: static private readonly System.Xml.Schema.FacetsChecker numeric10FacetsChecker
    static ::System::Xml::Schema::FacetsChecker* _get_numeric10FacetsChecker();
    // Set static field: static private readonly System.Xml.Schema.FacetsChecker numeric10FacetsChecker
    static void _set_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value);
    // override System.Xml.Schema.FacetsChecker get_FacetsChecker()
    // Offset: 0x1C5C034
    // Implemented from: System.Xml.Schema.Datatype_nonPositiveInteger
    // Base method: System.Xml.Schema.FacetsChecker Datatype_nonPositiveInteger::get_FacetsChecker()
    ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1C5C09C
    // Implemented from: System.Xml.Schema.Datatype_nonPositiveInteger
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_nonPositiveInteger::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public System.Void .ctor()
    // Offset: 0x1C5C0A4
    // Implemented from: System.Xml.Schema.Datatype_nonPositiveInteger
    // Base method: System.Void Datatype_nonPositiveInteger::.ctor()
    // Base method: System.Void Datatype_integer::.ctor()
    // Base method: System.Void Datatype_decimal::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_negativeInteger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_negativeInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_negativeInteger*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C5C10C
    // Implemented from: System.Xml.Schema.Datatype_nonPositiveInteger
    // Base method: System.Void Datatype_nonPositiveInteger::.cctor()
    // Base method: System.Void Datatype_decimal::.cctor()
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
  }; // System.Xml.Schema.Datatype_negativeInteger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_negativeInteger::get_FacetsChecker
// Il2CppName: get_FacetsChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetsChecker* (System::Xml::Schema::Datatype_negativeInteger::*)()>(&System::Xml::Schema::Datatype_negativeInteger::get_FacetsChecker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_negativeInteger*), "get_FacetsChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_negativeInteger::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_negativeInteger::*)()>(&System::Xml::Schema::Datatype_negativeInteger::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_negativeInteger*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_negativeInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_negativeInteger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_negativeInteger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_negativeInteger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};