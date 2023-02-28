// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ScriptableObjectInstanceProvider
  class ScriptableObjectInstanceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ScriptableObjectInstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstanceProvider*, "Zenject", "ScriptableObjectInstanceProvider");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectInstanceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ScriptableObjectInstanceProvider : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    // Nested type: ::Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly System.Type _resourceType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* resourceType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*) == 0x8);
    // private readonly System.Boolean _createNew
    // Size: 0x1
    // Offset: 0x28
    bool createNew;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: createNew and: concreteIdentifier
    char __padding3[0x7] = {};
    // private readonly System.Object _concreteIdentifier
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* concreteIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*) == 0x8);
    // private readonly UnityEngine.Object _resource
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Object* resource;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating interface conversion operator: i_IProvider
    inline ::Zenject::IProvider* i_IProvider() noexcept {
      return reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Type _resourceType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__resourceType();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& dyn__extraArguments();
    // Get instance field reference: private readonly System.Boolean _createNew
    [[deprecated("Use field access instead!")]] bool& dyn__createNew();
    // Get instance field reference: private readonly System.Object _concreteIdentifier
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__concreteIdentifier();
    // Get instance field reference: private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*& dyn__instantiateCallback();
    // Get instance field reference: private readonly UnityEngine.Object _resource
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__resource();
    // public System.Boolean get_IsCached()
    // Offset: 0x1DE3F08
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x1DE3F10
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(UnityEngine.Object resource, System.Type resourceType, Zenject.DiContainer container, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Boolean createNew, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x1DE3E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectInstanceProvider* New_ctor(::UnityEngine::Object* resource, ::System::Type* resourceType, ::Zenject::DiContainer* container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, bool createNew, ::Il2CppObject* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ScriptableObjectInstanceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectInstanceProvider*, creationType>(resource, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x1DE3F18
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x1DE3F20
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.ScriptableObjectInstanceProvider
  #pragma pack(pop)
  static check_size<sizeof(ScriptableObjectInstanceProvider), 64 + sizeof(::UnityEngine::Object*)> __Zenject_ScriptableObjectInstanceProviderSizeCheck;
  static_assert(sizeof(ScriptableObjectInstanceProvider) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ScriptableObjectInstanceProvider::*)()>(&Zenject::ScriptableObjectInstanceProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ScriptableObjectInstanceProvider::*)()>(&Zenject::ScriptableObjectInstanceProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::ScriptableObjectInstanceProvider::*)(::Zenject::InjectContext*)>(&Zenject::ScriptableObjectInstanceProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScriptableObjectInstanceProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::ScriptableObjectInstanceProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
