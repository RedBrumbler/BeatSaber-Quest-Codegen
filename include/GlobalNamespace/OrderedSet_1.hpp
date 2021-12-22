// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ProcessOrder because it is already included!
  // Skipping declaration: Node because it is already included!
  // Skipping declaration: <GetEnumerator>d__23 because it is already included!
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
  // Forward declaring type: OrderedSet`1<T>
  template<typename T>
  class OrderedSet_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::OrderedSet_1, "", "OrderedSet`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OrderedSet`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class OrderedSet_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Nested type: GlobalNamespace::OrderedSet_1::ProcessOrder<T>
    struct ProcessOrder;
    // Nested type: GlobalNamespace::OrderedSet_1::Node<T>
    class Node;
    // Nested type: GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23<T>
    class $GetEnumerator$d__23;
    // WARNING Size may be invalid!
    // Autogenerated type: OrderedSet`1/ProcessOrder
    // [TokenAttribute] Offset: FFFFFFFF
    struct ProcessOrder : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::Enum*/ {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "ProcessOrder";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ProcessOrder
      constexpr ProcessOrder(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // Autogenerated static field getter
      // Get static field: static public OrderedSet`1/ProcessOrder<T> Lifo
      static typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder _get_Lifo() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::_get_Lifo");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedSet_1<T>::ProcessOrder>::get(), "Lifo"));
      }
      // Autogenerated static field setter
      // Set static field: static public OrderedSet`1/ProcessOrder<T> Lifo
      static void _set_Lifo(typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::_set_Lifo");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedSet_1<T>::ProcessOrder>::get(), "Lifo", value));
      }
      // Autogenerated static field getter
      // Get static field: static public OrderedSet`1/ProcessOrder<T> Fifo
      static typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder _get_Fifo() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::_get_Fifo");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedSet_1<T>::ProcessOrder>::get(), "Fifo"));
      }
      // Autogenerated static field setter
      // Set static field: static public OrderedSet`1/ProcessOrder<T> Fifo
      static void _set_Fifo(typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::_set_Fifo");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedSet_1<T>::ProcessOrder>::get(), "Fifo", value));
      }
      // Autogenerated static field getter
      // Get static field: static public OrderedSet`1/ProcessOrder<T> DontCare
      static typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder _get_DontCare() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::_get_DontCare");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedSet_1<T>::ProcessOrder>::get(), "DontCare"));
      }
      // Autogenerated static field setter
      // Set static field: static public OrderedSet`1/ProcessOrder<T> DontCare
      static void _set_DontCare(typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::_set_DontCare");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedSet_1<T>::ProcessOrder>::get(), "DontCare", value));
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 value__
      int& dyn_value__() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::ProcessOrder::dyn_value__");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value__"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // OrderedSet`1/ProcessOrder
    // Could not write size check! Type: OrderedSet`1/ProcessOrder is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: OrderedSet`1/Node
    // [TokenAttribute] Offset: FFFFFFFF
    class Node : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Node";
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
      public:
      // Autogenerated instance field getter
      // Get instance field: public readonly T value
      T& dyn_value() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Node::dyn_value");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public OrderedSet`1/Node<T> previous
      typename GlobalNamespace::OrderedSet_1<T>::Node*& dyn_previous() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Node::dyn_previous");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "previous"))->offset;
        return *reinterpret_cast<typename GlobalNamespace::OrderedSet_1<T>::Node**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public OrderedSet`1/Node<T> next
      typename GlobalNamespace::OrderedSet_1<T>::Node*& dyn_next() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Node::dyn_next");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "next"))->offset;
        return *reinterpret_cast<typename GlobalNamespace::OrderedSet_1<T>::Node**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Boolean isRemoved
      bool& dyn_isRemoved() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Node::dyn_isRemoved");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "isRemoved"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 clearCount
      int& dyn_clearCount() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Node::dyn_clearCount");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "clearCount"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(T value, System.Int32 clearCount)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename OrderedSet_1<T>::Node* New_ctor(T value, int clearCount) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Node::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename OrderedSet_1<T>::Node*, creationType>(value, clearCount)));
      }
    }; // OrderedSet`1/Node
    // Could not write size check! Type: OrderedSet`1/Node is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: OrderedSet`1/<GetEnumerator>d__23
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumerator$d__23 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__23";
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
      public:
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private T <>2__current
      T& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public OrderedSet`1<T> <>4__this
      GlobalNamespace::OrderedSet_1<T>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<GlobalNamespace::OrderedSet_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private OrderedSet`1/Node<T> <next>5__2
      typename GlobalNamespace::OrderedSet_1<T>::Node*& dyn_$next$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::dyn_$next$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<next>5__2"))->offset;
        return *reinterpret_cast<typename GlobalNamespace::OrderedSet_1<T>::Node**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private T System.Collections.Generic.IEnumerator<T>.get_Current()
      // Offset: 0xFFFFFFFF
      T System_Collections_Generic_IEnumerator$T$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::System.Collections.Generic.IEnumerator<T>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename OrderedSet_1<T>::$GetEnumerator$d__23* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename OrderedSet_1<T>::$GetEnumerator$d__23*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::$GetEnumerator$d__23::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // OrderedSet`1/<GetEnumerator>d__23
    // Could not write size check! Type: OrderedSet`1/<GetEnumerator>d__23 is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Comparison`1<T> _comparison
    // Size: 0x8
    // Offset: 0x0
    System::Comparison_1<T>* comparison;
    // Field size check
    static_assert(sizeof(System::Comparison_1<T>*) == 0x8);
    // private readonly OrderedSet`1/ProcessOrder<T> _processOrder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder processOrder;
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
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<T>
    operator System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Comparison`1<T> _comparison
    System::Comparison_1<T>*& dyn__comparison() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::dyn__comparison");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_comparison"))->offset;
      return *reinterpret_cast<System::Comparison_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly OrderedSet`1/ProcessOrder<T> _processOrder
    typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder& dyn__processOrder() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::dyn__processOrder");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_processOrder"))->offset;
      return *reinterpret_cast<typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<T,OrderedSet`1/Node<T>> _sortIndices
    System::Collections::Generic::Dictionary_2<T, typename GlobalNamespace::OrderedSet_1<T>::Node*>*& dyn__sortIndices() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::dyn__sortIndices");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sortIndices"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<T, typename GlobalNamespace::OrderedSet_1<T>::Node*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private OrderedSet`1/Node<T> _head
    typename GlobalNamespace::OrderedSet_1<T>::Node*& dyn__head() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::dyn__head");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_head"))->offset;
      return *reinterpret_cast<typename GlobalNamespace::OrderedSet_1<T>::Node**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private OrderedSet`1/Node<T> _tail
    typename GlobalNamespace::OrderedSet_1<T>::Node*& dyn__tail() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::dyn__tail");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_tail"))->offset;
      return *reinterpret_cast<typename GlobalNamespace::OrderedSet_1<T>::Node**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _clearCount
    int& dyn__clearCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::dyn__clearCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_clearCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_count()
    // Offset: 0xFFFFFFFF
    int get_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::get_count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Comparison`1<T> comparison, OrderedSet`1/ProcessOrder<T> processOrder)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderedSet_1<T>* New_ctor(System::Comparison_1<T>* comparison, typename GlobalNamespace::OrderedSet_1<T>::ProcessOrder processOrder) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderedSet_1<T>*, creationType>(comparison, processOrder)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void UpdateSortedPosition(T item)
    // Offset: 0xFFFFFFFF
    void UpdateSortedPosition(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::UpdateSortedPosition");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateSortedPosition", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void AppendNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void AppendNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::AppendNode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AppendNode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void AppendNodeUnchecked(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void AppendNodeUnchecked(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::AppendNodeUnchecked");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AppendNodeUnchecked", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void PrependNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void PrependNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::PrependNode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PrependNode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void PrependNodeUnchecked(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void PrependNodeUnchecked(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::PrependNodeUnchecked");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PrependNodeUnchecked", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void SwapNodes(OrderedSet`1/Node<T> previous, OrderedSet`1/Node<T> next)
    // Offset: 0xFFFFFFFF
    void SwapNodes(typename GlobalNamespace::OrderedSet_1<T>::Node* previous, typename GlobalNamespace::OrderedSet_1<T>::Node* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::SwapNodes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SwapNodes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(previous), ::il2cpp_utils::ExtractType(next)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, previous, next);
    }
    // private System.Void RemoveNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void RemoveNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::RemoveNode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveNode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // private System.Void UpdateSortedPosition(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void UpdateSortedPosition(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::UpdateSortedPosition");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateSortedPosition", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public T GetFirstOrDefault()
    // Offset: 0xFFFFFFFF
    T GetFirstOrDefault() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::GetFirstOrDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetFirstOrDefault", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Boolean TryGetFirst(out T value)
    // Offset: 0xFFFFFFFF
    bool TryGetFirst(ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OrderedSet_1::TryGetFirst");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetFirst", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(value));
    }
  }; // OrderedSet`1
  // Could not write size check! Type: OrderedSet`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
