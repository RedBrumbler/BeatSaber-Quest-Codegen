// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`3
#include "Zenject/IFactory_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PrefabFactory`2
  template<typename P1, typename T>
  class PrefabFactory_2 : public ::Il2CppObject/*, public Zenject::IFactory_3<UnityEngine::Object*, P1, T>*/ {
    public:
    // [InjectAttribute] Offset: 0xDDEA5C
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: PrefabFactory_2
    PrefabFactory_2(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IFactory_3<UnityEngine::Object*, P1, T>
    operator Zenject::IFactory_3<UnityEngine::Object*, P1, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_3<UnityEngine::Object*, P1, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_2::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // public T Create(UnityEngine.Object prefab, P1 param)
    // Offset: 0xFFFFFFFF
    T Create(UnityEngine::Object* prefab, P1 param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_2::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab), ::il2cpp_utils::ExtractType(param)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, prefab, param);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabFactory_2<P1, T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabFactory_2<P1, T>*, creationType>()));
    }
  }; // Zenject.PrefabFactory`2
  // Could not write size check! Type: Zenject.PrefabFactory`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_2, "Zenject", "PrefabFactory`2");
