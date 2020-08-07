// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IFactory`6
#include "Zenject/IFactory_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabResourceFactory`5
  template<typename P1, typename P2, typename P3, typename P4, typename T>
  class PrefabResourceFactory_5 : public ::Il2CppObject, public Zenject::IFactory_6<::Il2CppString*, P1, P2, P3, P4, T>, public Zenject::IFactory {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(System.String prefabResourceName, P1 param, P2 param2, P3 param3, P4 param4)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`6
    // Base method: TValue IFactory`6::Create(System.String prefabResourceName, P1 param, P2 param2, P3 param3, P4 param4)
    T Create(::Il2CppString* prefabResourceName, P1 param, P2 param2, P3 param3, P4 param4) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefabResourceName, param, param2, param3, param4));
    }
    // Creating proxy method: Zenject_IFactory_6_Create
    // Maps to method: Create
    T Zenject_IFactory_6_Create(::Il2CppString* prefabResourceName, P1 param, P2 param2, P3 param3, P4 param4) {
      return Create(prefabResourceName, param, param2, param3, param4);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceFactory_5<P1, P2, P3, P4, T>* New_ctor() {
      return (PrefabResourceFactory_5<P1, P2, P3, P4, T>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabResourceFactory_5<P1, P2, P3, P4, T>*>::get())));
    }
  }; // Zenject.PrefabResourceFactory`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_5, "Zenject", "PrefabResourceFactory`5");
#pragma pack(pop)