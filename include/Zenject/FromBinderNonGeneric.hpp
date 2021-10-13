// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
  // Skipping declaration: ScopeConcreteIdArgConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinderNonGeneric
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class FromBinderNonGeneric : public Zenject::FromBinder {
    public:
    // Nested type: Zenject::FromBinderNonGeneric::$$c__1_2<TConcrete, TFactory>
    template<typename TConcrete, typename TFactory>
    class $$c__1_2;
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TConcrete, class TFactory>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_1<TConcrete>, std::remove_pointer_t<TFactory>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromIFactory(System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromIFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromIFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(factoryBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, factoryBindGenerator);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System.Func`2<Zenject.InjectContext,TConcrete> method)
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(System::Func_2<Zenject::InjectContext*, TConcrete>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethod", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultiple(System.Func`2<Zenject.InjectContext,System.Collections.Generic.IEnumerable`1<TConcrete>> method)
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<TConcrete>*>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromMethodMultiple");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethodMultiple", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System.Func`2<TObj,TContract> method)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(System::Func_2<TObj, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromResolveGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System.Object identifier, System.Func`2<TObj,TContract> method)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::Il2CppObject* identifier, System::Func_2<TObj, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromResolveGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(identifier), ::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, identifier, method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System.Object identifier, System.Func`2<TObj,TContract> method, Zenject.InjectSources source)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::Il2CppObject* identifier, System::Func_2<TObj, TContract>* method, Zenject::InjectSources source) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromResolveGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(identifier), ::il2cpp_utils::ExtractType(method), ::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, identifier, method, source);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System.Func`2<TObj,TContract> method)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(System::Func_2<TObj, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromResolveAllGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveAllGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System.Object identifier, System.Func`2<TObj,TContract> method)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::Il2CppObject* identifier, System::Func_2<TObj, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromResolveAllGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveAllGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(identifier), ::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, identifier, method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System.Object identifier, System.Func`2<TObj,TContract> method, Zenject.InjectSources source)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::Il2CppObject* identifier, System::Func_2<TObj, TContract>* method, Zenject::InjectSources source) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::FromResolveAllGetter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveAllGetter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(identifier), ::il2cpp_utils::ExtractType(method), ::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, identifier, method, source);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromInstance(System.Object instance)
    // Offset: 0x1815AD4
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(::Il2CppObject* instance);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(System.Func`2<UnityEngine.Component,System.Boolean> predicate, System.Boolean includeInactive)
    // Offset: 0x1815AD8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(System::Func_2<UnityEngine::Component*, bool>* predicate, bool includeInactive);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(System.Boolean excludeSelf, System.Func`2<UnityEngine.Component,System.Boolean> predicate, System.Boolean includeInactive)
    // Offset: 0x1815AEC
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool excludeSelf, System::Func_2<UnityEngine::Component*, bool>* predicate, bool includeInactive);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInHierarchy(System.Func`2<UnityEngine.Component,System.Boolean> predicate, System.Boolean includeInactive)
    // Offset: 0x1815AF8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(System::Func_2<UnityEngine::Component*, bool>* predicate, bool includeInactive);
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0x1815A98
    // Implemented from: Zenject.FromBinder
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinderNonGeneric* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinderNonGeneric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinderNonGeneric*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
  }; // Zenject.FromBinderNonGeneric
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinderNonGeneric*, "Zenject", "FromBinderNonGeneric");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromFactory
// Il2CppName: FromFactory
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromIFactory
// Il2CppName: FromIFactory
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromMethod
// Il2CppName: FromMethod
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromMethodMultiple
// Il2CppName: FromMethodMultiple
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromResolveGetter
// Il2CppName: FromResolveGetter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromResolveGetter
// Il2CppName: FromResolveGetter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromResolveGetter
// Il2CppName: FromResolveGetter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromResolveAllGetter
// Il2CppName: FromResolveAllGetter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromResolveAllGetter
// Il2CppName: FromResolveAllGetter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromResolveAllGetter
// Il2CppName: FromResolveAllGetter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromInstance
// Il2CppName: FromInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FromBinderNonGeneric::*)(::Il2CppObject*)>(&Zenject::FromBinderNonGeneric::FromInstance)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinderNonGeneric*), "FromInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromComponentsInChildren
// Il2CppName: FromComponentsInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FromBinderNonGeneric::*)(System::Func_2<UnityEngine::Component*, bool>*, bool)>(&Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinderNonGeneric*), "FromComponentsInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate, includeInactive});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromComponentsInChildren
// Il2CppName: FromComponentsInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FromBinderNonGeneric::*)(bool, System::Func_2<UnityEngine::Component*, bool>*, bool)>(&Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  static const MethodInfo* get() {
    static auto* excludeSelf = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinderNonGeneric*), "FromComponentsInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{excludeSelf, predicate, includeInactive});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::FromComponentsInHierarchy
// Il2CppName: FromComponentsInHierarchy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FromBinderNonGeneric::*)(System::Func_2<UnityEngine::Component*, bool>*, bool)>(&Zenject::FromBinderNonGeneric::FromComponentsInHierarchy)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinderNonGeneric*), "FromComponentsInHierarchy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate, includeInactive});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinderNonGeneric::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
