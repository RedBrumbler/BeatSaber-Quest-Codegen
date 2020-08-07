// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FromBinderNonGeneric
#include "Zenject/FromBinderNonGeneric.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinderNonGeneric/<>c__1`2
  template<typename TConcrete, typename TFactory>
  class FromBinderNonGeneric::$$c__1_2 : public ::Il2CppObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TFactory>> || std::is_base_of_v<Zenject::IFactory_1<TConcrete>, std::remove_pointer_t<TFactory>>));
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FromBinderNonGeneric/<>c__1`2<TConcrete,TFactory> <>9
    static Zenject::FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>* _get_$$9() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FromBinderNonGeneric/<>c__1`2<TConcrete,TFactory> <>9
    static void _set_$$9(Zenject::FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TConcrete>>> <>9__1_0
    static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>*>*>* _get_$$9__1_0() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>::get(), "<>9__1_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TConcrete>>> <>9__1_0
    static void _set_$$9__1_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>*>*>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>::get(), "<>9__1_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>::get(), ".cctor")));
    }
    // System.Void <FromFactory>b__1_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TConcrete>> x)
    // Offset: 0xFFFFFFFF
    void $FromFactory$b__1_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>*>* x) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromFactory>b__1_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>* New_ctor() {
      return (FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>*>::get())));
    }
  }; // Zenject.FromBinderNonGeneric/<>c__1`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinderNonGeneric::$$c__1_2, "Zenject", "FromBinderNonGeneric/<>c__1`2");
#pragma pack(pop)