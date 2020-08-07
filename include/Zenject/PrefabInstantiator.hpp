// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabInstantiator
  class PrefabInstantiator : public ::Il2CppObject, public Zenject::IPrefabInstantiator {
    public:
    // Nested type: Zenject::PrefabInstantiator::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Offset: 0x10
    Zenject::IPrefabProvider* prefabProvider;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments;
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Offset: 0x28
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // private readonly System.Type _argumentTarget
    // Offset: 0x30
    System::Type* argumentTarget;
    // private readonly System.Collections.Generic.List`1<System.Type> _instantiateCallbackTypes
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Type*>* instantiateCallbackTypes;
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Offset: 0x40
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Type argumentTarget, System.Collections.Generic.IEnumerable`1<System.Type> instantiateCallbackTypes, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, Zenject.IPrefabProvider prefabProvider, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0xFAE8D4
    static PrefabInstantiator* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Type* argumentTarget, System::Collections::Generic::IEnumerable_1<System::Type*>* instantiateCallbackTypes, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, Zenject::IPrefabProvider* prefabProvider, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback);
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0xFAF0EC
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: Zenject.GameObjectCreationParameters IPrefabInstantiator::get_GameObjectCreationParameters()
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public System.Type get_ArgumentTarget()
    // Offset: 0xFAF0F4
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: System.Type IPrefabInstantiator::get_ArgumentTarget()
    System::Type* get_ArgumentTarget();
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0xFAF0FC
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: System.Collections.Generic.List`1<Zenject.TypeValuePair> IPrefabInstantiator::get_ExtraArguments()
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFAF104
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: UnityEngine.Object IPrefabInstantiator::GetPrefab()
    UnityEngine::Object* GetPrefab();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction)
    // Offset: 0xFAF1B4
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: UnityEngine.GameObject IPrefabInstantiator::Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction)
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction);
  }; // Zenject.PrefabInstantiator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiator*, "Zenject", "PrefabInstantiator");
#pragma pack(pop)