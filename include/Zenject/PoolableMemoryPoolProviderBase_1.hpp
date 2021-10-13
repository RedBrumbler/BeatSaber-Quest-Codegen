// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableMemoryPoolProviderBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class PoolableMemoryPoolProviderBase_1 : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Guid <PoolId>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    System::Guid PoolId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // private Zenject.DiContainer <Container>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* Container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Guid <PoolId>k__BackingField
    System::Guid& dyn_$PoolId$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::dyn_$PoolId$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<PoolId>k__BackingField"))->offset;
      return *reinterpret_cast<System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Zenject.DiContainer <Container>k__BackingField
    Zenject::DiContainer*& dyn_$Container$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::dyn_$Container$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Container>k__BackingField"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFF
    bool get_IsCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::get_IsCached");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // protected System.Guid get_PoolId()
    // Offset: 0xFFFFFFFF
    System::Guid get_PoolId() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::get_PoolId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_PoolId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Guid, false>(this, ___internal__method);
    }
    // private System.Void set_PoolId(System.Guid value)
    // Offset: 0xFFFFFFFF
    void set_PoolId(System::Guid value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::set_PoolId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_PoolId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // private System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0xFFFFFFFF
    void set_Container(Zenject::DiContainer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::set_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFF
    bool get_TypeVariesBasedOnMemberType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::get_TypeVariesBasedOnMemberType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPoolProviderBase_1<TContract>* New_ctor(Zenject::DiContainer* container, System::Guid poolId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPoolProviderBase_1<TContract>*, creationType>(container, poolId)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    System::Type* GetInstanceType(Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::GetInstanceType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInstanceType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method, context);
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProviderBase_1::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, byref(injectAction), buffer);
    }
  }; // Zenject.PoolableMemoryPoolProviderBase`1
  // Could not write size check! Type: Zenject.PoolableMemoryPoolProviderBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProviderBase_1, "Zenject", "PoolableMemoryPoolProviderBase`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
