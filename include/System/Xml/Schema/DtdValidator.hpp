// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.BaseValidator
#include "System/Xml/Schema/BaseValidator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IDtdParserAdapter
  class IDtdParserAdapter;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: DtdValidator
  class DtdValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DtdValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DtdValidator*, "System.Xml.Schema", "DtdValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DtdValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class DtdValidator : public ::System::Xml::Schema::BaseValidator {
    public:
    // Nested type: ::System::Xml::Schema::DtdValidator::NamespaceManager
    class NamespaceManager;
    // Get static field: static private System.Xml.Schema.DtdValidator/System.Xml.Schema.NamespaceManager namespaceManager
    static ::System::Xml::Schema::DtdValidator::NamespaceManager* _get_namespaceManager();
    // Set static field: static private System.Xml.Schema.DtdValidator/System.Xml.Schema.NamespaceManager namespaceManager
    static void _set_namespaceManager(::System::Xml::Schema::DtdValidator::NamespaceManager* value);
    // static private System.Void .cctor()
    // Offset: 0x1C5F57C
    static void _cctor();
    // static public System.Void SetDefaultTypedValue(System.Xml.Schema.SchemaAttDef attdef, System.Xml.IDtdParserAdapter readerAdapter)
    // Offset: 0x1C5F140
    static void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter);
  }; // System.Xml.Schema.DtdValidator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::DtdValidator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::SetDefaultTypedValue
// Il2CppName: SetDefaultTypedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*)>(&System::Xml::Schema::DtdValidator::SetDefaultTypedValue)> {
  static const MethodInfo* get() {
    static auto* attdef = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaAttDef")->byval_arg;
    static auto* readerAdapter = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdParserAdapter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator*), "SetDefaultTypedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attdef, readerAdapter});
  }
};