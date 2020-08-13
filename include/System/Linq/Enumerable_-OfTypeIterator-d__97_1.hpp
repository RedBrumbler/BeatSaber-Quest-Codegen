// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/<OfTypeIterator>d__97`1
  template<typename TResult>
  class Enumerable::$OfTypeIterator$d__97_1 : public ::CsObject, public System::Collections::Generic::IEnumerable_1<TResult>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<TResult>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // private TResult <>2__current
    // Offset: 0x0
    TResult $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x0
    int $$l__initialThreadId;
    // private System.Collections.IEnumerable source
    // Offset: 0x0
    System::Collections::IEnumerable* source;
    // public System.Collections.IEnumerable <>3__source
    // Offset: 0x0
    System::Collections::IEnumerable* $$3__source;
    // private System.Collections.IEnumerator <>7__wrap1
    // Offset: 0x0
    System::Collections::IEnumerator* $$7__wrap1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xFFFFFFFF
    static Enumerable::$OfTypeIterator$d__97_1<TResult>* New_ctor(int $$1__state) {
      return (Enumerable::$OfTypeIterator$d__97_1<TResult>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Enumerable::$OfTypeIterator$d__97_1<TResult>*>::get(), $$1__state));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFFFFFFF
    void $$m__Finally1() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<>m__Finally1"));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
    // private TResult System.Collections.Generic.IEnumerator<TResult>.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    TResult System_Collections_Generic_IEnumerator_1_get_Current() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TResult>(this, "System.Collections.Generic.IEnumerator<TResult>.get_Current")));
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "System.Collections.IEnumerator.get_Current"));
    }
    // private System.Collections.Generic.IEnumerator`1<TResult> System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TResult>*>(this, "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator")));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Linq.Enumerable/<OfTypeIterator>d__97`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$OfTypeIterator$d__97_1, "System.Linq", "Enumerable/<OfTypeIterator>d__97`1");
#pragma pack(pop)
