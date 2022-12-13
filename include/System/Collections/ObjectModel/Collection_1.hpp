// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::Collection_1, "System.Collections.ObjectModel", "Collection`1");
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.ObjectModel.Collection`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10797BC
  // [ComVisibleAttribute] Offset: 10797BC
  // [DebuggerTypeProxyAttribute] Offset: 10797BC
  // [DebuggerDisplayAttribute] Offset: 10797BC
  template<typename T>
  class Collection_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IList_1<T>, public ::System::Collections::Generic::IReadOnlyList_1<T>, public ::System::Collections::IList*/ {
    public:
    public:
    // private System.Collections.Generic.IList`1<T> items
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IList_1<T>* items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<T>*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<T>
    operator ::System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IList_1_T
    inline ::System::Collections::Generic::IList_1<T>* i_IList_1_T() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IReadOnlyList_1<T>
    operator ::System::Collections::Generic::IReadOnlyList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IReadOnlyList_1_T
    inline ::System::Collections::Generic::IReadOnlyList_1<T>* i_IReadOnlyList_1_T() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Creating interface conversion operator: i_IList
    inline ::System::Collections::IList* i_IList() noexcept {
      return reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IList`1<T> items
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<T>*& dyn_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::dyn_items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IList_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::dyn__syncRoot");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_syncRoot"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // protected System.Collections.Generic.IList`1<T> get_Items()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IList_1<T>* get_Items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::get_Items");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.ICollection.get_SyncRoot");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IList_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, index);
    }
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IList_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.IList.get_IsFixedSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IList_get_IsFixedSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.get_IsFixedSize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.get_IsFixedSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Collection_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Collection_1<T>*, creationType>(list)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<T> array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, index);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, item);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::RemoveAt");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // protected System.Void ClearItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ClearItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::ClearItems");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void InsertItem(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InsertItem(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::InsertItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // protected System.Void RemoveItem(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveItem(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::RemoveItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // protected System.Void SetItem(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetItem(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::SetItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.ICollection.CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, index);
    }
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IList_Add(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IList_Contains(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value);
    }
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IList_IndexOf(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_Remove(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::System.Collections.IList.Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IList.Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // static private System.Boolean IsCompatibleObject(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool IsCompatibleObject(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::IsCompatibleObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Collection_1<T>*>::get(), "IsCompatibleObject", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Collection_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::Collection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Collection_1<T>*, creationType>()));
    }
  }; // System.Collections.ObjectModel.Collection`1
  // Could not write size check! Type: System.Collections.ObjectModel.Collection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
