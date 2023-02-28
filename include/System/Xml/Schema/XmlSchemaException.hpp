// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaException
  class XmlSchemaException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaException*, "System.Xml.Schema", "XmlSchemaException");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaException
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaException : public ::System::SystemException {
    public:
    public:
    // private System.String res
    // Size: 0x8
    // Offset: 0x88
    ::StringW res;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] args
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::StringW> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String sourceUri
    // Size: 0x8
    // Offset: 0x98
    ::StringW sourceUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0xA0
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosition
    // Size: 0x4
    // Offset: 0xA4
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Xml.Schema.XmlSchemaObject sourceSchemaObject
    // Size: 0x8
    // Offset: 0xA8
    ::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObject*) == 0x8);
    // private System.String message
    // Size: 0x8
    // Offset: 0xB0
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String res
    [[deprecated("Use field access instead!")]] ::StringW& dyn_res();
    // Get instance field reference: private System.String[] args
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_args();
    // Get instance field reference: private System.String sourceUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sourceUri();
    // Get instance field reference: private System.Int32 lineNumber
    [[deprecated("Use field access instead!")]] int& dyn_lineNumber();
    // Get instance field reference: private System.Int32 linePosition
    [[deprecated("Use field access instead!")]] int& dyn_linePosition();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObject sourceSchemaObject
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObject*& dyn_sourceSchemaObject();
    // Get instance field reference: private System.String message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x21122A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0x21127A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x21127B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x21128E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(message, innerException)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x21127C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::StringW message, ::System::Exception* innerException, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(message, innerException, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String arg)
    // Offset: 0x211297C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::StringW res, ::StringW arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(res, arg)));
    }
    // System.Void .ctor(System.String res, System.String arg, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x2112A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(res, arg, sourceUri, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Exception innerException, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition, System.Xml.Schema.XmlSchemaObject source)
    // Offset: 0x21128F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaException* New_ctor(::StringW res, ::ArrayW<::StringW> args, ::System::Exception* innerException, ::StringW sourceUri, int lineNumber, int linePosition, ::System::Xml::Schema::XmlSchemaObject* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaException*, creationType>(res, args, innerException, sourceUri, lineNumber, linePosition, source)));
    }
    // static System.String CreateMessage(System.String res, System.String[] args)
    // Offset: 0x2112580
    static ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW> args);
    // public override System.String get_Message()
    // Offset: 0x2112B64
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2112678
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Xml.Schema.XmlSchemaException
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaException), 176 + sizeof(::StringW)> __System_Xml_Schema_XmlSchemaExceptionSizeCheck;
  static_assert(sizeof(XmlSchemaException) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::CreateMessage
// Il2CppName: CreateMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::StringW>)>(&System::Xml::Schema::XmlSchemaException::CreateMessage)> {
  static const MethodInfo* get() {
    static auto* res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaException*), "CreateMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{res, args});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaException::*)()>(&System::Xml::Schema::XmlSchemaException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Xml::Schema::XmlSchemaException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
