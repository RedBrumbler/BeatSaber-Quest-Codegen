// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Linq.Enumerable/System.Linq.Iterator`1
#include "System/Linq/Enumerable_Iterator_1.hpp"
// Including type: System.Collections.Generic.List`1/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.WhereSelectListIterator`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource, typename TResult>
  class Enumerable::WhereSelectListIterator_2 : public System::Linq::Enumerable::Iterator_1<TResult> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Collections.Generic.List`1<TSource> source
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<TSource>* source;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TSource>*) == 0x8);
    // private System.Func`2<TSource,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, bool>*) == 0x8);
    // private System.Func`2<TSource,TResult> selector
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TResult>* selector;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TResult>*) == 0x8);
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<TSource> enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename System::Collections::Generic::List_1<TSource>::Enumerator enumerator;
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<TSource> source
    System::Collections::Generic::List_1<TSource>*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,System.Boolean> predicate
    System::Func_2<TSource, bool>*& dyn_predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::dyn_predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "predicate"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,TResult> selector
    System::Func_2<TSource, TResult>*& dyn_selector() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::dyn_selector");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "selector"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<TSource> enumerator
    typename System::Collections::Generic::List_1<TSource>::Enumerator& dyn_enumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::dyn_enumerator");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "enumerator"))->offset;
      return *reinterpret_cast<typename System::Collections::Generic::List_1<TSource>::Enumerator*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate, System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::WhereSelectListIterator_2<TSource, TResult>* New_ctor(System::Collections::Generic::List_1<TSource>* source, System::Func_2<TSource, bool>* predicate, System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::WhereSelectListIterator_2<TSource, TResult>*, creationType>(source, predicate, selector)));
    }
    // public System.Linq.Enumerable/System.Linq.Iterator`1<TResult> Clone()
    // Offset: 0xFFFFFFFF
    System::Linq::Enumerable::Iterator_1<TResult>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::Clone");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Linq::Enumerable::Iterator_1<TResult>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult2> Select(System.Func`2<TResult,TResult2> selector)
    // Offset: 0xFFFFFFFF
    template<class TResult2>
    System::Collections::Generic::IEnumerable_1<TResult2>* Select(System::Func_2<TResult, TResult2>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::Select");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Select", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(selector)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___generic__method, selector);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult> Where(System.Func`2<TResult,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TResult>* Where(System::Func_2<TResult, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::Where");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Where", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal__method, predicate);
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectListIterator_2::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
  }; // System.Linq.Enumerable/System.Linq.WhereSelectListIterator`2
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.WhereSelectListIterator`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::WhereSelectListIterator_2, "System.Linq", "Enumerable/WhereSelectListIterator`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
