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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ReflectionMember
  class ReflectionMember;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionMember);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionMember*, "Newtonsoft.Json.Utilities", "ReflectionMember");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionMember
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F8E3C
  class ReflectionMember : public ::Il2CppObject {
    public:
    public:
    // private System.Type <MemberType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* MemberType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Func`2<System.Object,System.Object> <Getter>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* Getter;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // private System.Action`2<System.Object,System.Object> <Setter>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<::Il2CppObject*, ::Il2CppObject*>* Setter;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: private System.Type <MemberType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$MemberType$k__BackingField();
    // Get instance field reference: private System.Func`2<System.Object,System.Object> <Getter>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$Getter$k__BackingField();
    // Get instance field reference: private System.Action`2<System.Object,System.Object> <Setter>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$Setter$k__BackingField();
    // public System.Type get_MemberType()
    // Offset: 0x211D7DC
    ::System::Type* get_MemberType();
    // public System.Void set_MemberType(System.Type value)
    // Offset: 0x211D7E4
    void set_MemberType(::System::Type* value);
    // public System.Func`2<System.Object,System.Object> get_Getter()
    // Offset: 0x211D7EC
    ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* get_Getter();
    // public System.Void set_Getter(System.Func`2<System.Object,System.Object> value)
    // Offset: 0x211D7F4
    void set_Getter(::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public System.Void set_Setter(System.Action`2<System.Object,System.Object> value)
    // Offset: 0x211D7FC
    void set_Setter(::System::Action_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public System.Void .ctor()
    // Offset: 0x211D804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMember* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionMember::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMember*, creationType>()));
    }
  }; // Newtonsoft.Json.Utilities.ReflectionMember
  #pragma pack(pop)
  static check_size<sizeof(ReflectionMember), 32 + sizeof(::System::Action_2<::Il2CppObject*, ::Il2CppObject*>*)> __Newtonsoft_Json_Utilities_ReflectionMemberSizeCheck;
  static_assert(sizeof(ReflectionMember) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionMember::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Utilities::ReflectionMember::*)()>(&Newtonsoft::Json::Utilities::ReflectionMember::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionMember*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionMember::set_MemberType
// Il2CppName: set_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::ReflectionMember::*)(::System::Type*)>(&Newtonsoft::Json::Utilities::ReflectionMember::set_MemberType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionMember*), "set_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionMember::get_Getter
// Il2CppName: get_Getter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::ReflectionMember::*)()>(&Newtonsoft::Json::Utilities::ReflectionMember::get_Getter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionMember*), "get_Getter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionMember::set_Getter
// Il2CppName: set_Getter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::ReflectionMember::*)(::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::ReflectionMember::set_Getter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionMember*), "set_Getter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionMember::set_Setter
// Il2CppName: set_Setter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::ReflectionMember::*)(::System::Action_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::ReflectionMember::set_Setter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionMember*), "set_Setter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionMember::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
