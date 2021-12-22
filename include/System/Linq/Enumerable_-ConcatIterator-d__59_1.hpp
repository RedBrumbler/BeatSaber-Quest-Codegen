// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$ConcatIterator$d__59_1, "System.Linq", "Enumerable/<ConcatIterator>d__59`1");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.<ConcatIterator>d__59`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class Enumerable::$ConcatIterator$d__59_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::Generic::IEnumerator_1<TSource>*/ {
    public:
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
    // private TSource <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TSource $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x0
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerable`1<TSource> first
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* first;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__first
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__first;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Collections.Generic.IEnumerable`1<TSource> second
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* second;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__second
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__second;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<TSource> <>7__wrap1
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerator_1<TSource>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<TSource>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<TSource>
    operator System::Collections::Generic::IEnumerable_1<TSource>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TSource>
    operator System::Collections::Generic::IEnumerator_1<TSource>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TSource>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>1__state
    int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_$$1__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TSource <>2__current
    TSource& dyn_$$2__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_$$2__current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
      return *reinterpret_cast<TSource*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_$$l__initialThreadId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>l__initialThreadId"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<TSource> first
    System::Collections::Generic::IEnumerable_1<TSource>*& dyn_first() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_first");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "first"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.IEnumerable`1<TSource> <>3__first
    System::Collections::Generic::IEnumerable_1<TSource>*& dyn_$$3__first() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_$$3__first");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__first"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<TSource> second
    System::Collections::Generic::IEnumerable_1<TSource>*& dyn_second() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_second");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "second"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.IEnumerable`1<TSource> <>3__second
    System::Collections::Generic::IEnumerable_1<TSource>*& dyn_$$3__second() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_$$3__second");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__second"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerator`1<TSource> <>7__wrap1
    System::Collections::Generic::IEnumerator_1<TSource>*& dyn_$$7__wrap1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::dyn_$$7__wrap1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>7__wrap1"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private TSource System.Collections.Generic.IEnumerator<TSource>.get_Current()
    // Offset: 0xFFFFFFFF
    TSource System_Collections_Generic_IEnumerator$TSource$_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::System.Collections.Generic.IEnumerator<TSource>.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TSource, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$ConcatIterator$d__59_1<TSource>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$ConcatIterator$d__59_1<TSource>*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFF
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::System.IDisposable.Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFFFFFFF
    void $$m__Finally1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::<>m__Finally1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void <>m__Finally2()
    // Offset: 0xFFFFFFFF
    void $$m__Finally2() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::<>m__Finally2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TSource> System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable$TSource$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ConcatIterator$d__59_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // System.Linq.Enumerable/System.Linq.<ConcatIterator>d__59`1
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.<ConcatIterator>d__59`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
