// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Enumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Stack_1, "System.Collections.Generic", "Stack`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.Stack`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 1089FC0
  // [DebuggerTypeProxyAttribute] Offset: 1089FC0
  template<typename T>
  class Stack_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IReadOnlyCollection_1<T>, public ::System::Collections::ICollection*/ {
    public:
    // Nested type: ::System::Collections::Generic::Stack_1::Enumerator<T>
    struct Enumerator;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Collections.Generic.Stack`1/System.Collections.Generic.Enumerator
    // [TokenAttribute] Offset: FFFFFFFF
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = Stack_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // private readonly System.Collections.Generic.Stack`1<T> _stack
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::Stack_1<T>* stack;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::Stack_1<T>*) == 0x8);
      // private readonly System.Int32 _version
      // Size: 0x4
      // Offset: 0x0
      int version;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T _currentElement
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T currentElement;
      public:
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(::System::Collections::Generic::Stack_1<T>* stack_ = {}, int version_ = {}, int index_ = {}, T currentElement_ = {}) noexcept : stack{stack_}, version{version_}, index{index_}, currentElement{currentElement_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Creating interface conversion operator: i_IEnumerator_1_T
      inline ::System::Collections::Generic::IEnumerator_1<T>* i_IEnumerator_1_T() noexcept {
        return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Collections.Generic.Stack`1<T> _stack
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<T>*& dyn__stack() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::dyn__stack");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_stack"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::Stack_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Int32 _version
      [[deprecated("Use field access instead!")]] int& dyn__version() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::dyn__version");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_version"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 _index
      [[deprecated("Use field access instead!")]] int& dyn__index() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::dyn__index");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_index"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private T _currentElement
      [[deprecated("Use field access instead!")]] T& dyn__currentElement() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::dyn__currentElement");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_currentElement"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // System.Void .ctor(System.Collections.Generic.Stack`1<T> stack)
      // Offset: 0xFFFFFFFFFFFFFFFF
      Enumerator(::System::Collections::Generic::Stack_1<T>* stack) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stack)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stack);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void ThrowEnumerationNotStartedOrEnded()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void ThrowEnumerationNotStartedOrEnded() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::ThrowEnumerationNotStartedOrEnded");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ThrowEnumerationNotStartedOrEnded", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Enumerator::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // System.Collections.Generic.Stack`1/System.Collections.Generic.Enumerator
    // Could not write size check! Type: System.Collections.Generic.Stack`1/System.Collections.Generic.Enumerator is generic, or has no fields that are valid for size checks!
    public:
    // private T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> array;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x0
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IReadOnlyCollection_1<T>
    operator ::System::Collections::Generic::IReadOnlyCollection_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IReadOnlyCollection_1_T
    inline ::System::Collections::Generic::IReadOnlyCollection_1<T>* i_IReadOnlyCollection_1_T() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 DefaultCapacity
    static int _get_DefaultCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::_get_DefaultCapacity");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), "DefaultCapacity"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 DefaultCapacity
    static void _set_DefaultCapacity(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::_set_DefaultCapacity");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), "DefaultCapacity", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] _array
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn__array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::dyn__array");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_array"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _size
    [[deprecated("Use field access instead!")]] int& dyn__size() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::dyn__size");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_size"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _version
    [[deprecated("Use field access instead!")]] int& dyn__version() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::dyn__version");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_version"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::dyn__syncRoot");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_syncRoot"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::System.Collections.ICollection.get_SyncRoot");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack_1<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack_1<T>*, creationType>(capacity)));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_ICollection_CopyTo(::System::Array* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::System.Collections.ICollection.CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public T Peek()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Peek() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Peek");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Peek", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T Pop()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Pop() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Pop");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Pop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Push(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Push(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::Push");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Push", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void ThrowForEmptyStack()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ThrowForEmptyStack() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::Stack_1::ThrowForEmptyStack");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ThrowForEmptyStack", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.Stack`1
  // Could not write size check! Type: System.Collections.Generic.Stack`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
