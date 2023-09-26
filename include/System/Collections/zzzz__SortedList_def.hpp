#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class ICollection;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class Array;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Collections {
class SortedList;
}
namespace System::Collections {
class System__Collections__SortedList__KeyList;
}
namespace System::Collections {
class System__Collections__SortedList__SortedListDebugView;
}
namespace System::Collections {
class System__Collections__SortedList__SortedListEnumerator;
}
namespace System::Collections {
class System__Collections__SortedList__SyncSortedList;
}
namespace System::Collections {
class System__Collections__SortedList__ValueList;
}
// Type: System.Collections::SortedList
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3768))
// CS Name: System.Collections.SortedList
class CORDL_TYPE SortedList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SortedListDebugView = System::Collections::System__Collections__SortedList__SortedListDebugView;

using ValueList = System::Collections::System__Collections__SortedList__ValueList;

using KeyList = System::Collections::System__Collections__SortedList__KeyList;

using SortedListEnumerator = System::Collections::System__Collections__SortedList__SortedListEnumerator;

using SyncSortedList = System::Collections::System__Collections__SortedList__SyncSortedList;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SortedList() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedList", modifiers: " const&", def_value: None }]
constexpr SortedList(SortedList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedList", modifiers: "&&", def_value: None }]
constexpr SortedList(SortedList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortedList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortedList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortedList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortedList& operator=(SortedList&& o) noexcept = default;
  constexpr SortedList& operator=(SortedList const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_keys() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_values() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 System::Collections::IComparer __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::IComparer value) ;

constexpr System::Collections::IComparer __get_comparer() const;

 System::Collections::System__Collections__SortedList__KeyList __declspec(property(get=__get_keyList, put=__set_keyList))  keyList;

constexpr void __set_keyList(System::Collections::System__Collections__SortedList__KeyList value) ;

constexpr System::Collections::System__Collections__SortedList__KeyList __get_keyList() const;

 System::Collections::System__Collections__SortedList__ValueList __declspec(property(get=__get_valueList, put=__set_valueList))  valueList;

constexpr void __set_valueList(System::Collections::System__Collections__SortedList__ValueList value) ;

constexpr System::Collections::System__Collections__SortedList__ValueList __get_valueList() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 int32_t __declspec(property(put=set_Capacity))  Capacity;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit SortedList() ;

/// @brief Method .ctor addr 0x2445d74 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2445d90 size 0x134 virtual false final false
 void Init() ;

// Ctor Parameters [CppParam { name: "initialCapacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit SortedList(int32_t initialCapacity) ;

/// @brief Method .ctor addr 0x2445ec4 size 0x144 virtual false final false
 void _ctor(int32_t initialCapacity) ;

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::IComparer", modifiers: "", def_value: None }]
explicit SortedList(System::Collections::IComparer comparer) ;

/// @brief Method .ctor addr 0x2446008 size 0x34 virtual false final false
 void _ctor(System::Collections::IComparer comparer) ;

/// @brief Method Add addr 0x244603c size 0x130 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method set_Capacity addr 0x244629c size 0x1e8 virtual true final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_Count addr 0x2446484 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_Keys addr 0x244648c size 0x10 virtual true final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x244649c size 0x10 virtual true final false
 System::Collections::ICollection get_Values() ;

/// @brief Method get_IsReadOnly addr 0x24464ac size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x24464b4 size 0x8 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x24464bc size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x24464c4 size 0x78 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method Clear addr 0x244653c size 0x44 virtual true final false
 void Clear() ;

/// @brief Method Clone addr 0x2446580 size 0xac virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Contains addr 0x244662c size 0x24 virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ContainsValue addr 0x2446650 size 0x24 virtual true final false
 bool ContainsValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CopyTo addr 0x2446674 size 0x280 virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method EnsureCapacity addr 0x24468f4 size 0x4c virtual false final false
 void EnsureCapacity(int32_t min) ;

/// @brief Method GetByIndex addr 0x2446940 size 0xbc virtual true final false
 ::bs_hook::Il2CppWrapperType GetByIndex(int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x24469fc size 0x70 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x2446acc size 0x70 virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method GetKey addr 0x2446b3c size 0xbc virtual true final false
 ::bs_hook::Il2CppWrapperType GetKey(int32_t index) ;

/// @brief Method GetKeyList addr 0x2446bf8 size 0x70 virtual true final false
 System::Collections::IList GetKeyList() ;

/// @brief Method GetValueList addr 0x2446c90 size 0x70 virtual true final false
 System::Collections::IList GetValueList() ;

/// @brief Method get_Item addr 0x2446d28 size 0x50 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x2446d78 size 0x124 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IndexOfKey addr 0x2446e9c size 0xa0 virtual true final false
 int32_t IndexOfKey(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method IndexOfValue addr 0x2446f3c size 0x60 virtual true final false
 int32_t IndexOfValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Insert addr 0x244616c size 0x130 virtual false final false
 void Insert(int32_t index, ::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method RemoveAt addr 0x2446f9c size 0x13c virtual true final false
 void RemoveAt(int32_t index) ;

/// @brief Method Remove addr 0x24470d8 size 0x40 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Synchronized addr 0x2447118 size 0xb0 virtual false final false
static System::Collections::SortedList Synchronized(System::Collections::SortedList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::SyncSortedList
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3768))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3763))
// CS Name: System.Collections.SortedList::SyncSortedList
class CORDL_TYPE System__Collections__SortedList__SyncSortedList : public System::Collections::SortedList {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~System__Collections__SortedList__SyncSortedList() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__SyncSortedList", modifiers: " const&", def_value: None }]
constexpr System__Collections__SortedList__SyncSortedList(System__Collections__SortedList__SyncSortedList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__SyncSortedList", modifiers: "&&", def_value: None }]
constexpr System__Collections__SortedList__SyncSortedList(System__Collections__SortedList__SyncSortedList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__SortedList__SyncSortedList(void* ptr) noexcept : System::Collections::SortedList(ptr) {
}


  constexpr System__Collections__SortedList__SyncSortedList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__SortedList__SyncSortedList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__SortedList__SyncSortedList& operator=(System__Collections__SortedList__SyncSortedList&& o) noexcept = default;
  constexpr System__Collections__SortedList__SyncSortedList& operator=(System__Collections__SortedList__SyncSortedList const& o) noexcept = default;
                


// Fields

 System::Collections::SortedList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::SortedList value) ;

constexpr System::Collections::SortedList __get__list() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__root, put=__set__root))  _root;

constexpr void __set__root(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__root() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::SortedList", modifiers: "", def_value: None }]
explicit System__Collections__SortedList__SyncSortedList(System::Collections::SortedList list) ;

/// @brief Method .ctor addr 0x24471c8 size 0x50 virtual false final false
 void _ctor(System::Collections::SortedList list) ;

/// @brief Method get_Count addr 0x2447218 size 0xe4 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_SyncRoot addr 0x24472fc size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_IsReadOnly addr 0x2447304 size 0x24 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x2447328 size 0x24 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x244734c size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_Item addr 0x2447354 size 0xec virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x2447440 size 0xe4 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Add addr 0x2447524 size 0xe4 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x2447608 size 0xd4 virtual true final false
 void Clear() ;

/// @brief Method Clone addr 0x24476dc size 0xe4 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Contains addr 0x24477c0 size 0xec virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ContainsValue addr 0x24478ac size 0xec virtual true final false
 bool ContainsValue(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyTo addr 0x2447998 size 0xe4 virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetByIndex addr 0x2447a7c size 0xec virtual true final false
 ::bs_hook::Il2CppWrapperType GetByIndex(int32_t index) ;

/// @brief Method GetEnumerator addr 0x2447b68 size 0xe4 virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method GetKey addr 0x2447c4c size 0xec virtual true final false
 ::bs_hook::Il2CppWrapperType GetKey(int32_t index) ;

/// @brief Method GetKeyList addr 0x2447d38 size 0xe4 virtual true final false
 System::Collections::IList GetKeyList() ;

/// @brief Method GetValueList addr 0x2447e1c size 0xe4 virtual true final false
 System::Collections::IList GetValueList() ;

/// @brief Method IndexOfKey addr 0x2447f00 size 0x154 virtual true final false
 int32_t IndexOfKey(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method IndexOfValue addr 0x2448054 size 0xec virtual true final false
 int32_t IndexOfValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method RemoveAt addr 0x2448140 size 0xdc virtual true final false
 void RemoveAt(int32_t index) ;

/// @brief Method Remove addr 0x244821c size 0xdc virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::SortedListEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3764))
// CS Name: System.Collections.SortedList::SortedListEnumerator
class CORDL_TYPE System__Collections__SortedList__SortedListEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__Collections__SortedList__SortedListEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__SortedListEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__SortedList__SortedListEnumerator(System__Collections__SortedList__SortedListEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__SortedListEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__SortedList__SortedListEnumerator(System__Collections__SortedList__SortedListEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__SortedList__SortedListEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__SortedList__SortedListEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__SortedList__SortedListEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__SortedList__SortedListEnumerator& operator=(System__Collections__SortedList__SortedListEnumerator&& o) noexcept = default;
  constexpr System__Collections__SortedList__SortedListEnumerator& operator=(System__Collections__SortedList__SortedListEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::SortedList __declspec(property(get=__get__sortedList, put=__set__sortedList))  _sortedList;

constexpr void __set__sortedList(System::Collections::SortedList value) ;

constexpr System::Collections::SortedList __get__sortedList() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__startIndex, put=__set__startIndex))  _startIndex;

constexpr void __set__startIndex(int32_t value) ;

constexpr int32_t __get__startIndex() const;

 int32_t __declspec(property(get=__get__endIndex, put=__set__endIndex))  _endIndex;

constexpr void __set__endIndex(int32_t value) ;

constexpr int32_t __get__endIndex() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 bool __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(bool value) ;

constexpr bool __get__current() const;

 int32_t __declspec(property(get=__get__getObjectRetType, put=__set__getObjectRetType))  _getObjectRetType;

constexpr void __set__getObjectRetType(int32_t value) ;

constexpr int32_t __get__getObjectRetType() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "sortedList", ty: "System::Collections::SortedList", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "getObjRetType", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Collections__SortedList__SortedListEnumerator(System::Collections::SortedList sortedList, int32_t index, int32_t count, int32_t getObjRetType) ;

/// @brief Method .ctor addr 0x2446a6c size 0x60 virtual false final false
 void _ctor(System::Collections::SortedList sortedList, int32_t index, int32_t count, int32_t getObjRetType) ;

/// @brief Method Clone addr 0x24482f8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_Key addr 0x2448300 size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method MoveNext addr 0x24483a4 size 0xec virtual true final false
 bool MoveNext() ;

/// @brief Method get_Entry addr 0x2448490 size 0xa8 virtual true final false
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Current addr 0x2448538 size 0xd4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Value addr 0x244860c size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method Reset addr 0x24486b0 size 0x84 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::KeyList
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3765))
// CS Name: System.Collections.SortedList::KeyList
class CORDL_TYPE System__Collections__SortedList__KeyList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Collections__SortedList__KeyList() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__KeyList", modifiers: " const&", def_value: None }]
constexpr System__Collections__SortedList__KeyList(System__Collections__SortedList__KeyList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__KeyList", modifiers: "&&", def_value: None }]
constexpr System__Collections__SortedList__KeyList(System__Collections__SortedList__KeyList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__SortedList__KeyList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__SortedList__KeyList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__SortedList__KeyList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__SortedList__KeyList& operator=(System__Collections__SortedList__KeyList&& o) noexcept = default;
  constexpr System__Collections__SortedList__KeyList& operator=(System__Collections__SortedList__KeyList const& o) noexcept = default;
                


// Fields

 System::Collections::SortedList __declspec(property(get=__get_sortedList, put=__set_sortedList))  sortedList;

constexpr void __set_sortedList(System::Collections::SortedList value) ;

constexpr System::Collections::SortedList __get_sortedList() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters [CppParam { name: "sortedList", ty: "System::Collections::SortedList", modifiers: "", def_value: None }]
explicit System__Collections__SortedList__KeyList(System::Collections::SortedList sortedList) ;

/// @brief Method .ctor addr 0x2446c68 size 0x28 virtual false final false
 void _ctor(System::Collections::SortedList sortedList) ;

/// @brief Method get_Count addr 0x2448734 size 0x1c virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x2448750 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x2448758 size 0x8 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x2448760 size 0x24 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x2448784 size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method Add addr 0x24487a8 size 0x50 virtual true final false
 int32_t Add(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Clear addr 0x24487f8 size 0x50 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x2448848 size 0x24 virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyTo addr 0x244886c size 0xd0 virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method Insert addr 0x244893c size 0x50 virtual true final false
 void Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Item addr 0x244898c size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x24489b0 size 0x50 virtual true final false
 void set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumerator addr 0x2448a00 size 0x90 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method IndexOf addr 0x2448a90 size 0xcc virtual true final false
 int32_t IndexOf(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Remove addr 0x2448b5c size 0x50 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method RemoveAt addr 0x2448bac size 0x50 virtual true final false
 void RemoveAt(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::ValueList
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3766))
// CS Name: System.Collections.SortedList::ValueList
class CORDL_TYPE System__Collections__SortedList__ValueList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Collections__SortedList__ValueList() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__ValueList", modifiers: " const&", def_value: None }]
constexpr System__Collections__SortedList__ValueList(System__Collections__SortedList__ValueList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__ValueList", modifiers: "&&", def_value: None }]
constexpr System__Collections__SortedList__ValueList(System__Collections__SortedList__ValueList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__SortedList__ValueList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__SortedList__ValueList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__SortedList__ValueList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__SortedList__ValueList& operator=(System__Collections__SortedList__ValueList&& o) noexcept = default;
  constexpr System__Collections__SortedList__ValueList& operator=(System__Collections__SortedList__ValueList const& o) noexcept = default;
                


// Fields

 System::Collections::SortedList __declspec(property(get=__get_sortedList, put=__set_sortedList))  sortedList;

constexpr void __set_sortedList(System::Collections::SortedList value) ;

constexpr System::Collections::SortedList __get_sortedList() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters [CppParam { name: "sortedList", ty: "System::Collections::SortedList", modifiers: "", def_value: None }]
explicit System__Collections__SortedList__ValueList(System::Collections::SortedList sortedList) ;

/// @brief Method .ctor addr 0x2446d00 size 0x28 virtual false final false
 void _ctor(System::Collections::SortedList sortedList) ;

/// @brief Method get_Count addr 0x2448bfc size 0x1c virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x2448c18 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x2448c20 size 0x8 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x2448c28 size 0x24 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x2448c4c size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method Add addr 0x2448c70 size 0x50 virtual true final false
 int32_t Add(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Clear addr 0x2448cc0 size 0x50 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x2448d10 size 0x24 virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CopyTo addr 0x2448d34 size 0xd0 virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method Insert addr 0x2448e04 size 0x50 virtual true final false
 void Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Item addr 0x2448e54 size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2448e78 size 0x50 virtual true final false
 void set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumerator addr 0x2448ec8 size 0x90 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method IndexOf addr 0x2448f58 size 0x78 virtual true final false
 int32_t IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Remove addr 0x2448fd0 size 0x50 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method RemoveAt addr 0x2449020 size 0x50 virtual true final false
 void RemoveAt(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::SortedListDebugView
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3767))
// CS Name: System.Collections.SortedList::SortedListDebugView
class CORDL_TYPE System__Collections__SortedList__SortedListDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Collections__SortedList__SortedListDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__SortedListDebugView", modifiers: " const&", def_value: None }]
constexpr System__Collections__SortedList__SortedListDebugView(System__Collections__SortedList__SortedListDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__SortedList__SortedListDebugView", modifiers: "&&", def_value: None }]
constexpr System__Collections__SortedList__SortedListDebugView(System__Collections__SortedList__SortedListDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__SortedList__SortedListDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__SortedList__SortedListDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__SortedList__SortedListDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__SortedList__SortedListDebugView& operator=(System__Collections__SortedList__SortedListDebugView&& o) noexcept = default;
  constexpr System__Collections__SortedList__SortedListDebugView& operator=(System__Collections__SortedList__SortedListDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::SortedList);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList, "System.Collections", "SortedList");
NEED_NO_BOX(System::Collections::System__Collections__SortedList__KeyList);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__SortedList__KeyList, "System.Collections", "SortedList/KeyList");
NEED_NO_BOX(System::Collections::System__Collections__SortedList__SortedListDebugView);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__SortedList__SortedListDebugView, "System.Collections", "SortedList/SortedListDebugView");
NEED_NO_BOX(System::Collections::System__Collections__SortedList__SortedListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__SortedList__SortedListEnumerator, "System.Collections", "SortedList/SortedListEnumerator");
NEED_NO_BOX(System::Collections::System__Collections__SortedList__SyncSortedList);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__SortedList__SyncSortedList, "System.Collections", "SortedList/SyncSortedList");
NEED_NO_BOX(System::Collections::System__Collections__SortedList__ValueList);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__SortedList__ValueList, "System.Collections", "SortedList/ValueList");
