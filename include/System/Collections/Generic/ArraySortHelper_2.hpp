// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.ArraySortHelper`2
  template<typename TKey, typename TValue>
  class ArraySortHelper_2 : public ::CsObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Collections.Generic.ArraySortHelper`2<TKey,TValue> s_defaultArraySortHelper
    static System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* _get_s_defaultArraySortHelper() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "s_defaultArraySortHelper")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Collections.Generic.ArraySortHelper`2<TKey,TValue> s_defaultArraySortHelper
    static void _set_s_defaultArraySortHelper(System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "s_defaultArraySortHelper", value)));
    }
    // static public System.Collections.Generic.ArraySortHelper`2<TKey,TValue> get_Default()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* get_Default() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "get_Default")));
    }
    // static private System.Collections.Generic.ArraySortHelper`2<TKey,TValue> CreateArraySortHelper()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* CreateArraySortHelper() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "CreateArraySortHelper")));
    }
    // public System.Void Sort(TKey[] keys, TValue[] values, System.Int32 index, System.Int32 length, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    void Sort(::Array<TKey>* keys, ::Array<TValue>* values, int index, int length, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Sort", keys, values, index, length, comparer));
    }
    // static private System.Void SwapIfGreaterWithItems(TKey[] keys, TValue[] values, System.Collections.Generic.IComparer`1<TKey> comparer, System.Int32 a, System.Int32 b)
    // Offset: 0xFFFFFFFF
    static void SwapIfGreaterWithItems(::Array<TKey>* keys, ::Array<TValue>* values, System::Collections::Generic::IComparer_1<TKey>* comparer, int a, int b) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "SwapIfGreaterWithItems", keys, values, comparer, a, b)));
    }
    // static private System.Void Swap(TKey[] keys, TValue[] values, System.Int32 i, System.Int32 j)
    // Offset: 0xFFFFFFFF
    static void Swap(::Array<TKey>* keys, ::Array<TValue>* values, int i, int j) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "Swap", keys, values, i, j)));
    }
    // static System.Void IntrospectiveSort(TKey[] keys, TValue[] values, System.Int32 left, System.Int32 length, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static void IntrospectiveSort(::Array<TKey>* keys, ::Array<TValue>* values, int left, int length, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "IntrospectiveSort", keys, values, left, length, comparer)));
    }
    // static private System.Void IntroSort(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Int32 depthLimit, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static void IntroSort(::Array<TKey>* keys, ::Array<TValue>* values, int lo, int hi, int depthLimit, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "IntroSort", keys, values, lo, hi, depthLimit, comparer)));
    }
    // static private System.Int32 PickPivotAndPartition(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static int PickPivotAndPartition(::Array<TKey>* keys, ::Array<TValue>* values, int lo, int hi, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "PickPivotAndPartition", keys, values, lo, hi, comparer)));
    }
    // static private System.Void Heapsort(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static void Heapsort(::Array<TKey>* keys, ::Array<TValue>* values, int lo, int hi, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "Heapsort", keys, values, lo, hi, comparer)));
    }
    // static private System.Void DownHeap(TKey[] keys, TValue[] values, System.Int32 i, System.Int32 n, System.Int32 lo, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static void DownHeap(::Array<TKey>* keys, ::Array<TValue>* values, int i, int n, int lo, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "DownHeap", keys, values, i, n, lo, comparer)));
    }
    // static private System.Void InsertionSort(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static void InsertionSort(::Array<TKey>* keys, ::Array<TValue>* values, int lo, int hi, System::Collections::Generic::IComparer_1<TKey>* comparer) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "InsertionSort", keys, values, lo, hi, comparer)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ArraySortHelper_2<TKey, TValue>* New_ctor() {
      return (ArraySortHelper_2<TKey, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get())));
    }
  }; // System.Collections.Generic.ArraySortHelper`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::ArraySortHelper_2, "System.Collections.Generic", "ArraySortHelper`2");
#pragma pack(pop)
