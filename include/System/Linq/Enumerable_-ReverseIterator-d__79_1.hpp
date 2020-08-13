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
// Including type: System.Linq.Buffer`1
#include "System/Linq/Buffer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/<ReverseIterator>d__79`1
  template<typename TSource>
  class Enumerable::$ReverseIterator$d__79_1 : public ::CsObject, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<TSource>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // private TSource <>2__current
    // Offset: 0x0
    TSource $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x0
    int $$l__initialThreadId;
    // private System.Collections.Generic.IEnumerable`1<TSource> source
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* source;
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__source
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__source;
    // private System.Linq.Buffer`1<TSource> <buffer>5__1
    // Offset: 0x0
    System::Linq::Buffer_1<TSource> $buffer$5__1;
    // private System.Int32 <i>5__2
    // Offset: 0x0
    int $i$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xFFFFFFFF
    static Enumerable::$ReverseIterator$d__79_1<TSource>* New_ctor(int $$1__state) {
      return (Enumerable::$ReverseIterator$d__79_1<TSource>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Enumerable::$ReverseIterator$d__79_1<TSource>*>::get(), $$1__state));
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
    // private TSource System.Collections.Generic.IEnumerator<TSource>.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    TSource System_Collections_Generic_IEnumerator_1_get_Current() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TSource>(this, "System.Collections.Generic.IEnumerator<TSource>.get_Current")));
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
    // private System.Collections.Generic.IEnumerator`1<TSource> System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TSource>*>(this, "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator")));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Linq.Enumerable/<ReverseIterator>d__79`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$ReverseIterator$d__79_1, "System.Linq", "Enumerable/<ReverseIterator>d__79`1");
#pragma pack(pop)
