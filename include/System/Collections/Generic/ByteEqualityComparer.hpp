// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ByteEqualityComparer
  class ByteEqualityComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::ByteEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::ByteEqualityComparer*, "System.Collections.Generic", "ByteEqualityComparer");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.ByteEqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<uint8_t> {
    public:
    // public System.Boolean Equals(System.Byte x, System.Byte y)
    // Offset: 0x1DB2260
    bool Equals(uint8_t x, uint8_t y);
    // public System.Int32 GetHashCode(System.Byte b)
    // Offset: 0x1DB2270
    int GetHashCode(uint8_t b);
    // System.Int32 IndexOf(System.Byte[] array, System.Byte value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1DB2298
    int IndexOf(::ArrayW<uint8_t> array, uint8_t value, int startIndex, int count);
    // System.Int32 LastIndexOf(System.Byte[] array, System.Byte value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1DB2458
    int LastIndexOf(::ArrayW<uint8_t> array, uint8_t value, int startIndex, int count);
    // public System.Void .ctor()
    // Offset: 0x1DB2574
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ByteEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteEqualityComparer*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1DB24BC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1DB253C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Collections.Generic.ByteEqualityComparer
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::ByteEqualityComparer::*)(uint8_t, uint8_t)>(&System::Collections::Generic::ByteEqualityComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ByteEqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::ByteEqualityComparer::*)(uint8_t)>(&System::Collections::Generic::ByteEqualityComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ByteEqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::ByteEqualityComparer::*)(::ArrayW<uint8_t>, uint8_t, int, int)>(&System::Collections::Generic::ByteEqualityComparer::IndexOf)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ByteEqualityComparer*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, value, startIndex, count});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::LastIndexOf
// Il2CppName: LastIndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::ByteEqualityComparer::*)(::ArrayW<uint8_t>, uint8_t, int, int)>(&System::Collections::Generic::ByteEqualityComparer::LastIndexOf)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ByteEqualityComparer*), "LastIndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, value, startIndex, count});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::ByteEqualityComparer::*)(::Il2CppObject*)>(&System::Collections::Generic::ByteEqualityComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ByteEqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::ByteEqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::ByteEqualityComparer::*)()>(&System::Collections::Generic::ByteEqualityComparer::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::ByteEqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
