// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabWithParams
  // [NoReflectionBakingAttribute] Offset: DDD3D4
  class SubContainerCreatorByNewPrefabWithParams : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Size: 0x8
    // Offset: 0x18
    Zenject::IPrefabProvider* prefabProvider;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabProvider*) == 0x8);
    // private readonly System.Type _installerType
    // Size: 0x8
    // Offset: 0x20
    System::Type* installerType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x28
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewPrefabWithParams
    SubContainerCreatorByNewPrefabWithParams(Zenject::DiContainer* container_ = {}, Zenject::IPrefabProvider* prefabProvider_ = {}, System::Type* installerType_ = {}, Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}) noexcept : container{container_}, prefabProvider{prefabProvider_}, installerType{installerType_}, gameObjectBindInfo{gameObjectBindInfo_} {}
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // public System.Void .ctor(System.Type installerType, Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x16EA964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefabWithParams* New_ctor(System::Type* installerType, Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabWithParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefabWithParams*, creationType>(installerType, container, prefabProvider, gameObjectBindInfo)));
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x16EA9B0
    Zenject::DiContainer* get_Container();
    // private Zenject.DiContainer CreateTempContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0x16EA9B8
    Zenject::DiContainer* CreateTempContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args);
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    // Offset: 0x16EAD90
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* parentContext);
  }; // Zenject.SubContainerCreatorByNewPrefabWithParams
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewPrefabWithParams), 40 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_SubContainerCreatorByNewPrefabWithParamsSizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewPrefabWithParams) == 0x30);
  // Writing MetadataGetter for method: SubContainerCreatorByNewPrefabWithParams::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorByNewPrefabWithParams::*)(System::Type*, Zenject::DiContainer*, Zenject::IPrefabProvider*, Zenject::GameObjectCreationParameters*)>(&SubContainerCreatorByNewPrefabWithParams::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorByNewPrefabWithParams*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::IPrefabProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::GameObjectCreationParameters*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorByNewPrefabWithParams::*)(System::Type*, Zenject::DiContainer*, Zenject::IPrefabProvider*, Zenject::GameObjectCreationParameters*)>(&SubContainerCreatorByNewPrefabWithParams::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorByNewPrefabWithParams*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::IPrefabProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::GameObjectCreationParameters*>()});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorByNewPrefabWithParams::get_Container
  // Il2CppName: get_Container
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (SubContainerCreatorByNewPrefabWithParams::*)()>(&SubContainerCreatorByNewPrefabWithParams::get_Container)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorByNewPrefabWithParams*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorByNewPrefabWithParams::CreateTempContainer
  // Il2CppName: CreateTempContainer
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (SubContainerCreatorByNewPrefabWithParams::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*)>(&SubContainerCreatorByNewPrefabWithParams::CreateTempContainer)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorByNewPrefabWithParams*), "CreateTempContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>()});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorByNewPrefabWithParams::CreateSubContainer
  // Il2CppName: CreateSubContainer
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (SubContainerCreatorByNewPrefabWithParams::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*, Zenject::InjectContext*)>(&SubContainerCreatorByNewPrefabWithParams::CreateSubContainer)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorByNewPrefabWithParams*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabWithParams*, "Zenject", "SubContainerCreatorByNewPrefabWithParams");
