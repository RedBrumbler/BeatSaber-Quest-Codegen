// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryTypeEnum
  struct BinaryTypeEnum;
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: ObjectReader
  class ObjectReader;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
  // Forward declaring type: InternalPrimitiveTypeE
  struct InternalPrimitiveTypeE;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryConverter
  class BinaryConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryConverter");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryConverter : public ::Il2CppObject {
    public:
    // static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(System.Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.String typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out System.Object typeInformation, out System.Int32 assemId)
    // Offset: 0x19367F0
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::StringW typeName, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ByRef<::Il2CppObject*> typeInformation, ByRef<int> assemId);
    // static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(System.Type type, out System.Object typeInformation)
    // Offset: 0x1936EE0
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(::System::Type* type, ByRef<::Il2CppObject*> typeInformation);
    // static System.Void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Int32 assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1935EB4
    static void WriteTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, int assemId, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out System.Int32 assemId)
    // Offset: 0x19363F0
    static ::Il2CppObject* ReadTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ByRef<int> assemId);
    // static System.Void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out System.String typeString, out System.Type type, out System.Boolean isVariant)
    // Offset: 0x193723C
    static void TypeFromInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ByRef<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> primitiveTypeEnum, ByRef<::StringW> typeString, ByRef<::System::Type*> type, ByRef<bool> isVariant);
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo
// Il2CppName: GetBinaryTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::StringW, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ByRef<::Il2CppObject*>, ByRef<int>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* objectInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectWriter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectWriter")->byval_arg;
    static auto* typeInformation = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    static auto* assemId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "GetBinaryTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, objectInfo, typeName, objectWriter, typeInformation, assemId});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo
// Il2CppName: GetParserBinaryTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(::System::Type*, ByRef<::Il2CppObject*>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeInformation = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "GetParserBinaryTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, typeInformation});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo
// Il2CppName: WriteTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Il2CppObject*, int, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo)> {
  static const MethodInfo* get() {
    static auto* binaryTypeEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum")->byval_arg;
    static auto* typeInformation = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* assemId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "WriteTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryTypeEnum, typeInformation, assemId, sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo
// Il2CppName: ReadTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ByRef<int>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo)> {
  static const MethodInfo* get() {
    static auto* binaryTypeEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum")->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    static auto* assemId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "ReadTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryTypeEnum, input, assemId});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo
// Il2CppName: TypeFromInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Il2CppObject*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ByRef<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>, ByRef<::StringW>, ByRef<::System::Type*>, ByRef<bool>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo)> {
  static const MethodInfo* get() {
    static auto* binaryTypeEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum")->byval_arg;
    static auto* typeInformation = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objectReader = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectReader")->byval_arg;
    static auto* assemblyInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo")->byval_arg;
    static auto* primitiveTypeEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE")->this_arg;
    static auto* typeString = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->this_arg;
    static auto* isVariant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "TypeFromInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryTypeEnum, typeInformation, objectReader, assemblyInfo, primitiveTypeEnum, typeString, type, isVariant});
  }
};
