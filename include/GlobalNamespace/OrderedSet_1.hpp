// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Node because it is already included!
  // Skipping declaration: <GetEnumerator>d__21 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OrderedSet`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class OrderedSet_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Nested type: GlobalNamespace::OrderedSet_1::Node<T>
    class Node;
    // Nested type: GlobalNamespace::OrderedSet_1::$GetEnumerator$d__21<T>
    class $GetEnumerator$d__21;
    // WARNING Size may be invalid!
    // Autogenerated type: OrderedSet`1/Node
    // [] Offset: FFFFFFFF
    class Node : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Node";
      // public readonly T value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T value;
      // public OrderedSet`1/Node<T> previous
      // Size: 0x8
      // Offset: 0x0
      typename GlobalNamespace::OrderedSet_1<T>::Node* previous;
      // Field size check
      static_assert(sizeof(typename GlobalNamespace::OrderedSet_1<T>::Node*) == 0x8);
      // public OrderedSet`1/Node<T> next
      // Size: 0x8
      // Offset: 0x0
      typename GlobalNamespace::OrderedSet_1<T>::Node* next;
      // Field size check
      static_assert(sizeof(typename GlobalNamespace::OrderedSet_1<T>::Node*) == 0x8);
      // public System.Boolean isRemoved
      // Size: 0x1
      // Offset: 0x0
      bool isRemoved;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Int32 clearCount
      // Size: 0x4
      // Offset: 0x0
      int clearCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Node
      Node(T value_ = {}, typename GlobalNamespace::OrderedSet_1<T>::Node* previous_ = {}, typename GlobalNamespace::OrderedSet_1<T>::Node* next_ = {}, bool isRemoved_ = {}, int clearCount_ = {}) noexcept : value{value_}, previous{previous_}, next{next_}, isRemoved{isRemoved_}, clearCount{clearCount_} {}
      // public System.Void .ctor(T value, System.Int32 clearCount)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename OrderedSet_1<T>::Node* New_ctor(T value, int clearCount) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Node").WithContext(".ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename OrderedSet_1<T>::Node*, creationType>(value, clearCount)));
      }
    }; // OrderedSet`1/Node
    // Could not write size check! Type: OrderedSet`1/Node is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: OrderedSet`1/<GetEnumerator>d__21
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: DA9A34
    class $GetEnumerator$d__21 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$GetEnumerator$d__21";
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T $$2__current;
      // public OrderedSet`1<T> <>4__this
      // Size: 0x8
      // Offset: 0x0
      GlobalNamespace::OrderedSet_1<T>* $$4__this;
      // Field size check
      static_assert(sizeof(GlobalNamespace::OrderedSet_1<T>*) == 0x8);
      // private OrderedSet`1/Node<T> <next>5__2
      // Size: 0x8
      // Offset: 0x0
      typename GlobalNamespace::OrderedSet_1<T>::Node* $next$5__2;
      // Field size check
      static_assert(sizeof(typename GlobalNamespace::OrderedSet_1<T>::Node*) == 0x8);
      // Creating value type constructor for type: $GetEnumerator$d__21
      $GetEnumerator$d__21(int $$1__state_ = {}, T $$2__current_ = {}, GlobalNamespace::OrderedSet_1<T>* $$4__this_ = {}, typename GlobalNamespace::OrderedSet_1<T>::Node* $next$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $next$5__2{$next$5__2_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename OrderedSet_1<T>::$GetEnumerator$d__21* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$GetEnumerator$d__21").WithContext(".ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename OrderedSet_1<T>::$GetEnumerator$d__21*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$GetEnumerator$d__21").WithContext("System.IDisposable.Dispose");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$GetEnumerator$d__21").WithContext("MoveNext");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // private T System.Collections.Generic.IEnumerator<T>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      T System_Collections_Generic_IEnumerator_1_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$GetEnumerator$d__21").WithContext("System.Collections.Generic.IEnumerator<T>.get_Current");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$GetEnumerator$d__21").WithContext("System.Collections.IEnumerator.Reset");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$GetEnumerator$d__21").WithContext("System.Collections.IEnumerator.get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
    }; // OrderedSet`1/<GetEnumerator>d__21
    // Could not write size check! Type: OrderedSet`1/<GetEnumerator>d__21 is generic, or has no fields that are valid for size checks!
    // private readonly System.Comparison`1<T> _comparison
    // Size: 0x8
    // Offset: 0x0
    System::Comparison_1<T>* comparison;
    // Field size check
    static_assert(sizeof(System::Comparison_1<T>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<T,OrderedSet`1/Node<T>> _sortIndices
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<T, typename GlobalNamespace::OrderedSet_1<T>::Node*>* sortIndices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<T, typename GlobalNamespace::OrderedSet_1<T>::Node*>*) == 0x8);
    // private OrderedSet`1/Node<T> _head
    // Size: 0x8
    // Offset: 0x0
    typename GlobalNamespace::OrderedSet_1<T>::Node* head;
    // Field size check
    static_assert(sizeof(typename GlobalNamespace::OrderedSet_1<T>::Node*) == 0x8);
    // private OrderedSet`1/Node<T> _tail
    // Size: 0x8
    // Offset: 0x0
    typename GlobalNamespace::OrderedSet_1<T>::Node* tail;
    // Field size check
    static_assert(sizeof(typename GlobalNamespace::OrderedSet_1<T>::Node*) == 0x8);
    // private System.Int32 _clearCount
    // Size: 0x4
    // Offset: 0x0
    int clearCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OrderedSet_1
    OrderedSet_1(System::Comparison_1<T>* comparison_ = {}, System::Collections::Generic::Dictionary_2<T, typename GlobalNamespace::OrderedSet_1<T>::Node*>* sortIndices_ = {}, typename GlobalNamespace::OrderedSet_1<T>::Node* head_ = {}, typename GlobalNamespace::OrderedSet_1<T>::Node* tail_ = {}, int clearCount_ = {}) noexcept : comparison{comparison_}, sortIndices{sortIndices_}, head{head_}, tail{tail_}, clearCount{clearCount_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<T>
    operator System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // public System.Int32 get_count()
    // Offset: 0xFFFFFFFF
    int get_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("get_count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Comparison`1<T> comparison)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderedSet_1<T>* New_ctor(System::Comparison_1<T>* comparison) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderedSet_1<T>*, creationType>(comparison)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("Clear");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("Contains");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void UpdateSortedPosition(T item)
    // Offset: 0xFFFFFFFF
    void UpdateSortedPosition(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("UpdateSortedPosition");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateSortedPosition", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void AppendNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void AppendNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("AppendNode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AppendNode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void AppendNodeUnchecked(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void AppendNodeUnchecked(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("AppendNodeUnchecked");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AppendNodeUnchecked", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void PrependNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void PrependNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("PrependNode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PrependNode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void PrependNodeUnchecked(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void PrependNodeUnchecked(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("PrependNodeUnchecked");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PrependNodeUnchecked", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void SwapNodes(OrderedSet`1/Node<T> previous, OrderedSet`1/Node<T> next)
    // Offset: 0xFFFFFFFF
    void SwapNodes(typename GlobalNamespace::OrderedSet_1<T>::Node* previous, typename GlobalNamespace::OrderedSet_1<T>::Node* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("SwapNodes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SwapNodes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(previous, next)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, previous, next);
    }
    // private System.Void RemoveNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void RemoveNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("RemoveNode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RemoveNode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void UpdateSortedPosition(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void UpdateSortedPosition(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("UpdateSortedPosition");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateSortedPosition", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, node);
    }
    // public T GetFirstOrDefault()
    // Offset: 0xFFFFFFFF
    T GetFirstOrDefault() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("GetFirstOrDefault");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetFirstOrDefault", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Boolean TryGetFirst(out T value)
    // Offset: 0xFFFFFFFF
    bool TryGetFirst(T& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("TryGetFirst");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryGetFirst", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_Generic_IEnumerable_1_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return GetEnumerator();
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OrderedSet_1").WithContext("System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // OrderedSet`1
  // Could not write size check! Type: OrderedSet`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::OrderedSet_1, "", "OrderedSet`1");