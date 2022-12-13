// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectIDGenerator
  class ObjectIDGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::ObjectIDGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectIDGenerator*, "System.Runtime.Serialization", "ObjectIDGenerator");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ObjectIDGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1077284
  class ObjectIDGenerator : public ::Il2CppObject {
    public:
    public:
    // System.Int32 m_currentCount
    // Size: 0x4
    // Offset: 0x10
    int m_currentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_currentSize
    // Size: 0x4
    // Offset: 0x14
    int m_currentSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int64[] m_ids
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int64_t> m_ids;
    // Field size check
    static_assert(sizeof(::ArrayW<int64_t>) == 0x8);
    // System.Object[] m_objs
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppObject*> m_objs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Get static field: static private readonly System.Int32[] sizes
    static ::ArrayW<int> _get_sizes();
    // Set static field: static private readonly System.Int32[] sizes
    static void _set_sizes(::ArrayW<int> value);
    // Get instance field reference: System.Int32 m_currentCount
    [[deprecated("Use field access instead!")]] int& dyn_m_currentCount();
    // Get instance field reference: System.Int32 m_currentSize
    [[deprecated("Use field access instead!")]] int& dyn_m_currentSize();
    // Get instance field reference: System.Int64[] m_ids
    [[deprecated("Use field access instead!")]] ::ArrayW<int64_t>& dyn_m_ids();
    // Get instance field reference: System.Object[] m_objs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_m_objs();
    // static private System.Void .cctor()
    // Offset: 0x1691A24
    static void _cctor();
    // private System.Int32 FindElement(System.Object obj, out System.Boolean found)
    // Offset: 0x16913AC
    int FindElement(::Il2CppObject* obj, ByRef<bool> found);
    // public System.Int64 GetId(System.Object obj, out System.Boolean firstTime)
    // Offset: 0x1691484
    int64_t GetId(::Il2CppObject* obj, ByRef<bool> firstTime);
    // public System.Int64 HasId(System.Object obj, out System.Boolean firstTime)
    // Offset: 0x1691910
    int64_t HasId(::Il2CppObject* obj, ByRef<bool> firstTime);
    // private System.Void Rehash()
    // Offset: 0x169164C
    void Rehash();
    // public System.Void .ctor()
    // Offset: 0x16912D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectIDGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::ObjectIDGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectIDGenerator*, creationType>()));
    }
  }; // System.Runtime.Serialization.ObjectIDGenerator
  #pragma pack(pop)
  static check_size<sizeof(ObjectIDGenerator), 32 + sizeof(::ArrayW<::Il2CppObject*>)> __System_Runtime_Serialization_ObjectIDGeneratorSizeCheck;
  static_assert(sizeof(ObjectIDGenerator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectIDGenerator::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::ObjectIDGenerator::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectIDGenerator*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectIDGenerator::FindElement
// Il2CppName: FindElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::ObjectIDGenerator::*)(::Il2CppObject*, ByRef<bool>)>(&System::Runtime::Serialization::ObjectIDGenerator::FindElement)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* found = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectIDGenerator*), "FindElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, found});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectIDGenerator::GetId
// Il2CppName: GetId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::ObjectIDGenerator::*)(::Il2CppObject*, ByRef<bool>)>(&System::Runtime::Serialization::ObjectIDGenerator::GetId)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* firstTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectIDGenerator*), "GetId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, firstTime});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectIDGenerator::HasId
// Il2CppName: HasId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::ObjectIDGenerator::*)(::Il2CppObject*, ByRef<bool>)>(&System::Runtime::Serialization::ObjectIDGenerator::HasId)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* firstTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectIDGenerator*), "HasId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, firstTime});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectIDGenerator::Rehash
// Il2CppName: Rehash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectIDGenerator::*)()>(&System::Runtime::Serialization::ObjectIDGenerator::Rehash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectIDGenerator*), "Rehash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectIDGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
