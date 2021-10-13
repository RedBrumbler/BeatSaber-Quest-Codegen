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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.WhereArrayIterator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class Enumerable::WhereArrayIterator_1 : public System::Linq::Enumerable::Iterator_1<TSource> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private TSource[] source
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<TSource> source;
    // Field size check
    static_assert(sizeof(::ArrayW<TSource>) == 0x8);
    // private System.Func`2<TSource,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, bool>*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private TSource[] source
    ::ArrayW<TSource>& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<::ArrayW<TSource>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,System.Boolean> predicate
    System::Func_2<TSource, bool>*& dyn_predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::dyn_predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "predicate"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 index
    int& dyn_index() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::dyn_index");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "index"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(TSource[] source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::WhereArrayIterator_1<TSource>* New_ctor(::ArrayW<TSource> source, System::Func_2<TSource, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::WhereArrayIterator_1<TSource>*, creationType>(source, predicate)));
    }
    // public override System.Linq.Enumerable/System.Linq.Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Linq.Enumerable/System.Linq.Iterator`1<TSource> Iterator_1::Clone()
    System::Linq::Enumerable::Iterator_1<TSource>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::Clone");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Linq::Enumerable::Iterator_1<TSource>*, false>(this, ___internal__method);
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public override System.Collections.Generic.IEnumerable`1<TResult> Select(System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Collections.Generic.IEnumerable`1<TResult> Iterator_1::Select(System.Func`2<TSource,TResult> selector)
    template<class TResult>
    System::Collections::Generic::IEnumerable_1<TResult>* Select(System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::Select");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Select", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(selector)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___generic__method, selector);
    }
    // public override System.Collections.Generic.IEnumerable`1<TSource> Where(System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Collections.Generic.IEnumerable`1<TSource> Iterator_1::Where(System.Func`2<TSource,System.Boolean> predicate)
    System::Collections::Generic::IEnumerable_1<TSource>* Where(System::Func_2<TSource, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereArrayIterator_1::Where");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Where", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal__method, predicate);
    }
  }; // System.Linq.Enumerable/System.Linq.WhereArrayIterator`1
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.WhereArrayIterator`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::WhereArrayIterator_1, "System.Linq", "Enumerable/WhereArrayIterator`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
