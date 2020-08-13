// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Skipping declaration: <Start>d__2 because it is already included!
  // Forward declaring type: ITweenValue
  class ITweenValue;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TweenRunner`1
  template<typename T>
  class TweenRunner_1 : public ::CsObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_base_of_v<TMPro::ITweenValue, std::remove_pointer_t<T>>) && (!std::is_complete_v<std::remove_pointer_t<T>> || is_value_type_v<T>));
    public:
    // Nested type: TMPro::TweenRunner_1::$Start$d__2<T>
    class $Start$d__2;
    // Autogenerated type: TMPro.TweenRunner`1/<Start>d__2
    class $Start$d__2 : public ::CsObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
      static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_base_of_v<TMPro::ITweenValue, std::remove_pointer_t<T>>) && (!std::is_complete_v<std::remove_pointer_t<T>> || is_value_type_v<T>));
      public:
      using declaring_type = TweenRunner_1<T>*;
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private System.Object <>2__current
      // Offset: 0x0
      ::CsObject* $$2__current;
      // public T tweenInfo
      // Offset: 0x0
      T tweenInfo;
      // private System.Single <elapsedTime>5__2
      // Offset: 0x0
      float $elapsedTime$5__2;
      // public System.Void .ctor(System.Int32 $$1__state)
      // Offset: 0xFFFFFFFF
      static typename TweenRunner_1<T>::$Start$d__2* New_ctor(int $$1__state) {
        return (typename TweenRunner_1<T>::$Start$d__2*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TweenRunner_1<T>::$Start$d__2*>::get(), $$1__state));
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
      // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<::CsObject*>(this, "System.Collections.Generic.IEnumerator<System.Object>.get_Current")));
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
    }; // TMPro.TweenRunner`1/<Start>d__2
    // protected UnityEngine.MonoBehaviour m_CoroutineContainer
    // Offset: 0x0
    UnityEngine::MonoBehaviour* m_CoroutineContainer;
    // protected System.Collections.IEnumerator m_Tween
    // Offset: 0x0
    System::Collections::IEnumerator* m_Tween;
    // static private System.Collections.IEnumerator Start(T tweenInfo)
    // Offset: 0xFFFFFFFF
    static System::Collections::IEnumerator* Start(T tweenInfo) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TweenRunner_1<T>*>::get(), "Start", tweenInfo));
    }
    // public System.Void Init(UnityEngine.MonoBehaviour coroutineContainer)
    // Offset: 0xFFFFFFFF
    void Init(UnityEngine::MonoBehaviour* coroutineContainer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", coroutineContainer));
    }
    // public System.Void StartTween(T info)
    // Offset: 0xFFFFFFFF
    void StartTween(T info) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartTween", info));
    }
    // public System.Void StopTween()
    // Offset: 0xFFFFFFFF
    void StopTween() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "StopTween"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TweenRunner_1<T>* New_ctor() {
      return (TweenRunner_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TweenRunner_1<T>*>::get()));
    }
  }; // TMPro.TweenRunner`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TweenRunner_1, "TMPro", "TweenRunner`1");
#pragma pack(pop)
