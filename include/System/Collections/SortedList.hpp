// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::SortedList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList*, "System.Collections", "SortedList");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 1080158
  // [ComVisibleAttribute] Offset: 1080158
  // [DebuggerTypeProxyAttribute] Offset: 1080158
  // [DefaultMemberAttribute] Offset: 1080158
  class SortedList : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IDictionary*/ {
    public:
    // Nested type: ::System::Collections::SortedList::SyncSortedList
    class SyncSortedList;
    // Nested type: ::System::Collections::SortedList::SortedListEnumerator
    class SortedListEnumerator;
    // Nested type: ::System::Collections::SortedList::KeyList
    class KeyList;
    // Nested type: ::System::Collections::SortedList::ValueList
    class ValueList;
    // Nested type: ::System::Collections::SortedList::SortedListDebugView
    class SortedListDebugView;
    public:
    // private System.Object[] keys
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> keys;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Object[] values
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x24
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::IComparer*) == 0x8);
    // private System.Collections.SortedList/System.Collections.KeyList keyList
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::SortedList::KeyList* keyList;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList::KeyList*) == 0x8);
    // private System.Collections.SortedList/System.Collections.ValueList valueList
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::SortedList::ValueList* valueList;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList::ValueList*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IDictionary
    operator ::System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // Creating interface conversion operator: i_IDictionary
    inline ::System::Collections::IDictionary* i_IDictionary() noexcept {
      return reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // static field const value: static private System.Int32 _defaultCapacity
    static constexpr const int _defaultCapacity = 16;
    // Get static field: static private System.Int32 _defaultCapacity
    static int _get__defaultCapacity();
    // Set static field: static private System.Int32 _defaultCapacity
    static void _set__defaultCapacity(int value);
    // Get static field: static private System.Object[] emptyArray
    static ::ArrayW<::Il2CppObject*> _get_emptyArray();
    // Set static field: static private System.Object[] emptyArray
    static void _set_emptyArray(::ArrayW<::Il2CppObject*> value);
    // Get instance field reference: private System.Object[] keys
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_keys();
    // Get instance field reference: private System.Object[] values
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_values();
    // Get instance field reference: private System.Int32 _size
    [[deprecated("Use field access instead!")]] int& dyn__size();
    // Get instance field reference: private System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // Get instance field reference: private System.Collections.IComparer comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::IComparer*& dyn_comparer();
    // Get instance field reference: private System.Collections.SortedList/System.Collections.KeyList keyList
    [[deprecated("Use field access instead!")]] ::System::Collections::SortedList::KeyList*& dyn_keyList();
    // Get instance field reference: private System.Collections.SortedList/System.Collections.ValueList valueList
    [[deprecated("Use field access instead!")]] ::System::Collections::SortedList::ValueList*& dyn_valueList();
    // Get instance field reference: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot();
    // public System.Int32 get_Capacity()
    // Offset: 0x1DCC68C
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x1DCC6A8
    void set_Capacity(int value);
    // public System.Int32 get_Count()
    // Offset: 0x1DCC84C
    int get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x1DCC854
    ::System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x1DCC864
    ::System::Collections::ICollection* get_Values();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1DCC874
    bool get_IsReadOnly();
    // public System.Object get_SyncRoot()
    // Offset: 0x1DCC87C
    ::Il2CppObject* get_SyncRoot();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1DCD190
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1DCD1F4
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x1DCC204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>(initialCapacity)));
    }
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0x1DCC338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor(::System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>(comparer)));
    }
    // public System.Void .ctor(System.Collections.IComparer comparer, System.Int32 capacity)
    // Offset: 0x1DCC370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor(::System::Collections::IComparer* comparer, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>(comparer, capacity)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DCD784
    static void _cctor();
    // private System.Void Init()
    // Offset: 0x1DCC128
    void Init();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1DCC3A8
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void Clear()
    // Offset: 0x1DCC8F4
    void Clear();
    // public System.Object Clone()
    // Offset: 0x1DCC944
    ::Il2CppObject* Clone();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x1DCCA08
    bool Contains(::Il2CppObject* key);
    // public System.Boolean ContainsValue(System.Object value)
    // Offset: 0x1DCCA30
    bool ContainsValue(::Il2CppObject* value);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1DCCA58
    void CopyTo(::System::Array* array, int arrayIndex);
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0x1DCCCC8
    void EnsureCapacity(int min);
    // public System.Object GetByIndex(System.Int32 index)
    // Offset: 0x1DCCD14
    ::Il2CppObject* GetByIndex(int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1DCCE08
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1DCCEEC
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public System.Object GetKey(System.Int32 index)
    // Offset: 0x1DCCF64
    ::Il2CppObject* GetKey(int index);
    // public System.Collections.IList GetKeyList()
    // Offset: 0x1DCD058
    ::System::Collections::IList* GetKeyList();
    // public System.Collections.IList GetValueList()
    // Offset: 0x1DCD0F4
    ::System::Collections::IList* GetValueList();
    // public System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x1DCD344
    int IndexOfKey(::Il2CppObject* key);
    // public System.Int32 IndexOfValue(System.Object value)
    // Offset: 0x1DCD414
    int IndexOfValue(::Il2CppObject* value);
    // private System.Void Insert(System.Int32 index, System.Object key, System.Object value)
    // Offset: 0x1DCC550
    void Insert(int index, ::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x1DCD47C
    void RemoveAt(int index);
    // public System.Void Remove(System.Object key)
    // Offset: 0x1DCD5F0
    void Remove(::Il2CppObject* key);
    // static public System.Collections.SortedList Synchronized(System.Collections.SortedList list)
    // Offset: 0x1DCD640
    static ::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* list);
    // public System.Void .ctor()
    // Offset: 0x1DCC100
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>()));
    }
  }; // System.Collections.SortedList
  #pragma pack(pop)
  static check_size<sizeof(SortedList), 64 + sizeof(::Il2CppObject*)> __System_Collections_SortedListSizeCheck;
  static_assert(sizeof(SortedList) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::SortedList::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::*)()>(&System::Collections::SortedList::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::set_Capacity
// Il2CppName: set_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(int)>(&System::Collections::SortedList::set_Capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "set_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::*)()>(&System::Collections::SortedList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::*)()>(&System::Collections::SortedList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::SortedList::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::SortedList::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)()>(&System::Collections::SortedList::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::SortedList::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)()>(&System::Collections::SortedList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ContainsValue
// Il2CppName: ContainsValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ContainsValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "ContainsValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(::System::Array*, int)>(&System::Collections::SortedList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::EnsureCapacity
// Il2CppName: EnsureCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(int)>(&System::Collections::SortedList::EnsureCapacity)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "EnsureCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::GetByIndex
// Il2CppName: GetByIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::*)(int)>(&System::Collections::SortedList::GetByIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "GetByIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::*)(int)>(&System::Collections::SortedList::GetKey)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::GetKeyList
// Il2CppName: GetKeyList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::GetKeyList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "GetKeyList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::GetValueList
// Il2CppName: GetValueList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::Collections::SortedList::*)()>(&System::Collections::SortedList::GetValueList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "GetValueList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::IndexOfKey
// Il2CppName: IndexOfKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::IndexOfKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "IndexOfKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::IndexOfValue
// Il2CppName: IndexOfValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::IndexOfValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "IndexOfValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(int, ::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::SortedList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(int)>(&System::Collections::SortedList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::*)(::Il2CppObject*)>(&System::Collections::SortedList::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::Synchronized
// Il2CppName: Synchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::SortedList* (*)(::System::Collections::SortedList*)>(&System::Collections::SortedList::Synchronized)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Collections", "SortedList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList*), "Synchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
