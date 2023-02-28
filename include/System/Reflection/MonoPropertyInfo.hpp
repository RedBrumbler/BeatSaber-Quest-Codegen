// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.PropertyAttributes
#include "System/Reflection/PropertyAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MonoProperty
  class MonoProperty;
  // Forward declaring type: PInfo
  struct PInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoPropertyInfo
  struct MonoPropertyInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoPropertyInfo, "System.Reflection", "MonoPropertyInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoPropertyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct MonoPropertyInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Type parent
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* parent;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Type declaring_type
    // Size: 0x8
    // Offset: 0x8
    ::System::Type* declaring_type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Reflection.MethodInfo get_method
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::MethodInfo* get_method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.MethodInfo set_method
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::MethodInfo* set_method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // public System.Reflection.PropertyAttributes attrs
    // Size: 0x4
    // Offset: 0x28
    ::System::Reflection::PropertyAttributes attrs;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyAttributes) == 0x4);
    public:
    // Creating value type constructor for type: MonoPropertyInfo
    constexpr MonoPropertyInfo(::System::Type* parent_ = {}, ::System::Type* declaring_type_ = {}, ::StringW name_ = {}, ::System::Reflection::MethodInfo* get_method_ = {}, ::System::Reflection::MethodInfo* set_method_ = {}, ::System::Reflection::PropertyAttributes attrs_ = {}) noexcept : parent{parent_}, declaring_type{declaring_type_}, name{name_}, get_method{get_method_}, set_method{set_method_}, attrs{attrs_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Type parent
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_parent();
    // Get instance field reference: public System.Type declaring_type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_declaring_type();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Reflection.MethodInfo get_method
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_get_method();
    // Get instance field reference: public System.Reflection.MethodInfo set_method
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_set_method();
    // Get instance field reference: public System.Reflection.PropertyAttributes attrs
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyAttributes& dyn_attrs();
    // static System.Void get_property_info(System.Reflection.MonoProperty prop, ref System.Reflection.MonoPropertyInfo info, System.Reflection.PInfo req_info)
    // Offset: 0x1E40AD0
    static void get_property_info(::System::Reflection::MonoProperty* prop, ByRef<::System::Reflection::MonoPropertyInfo> info, ::System::Reflection::PInfo req_info);
    // static System.Type[] GetTypeModifiers(System.Reflection.MonoProperty prop, System.Boolean optional)
    // Offset: 0x1E41B3C
    static ::ArrayW<::System::Type*> GetTypeModifiers(::System::Reflection::MonoProperty* prop, bool optional);
    // static System.Object get_default_value(System.Reflection.MonoProperty prop)
    // Offset: 0x1E41220
    static ::Il2CppObject* get_default_value(::System::Reflection::MonoProperty* prop);
  }; // System.Reflection.MonoPropertyInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoPropertyInfo), 40 + sizeof(::System::Reflection::PropertyAttributes)> __System_Reflection_MonoPropertyInfoSizeCheck;
  static_assert(sizeof(MonoPropertyInfo) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoPropertyInfo::get_property_info
// Il2CppName: get_property_info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::MonoProperty*, ByRef<::System::Reflection::MonoPropertyInfo>, ::System::Reflection::PInfo)>(&System::Reflection::MonoPropertyInfo::get_property_info)> {
  static const MethodInfo* get() {
    static auto* prop = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoProperty")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoPropertyInfo")->this_arg;
    static auto* req_info = &::il2cpp_utils::GetClassFromName("System.Reflection", "PInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoPropertyInfo), "get_property_info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prop, info, req_info});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoPropertyInfo::GetTypeModifiers
// Il2CppName: GetTypeModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Reflection::MonoProperty*, bool)>(&System::Reflection::MonoPropertyInfo::GetTypeModifiers)> {
  static const MethodInfo* get() {
    static auto* prop = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoProperty")->byval_arg;
    static auto* optional = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoPropertyInfo), "GetTypeModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prop, optional});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoPropertyInfo::get_default_value
// Il2CppName: get_default_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Reflection::MonoProperty*)>(&System::Reflection::MonoPropertyInfo::get_default_value)> {
  static const MethodInfo* get() {
    static auto* prop = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoPropertyInfo), "get_default_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prop});
  }
};
