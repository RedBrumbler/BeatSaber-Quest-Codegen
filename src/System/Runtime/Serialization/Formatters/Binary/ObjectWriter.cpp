// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "System/Runtime/Serialization/Formatters/Binary/ObjectWriter.hpp"
// Including type: System.Collections.Queue
#include "System/Collections/Queue.hpp"
// Including type: System.Runtime.Serialization.ObjectIDGenerator
#include "System/Runtime/Serialization/ObjectIDGenerator.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryWriter.hpp"
// Including type: System.Runtime.Serialization.SerializationObjectManager
#include "System/Runtime/Serialization/SerializationObjectManager.hpp"
// Including type: System.Runtime.Remoting.Messaging.Header
#include "System/Runtime/Remoting/Messaging/Header.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalFE
#include "System/Runtime/Serialization/Formatters/Binary/InternalFE.hpp"
// Including type: System.Runtime.Serialization.SerializationBinder
#include "System/Runtime/Serialization/SerializationBinder.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
#include "System/Runtime/Serialization/Formatters/Binary/SerObjectInfoInit.hpp"
// Including type: System.Runtime.Serialization.IFormatterConverter
#include "System/Runtime/Serialization/IFormatterConverter.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.SerStack
#include "System/Runtime/Serialization/Formatters/Binary/SerStack.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
#include "System/Runtime/Serialization/Formatters/Binary/WriteObjectInfo.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.NameInfo
#include "System/Runtime/Serialization/Formatters/Binary/NameInfo.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter..ctor
System::Runtime::Serialization::Formatters::Binary::ObjectWriter* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, System::Runtime::Serialization::SerializationBinder* binder) {
  return (ObjectWriter*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "ObjectWriter", selector, context, formatterEnums, binder));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.Serialize
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Serialize(::CsObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* inHeaders, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", graph, inHeaders, serWriter, fCheck));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.get_ObjectManager
System::Runtime::Serialization::SerializationObjectManager* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::get_ObjectManager() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::SerializationObjectManager*>(this, "get_ObjectManager"));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.Write
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", objectInfo, memberNameInfo, typeNameInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.Write
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Array<::CsString*>* memberNames, ::Array<System::Type*>* memberTypes, ::Array<::CsObject*>* memberData, ::Array<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", objectInfo, memberNameInfo, typeNameInfo, memberNames, memberTypes, memberData, memberObjectInfos));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteMemberSetup
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMemberSetup(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::CsString* memberName, System::Type* memberType, ::CsObject* memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMemberSetup", objectInfo, memberNameInfo, typeNameInfo, memberName, memberType, memberData, memberObjectInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteMembers
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMembers(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo, ::CsObject* memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMembers", memberNameInfo, memberTypeNameInfo, memberData, objectInfo, typeNameInfo, memberObjectInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteArray
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArray(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteArray", objectInfo, memberNameInfo, memberObjectInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteArrayMember
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArrayMember(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::CsObject* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteArrayMember", objectInfo, arrayElemTypeNameInfo, data));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteRectangle
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteRectangle(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int rank, ::Array<int>* maxA, System::Array* array, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, ::Array<int>* lowerBoundA) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRectangle", objectInfo, rank, maxA, array, arrayElemNameTypeInfo, lowerBoundA));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.GetNext
::CsObject* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNext(int64_t& objID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetNext", objID));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.InternalGetId
int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::InternalGetId(::CsObject* obj, bool assignUniqueIdToValueType, System::Type* type, bool& isNew) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "InternalGetId", obj, assignUniqueIdToValueType, type, isNew));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.Schedule
int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(::CsObject* obj, bool assignUniqueIdToValueType, System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "Schedule", obj, assignUniqueIdToValueType, type));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.Schedule
int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(::CsObject* obj, bool assignUniqueIdToValueType, System::Type* type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "Schedule", obj, assignUniqueIdToValueType, type, objectInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteKnownValueClass
bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteKnownValueClass(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::CsObject* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "WriteKnownValueClass", memberNameInfo, typeNameInfo, data));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteObjectRef
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteObjectRef", nameInfo, objectId));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteString
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteString(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::CsObject* stringObject) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", memberNameInfo, typeNameInfo, stringObject));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.CheckForNull
bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckForNull(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::CsObject* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CheckForNull", objectInfo, memberNameInfo, typeNameInfo, data));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.WriteSerializedStreamHeader
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteSerializedStreamHeader(int64_t topId, int64_t headerId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSerializedStreamHeader", topId, headerId));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.TypeToNameInfo
System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Type* type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::NameInfo*>(this, "TypeToNameInfo", type, objectInfo, code, nameInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.TypeToNameInfo
System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::NameInfo*>(this, "TypeToNameInfo", type));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.TypeToNameInfo
System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::NameInfo*>(this, "TypeToNameInfo", objectInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.TypeToNameInfo
System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::NameInfo*>(this, "TypeToNameInfo", objectInfo, nameInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.TypeToNameInfo
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Type* type, System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TypeToNameInfo", type, nameInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.MemberToNameInfo
System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::MemberToNameInfo(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::NameInfo*>(this, "MemberToNameInfo", name));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.ToCode
System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ToCode(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(this, "ToCode", type));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.GetAssemblyId
int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetAssemblyId(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "GetAssemblyId", objectInfo));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.GetType
System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetType(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetType", obj));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.GetNameInfo
System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNameInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::Formatters::Binary::NameInfo*>(this, "GetNameInfo"));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.CheckTypeFormat
bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckTypeFormat(System::Runtime::Serialization::Formatters::FormatterTypeStyle test, System::Runtime::Serialization::Formatters::FormatterTypeStyle want) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CheckTypeFormat", test, want));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectWriter.PutNameInfo
void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::PutNameInfo(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PutNameInfo", nameInfo));
}
