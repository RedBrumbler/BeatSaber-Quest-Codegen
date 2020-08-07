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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.CachedProvider
  class CachedProvider : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // private readonly Zenject.IProvider _creator
    // Offset: 0x10
    Zenject::IProvider* creator;
    // private System.Collections.Generic.List`1<System.Object> _instances
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppObject*>* instances;
    // private System.Boolean _isCreatingInstance
    // Offset: 0x20
    bool isCreatingInstance;
    // public System.Void .ctor(Zenject.IProvider creator)
    // Offset: 0xD53EDC
    static CachedProvider* New_ctor(Zenject::IProvider* creator);
    // public System.Int32 get_NumInstances()
    // Offset: 0xD54610
    int get_NumInstances();
    // public System.Void ClearCache()
    // Offset: 0xD546B0
    void ClearCache();
    // public System.Boolean get_IsCached()
    // Offset: 0xD54664
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xD5466C
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xD546BC
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xD542CC
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.CachedProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedProvider*, "Zenject", "CachedProvider");
#pragma pack(pop)