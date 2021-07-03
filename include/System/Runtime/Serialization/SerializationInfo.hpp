// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: SerializationInfoEnumerator
  class SerializationInfoEnumerator;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x5B
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationInfo
  // [ComVisibleAttribute] Offset: D7DEF8
  class SerializationInfo : public ::Il2CppObject {
    public:
    // System.String[] m_members
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_members;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Object[] m_data
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* m_data;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.Type[] m_types
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Type*>* m_types;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> m_nameToIndex
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* m_nameToIndex;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*) == 0x8);
    // System.Int32 m_currMember
    // Size: 0x4
    // Offset: 0x30
    int m_currMember;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_currMember and: m_converter
    char __padding4[0x4] = {};
    // System.Runtime.Serialization.IFormatterConverter m_converter
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::IFormatterConverter* m_converter;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::IFormatterConverter*) == 0x8);
    // private System.String m_fullTypeName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* m_fullTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_assemName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* m_assemName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type objectType
    // Size: 0x8
    // Offset: 0x50
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Boolean isFullTypeNameSetExplicit
    // Size: 0x1
    // Offset: 0x58
    bool isFullTypeNameSetExplicit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isAssemblyNameSetExplicit
    // Size: 0x1
    // Offset: 0x59
    bool isAssemblyNameSetExplicit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean requireSameTokenInPartialTrust
    // Size: 0x1
    // Offset: 0x5A
    bool requireSameTokenInPartialTrust;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SerializationInfo
    SerializationInfo(::Array<::Il2CppString*>* m_members_ = {}, ::Array<::Il2CppObject*>* m_data_ = {}, ::Array<System::Type*>* m_types_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* m_nameToIndex_ = {}, int m_currMember_ = {}, System::Runtime::Serialization::IFormatterConverter* m_converter_ = {}, ::Il2CppString* m_fullTypeName_ = {}, ::Il2CppString* m_assemName_ = {}, System::Type* objectType_ = {}, bool isFullTypeNameSetExplicit_ = {}, bool isAssemblyNameSetExplicit_ = {}, bool requireSameTokenInPartialTrust_ = {}) noexcept : m_members{m_members_}, m_data{m_data_}, m_types{m_types_}, m_nameToIndex{m_nameToIndex_}, m_currMember{m_currMember_}, m_converter{m_converter_}, m_fullTypeName{m_fullTypeName_}, m_assemName{m_assemName_}, objectType{objectType_}, isFullTypeNameSetExplicit{isFullTypeNameSetExplicit_}, isAssemblyNameSetExplicit{isAssemblyNameSetExplicit_}, requireSameTokenInPartialTrust{requireSameTokenInPartialTrust_} {}
    // static field const value: static private System.Int32 defaultSize
    static constexpr const int defaultSize = 4;
    // Get static field: static private System.Int32 defaultSize
    static int _get_defaultSize();
    // Set static field: static private System.Int32 defaultSize
    static void _set_defaultSize(int value);
    // static field const value: static private System.String s_mscorlibAssemblySimpleName
    static constexpr const char* s_mscorlibAssemblySimpleName = "mscorlib";
    // Get static field: static private System.String s_mscorlibAssemblySimpleName
    static ::Il2CppString* _get_s_mscorlibAssemblySimpleName();
    // Set static field: static private System.String s_mscorlibAssemblySimpleName
    static void _set_s_mscorlibAssemblySimpleName(::Il2CppString* value);
    // static field const value: static private System.String s_mscorlibFileName
    static constexpr const char* s_mscorlibFileName = "mscorlib.dll";
    // Get static field: static private System.String s_mscorlibFileName
    static ::Il2CppString* _get_s_mscorlibFileName();
    // Set static field: static private System.String s_mscorlibFileName
    static void _set_s_mscorlibFileName(::Il2CppString* value);
    // public System.Void .ctor(System.Type type, System.Runtime.Serialization.IFormatterConverter converter)
    // Offset: 0x169A844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationInfo* New_ctor(System::Type* type, System::Runtime::Serialization::IFormatterConverter* converter) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationInfo*, creationType>(type, converter)));
    }
    // public System.Void .ctor(System.Type type, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean requireSameTokenInPartialTrust)
    // Offset: 0x169A84C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationInfo* New_ctor(System::Type* type, System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationInfo*, creationType>(type, converter, requireSameTokenInPartialTrust)));
    }
    // public System.String get_FullTypeName()
    // Offset: 0x169A9E8
    ::Il2CppString* get_FullTypeName();
    // public System.String get_AssemblyName()
    // Offset: 0x169A9F0
    ::Il2CppString* get_AssemblyName();
    // public System.Void SetType(System.Type type)
    // Offset: 0x16991EC
    void SetType(System::Type* type);
    // static private System.Boolean Compare(System.Byte[] a, System.Byte[] b)
    // Offset: 0x169A9FC
    static bool Compare(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static System.Void DemandForUnsafeAssemblyNameAssignments(System.String originalAssemblyName, System.String newAssemblyName)
    // Offset: 0x169A9F8
    static void DemandForUnsafeAssemblyNameAssignments(::Il2CppString* originalAssemblyName, ::Il2CppString* newAssemblyName);
    // static System.Boolean IsAssemblyNameAssignmentSafe(System.String originalAssemblyName, System.String newAssemblyName)
    // Offset: 0x169AA88
    static bool IsAssemblyNameAssignmentSafe(::Il2CppString* originalAssemblyName, ::Il2CppString* newAssemblyName);
    // public System.Int32 get_MemberCount()
    // Offset: 0x169ABAC
    int get_MemberCount();
    // public System.Type get_ObjectType()
    // Offset: 0x169ABB4
    System::Type* get_ObjectType();
    // public System.Boolean get_IsFullTypeNameSetExplicit()
    // Offset: 0x169ABBC
    bool get_IsFullTypeNameSetExplicit();
    // public System.Boolean get_IsAssemblyNameSetExplicit()
    // Offset: 0x169ABC4
    bool get_IsAssemblyNameSetExplicit();
    // public System.Runtime.Serialization.SerializationInfoEnumerator GetEnumerator()
    // Offset: 0x169ABCC
    System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator();
    // private System.Void ExpandArrays()
    // Offset: 0x169ACC4
    void ExpandArrays();
    // public System.Void AddValue(System.String name, System.Object value, System.Type type)
    // Offset: 0x1699120
    void AddValue(::Il2CppString* name, ::Il2CppObject* value, System::Type* type);
    // public System.Void AddValue(System.String name, System.Object value)
    // Offset: 0x169AF98
    void AddValue(::Il2CppString* name, ::Il2CppObject* value);
    // public System.Void AddValue(System.String name, System.Boolean value)
    // Offset: 0x169B054
    void AddValue(::Il2CppString* name, bool value);
    // public System.Void AddValue(System.String name, System.Char value)
    // Offset: 0x169B118
    void AddValue(::Il2CppString* name, ::Il2CppChar value);
    // public System.Void AddValue(System.String name, System.Byte value)
    // Offset: 0x169B1DC
    void AddValue(::Il2CppString* name, uint8_t value);
    // public System.Void AddValue(System.String name, System.Int16 value)
    // Offset: 0x169B2A0
    void AddValue(::Il2CppString* name, int16_t value);
    // public System.Void AddValue(System.String name, System.Int32 value)
    // Offset: 0x169B364
    void AddValue(::Il2CppString* name, int value);
    // public System.Void AddValue(System.String name, System.Int64 value)
    // Offset: 0x169B428
    void AddValue(::Il2CppString* name, int64_t value);
    // public System.Void AddValue(System.String name, System.UInt64 value)
    // Offset: 0x169B4EC
    void AddValue(::Il2CppString* name, uint64_t value);
    // public System.Void AddValue(System.String name, System.Single value)
    // Offset: 0x169B5B0
    void AddValue(::Il2CppString* name, float value);
    // public System.Void AddValue(System.String name, System.DateTime value)
    // Offset: 0x169B674
    void AddValue(::Il2CppString* name, System::DateTime value);
    // System.Void AddValueInternal(System.String name, System.Object value, System.Type type)
    // Offset: 0x169ADC0
    void AddValueInternal(::Il2CppString* name, ::Il2CppObject* value, System::Type* type);
    // System.Void UpdateValue(System.String name, System.Object value, System.Type type)
    // Offset: 0x16966E8
    void UpdateValue(::Il2CppString* name, ::Il2CppObject* value, System::Type* type);
    // private System.Int32 FindElement(System.String name)
    // Offset: 0x169B738
    int FindElement(::Il2CppString* name);
    // private System.Object GetElement(System.String name, out System.Type foundType)
    // Offset: 0x169B7F8
    ::Il2CppObject* GetElement(::Il2CppString* name, System::Type*& foundType);
    // private System.Object GetElementNoThrow(System.String name, out System.Type foundType)
    // Offset: 0x169B934
    ::Il2CppObject* GetElementNoThrow(::Il2CppString* name, System::Type*& foundType);
    // public System.Object GetValue(System.String name, System.Type type)
    // Offset: 0x1698DB4
    ::Il2CppObject* GetValue(::Il2CppString* name, System::Type* type);
    // System.Object GetValueNoThrow(System.String name, System.Type type)
    // Offset: 0x1698C88
    ::Il2CppObject* GetValueNoThrow(::Il2CppString* name, System::Type* type);
    // public System.Boolean GetBoolean(System.String name)
    // Offset: 0x169B9BC
    bool GetBoolean(::Il2CppString* name);
    // public System.Int32 GetInt32(System.String name)
    // Offset: 0x169BB30
    int GetInt32(::Il2CppString* name);
    // public System.Int64 GetInt64(System.String name)
    // Offset: 0x169BC98
    int64_t GetInt64(::Il2CppString* name);
    // public System.Single GetSingle(System.String name)
    // Offset: 0x169BE00
    float GetSingle(::Il2CppString* name);
    // public System.String GetString(System.String name)
    // Offset: 0x169BF68
    ::Il2CppString* GetString(::Il2CppString* name);
  }; // System.Runtime.Serialization.SerializationInfo
  #pragma pack(pop)
  static check_size<sizeof(SerializationInfo), 90 + sizeof(bool)> __System_Runtime_Serialization_SerializationInfoSizeCheck;
  static_assert(sizeof(SerializationInfo) == 0x5B);
  // Writing MetadataGetter for method: SerializationInfo::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(System::Type*, System::Runtime::Serialization::IFormatterConverter*)>(&SerializationInfo::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(System::Type*, System::Runtime::Serialization::IFormatterConverter*)>(&SerializationInfo::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(System::Type*, System::Runtime::Serialization::IFormatterConverter*, bool)>(&SerializationInfo::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(System::Type*, System::Runtime::Serialization::IFormatterConverter*, bool)>(&SerializationInfo::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::IFormatterConverter*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::get_FullTypeName
  // Il2CppName: get_FullTypeName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (SerializationInfo::*)()>(&SerializationInfo::get_FullTypeName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "get_FullTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::get_AssemblyName
  // Il2CppName: get_AssemblyName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (SerializationInfo::*)()>(&SerializationInfo::get_AssemblyName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "get_AssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::SetType
  // Il2CppName: SetType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(System::Type*)>(&SerializationInfo::SetType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "SetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::Compare
  // Il2CppName: Compare
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&SerializationInfo::Compare)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::DemandForUnsafeAssemblyNameAssignments
  // Il2CppName: DemandForUnsafeAssemblyNameAssignments
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*)>(&SerializationInfo::DemandForUnsafeAssemblyNameAssignments)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "DemandForUnsafeAssemblyNameAssignments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::IsAssemblyNameAssignmentSafe
  // Il2CppName: IsAssemblyNameAssignmentSafe
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*)>(&SerializationInfo::IsAssemblyNameAssignmentSafe)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "IsAssemblyNameAssignmentSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::get_MemberCount
  // Il2CppName: get_MemberCount
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (SerializationInfo::*)()>(&SerializationInfo::get_MemberCount)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "get_MemberCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::get_ObjectType
  // Il2CppName: get_ObjectType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (SerializationInfo::*)()>(&SerializationInfo::get_ObjectType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::get_IsFullTypeNameSetExplicit
  // Il2CppName: get_IsFullTypeNameSetExplicit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SerializationInfo::*)()>(&SerializationInfo::get_IsFullTypeNameSetExplicit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "get_IsFullTypeNameSetExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::get_IsAssemblyNameSetExplicit
  // Il2CppName: get_IsAssemblyNameSetExplicit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SerializationInfo::*)()>(&SerializationInfo::get_IsAssemblyNameSetExplicit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "get_IsAssemblyNameSetExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetEnumerator
  // Il2CppName: GetEnumerator
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::SerializationInfoEnumerator* (SerializationInfo::*)()>(&SerializationInfo::GetEnumerator)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::ExpandArrays
  // Il2CppName: ExpandArrays
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)()>(&SerializationInfo::ExpandArrays)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "ExpandArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, ::Il2CppObject*, System::Type*)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, ::Il2CppObject*)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, bool)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, ::Il2CppChar)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, uint8_t)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint8_t>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, int16_t)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int16_t>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, int)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, int64_t)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, uint64_t)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, float)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValue
  // Il2CppName: AddValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, System::DateTime)>(&SerializationInfo::AddValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::AddValueInternal
  // Il2CppName: AddValueInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, ::Il2CppObject*, System::Type*)>(&SerializationInfo::AddValueInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "AddValueInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::UpdateValue
  // Il2CppName: UpdateValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationInfo::*)(::Il2CppString*, ::Il2CppObject*, System::Type*)>(&SerializationInfo::UpdateValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "UpdateValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::FindElement
  // Il2CppName: FindElement
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (SerializationInfo::*)(::Il2CppString*)>(&SerializationInfo::FindElement)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "FindElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetElement
  // Il2CppName: GetElement
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (SerializationInfo::*)(::Il2CppString*, System::Type*&)>(&SerializationInfo::GetElement)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*&>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetElementNoThrow
  // Il2CppName: GetElementNoThrow
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (SerializationInfo::*)(::Il2CppString*, System::Type*&)>(&SerializationInfo::GetElementNoThrow)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetElementNoThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*&>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetValue
  // Il2CppName: GetValue
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (SerializationInfo::*)(::Il2CppString*, System::Type*)>(&SerializationInfo::GetValue)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetValueNoThrow
  // Il2CppName: GetValueNoThrow
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (SerializationInfo::*)(::Il2CppString*, System::Type*)>(&SerializationInfo::GetValueNoThrow)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetValueNoThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetBoolean
  // Il2CppName: GetBoolean
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SerializationInfo::*)(::Il2CppString*)>(&SerializationInfo::GetBoolean)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetInt32
  // Il2CppName: GetInt32
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (SerializationInfo::*)(::Il2CppString*)>(&SerializationInfo::GetInt32)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetInt64
  // Il2CppName: GetInt64
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (SerializationInfo::*)(::Il2CppString*)>(&SerializationInfo::GetInt64)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetSingle
  // Il2CppName: GetSingle
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (SerializationInfo::*)(::Il2CppString*)>(&SerializationInfo::GetSingle)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationInfo::GetString
  // Il2CppName: GetString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (SerializationInfo::*)(::Il2CppString*)>(&SerializationInfo::GetString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationInfo*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationInfo*, "System.Runtime.Serialization", "SerializationInfo");
