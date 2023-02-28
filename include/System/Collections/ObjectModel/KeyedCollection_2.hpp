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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: KeyedCollection`2<TKey, TItem>
  template<typename TKey, typename TItem>
  class KeyedCollection_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::KeyedCollection_2, "System.Collections.ObjectModel", "KeyedCollection`2");
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.ObjectModel.KeyedCollection`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: 108041C
  // [DefaultMemberAttribute] Offset: 108041C
  // [DebuggerDisplayAttribute] Offset: 108041C
  // [ComVisibleAttribute] Offset: 108041C
  template<typename TKey, typename TItem>
  class KeyedCollection_2 : public ::System::Collections::ObjectModel::Collection_1<TItem> {
    public:
    public:
    // private System.Collections.Generic.IEqualityComparer`1<TKey> comparer
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEqualityComparer_1<TKey>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<TKey,TItem> dict
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TKey, TItem>* dict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TKey, TItem>*) == 0x8);
    // private System.Int32 keyCount
    // Size: 0x4
    // Offset: 0x0
    int keyCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 threshold
    // Size: 0x4
    // Offset: 0x0
    int threshold;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEqualityComparer`1<TKey> comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEqualityComparer_1<TKey>*& dyn_comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::dyn_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<TKey,TItem> dict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TKey, TItem>*& dyn_dict() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::dyn_dict");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "dict"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TKey, TItem>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 keyCount
    [[deprecated("Use field access instead!")]] int& dyn_keyCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::dyn_keyCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "keyCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 threshold
    [[deprecated("Use field access instead!")]] int& dyn_threshold() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::dyn_threshold");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "threshold"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TItem get_Item(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TItem get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TItem, false>(this, ___internal__method, key);
    }
    // protected System.Collections.Generic.IDictionary`2<TKey,TItem> get_Dictionary()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IDictionary_2<TKey, TItem>* get_Dictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::get_Dictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Dictionary", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<TKey, TItem>*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedCollection_2<TKey, TItem>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedCollection_2<TKey, TItem>*, creationType>(comparer)));
    }
    // protected System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TKey> comparer, System.Int32 dictionaryCreationThreshold)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedCollection_2<TKey, TItem>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int dictionaryCreationThreshold) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedCollection_2<TKey, TItem>*, creationType>(comparer, dictionaryCreationThreshold)));
    }
    // public System.Boolean Contains(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key);
    }
    // protected TKey GetKeyForItem(TItem item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey GetKeyForItem(TItem item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::GetKeyForItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetKeyForItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method, item);
    }
    // protected System.Void InsertItem(System.Int32 index, TItem item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InsertItem(int index, TItem item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::InsertItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // protected System.Void SetItem(System.Int32 index, TItem item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetItem(int index, TItem item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::SetItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // private System.Void AddKey(TKey key, TItem item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddKey(TKey key, TItem item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::AddKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key, item);
    }
    // private System.Void CreateDictionary()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CreateDictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::CreateDictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateDictionary", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void RemoveKey(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::RemoveKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, key);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.ObjectModel.Collection`1
    // Base method: System.Void Collection_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedCollection_2<TKey, TItem>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedCollection_2<TKey, TItem>*, creationType>()));
    }
    // protected override System.Void ClearItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.ObjectModel.Collection`1
    // Base method: System.Void Collection_1::ClearItems()
    void ClearItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::ClearItems");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected override System.Void RemoveItem(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.ObjectModel.Collection`1
    // Base method: System.Void Collection_1::RemoveItem(System.Int32 index)
    void RemoveItem(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::KeyedCollection_2::RemoveItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
  }; // System.Collections.ObjectModel.KeyedCollection`2
  // Could not write size check! Type: System.Collections.ObjectModel.KeyedCollection`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
