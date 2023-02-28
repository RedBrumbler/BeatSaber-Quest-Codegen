// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.PrimitiveTypeCode
#include "Newtonsoft/Json/Utilities/PrimitiveTypeCode.hpp"
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
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: TypeInformation
  class TypeInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeInformation*, "Newtonsoft.Json.Utilities", "TypeInformation");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.TypeInformation
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10FDB30
  class TypeInformation : public ::Il2CppObject {
    public:
    public:
    // private System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private Newtonsoft.Json.Utilities.PrimitiveTypeCode <TypeCode>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::Newtonsoft::Json::Utilities::PrimitiveTypeCode TypeCode;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::PrimitiveTypeCode) == 0x4);
    public:
    // Get instance field reference: private System.Type <Type>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$Type$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.PrimitiveTypeCode <TypeCode>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& dyn_$TypeCode$k__BackingField();
    // public System.Type get_Type()
    // Offset: 0x21357B8
    ::System::Type* get_Type();
    // public System.Void set_Type(System.Type value)
    // Offset: 0x21357C0
    void set_Type(::System::Type* value);
    // public Newtonsoft.Json.Utilities.PrimitiveTypeCode get_TypeCode()
    // Offset: 0x21357C8
    ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode();
    // public System.Void set_TypeCode(Newtonsoft.Json.Utilities.PrimitiveTypeCode value)
    // Offset: 0x21357D0
    void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);
    // public System.Void .ctor()
    // Offset: 0x2129C88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInformation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::TypeInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInformation*, creationType>()));
    }
  }; // Newtonsoft.Json.Utilities.TypeInformation
  #pragma pack(pop)
  static check_size<sizeof(TypeInformation), 24 + sizeof(::Newtonsoft::Json::Utilities::PrimitiveTypeCode)> __Newtonsoft_Json_Utilities_TypeInformationSizeCheck;
  static_assert(sizeof(TypeInformation) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeInformation::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Utilities::TypeInformation::*)()>(&Newtonsoft::Json::Utilities::TypeInformation::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeInformation*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeInformation::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::TypeInformation::*)(::System::Type*)>(&Newtonsoft::Json::Utilities::TypeInformation::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeInformation*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeInformation::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (Newtonsoft::Json::Utilities::TypeInformation::*)()>(&Newtonsoft::Json::Utilities::TypeInformation::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeInformation*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeInformation::set_TypeCode
// Il2CppName: set_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::TypeInformation::*)(::Newtonsoft::Json::Utilities::PrimitiveTypeCode)>(&Newtonsoft::Json::Utilities::TypeInformation::set_TypeCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "PrimitiveTypeCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::TypeInformation*), "set_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::TypeInformation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
