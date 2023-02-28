// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Bson.BsonToken
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonType
  struct BsonType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonArray
  class BsonArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonArray*, "Newtonsoft.Json.Bson", "BsonArray");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonArray : public ::Newtonsoft::Json::Bson::BsonToken/*, public ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*/ {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> _children
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* children;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>
    operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*>(this);
    }
    // Creating interface conversion operator: i_BsonToken
    inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>* i_BsonToken() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*>(this);
    }
    // Deleting conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> _children
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& dyn__children();
    // public System.Void Add(Newtonsoft.Json.Bson.BsonToken token)
    // Offset: 0x18129C0
    void Add(::Newtonsoft::Json::Bson::BsonToken* token);
    // public System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> GetEnumerator()
    // Offset: 0x1812A3C
    ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1812AC8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0x1812A34
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: Newtonsoft.Json.Bson.BsonType BsonToken::get_Type()
    ::Newtonsoft::Json::Bson::BsonType get_Type();
    // public System.Void .ctor()
    // Offset: 0x1812ACC
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: System.Void BsonToken::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonArray*, creationType>()));
    }
  }; // Newtonsoft.Json.Bson.BsonArray
  #pragma pack(pop)
  static check_size<sizeof(BsonArray), 24 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*)> __Newtonsoft_Json_Bson_BsonArraySizeCheck;
  static_assert(sizeof(BsonArray) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonArray::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonArray::Add)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonArray*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* (Newtonsoft::Json::Bson::BsonArray::*)()>(&Newtonsoft::Json::Bson::BsonArray::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonArray*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Newtonsoft::Json::Bson::BsonArray::*)()>(&Newtonsoft::Json::Bson::BsonArray::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonArray*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonArray::*)()>(&Newtonsoft::Json::Bson::BsonArray::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonArray*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
