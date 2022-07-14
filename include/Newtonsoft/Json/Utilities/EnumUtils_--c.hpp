// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.EnumUtils
#include "Newtonsoft/Json/Utilities/EnumUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: EnumMemberAttribute
  class EnumMemberAttribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::EnumUtils::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::EnumUtils::$$c*, "Newtonsoft.Json.Utilities", "EnumUtils/<>c");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.EnumUtils/Newtonsoft.Json.Utilities.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnumUtils::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Newtonsoft.Json.Utilities.EnumUtils/Newtonsoft.Json.Utilities.<>c <>9
    static ::Newtonsoft::Json::Utilities::EnumUtils::$$c* _get_$$9();
    // Set static field: static public readonly Newtonsoft.Json.Utilities.EnumUtils/Newtonsoft.Json.Utilities.<>c <>9
    static void _set_$$9(::Newtonsoft::Json::Utilities::EnumUtils::$$c* value);
    // Get static field: static public System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> <>9__1_0
    static ::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::StringW>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> <>9__1_0
    static void _set_$$9__1_0(::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__5_0
    static ::System::Func_2<::System::Reflection::FieldInfo*, bool>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__5_0
    static void _set_$$9__5_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x2097FE8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x209804C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumUtils::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::EnumUtils::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumUtils::$$c*, creationType>()));
    }
    // System.String <InitializeEnumType>b__1_0(System.Runtime.Serialization.EnumMemberAttribute a)
    // Offset: 0x2098054
    ::StringW $InitializeEnumType$b__1_0(::System::Runtime::Serialization::EnumMemberAttribute* a);
    // System.Boolean <GetValues>b__5_0(System.Reflection.FieldInfo f)
    // Offset: 0x209806C
    bool $GetValues$b__5_0(::System::Reflection::FieldInfo* f);
  }; // Newtonsoft.Json.Utilities.EnumUtils/Newtonsoft.Json.Utilities.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::EnumUtils::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::EnumUtils::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::EnumUtils::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::EnumUtils::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::EnumUtils::$$c::$InitializeEnumType$b__1_0
// Il2CppName: <InitializeEnumType>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Utilities::EnumUtils::$$c::*)(::System::Runtime::Serialization::EnumMemberAttribute*)>(&Newtonsoft::Json::Utilities::EnumUtils::$$c::$InitializeEnumType$b__1_0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "EnumMemberAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::EnumUtils::$$c*), "<InitializeEnumType>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::EnumUtils::$$c::$GetValues$b__5_0
// Il2CppName: <GetValues>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::EnumUtils::$$c::*)(::System::Reflection::FieldInfo*)>(&Newtonsoft::Json::Utilities::EnumUtils::$$c::$GetValues$b__5_0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::EnumUtils::$$c*), "<GetValues>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};