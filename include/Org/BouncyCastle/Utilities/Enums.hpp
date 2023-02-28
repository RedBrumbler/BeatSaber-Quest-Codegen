// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Forward declaring type: Enums
  class Enums;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Enums);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Enums*, "Org.BouncyCastle.Utilities", "Enums");
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Enums
  // [TokenAttribute] Offset: FFFFFFFF
  class Enums : public ::Il2CppObject {
    public:
    // static System.Enum GetEnumValue(System.Type enumType, System.String s)
    // Offset: 0x2688CB8
    static ::System::Enum* GetEnumValue(::System::Type* enumType, ::StringW s);
    // static System.Array GetEnumValues(System.Type enumType)
    // Offset: 0x2688EB0
    static ::System::Array* GetEnumValues(::System::Type* enumType);
    // static System.Enum GetArbitraryValue(System.Type enumType)
    // Offset: 0x2688F80
    static ::System::Enum* GetArbitraryValue(::System::Type* enumType);
    // static System.Boolean IsEnumType(System.Type t)
    // Offset: 0x2688E90
    static bool IsEnumType(::System::Type* t);
  }; // Org.BouncyCastle.Utilities.Enums
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Enums::GetEnumValue
// Il2CppName: GetEnumValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Enum* (*)(::System::Type*, ::StringW)>(&Org::BouncyCastle::Utilities::Enums::GetEnumValue)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Enums*), "GetEnumValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Enums::GetEnumValues
// Il2CppName: GetEnumValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (*)(::System::Type*)>(&Org::BouncyCastle::Utilities::Enums::GetEnumValues)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Enums*), "GetEnumValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Enums::GetArbitraryValue
// Il2CppName: GetArbitraryValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Enum* (*)(::System::Type*)>(&Org::BouncyCastle::Utilities::Enums::GetArbitraryValue)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Enums*), "GetArbitraryValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Enums::IsEnumType
// Il2CppName: IsEnumType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Org::BouncyCastle::Utilities::Enums::IsEnumType)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Enums*), "IsEnumType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
