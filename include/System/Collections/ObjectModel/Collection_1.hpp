// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Autogenerated type: System.Collections.ObjectModel.Collection`1
  template<typename T>
  class Collection_1 : public ::CsObject, public System::Collections::Generic::IList_1<T>, public System::Collections::Generic::ICollection_1<T>, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::IEnumerable, public System::Collections::IList, public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyList_1<T>, public System::Collections::Generic::IReadOnlyCollection_1<T> {
    public:
    // private System.Collections.Generic.IList`1<T> items
    // Offset: 0x0
    System::Collections::Generic::IList_1<T>* items;
    // protected System.Void ClearItems()
    // Offset: 0xFFFFFFFF
    void ClearItems() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearItems"));
    }
    // protected System.Void InsertItem(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    void InsertItem(int index, T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "InsertItem", index, item));
    }
    // protected System.Void RemoveItem(System.Int32 index)
    // Offset: 0xFFFFFFFF
    void RemoveItem(int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveItem", index));
    }
    // protected System.Void SetItem(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    void SetItem(int index, T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetItem", index, item));
    }
    // static private System.Boolean IsCompatibleObject(System.Object value)
    // Offset: 0xFFFFFFFF
    static bool IsCompatibleObject(::CsObject* value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Collection_1<T>*>::get(), "IsCompatibleObject", value));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Collection_1<T>* New_ctor() {
      return (Collection_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Collection_1<T>*>::get()));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection`1::get_Count()
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection`1::get_Count()
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count() {
      return get_Count();
    }
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count() {
      return get_Count();
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: T IList`1::get_Item(System.Int32 index)
    // Base method: T IReadOnlyList`1::get_Item(System.Int32 index)
    T get_Item(int index) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Item", index));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_get_Item
    // Maps to method: get_Item
    T System_Collections_Generic_IList_1_get_Item(int index) {
      return get_Item(index);
    }
    // Creating proxy method: System_Collections_Generic_IReadOnlyList_1_get_Item
    // Maps to method: get_Item
    T System_Collections_Generic_IReadOnlyList_1_get_Item(int index) {
      return get_Item(index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList`1::set_Item(System.Int32 index, T value)
    void set_Item(int index, T value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", index, value));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_set_Item
    // Maps to method: set_Item
    void System_Collections_Generic_IList_1_set_Item(int index, T value) {
      set_Item(index, value);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Add(T item)
    void Add(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", item));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Add
    // Maps to method: Add
    void System_Collections_Generic_ICollection_1_Add(T item) {
      Add(item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Clear()
    // Base method: System.Void IList::Clear()
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear() {
      Clear();
    }
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear() {
      Clear();
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::CopyTo(T[] array, System.Int32 index)
    void CopyTo(::Array<T>* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_CopyTo
    // Maps to method: CopyTo
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int index) {
      CopyTo(array, index);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Contains(T item)
    bool Contains(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", item));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(T item) {
      return Contains(item);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "GetEnumerator"));
    }
    // Creating proxy method: System_Collections_Generic_IEnumerable_1_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return GetEnumerator();
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Int32 IList`1::IndexOf(T item)
    int IndexOf(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "IndexOf", item));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_IndexOf
    // Maps to method: IndexOf
    int System_Collections_Generic_IList_1_IndexOf(T item) {
      return IndexOf(item);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList`1::Insert(System.Int32 index, T item)
    void Insert(int index, T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Insert", index, item));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_Insert
    // Maps to method: Insert
    void System_Collections_Generic_IList_1_Insert(int index, T item) {
      Insert(index, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Remove(T item)
    bool Remove(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Remove", item));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_ICollection_1_Remove(T item) {
      return Remove(item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList`1::RemoveAt(System.Int32 index)
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void RemoveAt(int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveAt", index));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_Generic_IList_1_RemoveAt(int index) {
      RemoveAt(index);
    }
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index) {
      RemoveAt(index);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly")));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, index));
    }
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::CsObject* System_Collections_IList_get_Item(int index) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "System.Collections.IList.get_Item", index));
    }
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void System_Collections_IList_set_Item(int index, ::CsObject* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.set_Item", index, value));
    }
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool System_Collections_IList_get_IsReadOnly() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IList.get_IsReadOnly"));
    }
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int System_Collections_IList_Add(::CsObject* value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IList.Add", value));
    }
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object value)
    bool System_Collections_IList_Contains(::CsObject* value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IList.Contains", value));
    }
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int System_Collections_IList_IndexOf(::CsObject* value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IList.IndexOf", value));
    }
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void System_Collections_IList_Insert(int index, ::CsObject* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Insert", index, value));
    }
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object value)
    void System_Collections_IList_Remove(::CsObject* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Remove", value));
    }
  }; // System.Collections.ObjectModel.Collection`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::ObjectModel::Collection_1, "System.Collections.ObjectModel", "Collection`1");
#pragma pack(pop)
