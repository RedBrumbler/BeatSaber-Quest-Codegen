#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class Array;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator;
}
// Type: ::ArraySubsetEnumerator
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8294))
// CS Name: System.ComponentModel.EventDescriptorCollection::ArraySubsetEnumerator
class CORDL_TYPE System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator(System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator(System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator& operator=(System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator&& o) noexcept = default;
  constexpr System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator& operator=(System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator const& o) noexcept = default;
                


// Fields

 System::Array __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(System::Array value) ;

constexpr System::Array __get__array() const;

 int32_t __declspec(property(get=__get__total, put=__set__total))  _total;

constexpr void __set__total(int32_t value) ;

constexpr int32_t __get__total() const;

 int32_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(int32_t value) ;

constexpr int32_t __get__current() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "array", ty: "System::Array", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator(System::Array array, int32_t count) ;

/// @brief Method .ctor addr 0x27ae214 size 0x34 virtual false final false
 void _ctor(System::Array array, int32_t count) ;

/// @brief Method MoveNext addr 0x27ae798 size 0x28 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27ae7c0 size 0xc virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x27ae7cc size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::EventDescriptorCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8295))
// CS Name: System.ComponentModel.EventDescriptorCollection
class CORDL_TYPE EventDescriptorCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ArraySubsetEnumerator = System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EventDescriptorCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptorCollection", modifiers: " const&", def_value: None }]
constexpr EventDescriptorCollection(EventDescriptorCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptorCollection", modifiers: "&&", def_value: None }]
constexpr EventDescriptorCollection(EventDescriptorCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventDescriptorCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventDescriptorCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventDescriptorCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventDescriptorCollection& operator=(EventDescriptorCollection&& o) noexcept = default;
  constexpr EventDescriptorCollection& operator=(EventDescriptorCollection const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::ComponentModel::EventDescriptor> __declspec(property(get=__get__events, put=__set__events))  _events;

constexpr void __set__events(::ArrayW<System::ComponentModel::EventDescriptor> value) ;

constexpr ::ArrayW<System::ComponentModel::EventDescriptor> __get__events() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__namedSort, put=__set__namedSort))  _namedSort;

constexpr void __set__namedSort(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__namedSort() const;

 System::Collections::IComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::IComparer value) ;

constexpr System::Collections::IComparer __get__comparer() const;

 bool __declspec(property(get=__get__eventsOwned, put=__set__eventsOwned))  _eventsOwned;

constexpr void __set__eventsOwned(bool value) ;

constexpr bool __get__eventsOwned() const;

 bool __declspec(property(get=__get__needSort, put=__set__needSort))  _needSort;

constexpr void __set__needSort(bool value) ;

constexpr bool __get__needSort() const;

 bool __declspec(property(get=__get__readOnly, put=__set__readOnly))  _readOnly;

constexpr void __set__readOnly(bool value) ;

constexpr bool __get__readOnly() const;

static System::ComponentModel::EventDescriptorCollection __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::ComponentModel::EventDescriptorCollection value) ;

static System::ComponentModel::EventDescriptorCollection __get_Empty() ;

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;

 System::ComponentModel::EventDescriptor __declspec(property(get=get_Item))  Item;

 System::ComponentModel::EventDescriptor __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;

 bool __declspec(property(get=System_Collections_IList_get_IsReadOnly))  System_Collections_IList_IsReadOnly;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;


// Methods

// Ctor Parameters [CppParam { name: "events", ty: "::ArrayW<System::ComponentModel::EventDescriptor>", modifiers: "", def_value: None }]
explicit EventDescriptorCollection(::ArrayW<System::ComponentModel::EventDescriptor> events) ;

/// @brief Method .ctor addr 0x27ad6f0 size 0xb0 virtual false final false
 void _ctor(::ArrayW<System::ComponentModel::EventDescriptor> events) ;

// Ctor Parameters [CppParam { name: "events", ty: "::ArrayW<System::ComponentModel::EventDescriptor>", modifiers: "", def_value: None }, CppParam { name: "readOnly", ty: "bool", modifiers: "", def_value: None }]
explicit EventDescriptorCollection(::ArrayW<System::ComponentModel::EventDescriptor> events, bool readOnly) ;

/// @brief Method .ctor addr 0x27ad7a0 size 0x24 virtual false final false
 void _ctor(::ArrayW<System::ComponentModel::EventDescriptor> events, bool readOnly) ;

/// @brief Method get_Count addr 0x27ad7c4 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x27ad7cc size 0x8 virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method get_Item addr 0x27ad7d4 size 0x8c virtual true final false
 System::ComponentModel::EventDescriptor get_Item(int32_t index) ;

/// @brief Method get_Item addr 0x27ad90c size 0x14 virtual true final false
 System::ComponentModel::EventDescriptor get_Item(::StringW name) ;

/// @brief Method Add addr 0x27ad920 size 0xd0 virtual false final false
 int32_t Add(System::ComponentModel::EventDescriptor value) ;

/// @brief Method Clear addr 0x27adaf0 size 0x54 virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x27adb44 size 0x18 virtual false final false
 bool Contains(System::ComponentModel::EventDescriptor value) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27adbbc size 0x3c virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method EnsureEventsOwned addr 0x27ad860 size 0xac virtual false final false
 void EnsureEventsOwned() ;

/// @brief Method EnsureSize addr 0x27ad9f0 size 0x100 virtual false final false
 void EnsureSize(int32_t sizeNeeded) ;

/// @brief Method Find addr 0x27ade54 size 0x114 virtual true final false
 System::ComponentModel::EventDescriptor Find(::StringW name, bool ignoreCase) ;

/// @brief Method IndexOf addr 0x27adb5c size 0x60 virtual false final false
 int32_t IndexOf(System::ComponentModel::EventDescriptor value) ;

/// @brief Method Insert addr 0x27adf68 size 0xf0 virtual false final false
 void Insert(int32_t index, System::ComponentModel::EventDescriptor value) ;

/// @brief Method Remove addr 0x27ae058 size 0x70 virtual false final false
 void Remove(System::ComponentModel::EventDescriptor value) ;

/// @brief Method RemoveAt addr 0x27ae0c8 size 0xb4 virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method GetEnumerator addr 0x27ae17c size 0x98 virtual false final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method InternalSort addr 0x27adbf8 size 0x25c virtual false final false
 void InternalSort(::ArrayW<::StringW> names) ;

/// @brief Method InternalSort addr 0x27ae248 size 0x78 virtual false final false
 void InternalSort(System::Collections::IComparer sorter) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27ae2c0 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27ae2c8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x27ae2d0 size 0x8 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27ae2d8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.get_Item addr 0x27ae2dc size 0x10 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x27ae2ec size 0x178 virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Add addr 0x27ae464 size 0x84 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Contains addr 0x27ae4e8 size 0x90 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Clear addr 0x27ae578 size 0x4 virtual true final true
 void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.IndexOf addr 0x27ae57c size 0x84 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x27ae600 size 0x94 virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Remove addr 0x27ae694 size 0x84 virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.RemoveAt addr 0x27ae718 size 0x4 virtual true final true
 void System_Collections_IList_RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.get_IsReadOnly addr 0x27ae71c size 0x8 virtual true final true
 bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x27ae724 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::EventDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EventDescriptorCollection, "System.ComponentModel", "EventDescriptorCollection");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__EventDescriptorCollection__ArraySubsetEnumerator, "System.ComponentModel", "EventDescriptorCollection/ArraySubsetEnumerator");
