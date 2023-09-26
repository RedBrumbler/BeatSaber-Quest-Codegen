#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IFixedSizePriorityQueue_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename T>
class Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22;
}
namespace Priority_Queue {
template<typename T>
class StablePriorityQueue_1;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type T>
class Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type T>
class StablePriorityQueue_1<T>;
}
// Type: ::<GetEnumerator>d__22
// Type: Priority_Queue::StablePriorityQueue`1
// Type: ::<GetEnumerator>d__22
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6189))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6189), inst: 2 })
// CS Name: Priority_Queue.StablePriorityQueue`1::<GetEnumerator>d__22
class CORDL_TYPE Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22", modifiers: " const&", def_value: None }]
constexpr Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22(Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22", modifiers: "&&", def_value: None }]
constexpr Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22(Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22& operator=(Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22&& o) noexcept = default;
  constexpr Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22& operator=(Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 Priority_Queue::StablePriorityQueue_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Priority_Queue::StablePriorityQueue_1<T> value) ;

constexpr Priority_Queue::StablePriorityQueue_1<T> __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::StablePriorityQueue`1
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6190))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 2 })
// CS Name: Priority_Queue.StablePriorityQueue`1
class CORDL_TYPE StablePriorityQueue_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__22 = Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>;

/// @brief Convert operator to Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>
constexpr operator  Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>() const noexcept;

/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<T,float_t>
constexpr operator  Priority_Queue::IPriorityQueue_2<T,float_t>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StablePriorityQueue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueue_1", modifiers: " const&", def_value: None }]
constexpr StablePriorityQueue_1(StablePriorityQueue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueue_1", modifiers: "&&", def_value: None }]
constexpr StablePriorityQueue_1(StablePriorityQueue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StablePriorityQueue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StablePriorityQueue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StablePriorityQueue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StablePriorityQueue_1& operator=(StablePriorityQueue_1&& o) noexcept = default;
  constexpr StablePriorityQueue_1& operator=(StablePriorityQueue_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numNodes, put=__set__numNodes))  _numNodes;

constexpr void __set__numNodes(int32_t value) ;

constexpr int32_t __get__numNodes() const;

 ::ArrayW<T> __declspec(property(get=__get__nodes, put=__set__nodes))  _nodes;

constexpr void __set__nodes(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__nodes() const;

 int64_t __declspec(property(get=__get__numNodesEverEnqueued, put=__set__numNodesEverEnqueued))  _numNodesEverEnqueued;

constexpr void __set__numNodesEverEnqueued(int64_t value) ;

constexpr int64_t __get__numNodesEverEnqueued() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_MaxSize))  MaxSize;

 T __declspec(property(get=get_First))  First;


// Methods

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }]
explicit StablePriorityQueue_1(int32_t maxNodes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_MaxSize() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T node) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(T node, float_t priority) ;

/// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
 void CascadeUp(T node) ;

/// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
 void CascadeDown(T node) ;

/// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasHigherPriority(T higher, T lower) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 T Dequeue() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
 void Resize(int32_t maxNodes) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_First() ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdatePriority(T node, float_t priority) ;

/// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnNodeUpdated(T node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(T node) ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
 void ResetNode(T node) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValidQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22, "Priority_Queue", "StablePriorityQueue`1/<GetEnumerator>d__22");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::StablePriorityQueue_1, "Priority_Queue", "StablePriorityQueue`1");
