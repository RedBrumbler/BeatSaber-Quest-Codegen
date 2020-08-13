// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.DeserializableList`1
  template<typename T>
  class DeserializableList_1 : public ::CsObject, public System::Collections::Generic::IList_1<T>, public System::Collections::Generic::ICollection_1<T>, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::IEnumerable {
    public:
    // protected System.Collections.Generic.List`1<T> _Data
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* Data;
    // protected System.String _NextUrl
    // Offset: 0x0
    ::CsString* NextUrl;
    // protected System.String _PreviousUrl
    // Offset: 0x0
    ::CsString* PreviousUrl;
    // private System.Collections.IEnumerator GetEnumerator1()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* GetEnumerator1() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator1"));
    }
    // public System.Collections.Generic.List`1<T> get_Data()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<T>* get_Data() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<T>*>(this, "get_Data"));
    }
    // public System.Boolean get_HasNextPage()
    // Offset: 0xFFFFFFFF
    bool get_HasNextPage() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasNextPage"));
    }
    // public System.Boolean get_HasPreviousPage()
    // Offset: 0xFFFFFFFF
    bool get_HasPreviousPage() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasPreviousPage"));
    }
    // public System.String get_NextUrl()
    // Offset: 0xFFFFFFFF
    ::CsString* get_NextUrl() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NextUrl"));
    }
    // public System.String get_PreviousUrl()
    // Offset: 0xFFFFFFFF
    ::CsString* get_PreviousUrl() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PreviousUrl"));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection`1::get_Count()
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count() {
      return get_Count();
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly")));
    }
    // public System.Int32 IndexOf(T obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Int32 IList`1::IndexOf(T obj)
    int IndexOf(T obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "IndexOf", obj));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_IndexOf
    // Maps to method: IndexOf
    int System_Collections_Generic_IList_1_IndexOf(T obj) {
      return IndexOf(obj);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: T IList`1::get_Item(System.Int32 index)
    T get_Item(int index) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Item", index));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_get_Item
    // Maps to method: get_Item
    T System_Collections_Generic_IList_1_get_Item(int index) {
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
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear() {
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
    void RemoveAt(int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveAt", index));
    }
    // Creating proxy method: System_Collections_Generic_IList_1_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_Generic_IList_1_RemoveAt(int index) {
      RemoveAt(index);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DeserializableList_1<T>* New_ctor() {
      return (DeserializableList_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DeserializableList_1<T>*>::get()));
    }
  }; // Oculus.Platform.Models.DeserializableList`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Models::DeserializableList_1, "Oculus.Platform.Models", "DeserializableList`1");
#pragma pack(pop)
