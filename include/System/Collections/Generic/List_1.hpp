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
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Enumerator because it is already included!
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.List`1
  template<typename T>
  class List_1 : public ::CsObject, public System::Collections::Generic::IList_1<T>, public System::Collections::Generic::ICollection_1<T>, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::IEnumerable, public System::Collections::IList, public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyList_1<T>, public System::Collections::Generic::IReadOnlyCollection_1<T> {
    public:
    // Nested type: System::Collections::Generic::List_1::Enumerator<T>
    struct Enumerator;
    // Autogenerated type: System.Collections.Generic.List`1/Enumerator
    struct Enumerator : public System::ValueType, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerator_1<T>, public System::IDisposable, public System::Collections::IEnumerator {
      public:
      using declaring_type = List_1<T>*;
      // private System.Collections.Generic.List`1<T> list
      // Offset: 0x0
      System::Collections::Generic::List_1<T>* list;
      // private System.Int32 index
      // Offset: 0x0
      int index;
      // private System.Int32 version
      // Offset: 0x0
      int version;
      // private T current
      // Offset: 0x0
      T current;
      // Creating value type constructor for type: Enumerator
      Enumerator(System::Collections::Generic::List_1<T>* list_ = {}, int index_ = {}, int version_ = {}, T current_ = {}) : list{list_}, index{index_}, version{version_}, current{current_} {}
      // System.Void .ctor(System.Collections.Generic.List`1<T> list)
      // Offset: 0xFFFFFFFF
      static typename List_1<T>::Enumerator* New_ctor(System::Collections::Generic::List_1<T>* list) {
        return (typename List_1<T>::Enumerator*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename List_1<T>::Enumerator>::get(), list));
      }
      // private System.Boolean MoveNextRare()
      // Offset: 0xFFFFFFFF
      bool MoveNextRare() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "MoveNextRare"));
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
      }
      // Creating proxy method: System_IDisposable_Dispose
      // Maps to method: Dispose
      void System_IDisposable_Dispose() {
        Dispose();
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "MoveNext"));
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      T get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Current"));
      }
      // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
      // Maps to method: get_Current
      T System_Collections_Generic_IEnumerator_1_get_Current() {
        return get_Current();
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::CsObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "System.Collections.IEnumerator.get_Current"));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "System.Collections.IEnumerator.Reset"));
      }
    }; // System.Collections.Generic.List`1/Enumerator
    // Autogenerated static field getter
    // Get static field: static private System.Int32 _defaultCapacity
    static int _get__defaultCapacity() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), "_defaultCapacity"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 _defaultCapacity
    static void _set__defaultCapacity(int value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), "_defaultCapacity", value));
    }
    // private T[] _items
    // Offset: 0x0
    ::Array<T>* items;
    // private System.Int32 _size
    // Offset: 0x0
    int size;
    // private System.Int32 _version
    // Offset: 0x0
    int version;
    // private System.Object _syncRoot
    // Offset: 0x0
    ::CsObject* syncRoot;
    // Autogenerated static field getter
    // Get static field: static private readonly T[] _emptyArray
    static ::Array<T>* _get__emptyArray() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), "_emptyArray"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly T[] _emptyArray
    static void _set__emptyArray(::Array<T>* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), "_emptyArray", value));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    static List_1<T>* New_ctor(int capacity) {
      return (List_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), capacity));
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<T> collection)
    // Offset: 0xFFFFFFFF
    static List_1<T>* New_ctor(System::Collections::Generic::IEnumerable_1<T>* collection) {
      return (List_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), collection));
    }
    // public System.Int32 get_Capacity()
    // Offset: 0xFFFFFFFF
    int get_Capacity() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Capacity"));
    }
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_Capacity(int value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Capacity", value));
    }
    // static private System.Boolean IsCompatibleObject(System.Object value)
    // Offset: 0xFFFFFFFF
    static bool IsCompatibleObject(::CsObject* value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), "IsCompatibleObject", value));
    }
    // public System.Void AddRange(System.Collections.Generic.IEnumerable`1<T> collection)
    // Offset: 0xFFFFFFFF
    void AddRange(System::Collections::Generic::IEnumerable_1<T>* collection) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddRange", collection));
    }
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<T> AsReadOnly()
    // Offset: 0xFFFFFFFF
    System::Collections::ObjectModel::ReadOnlyCollection_1<T>* AsReadOnly() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(this, "AsReadOnly"));
    }
    // public System.Int32 BinarySearch(System.Int32 index, System.Int32 count, T item, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFF
    int BinarySearch(int index, int count, T item, System::Collections::Generic::IComparer_1<T>* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "BinarySearch", index, count, item, comparer));
    }
    // public System.Int32 BinarySearch(T item)
    // Offset: 0xFFFFFFFF
    int BinarySearch(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "BinarySearch", item));
    }
    // public System.Void CopyTo(T[] array)
    // Offset: 0xFFFFFFFF
    void CopyTo(::Array<T>* array) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array));
    }
    // public System.Void CopyTo(System.Int32 index, T[] array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void CopyTo(int index, ::Array<T>* array, int arrayIndex, int count) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", index, array, arrayIndex, count));
    }
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0xFFFFFFFF
    void EnsureCapacity(int min) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureCapacity", min));
    }
    // public System.Boolean Exists(System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFF
    bool Exists(System::Predicate_1<T>* match) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Exists", match));
    }
    // public T Find(System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFF
    T Find(System::Predicate_1<T>* match) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Find", match));
    }
    // public System.Int32 FindIndex(System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFF
    int FindIndex(System::Predicate_1<T>* match) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindIndex", match));
    }
    // public System.Int32 FindIndex(System.Int32 startIndex, System.Int32 count, System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFF
    int FindIndex(int startIndex, int count, System::Predicate_1<T>* match) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindIndex", startIndex, count, match));
    }
    // public System.Void ForEach(System.Action`1<T> action)
    // Offset: 0xFFFFFFFF
    void ForEach(System::Action_1<T>* action) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ForEach", action));
    }
    // public System.Collections.Generic.List`1/Enumerator<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    typename System::Collections::Generic::List_1<T>::Enumerator GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<typename System::Collections::Generic::List_1<T>::Enumerator>(this, "GetEnumerator"));
    }
    // public System.Collections.Generic.List`1<T> GetRange(System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<T>* GetRange(int index, int count) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<T>*>(this, "GetRange", index, count));
    }
    // public System.Void InsertRange(System.Int32 index, System.Collections.Generic.IEnumerable`1<T> collection)
    // Offset: 0xFFFFFFFF
    void InsertRange(int index, System::Collections::Generic::IEnumerable_1<T>* collection) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "InsertRange", index, collection));
    }
    // public System.Int32 RemoveAll(System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFF
    int RemoveAll(System::Predicate_1<T>* match) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "RemoveAll", match));
    }
    // public System.Void RemoveRange(System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void RemoveRange(int index, int count) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveRange", index, count));
    }
    // public System.Void Reverse()
    // Offset: 0xFFFFFFFF
    void Reverse() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reverse"));
    }
    // public System.Void Reverse(System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void Reverse(int index, int count) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reverse", index, count));
    }
    // public System.Void Sort()
    // Offset: 0xFFFFFFFF
    void Sort() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Sort"));
    }
    // public System.Void Sort(System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFF
    void Sort(System::Collections::Generic::IComparer_1<T>* comparer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Sort", comparer));
    }
    // public System.Void Sort(System.Int32 index, System.Int32 count, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFF
    void Sort(int index, int count, System::Collections::Generic::IComparer_1<T>* comparer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Sort", index, count, comparer));
    }
    // public System.Void Sort(System.Comparison`1<T> comparison)
    // Offset: 0xFFFFFFFF
    void Sort(System::Comparison_1<T>* comparison) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Sort", comparison));
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFF
    ::Array<T>* ToArray() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(this, "ToArray"));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get(), ".cctor"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static List_1<T>* New_ctor() {
      return (List_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<List_1<T>*>::get()));
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
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly")));
    }
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool System_Collections_IList_get_IsReadOnly() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IList.get_IsReadOnly"));
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
    // private System.Int32 System.Collections.IList.Add(System.Object item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object item)
    int System_Collections_IList_Add(::CsObject* item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IList.Add", item));
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
    // private System.Boolean System.Collections.IList.Contains(System.Object item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object item)
    bool System_Collections_IList_Contains(::CsObject* item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IList.Contains", item));
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, arrayIndex));
    }
    // public System.Void CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::CopyTo(T[] array, System.Int32 arrayIndex)
    void CopyTo(::Array<T>* array, int arrayIndex) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, arrayIndex));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_CopyTo
    // Maps to method: CopyTo
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int arrayIndex) {
      CopyTo(array, arrayIndex);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator")));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
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
    // private System.Int32 System.Collections.IList.IndexOf(System.Object item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object item)
    int System_Collections_IList_IndexOf(::CsObject* item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IList.IndexOf", item));
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
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object item)
    void System_Collections_IList_Insert(int index, ::CsObject* item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Insert", index, item));
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
    // private System.Void System.Collections.IList.Remove(System.Object item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object item)
    void System_Collections_IList_Remove(::CsObject* item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IList.Remove", item));
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
  }; // System.Collections.Generic.List`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::List_1, "System.Collections.Generic", "List`1");
#pragma pack(pop)
