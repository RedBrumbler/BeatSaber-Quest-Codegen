// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.EmptyGameObjectProvider
  class EmptyGameObjectProvider : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0xF1A218
    static EmptyGameObjectProvider* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo);
    // public System.Boolean get_IsCached()
    // Offset: 0xF1A268
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xF1A270
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xF1A278
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xF1A2E8
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.EmptyGameObjectProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::EmptyGameObjectProvider*, "Zenject", "EmptyGameObjectProvider");
#pragma pack(pop)