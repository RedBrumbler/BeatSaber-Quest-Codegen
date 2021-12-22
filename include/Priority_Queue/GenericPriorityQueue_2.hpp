// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Priority_Queue.IFixedSizePriorityQueue`2
#include "Priority_Queue/IFixedSizePriorityQueue_2.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Priority_Queue
namespace Priority_Queue {
  // Skipping declaration: <GetEnumerator>d__25 because it is already included!
  // Forward declaring type: GenericPriorityQueueNode`1<TPriority>
  template<typename TPriority>
  class GenericPriorityQueueNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Forward declaring type: GenericPriorityQueue`2<TItem, TPriority>
  template<typename TItem, typename TPriority>
  class GenericPriorityQueue_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::GenericPriorityQueue_2, "Priority_Queue", "GenericPriorityQueue`2");
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // WARNING Size may be invalid!
  // Autogenerated type: Priority_Queue.GenericPriorityQueue`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TItem, typename TPriority>
  class GenericPriorityQueue_2 : public ::Il2CppObject/*, public Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*/ {
    public:
    // Nested type: Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25<TItem, TPriority>
    class $GetEnumerator$d__25;
    // WARNING Size may be invalid!
    // Autogenerated type: Priority_Queue.GenericPriorityQueue`2/Priority_Queue.<GetEnumerator>d__25
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumerator$d__25 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<TItem>*/ {
      public:
      using declaring_type = GenericPriorityQueue_2<TItem, TPriority>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__25";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private TItem <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TItem $$2__current;
      // public Priority_Queue.GenericPriorityQueue`2<TItem,TPriority> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* $$4__this;
      // Field size check
      static_assert(sizeof(Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*) == 0x8);
      // private System.Int32 <i>5__2
      // Size: 0x4
      // Offset: 0x0
      int $i$5__2;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TItem>
      operator System::Collections::Generic::IEnumerator_1<TItem>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TItem>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private TItem <>2__current
      TItem& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<TItem*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Priority_Queue.GenericPriorityQueue`2<TItem,TPriority> <>4__this
      Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <i>5__2
      int& dyn_$i$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::dyn_$i$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<i>5__2"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private TItem System.Collections.Generic.IEnumerator<TItem>.get_Current()
      // Offset: 0xFFFFFFFF
      TItem System_Collections_Generic_IEnumerator$TItem$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::System.Collections.Generic.IEnumerator<TItem>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TItem>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<TItem, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename GenericPriorityQueue_2<TItem, TPriority>::$GetEnumerator$d__25* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename GenericPriorityQueue_2<TItem, TPriority>::$GetEnumerator$d__25*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::$GetEnumerator$d__25::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // Priority_Queue.GenericPriorityQueue`2/Priority_Queue.<GetEnumerator>d__25
    // Could not write size check! Type: Priority_Queue.GenericPriorityQueue`2/Priority_Queue.<GetEnumerator>d__25 is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 _numNodes
    // Size: 0x4
    // Offset: 0x0
    int numNodes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private TItem[] _nodes
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<TItem> nodes;
    // Field size check
    static_assert(sizeof(::ArrayW<TItem>) == 0x8);
    // private System.Int64 _numNodesEverEnqueued
    // Size: 0x8
    // Offset: 0x0
    int64_t numNodesEverEnqueued;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly System.Comparison`1<TPriority> _comparer
    // Size: 0x8
    // Offset: 0x0
    System::Comparison_1<TPriority>* comparer;
    // Field size check
    static_assert(sizeof(System::Comparison_1<TPriority>*) == 0x8);
    public:
    // Creating interface conversion operator: operator Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>
    operator Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>() noexcept {
      return *reinterpret_cast<Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _numNodes
    int& dyn__numNodes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::dyn__numNodes");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_numNodes"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TItem[] _nodes
    ::ArrayW<TItem>& dyn__nodes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::dyn__nodes");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_nodes"))->offset;
      return *reinterpret_cast<::ArrayW<TItem>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int64 _numNodesEverEnqueued
    int64_t& dyn__numNodesEverEnqueued() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::dyn__numNodesEverEnqueued");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_numNodesEverEnqueued"))->offset;
      return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Comparison`1<TPriority> _comparer
    System::Comparison_1<TPriority>*& dyn__comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::dyn__comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_comparer"))->offset;
      return *reinterpret_cast<System::Comparison_1<TPriority>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_MaxSize()
    // Offset: 0xFFFFFFFF
    int get_MaxSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::get_MaxSize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_MaxSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public TItem get_First()
    // Offset: 0xFFFFFFFF
    TItem get_First() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::get_First");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_First", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TItem, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 maxNodes)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int maxNodes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPriorityQueue_2<TItem, TPriority>*, creationType>(maxNodes)));
    }
    // public System.Void .ctor(System.Int32 maxNodes, System.Collections.Generic.IComparer`1<TPriority> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int maxNodes, System::Collections::Generic::IComparer_1<TPriority>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPriorityQueue_2<TItem, TPriority>*, creationType>(maxNodes, comparer)));
    }
    // public System.Void .ctor(System.Int32 maxNodes, System.Comparison`1<TPriority> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPriorityQueue_2<TItem, TPriority>* New_ctor(int maxNodes, System::Comparison_1<TPriority>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPriorityQueue_2<TItem, TPriority>*, creationType>(maxNodes, comparer)));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(TItem node)
    // Offset: 0xFFFFFFFF
    bool Contains(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, node);
    }
    // public System.Void Enqueue(TItem node, TPriority priority)
    // Offset: 0xFFFFFFFF
    void Enqueue(TItem node, TPriority priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::Enqueue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node), ::il2cpp_utils::ExtractType(priority)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node, priority);
    }
    // private System.Void CascadeUp(TItem node)
    // Offset: 0xFFFFFFFF
    void CascadeUp(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::CascadeUp");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CascadeUp", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void CascadeDown(TItem node)
    // Offset: 0xFFFFFFFF
    void CascadeDown(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::CascadeDown");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CascadeDown", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Boolean HasHigherPriority(TItem higher, TItem lower)
    // Offset: 0xFFFFFFFF
    bool HasHigherPriority(TItem higher, TItem lower) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::HasHigherPriority");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HasHigherPriority", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(higher), ::il2cpp_utils::ExtractType(lower)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, higher, lower);
    }
    // public TItem Dequeue()
    // Offset: 0xFFFFFFFF
    TItem Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::Dequeue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TItem, false>(this, ___internal__method);
    }
    // public System.Void Resize(System.Int32 maxNodes)
    // Offset: 0xFFFFFFFF
    void Resize(int maxNodes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::Resize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(maxNodes)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, maxNodes);
    }
    // public System.Void UpdatePriority(TItem node, TPriority priority)
    // Offset: 0xFFFFFFFF
    void UpdatePriority(TItem node, TPriority priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::UpdatePriority");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdatePriority", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node), ::il2cpp_utils::ExtractType(priority)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node, priority);
    }
    // private System.Void OnNodeUpdated(TItem node)
    // Offset: 0xFFFFFFFF
    void OnNodeUpdated(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::OnNodeUpdated");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnNodeUpdated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // public System.Void Remove(TItem node)
    // Offset: 0xFFFFFFFF
    void Remove(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // public System.Void ResetNode(TItem node)
    // Offset: 0xFFFFFFFF
    void ResetNode(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::ResetNode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ResetNode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // public System.Collections.Generic.IEnumerator`1<TItem> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TItem>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Boolean IsValidQueue()
    // Offset: 0xFFFFFFFF
    bool IsValidQueue() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::GenericPriorityQueue_2::IsValidQueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsValidQueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
  }; // Priority_Queue.GenericPriorityQueue`2
  // Could not write size check! Type: Priority_Queue.GenericPriorityQueue`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
