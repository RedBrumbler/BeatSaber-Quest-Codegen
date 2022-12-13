// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class WriteObjectInfo : public ::Il2CppObject {
    public:
    public:
    // System.Int32 objectInfoId
    // Size: 0x4
    // Offset: 0x10
    int objectInfoId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoId and: obj
    char __padding0[0x4] = {};
    // System.Object obj
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* obj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Type objectType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* objectType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Boolean isSi
    // Size: 0x1
    // Offset: 0x28
    bool isSi;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isNamed
    // Size: 0x1
    // Offset: 0x29
    bool isNamed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isTyped
    // Size: 0x1
    // Offset: 0x2A
    bool isTyped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isArray
    // Size: 0x1
    // Offset: 0x2B
    bool isArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isArray and: si
    char __padding6[0x4] = {};
    // System.Runtime.Serialization.SerializationInfo si
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::Serialization::SerializationInfo* si;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*) == 0x8);
    // System.Object[] memberData
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Il2CppObject*> memberData;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ISerializationSurrogate*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x50
    ::System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: context and: serObjectInfoInit
    char __padding11[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*) == 0x8);
    // System.Int64 objectId
    // Size: 0x8
    // Offset: 0x68
    int64_t objectId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 assemId
    // Size: 0x8
    // Offset: 0x70
    int64_t assemId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String binderTypeName
    // Size: 0x8
    // Offset: 0x78
    ::StringW binderTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String binderAssemblyString
    // Size: 0x8
    // Offset: 0x80
    ::StringW binderAssemblyString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: System.Int32 objectInfoId
    [[deprecated("Use field access instead!")]] int& dyn_objectInfoId();
    // Get instance field reference: System.Object obj
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_obj();
    // Get instance field reference: System.Type objectType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_objectType();
    // Get instance field reference: System.Boolean isSi
    [[deprecated("Use field access instead!")]] bool& dyn_isSi();
    // Get instance field reference: System.Boolean isNamed
    [[deprecated("Use field access instead!")]] bool& dyn_isNamed();
    // Get instance field reference: System.Boolean isTyped
    [[deprecated("Use field access instead!")]] bool& dyn_isTyped();
    // Get instance field reference: System.Boolean isArray
    [[deprecated("Use field access instead!")]] bool& dyn_isArray();
    // Get instance field reference: System.Runtime.Serialization.SerializationInfo si
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationInfo*& dyn_si();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& dyn_cache();
    // Get instance field reference: System.Object[] memberData
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_memberData();
    // Get instance field reference: System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ISerializationSurrogate*& dyn_serializationSurrogate();
    // Get instance field reference: System.Runtime.Serialization.StreamingContext context
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::StreamingContext& dyn_context();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& dyn_serObjectInfoInit();
    // Get instance field reference: System.Int64 objectId
    [[deprecated("Use field access instead!")]] int64_t& dyn_objectId();
    // Get instance field reference: System.Int64 assemId
    [[deprecated("Use field access instead!")]] int64_t& dyn_assemId();
    // Get instance field reference: private System.String binderTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_binderTypeName();
    // Get instance field reference: private System.String binderAssemblyString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_binderAssemblyString();
    // System.Void ObjectEnd()
    // Offset: 0x1687E40
    void ObjectEnd();
    // private System.Void InternalInit()
    // Offset: 0x1687E6C
    void InternalInit();
    // static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(System.Object obj, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1687E88
    static ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::Il2CppObject* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void InitSerialize(System.Object obj, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1687FFC
    void InitSerialize(::Il2CppObject* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder);
    // static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1688FC4
    static ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void InitSerialize(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1689050
    void InitSerialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::SerializationBinder* binder);
    // private System.Void InitSiWrite()
    // Offset: 0x1688704
    void InitSiWrite();
    // static private System.Void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, System.Type objectType, System.String binderAssemblyString)
    // Offset: 0x1688B94
    static void CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, ::System::Type* objectType, ::StringW binderAssemblyString);
    // private System.Void InitNoMembers()
    // Offset: 0x16884C8
    void InitNoMembers();
    // private System.Void InitMemberInfo()
    // Offset: 0x1688CF8
    void InitMemberInfo();
    // System.String GetTypeFullName()
    // Offset: 0x16898C4
    ::StringW GetTypeFullName();
    // System.String GetAssemblyString()
    // Offset: 0x16898F0
    ::StringW GetAssemblyString();
    // private System.Void InvokeSerializationBinder(System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x16885B0
    void InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* binder);
    // System.Type GetMemberType(System.Reflection.MemberInfo objMember)
    // Offset: 0x1689764
    ::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember);
    // System.Void GetMemberInfo(out System.String[] outMemberNames, out System.Type[] outMemberTypes, out System.Object[] outMemberData)
    // Offset: 0x168991C
    void GetMemberInfo(ByRef<::ArrayW<::StringW>> outMemberNames, ByRef<::ArrayW<::System::Type*>> outMemberTypes, ByRef<::ArrayW<::Il2CppObject*>> outMemberData);
    // static private System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
    // Offset: 0x1687F24
    static ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
    // static private System.Void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
    // Offset: 0x1687E4C
    static void PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
    // System.Void .ctor()
    // Offset: 0x1687E38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteObjectInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteObjectInfo*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(WriteObjectInfo), 128 + sizeof(::StringW)> __System_Runtime_Serialization_Formatters_Binary_WriteObjectInfoSizeCheck;
  static_assert(sizeof(WriteObjectInfo) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd
// Il2CppName: ObjectEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "ObjectEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit
// Il2CppName: InternalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InternalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(::Il2CppObject*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* objectWriter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectWriter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize
// Il2CppName: InitSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::Il2CppObject*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* objectWriter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectWriter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context, serObjectInfoInit, converter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize
// Il2CppName: InitSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context, serObjectInfoInit, converter, binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite
// Il2CppName: InitSiWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitSiWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom
// Il2CppName: CheckTypeForwardedFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, ::System::Type*, ::StringW)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom)> {
  static const MethodInfo* get() {
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* binderAssemblyString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "CheckTypeForwardedFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cache, objectType, binderAssemblyString});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers
// Il2CppName: InitNoMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitNoMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo
// Il2CppName: InitMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InitMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName
// Il2CppName: GetTypeFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetTypeFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString
// Il2CppName: GetAssemblyString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetAssemblyString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder
// Il2CppName: InvokeSerializationBinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::System::Runtime::Serialization::SerializationBinder*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder)> {
  static const MethodInfo* get() {
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationBinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "InvokeSerializationBinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType
// Il2CppName: GetMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::System::Reflection::MemberInfo*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType)> {
  static const MethodInfo* get() {
    static auto* objMember = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objMember});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo
// Il2CppName: GetMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(ByRef<::ArrayW<::StringW>>, ByRef<::ArrayW<::System::Type*>>, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo)> {
  static const MethodInfo* get() {
    static auto* outMemberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* outMemberTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->this_arg;
    static auto* outMemberData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outMemberNames, outMemberTypes, outMemberData});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo
// Il2CppName: GetObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo)> {
  static const MethodInfo* get() {
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "GetObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serObjectInfoInit});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo
// Il2CppName: PutObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(&System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo)> {
  static const MethodInfo* get() {
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* objectInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*), "PutObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serObjectInfoInit, objectInfo});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
