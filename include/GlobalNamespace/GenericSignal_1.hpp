// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Signal
#include "GlobalNamespace/Signal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GenericSignal`1
  template<typename T>
  class GenericSignal_1 : public GlobalNamespace::Signal {
    public:
    // private System.Action`1<T> _floatEvent
    // Offset: 0x0
    System::Action_1<T>* floatEvent;
    // public System.Void Raise(T f)
    // Offset: 0xFFFFFFFF
    void Raise(T f) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Raise", f));
    }
    // public System.Void Subscribe(System.Action`1<T> foo)
    // Offset: 0xFFFFFFFF
    void Subscribe(System::Action_1<T>* foo) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Subscribe", foo));
    }
    // public System.Void Unsubscribe(System.Action`1<T> foo)
    // Offset: 0xFFFFFFFF
    void Unsubscribe(System::Action_1<T>* foo) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Unsubscribe", foo));
    }
    // public override System.Void Raise()
    // Offset: 0xFFFFFFFF
    // Implemented from: Signal
    // Base method: System.Void Signal::Raise()
    void Raise() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Raise"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Signal
    // Base method: System.Void Signal::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GenericSignal_1<T>* New_ctor() {
      return (GenericSignal_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GenericSignal_1<T>*>::get()));
    }
  }; // GenericSignal`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GenericSignal_1, "", "GenericSignal`1");
#pragma pack(pop)
