// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass35_0
  // [CompilerGeneratedAttribute] Offset: DDDE7C
  class FromBinder::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public Zenject.FromBinder <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::FromBinder* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FromBinder*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass35_0
    $$c__DisplayClass35_0(UnityEngine::GameObject* gameObject_ = {}, Zenject::FromBinder* $$4__this_ = {}) noexcept : gameObject{gameObject_}, $$4__this{$$4__this_} {}
    // Zenject.IProvider <FromNewComponentOn>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x163A7A8
    Zenject::IProvider* $FromNewComponentOn$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x1637DCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass35_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass35_0), 24 + sizeof(Zenject::FromBinder*)> __Zenject_FromBinder_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass35_0) == 0x20);
  // Writing MetadataGetter for method: FromBinder::$$c__DisplayClass35_0::$FromNewComponentOn$b__0
  // Il2CppName: <FromNewComponentOn>b__0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (FromBinder::$$c__DisplayClass35_0::*)(Zenject::DiContainer*, System::Type*)>(&FromBinder::$$c__DisplayClass35_0::$FromNewComponentOn$b__0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FromBinder::$$c__DisplayClass35_0*), "<FromNewComponentOn>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: FromBinder::$$c__DisplayClass35_0::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FromBinder::$$c__DisplayClass35_0::*)()>(&FromBinder::$$c__DisplayClass35_0::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FromBinder::$$c__DisplayClass35_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FromBinder::$$c__DisplayClass35_0::*)()>(&FromBinder::$$c__DisplayClass35_0::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FromBinder::$$c__DisplayClass35_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass35_0*, "Zenject", "FromBinder/<>c__DisplayClass35_0");
