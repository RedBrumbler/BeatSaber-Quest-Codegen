// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReaderSettings
  class XmlReaderSettings;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: ReadState
  struct ReadState;
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IDtdInfo
  class IDtdInfo;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IXmlSchemaInfo
  class IXmlSchemaInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReader*, "System.Xml", "XmlReader");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10808CC
  // [DebuggerDisplayAttribute] Offset: 10808CC
  // [DebuggerDisplayAttribute] Offset: 10808CC
  class XmlReader : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.UInt32 IsTextualNodeBitmap
    static uint _get_IsTextualNodeBitmap();
    // Set static field: static private System.UInt32 IsTextualNodeBitmap
    static void _set_IsTextualNodeBitmap(uint value);
    // Get static field: static private System.UInt32 CanReadContentAsBitmap
    static uint _get_CanReadContentAsBitmap();
    // Set static field: static private System.UInt32 CanReadContentAsBitmap
    static void _set_CanReadContentAsBitmap(uint value);
    // Get static field: static private System.UInt32 HasValueBitmap
    static uint _get_HasValueBitmap();
    // Set static field: static private System.UInt32 HasValueBitmap
    static void _set_HasValueBitmap(uint value);
    // public System.Xml.XmlReaderSettings get_Settings()
    // Offset: 0x163CF0C
    ::System::Xml::XmlReaderSettings* get_Settings();
    // public System.Xml.XmlNodeType get_NodeType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XmlNodeType get_NodeType();
    // public System.String get_Name()
    // Offset: 0x163CF14
    ::StringW get_Name();
    // public System.String get_LocalName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_LocalName();
    // public System.String get_NamespaceURI()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_NamespaceURI();
    // public System.String get_Prefix()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Prefix();
    // public System.String get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Value();
    // public System.String get_BaseURI()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_BaseURI();
    // public System.Boolean get_IsEmptyElement()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsEmptyElement();
    // public System.Boolean get_IsDefault()
    // Offset: 0x163D000
    bool get_IsDefault();
    // public System.Xml.Schema.IXmlSchemaInfo get_SchemaInfo()
    // Offset: 0x163D008
    ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();
    // public System.Xml.ReadState get_ReadState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::ReadState get_ReadState();
    // public System.Xml.XmlNameTable get_NameTable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::XmlNameTable* get_NameTable();
    // public System.Boolean get_CanResolveEntity()
    // Offset: 0x163D05C
    bool get_CanResolveEntity();
    // System.Xml.IDtdInfo get_DtdInfo()
    // Offset: 0x163D0CC
    ::System::Xml::IDtdInfo* get_DtdInfo();
    // protected System.Void .ctor()
    // Offset: 0x163D160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlReader*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x163D168
    static void _cctor();
    // public System.Boolean MoveToAttribute(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToAttribute(::StringW name);
    // public System.Boolean MoveToFirstAttribute()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToFirstAttribute();
    // public System.Boolean MoveToNextAttribute()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToNextAttribute();
    // public System.Boolean MoveToElement()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveToElement();
    // public System.Boolean ReadAttributeValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ReadAttributeValue();
    // public System.Boolean Read()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Read();
    // public System.Void Close()
    // Offset: 0x163D058
    void Close();
    // public System.String LookupNamespace(System.String prefix)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW LookupNamespace(::StringW prefix);
    // public System.Void ResolveEntity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResolveEntity();
    // public System.Void Dispose()
    // Offset: 0x163D064
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x163D078
    void Dispose(bool disposing);
    // static System.Int32 CalcBufferSize(System.IO.Stream input)
    // Offset: 0x163D0D4
    static int CalcBufferSize(::System::IO::Stream* input);
  }; // System.Xml.XmlReader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlReader::get_Settings
// Il2CppName: get_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_Settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_BaseURI
// Il2CppName: get_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_BaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_IsEmptyElement
// Il2CppName: get_IsEmptyElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_IsEmptyElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_IsEmptyElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_IsDefault
// Il2CppName: get_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_IsDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_SchemaInfo
// Il2CppName: get_SchemaInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_SchemaInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_SchemaInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_ReadState
// Il2CppName: get_ReadState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_ReadState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_ReadState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_CanResolveEntity
// Il2CppName: get_CanResolveEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_CanResolveEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_CanResolveEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::get_DtdInfo
// Il2CppName: get_DtdInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::get_DtdInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "get_DtdInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlReader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlReader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::MoveToAttribute
// Il2CppName: MoveToAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)(::StringW)>(&System::Xml::XmlReader::MoveToAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "MoveToAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::MoveToFirstAttribute
// Il2CppName: MoveToFirstAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::MoveToFirstAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "MoveToFirstAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::MoveToNextAttribute
// Il2CppName: MoveToNextAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::MoveToNextAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "MoveToNextAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::MoveToElement
// Il2CppName: MoveToElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::MoveToElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "MoveToElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::ReadAttributeValue
// Il2CppName: ReadAttributeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::ReadAttributeValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "ReadAttributeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlReader::*)(::StringW)>(&System::Xml::XmlReader::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::ResolveEntity
// Il2CppName: ResolveEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::ResolveEntity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "ResolveEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReader::*)()>(&System::Xml::XmlReader::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlReader::*)(bool)>(&System::Xml::XmlReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlReader::CalcBufferSize
// Il2CppName: CalcBufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IO::Stream*)>(&System::Xml::XmlReader::CalcBufferSize)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), "CalcBufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
