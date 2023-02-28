// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_token
#include "System/Xml/Schema/Datatype_token.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlTokenizedType
  struct XmlTokenizedType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_NMTOKEN
  class Datatype_NMTOKEN;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_NMTOKEN);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_NMTOKEN*, "System.Xml.Schema", "Datatype_NMTOKEN");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_NMTOKEN
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_NMTOKEN : public ::System::Xml::Schema::Datatype_token {
    public:
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1D236A8
    // Implemented from: System.Xml.Schema.Datatype_token
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_token::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public override System.Xml.XmlTokenizedType get_TokenizedType()
    // Offset: 0x1D236B0
    // Implemented from: System.Xml.Schema.Datatype_string
    // Base method: System.Xml.XmlTokenizedType Datatype_string::get_TokenizedType()
    ::System::Xml::XmlTokenizedType get_TokenizedType();
    // public System.Void .ctor()
    // Offset: 0x1D22820
    // Implemented from: System.Xml.Schema.Datatype_token
    // Base method: System.Void Datatype_token::.ctor()
    // Base method: System.Void Datatype_normalizedString::.ctor()
    // Base method: System.Void Datatype_string::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_NMTOKEN* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_NMTOKEN::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_NMTOKEN*, creationType>()));
    }
  }; // System.Xml.Schema.Datatype_NMTOKEN
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NMTOKEN::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_NMTOKEN::*)()>(&System::Xml::Schema::Datatype_NMTOKEN::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NMTOKEN*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NMTOKEN::get_TokenizedType
// Il2CppName: get_TokenizedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTokenizedType (System::Xml::Schema::Datatype_NMTOKEN::*)()>(&System::Xml::Schema::Datatype_NMTOKEN::get_TokenizedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_NMTOKEN*), "get_TokenizedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_NMTOKEN::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
