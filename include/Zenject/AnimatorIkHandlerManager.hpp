// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IAnimatorIkHandler
  class IAnimatorIkHandler;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.AnimatorIkHandlerManager
  class AnimatorIkHandlerManager : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> _handlers
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>* handlers;
    // public System.Void Construct(System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> handlers)
    // Offset: 0xD502FC
    void Construct(System::Collections::Generic::List_1<Zenject::IAnimatorIkHandler*>* handlers);
    // public System.Void OnAnimatorIk()
    // Offset: 0xD50304
    void OnAnimatorIk();
    // public System.Void .ctor()
    // Offset: 0xD50464
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AnimatorIkHandlerManager* New_ctor();
  }; // Zenject.AnimatorIkHandlerManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorIkHandlerManager*, "Zenject", "AnimatorIkHandlerManager");
#pragma pack(pop)