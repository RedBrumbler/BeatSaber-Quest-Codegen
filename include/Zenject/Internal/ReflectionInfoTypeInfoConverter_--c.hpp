// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionInfoTypeInfoConverter
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionInfoTypeInfoConverter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c <>9
    static ::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c <>9
    static void _set_$$9(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c* value);
    // Get static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo,Zenject.InjectableInfo> <>9__0_1
    static ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, ::Zenject::InjectableInfo*>* _get_$$9__0_1();
    // Set static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo,Zenject.InjectableInfo> <>9__0_1
    static void _set_$$9__0_1(::System::Func_2<::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, ::Zenject::InjectableInfo*>* value);
    // Get static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo,Zenject.InjectableInfo> <>9__1_0
    static ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, ::Zenject::InjectableInfo*>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo,Zenject.InjectableInfo> <>9__1_0
    static void _set_$$9__1_0(::System::Func_2<::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, ::Zenject::InjectableInfo*>* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.String> <>9__8_1
    static ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* _get_$$9__8_1();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.String> <>9__8_1
    static void _set_$$9__8_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x1CB8620
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1CB8684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c*, creationType>()));
    }
    // Zenject.InjectableInfo <ConvertMethod>b__0_1(Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo x)
    // Offset: 0x1CB868C
    ::Zenject::InjectableInfo* $ConvertMethod$b__0_1(::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* x);
    // Zenject.InjectableInfo <ConvertConstructor>b__1_0(Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo x)
    // Offset: 0x1CB86A4
    ::Zenject::InjectableInfo* $ConvertConstructor$b__1_0(::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* x);
    // System.String <GetOnlyPropertySetter>b__8_1(System.Reflection.FieldInfo f)
    // Offset: 0x1CB86BC
    ::StringW $GetOnlyPropertySetter$b__8_1(::System::Reflection::FieldInfo* f);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CB86DC
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CB8738
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::$ConvertMethod$b__0_1
// Il2CppName: <ConvertMethod>b__0_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectableInfo* (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::*)(::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::$ConvertMethod$b__0_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*), "<ConvertMethod>b__0_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::$ConvertConstructor$b__1_0
// Il2CppName: <ConvertConstructor>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectableInfo* (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::*)(::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::$ConvertConstructor$b__1_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*), "<ConvertConstructor>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::$GetOnlyPropertySetter$b__8_1
// Il2CppName: <GetOnlyPropertySetter>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::*)(::System::Reflection::FieldInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::$GetOnlyPropertySetter$b__8_1)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*), "<GetOnlyPropertySetter>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
