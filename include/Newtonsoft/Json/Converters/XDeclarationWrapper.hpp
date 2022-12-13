// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.XObjectWrapper
#include "Newtonsoft/Json/Converters/XObjectWrapper.hpp"
// Including type: Newtonsoft.Json.Converters.IXmlDeclaration
#include "Newtonsoft/Json/Converters/IXmlDeclaration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XDeclaration
  class XDeclaration;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: XDeclarationWrapper
  class XDeclarationWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDeclarationWrapper*, "Newtonsoft.Json.Converters", "XDeclarationWrapper");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.XDeclarationWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class XDeclarationWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper/*, public ::Newtonsoft::Json::Converters::IXmlDeclaration*/ {
    public:
    public:
    // private System.Xml.Linq.XDeclaration <Declaration>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Linq::XDeclaration* Declaration;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XDeclaration*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Converters::IXmlDeclaration
    operator ::Newtonsoft::Json::Converters::IXmlDeclaration() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(this);
    }
    // Creating interface conversion operator: i_IXmlDeclaration
    inline ::Newtonsoft::Json::Converters::IXmlDeclaration* i_IXmlDeclaration() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(this);
    }
    // Deleting conversion operator: operator ::System::Xml::Linq::XObject*
    constexpr operator ::System::Xml::Linq::XObject*() const noexcept = delete;
    // Get instance field reference: private System.Xml.Linq.XDeclaration <Declaration>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XDeclaration*& dyn_$Declaration$k__BackingField();
    // System.Xml.Linq.XDeclaration get_Declaration()
    // Offset: 0x180A334
    ::System::Xml::Linq::XDeclaration* get_Declaration();
    // private System.Void set_Declaration(System.Xml.Linq.XDeclaration value)
    // Offset: 0x180A33C
    void set_Declaration(::System::Xml::Linq::XDeclaration* value);
    // public System.String get_Version()
    // Offset: 0x180A3C8
    ::StringW get_Version();
    // public System.String get_Encoding()
    // Offset: 0x180A3E4
    ::StringW get_Encoding();
    // public System.String get_Standalone()
    // Offset: 0x180A400
    ::StringW get_Standalone();
    // public System.Void .ctor(System.Xml.Linq.XDeclaration declaration)
    // Offset: 0x180A344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XDeclarationWrapper* New_ctor(::System::Xml::Linq::XDeclaration* declaration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::XDeclarationWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XDeclarationWrapper*, creationType>(declaration)));
    }
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x180A3C0
    // Implemented from: Newtonsoft.Json.Converters.XObjectWrapper
    // Base method: System.Xml.XmlNodeType XObjectWrapper::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
  }; // Newtonsoft.Json.Converters.XDeclarationWrapper
  #pragma pack(pop)
  static check_size<sizeof(XDeclarationWrapper), 24 + sizeof(::System::Xml::Linq::XDeclaration*)> __Newtonsoft_Json_Converters_XDeclarationWrapperSizeCheck;
  static_assert(sizeof(XDeclarationWrapper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::get_Declaration
// Il2CppName: get_Declaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XDeclaration* (Newtonsoft::Json::Converters::XDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XDeclarationWrapper::get_Declaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDeclarationWrapper*), "get_Declaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::set_Declaration
// Il2CppName: set_Declaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::XDeclarationWrapper::*)(::System::Xml::Linq::XDeclaration*)>(&Newtonsoft::Json::Converters::XDeclarationWrapper::set_Declaration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XDeclaration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDeclarationWrapper*), "set_Declaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XDeclarationWrapper::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDeclarationWrapper*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XDeclarationWrapper::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDeclarationWrapper*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::get_Standalone
// Il2CppName: get_Standalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Converters::XDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XDeclarationWrapper::get_Standalone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDeclarationWrapper*), "get_Standalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::XDeclarationWrapper::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (Newtonsoft::Json::Converters::XDeclarationWrapper::*)()>(&Newtonsoft::Json::Converters::XDeclarationWrapper::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::XDeclarationWrapper*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
