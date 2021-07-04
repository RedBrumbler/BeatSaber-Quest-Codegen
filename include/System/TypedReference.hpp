// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.RuntimeTypeHandle
#include "System/RuntimeTypeHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TypedReference
  // [CLSCompliantAttribute] Offset: D7AFB4
  // [ComVisibleAttribute] Offset: D7AFB4
  struct TypedReference/*, public System::ValueType*/ {
    public:
    // private System.RuntimeTypeHandle type
    // Size: 0x8
    // Offset: 0x0
    System::RuntimeTypeHandle type;
    // Field size check
    static_assert(sizeof(System::RuntimeTypeHandle) == 0x8);
    // private System.IntPtr Value
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr Value;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr Type
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Type;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: TypedReference
    constexpr TypedReference(System::RuntimeTypeHandle type_ = {}, System::IntPtr Value_ = {}, System::IntPtr Type_ = {}) noexcept : type{type_}, Value{Value_}, Type{Type_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static public System.TypedReference MakeTypedReference(System.Object target, System.Reflection.FieldInfo[] flds)
    // Offset: 0x232D854
    static System::TypedReference MakeTypedReference(::Il2CppObject* target, ::Array<System::Reflection::FieldInfo*>* flds);
    // static private System.TypedReference MakeTypedReferenceInternal(System.Object target, System.Reflection.FieldInfo[] fields)
    // Offset: 0x232DC34
    static System::TypedReference MakeTypedReferenceInternal(::Il2CppObject* target, ::Array<System::Reflection::FieldInfo*>* fields);
    // System.Boolean get_IsNull()
    // Offset: 0xF19898
    bool get_IsNull();
    // static public System.Void SetTypedReference(System.TypedReference target, System.Object value)
    // Offset: 0x232DDAC
    static void SetTypedReference(System::TypedReference target, ::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF19884
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xF1988C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // System.TypedReference
  #pragma pack(pop)
  static check_size<sizeof(TypedReference), 16 + sizeof(System::IntPtr)> __System_TypedReferenceSizeCheck;
  static_assert(sizeof(TypedReference) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypedReference, "System", "TypedReference");
// Writing MetadataGetter for method: System::TypedReference::MakeTypedReference
// Il2CppName: MakeTypedReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypedReference (*)(::Il2CppObject*, ::Array<System::Reflection::FieldInfo*>*)>(&System::TypedReference::MakeTypedReference)> {
  const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* flds = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypedReference), "MakeTypedReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, flds});
  }
};
// Writing MetadataGetter for method: System::TypedReference::MakeTypedReferenceInternal
// Il2CppName: MakeTypedReferenceInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypedReference (*)(::Il2CppObject*, ::Array<System::Reflection::FieldInfo*>*)>(&System::TypedReference::MakeTypedReferenceInternal)> {
  const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* fields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypedReference), "MakeTypedReferenceInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, fields});
  }
};
// Writing MetadataGetter for method: System::TypedReference::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypedReference::*)()>(&System::TypedReference::get_IsNull)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypedReference), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypedReference::SetTypedReference
// Il2CppName: SetTypedReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::TypedReference, ::Il2CppObject*)>(&System::TypedReference::SetTypedReference)> {
  const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "TypedReference")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypedReference), "SetTypedReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, value});
  }
};
// Writing MetadataGetter for method: System::TypedReference::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TypedReference::*)()>(&System::TypedReference::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypedReference), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypedReference::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypedReference::*)(::Il2CppObject*)>(&System::TypedReference::Equals)> {
  const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypedReference), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
