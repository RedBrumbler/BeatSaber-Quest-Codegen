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
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonType
  struct BsonType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonToken
  class BsonToken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonToken*, "Newtonsoft.Json.Bson", "BsonToken");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonToken
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonToken : public ::Il2CppObject {
    public:
    public:
    // private Newtonsoft.Json.Bson.BsonToken <Parent>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Bson::BsonToken* Parent;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonToken*) == 0x8);
    public:
    // Creating conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept {
      return Parent;
    }
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonToken <Parent>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonToken*& dyn_$Parent$k__BackingField();
    // public Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Newtonsoft::Json::Bson::BsonType get_Type();
    // public System.Void set_Parent(Newtonsoft.Json.Bson.BsonToken value)
    // Offset: 0x17BA26C
    void set_Parent(::Newtonsoft::Json::Bson::BsonToken* value);
    // protected System.Void .ctor()
    // Offset: 0x17B844C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonToken* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonToken::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonToken*, creationType>()));
    }
  }; // Newtonsoft.Json.Bson.BsonToken
  #pragma pack(pop)
  static check_size<sizeof(BsonToken), 16 + sizeof(::Newtonsoft::Json::Bson::BsonToken*)> __Newtonsoft_Json_Bson_BsonTokenSizeCheck;
  static_assert(sizeof(BsonToken) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonToken::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonToken::*)()>(&Newtonsoft::Json::Bson::BsonToken::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonToken*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonToken::set_Parent
// Il2CppName: set_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonToken::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonToken::set_Parent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonToken*), "set_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonToken::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!