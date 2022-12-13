// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
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
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabInstantiatorCached
  class PrefabInstantiatorCached;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PrefabInstantiatorCached);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiatorCached*, "Zenject", "PrefabInstantiatorCached");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabInstantiatorCached
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class PrefabInstantiatorCached : public ::Il2CppObject/*, public ::Zenject::IPrefabInstantiator*/ {
    public:
    public:
    // private readonly Zenject.IPrefabInstantiator _subInstantiator
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::IPrefabInstantiator* subInstantiator;
    // Field size check
    static_assert(sizeof(::Zenject::IPrefabInstantiator*) == 0x8);
    // private UnityEngine.GameObject _gameObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IPrefabInstantiator
    operator ::Zenject::IPrefabInstantiator() noexcept {
      return *reinterpret_cast<::Zenject::IPrefabInstantiator*>(this);
    }
    // Creating interface conversion operator: i_IPrefabInstantiator
    inline ::Zenject::IPrefabInstantiator* i_IPrefabInstantiator() noexcept {
      return reinterpret_cast<::Zenject::IPrefabInstantiator*>(this);
    }
    // Get instance field reference: private readonly Zenject.IPrefabInstantiator _subInstantiator
    [[deprecated("Use field access instead!")]] ::Zenject::IPrefabInstantiator*& dyn__subInstantiator();
    // Get instance field reference: private UnityEngine.GameObject _gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__gameObject();
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0x1CC4CFC
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments();
    // public System.Type get_ArgumentTarget()
    // Offset: 0x1CC4DB0
    ::System::Type* get_ArgumentTarget();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0x1CC4E60
    ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public System.Void .ctor(Zenject.IPrefabInstantiator subInstantiator)
    // Offset: 0x1CC3640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabInstantiatorCached* New_ctor(::Zenject::IPrefabInstantiator* subInstantiator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabInstantiatorCached::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabInstantiatorCached*, creationType>(subInstantiator)));
    }
    // public UnityEngine.Object GetPrefab()
    // Offset: 0x1CC4F14
    ::UnityEngine::Object* GetPrefab();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    // Offset: 0x1CC4FC8
    ::UnityEngine::GameObject* Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction);
  }; // Zenject.PrefabInstantiatorCached
  #pragma pack(pop)
  static check_size<sizeof(PrefabInstantiatorCached), 24 + sizeof(::UnityEngine::GameObject*)> __Zenject_PrefabInstantiatorCachedSizeCheck;
  static_assert(sizeof(PrefabInstantiatorCached) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::get_ExtraArguments
// Il2CppName: get_ExtraArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::get_ExtraArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "get_ExtraArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::get_ArgumentTarget
// Il2CppName: get_ArgumentTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::get_ArgumentTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "get_ArgumentTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters
// Il2CppName: get_GameObjectCreationParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::GameObjectCreationParameters* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "get_GameObjectCreationParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::GetPrefab
// Il2CppName: GetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::GetPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "GetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Zenject::PrefabInstantiatorCached::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>)>(&Zenject::PrefabInstantiatorCached::Instantiate)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction});
  }
};
