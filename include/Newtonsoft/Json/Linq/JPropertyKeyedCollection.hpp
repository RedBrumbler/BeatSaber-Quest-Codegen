// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ObjectModel.Collection`1
#include "System/Collections/ObjectModel/Collection_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JToken
  class JToken;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Skipping declaration: ICollection`1 because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JPropertyKeyedCollection
  class JPropertyKeyedCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyKeyedCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyKeyedCollection*, "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Linq.JPropertyKeyedCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10FE20C
  // [PreserveAttribute] Offset: FFFFFFFF
  class JPropertyKeyedCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::Linq::JToken*> {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> _dictionary
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>* dictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*() const noexcept {
      return dictionary;
    }
    // Get static field: static private readonly System.Collections.Generic.IEqualityComparer`1<System.String> Comparer
    static ::System::Collections::Generic::IEqualityComparer_1<::StringW>* _get_Comparer();
    // Set static field: static private readonly System.Collections.Generic.IEqualityComparer`1<System.String> Comparer
    static void _set_Comparer(::System::Collections::Generic::IEqualityComparer_1<::StringW>* value);
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> _dictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*& dyn__dictionary();
    // public System.Collections.Generic.ICollection`1<System.String> get_Keys()
    // Offset: 0x17AF3E8
    ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys();
    // public System.Void .ctor()
    // Offset: 0x17AE388
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JPropertyKeyedCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JPropertyKeyedCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JPropertyKeyedCollection*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x17B1684
    static void _cctor();
    // private System.Void AddKey(System.String key, Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B109C
    void AddKey(::StringW key, ::Newtonsoft::Json::Linq::JToken* item);
    // public System.Boolean Contains(System.String key)
    // Offset: 0x17AF31C
    bool Contains(::StringW key);
    // private System.Void EnsureDictionary()
    // Offset: 0x17B1114
    void EnsureDictionary();
    // private System.String GetKeyForItem(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B1230
    ::StringW GetKeyForItem(::Newtonsoft::Json::Linq::JToken* item);
    // protected System.Void InsertItem(System.Int32 index, Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B12B8
    void InsertItem(int index, ::Newtonsoft::Json::Linq::JToken* item);
    // private System.Void RemoveKey(System.String key)
    // Offset: 0x17B1424
    void RemoveKey(::StringW key);
    // protected System.Void SetItem(System.Int32 index, Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B1498
    void SetItem(int index, ::Newtonsoft::Json::Linq::JToken* item);
    // public System.Boolean TryGetValue(System.String key, out Newtonsoft.Json.Linq.JToken value)
    // Offset: 0x17AEB40
    bool TryGetValue(::StringW key, ByRef<::Newtonsoft::Json::Linq::JToken*> value);
    // public System.Int32 IndexOfReference(Newtonsoft.Json.Linq.JToken t)
    // Offset: 0x17AE804
    int IndexOfReference(::Newtonsoft::Json::Linq::JToken* t);
    // public System.Boolean Compare(Newtonsoft.Json.Linq.JPropertyKeyedCollection other)
    // Offset: 0x17AE520
    bool Compare(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* other);
    // protected override System.Void ClearItems()
    // Offset: 0x17B11BC
    // Implemented from: System.Collections.ObjectModel.Collection`1
    // Base method: System.Void Collection_1::ClearItems()
    void ClearItems();
    // protected override System.Void RemoveItem(System.Int32 index)
    // Offset: 0x17B1338
    // Implemented from: System.Collections.ObjectModel.Collection`1
    // Base method: System.Void Collection_1::RemoveItem(System.Int32 index)
    void RemoveItem(int index);
  }; // Newtonsoft.Json.Linq.JPropertyKeyedCollection
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::AddKey
// Il2CppName: AddKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::AddKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "AddKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::EnsureDictionary
// Il2CppName: EnsureDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::EnsureDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "EnsureDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::GetKeyForItem
// Il2CppName: GetKeyForItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::GetKeyForItem)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "GetKeyForItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::InsertItem
// Il2CppName: InsertItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(int, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::InsertItem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "InsertItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveKey
// Il2CppName: RemoveKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "RemoveKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::SetItem
// Il2CppName: SetItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(int, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::SetItem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "SetItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::TryGetValue
// Il2CppName: TryGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW, ByRef<::Newtonsoft::Json::Linq::JToken*>)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::TryGetValue)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "TryGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::IndexOfReference
// Il2CppName: IndexOfReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::IndexOfReference)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "IndexOfReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JPropertyKeyedCollection*)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::Compare)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JPropertyKeyedCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::ClearItems
// Il2CppName: ClearItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::ClearItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "ClearItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveItem
// Il2CppName: RemoveItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(int)>(&Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveItem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyKeyedCollection*), "RemoveItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
