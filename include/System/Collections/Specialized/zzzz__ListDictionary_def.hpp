#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Array;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
namespace System::Collections::Specialized {
class ListDictionary;
}
namespace System::Collections::Specialized {
class System__Collections__Specialized__ListDictionary__DictionaryNode;
}
namespace System::Collections::Specialized {
class System__Collections__Specialized__ListDictionary__NodeEnumerator;
}
namespace System::Collections::Specialized {
class System__Collections__Specialized__ListDictionary__NodeKeyValueCollection;
}
// Type: ::NodeEnumerator
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8378))
// CS Name: System.Collections.Specialized.ListDictionary::NodeEnumerator
class CORDL_TYPE System__Collections__Specialized__ListDictionary__NodeEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__Specialized__ListDictionary__NodeEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__NodeEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__NodeEnumerator(System__Collections__Specialized__ListDictionary__NodeEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__NodeEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__NodeEnumerator(System__Collections__Specialized__ListDictionary__NodeEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Specialized__ListDictionary__NodeEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Specialized__ListDictionary__NodeEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__NodeEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__NodeEnumerator& operator=(System__Collections__Specialized__ListDictionary__NodeEnumerator&& o) noexcept = default;
  constexpr System__Collections__Specialized__ListDictionary__NodeEnumerator& operator=(System__Collections__Specialized__ListDictionary__NodeEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::Specialized::ListDictionary __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Specialized::ListDictionary value) ;

constexpr System::Collections::Specialized::ListDictionary __get__list() const;

 System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode value) ;

constexpr System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __get__current() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 bool __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(bool value) ;

constexpr bool __get__start() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Specialized::ListDictionary", modifiers: "", def_value: None }]
explicit System__Collections__Specialized__ListDictionary__NodeEnumerator(System::Collections::Specialized::ListDictionary list) ;

/// @brief Method .ctor addr 0x27d9a10 size 0x44 virtual false final false
 void _ctor(System::Collections::Specialized::ListDictionary list) ;

/// @brief Method get_Current addr 0x27d9c4c size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Entry addr 0x27d9cb0 size 0x80 virtual true final true
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x27d9d30 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x27d9d94 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method MoveNext addr 0x27d9df8 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27d9e98 size 0x80 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: ::NodeKeyValueEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8379))
// CS Name: System.Collections.Specialized.ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator
class CORDL_TYPE System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator&& o) noexcept = default;
  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::Specialized::ListDictionary __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Specialized::ListDictionary value) ;

constexpr System::Collections::Specialized::ListDictionary __get__list() const;

 System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode value) ;

constexpr System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __get__current() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 bool __declspec(property(get=__get__isKeys, put=__set__isKeys))  _isKeys;

constexpr void __set__isKeys(bool value) ;

constexpr bool __get__isKeys() const;

 bool __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(bool value) ;

constexpr bool __get__start() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Specialized::ListDictionary", modifiers: "", def_value: None }, CppParam { name: "isKeys", ty: "bool", modifiers: "", def_value: None }]
explicit System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(System::Collections::Specialized::ListDictionary list, bool isKeys) ;

/// @brief Method .ctor addr 0x27da134 size 0x4c virtual false final false
 void _ctor(System::Collections::Specialized::ListDictionary list, bool isKeys) ;

/// @brief Method get_Current addr 0x27da180 size 0x78 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x27da1f8 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27da298 size 0x80 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NodeKeyValueCollection
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8380))
// CS Name: System.Collections.Specialized.ListDictionary::NodeKeyValueCollection
class CORDL_TYPE System__Collections__Specialized__ListDictionary__NodeKeyValueCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NodeKeyValueEnumerator = GlobalNamespace::System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Collections__Specialized__ListDictionary__NodeKeyValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__NodeKeyValueCollection", modifiers: " const&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__NodeKeyValueCollection", modifiers: "&&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Specialized__ListDictionary__NodeKeyValueCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection& operator=(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection&& o) noexcept = default;
  constexpr System__Collections__Specialized__ListDictionary__NodeKeyValueCollection& operator=(System__Collections__Specialized__ListDictionary__NodeKeyValueCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Specialized::ListDictionary __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Specialized::ListDictionary value) ;

constexpr System::Collections::Specialized::ListDictionary __get__list() const;

 bool __declspec(property(get=__get__isKeys, put=__set__isKeys))  _isKeys;

constexpr void __set__isKeys(bool value) ;

constexpr bool __get__isKeys() const;


// Properties

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::Specialized::ListDictionary", modifiers: "", def_value: None }, CppParam { name: "isKeys", ty: "bool", modifiers: "", def_value: None }]
explicit System__Collections__Specialized__ListDictionary__NodeKeyValueCollection(System::Collections::Specialized::ListDictionary list, bool isKeys) ;

/// @brief Method .ctor addr 0x27d9334 size 0x30 virtual false final false
 void _ctor(System::Collections::Specialized::ListDictionary list, bool isKeys) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27d9f18 size 0x14c virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x27da064 size 0x38 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27da09c size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27da0a4 size 0x18 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27da0bc size 0x78 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: ::DictionaryNode
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8381))
// CS Name: System.Collections.Specialized.ListDictionary::DictionaryNode
class CORDL_TYPE System__Collections__Specialized__ListDictionary__DictionaryNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__Specialized__ListDictionary__DictionaryNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__DictionaryNode", modifiers: " const&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__DictionaryNode(System__Collections__Specialized__ListDictionary__DictionaryNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__ListDictionary__DictionaryNode", modifiers: "&&", def_value: None }]
constexpr System__Collections__Specialized__ListDictionary__DictionaryNode(System__Collections__Specialized__ListDictionary__DictionaryNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Specialized__ListDictionary__DictionaryNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Specialized__ListDictionary__DictionaryNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__DictionaryNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Specialized__ListDictionary__DictionaryNode& operator=(System__Collections__Specialized__ListDictionary__DictionaryNode&& o) noexcept = default;
  constexpr System__Collections__Specialized__ListDictionary__DictionaryNode& operator=(System__Collections__Specialized__ListDictionary__DictionaryNode const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;

 System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode value) ;

constexpr System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __get_next() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Specialized__ListDictionary__DictionaryNode() ;

/// @brief Method .ctor addr 0x27d92b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: System.Collections.Specialized::ListDictionary
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8382))
// CS Name: System.Collections.Specialized.ListDictionary
class CORDL_TYPE ListDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DictionaryNode = System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode;

using NodeKeyValueCollection = System::Collections::Specialized::System__Collections__Specialized__ListDictionary__NodeKeyValueCollection;

using NodeEnumerator = System::Collections::Specialized::System__Collections__Specialized__ListDictionary__NodeEnumerator;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ListDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListDictionary", modifiers: " const&", def_value: None }]
constexpr ListDictionary(ListDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListDictionary", modifiers: "&&", def_value: None }]
constexpr ListDictionary(ListDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListDictionary& operator=(ListDictionary&& o) noexcept = default;
  constexpr ListDictionary& operator=(ListDictionary const& o) noexcept = default;
                


// Fields

 System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode value) ;

constexpr System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode __get_head() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::IComparer __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::IComparer value) ;

constexpr System::Collections::IComparer __get_comparer() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;


// Methods

// Ctor Parameters []
explicit ListDictionary() ;

/// @brief Method .ctor addr 0x27d8f60 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::IComparer", modifiers: "", def_value: None }]
explicit ListDictionary(System::Collections::IComparer comparer) ;

/// @brief Method .ctor addr 0x27d8f68 size 0x28 virtual false final false
 void _ctor(System::Collections::IComparer comparer) ;

/// @brief Method get_Item addr 0x27d8f90 size 0x164 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x27d90f4 size 0x1c4 virtual true final true
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Count addr 0x27d92c0 size 0x8 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Keys addr 0x27d92c8 size 0x6c virtual true final true
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_IsReadOnly addr 0x27d9364 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x27d936c size 0x8 virtual true final true
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x27d9374 size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x27d937c size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Values addr 0x27d93f8 size 0x68 virtual true final true
 System::Collections::ICollection get_Values() ;

/// @brief Method Add addr 0x27d9460 size 0x218 virtual true final true
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x27d9678 size 0x14 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x27d968c size 0x154 virtual true final true
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyTo addr 0x27d97e0 size 0x1d0 virtual true final true
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x27d99b0 size 0x60 virtual true final true
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27d9a54 size 0x60 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Remove addr 0x27d9ab4 size 0x198 virtual true final true
 void Remove(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
NEED_NO_BOX(GlobalNamespace::System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Collections__Specialized__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator");
NEED_NO_BOX(System::Collections::Specialized::ListDictionary);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary, "System.Collections.Specialized", "ListDictionary");
NEED_NO_BOX(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__DictionaryNode, "System.Collections.Specialized", "ListDictionary/DictionaryNode");
NEED_NO_BOX(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__NodeEnumerator, "System.Collections.Specialized", "ListDictionary/NodeEnumerator");
NEED_NO_BOX(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::System__Collections__Specialized__ListDictionary__NodeKeyValueCollection, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection");
