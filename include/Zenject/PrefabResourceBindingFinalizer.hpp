// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IPrefabInstantiator
  class IPrefabInstantiator;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
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
  // Forward declaring type: PrefabResourceBindingFinalizer
  class PrefabResourceBindingFinalizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PrefabResourceBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabResourceBindingFinalizer*, "Zenject", "PrefabResourceBindingFinalizer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabResourceBindingFinalizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class PrefabResourceBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: ::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: ::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    public:
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
    // private readonly System.String _resourcePath
    // Size: 0x8
    // Offset: 0x20
    ::StringW resourcePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> _providerFactory
    // Size: 0x8
    // Offset: 0x28
    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory;
    // Field size check
    static_assert(sizeof(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::BindInfo*
    constexpr operator ::Zenject::BindInfo*() const noexcept = delete;
    // Get instance field reference: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn__gameObjectBindInfo();
    // Get instance field reference: private readonly System.String _resourcePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__resourcePath();
    // Get instance field reference: private readonly System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> _providerFactory
    [[deprecated("Use field access instead!")]] ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& dyn__providerFactory();
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.String resourcePath, System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> providerFactory)
    // Offset: 0x1CC5220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath, ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabResourceBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceBindingFinalizer*, creationType>(bindInfo, gameObjectBindInfo, resourcePath, providerFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x1CC55AC
    void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x1CC5304
    void FinalizeBindingSelf(::Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x1CC526C
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(::Zenject::DiContainer* container);
  }; // Zenject.PrefabResourceBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(PrefabResourceBindingFinalizer), 40 + sizeof(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*)> __Zenject_PrefabResourceBindingFinalizerSizeCheck;
  static_assert(sizeof(PrefabResourceBindingFinalizer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::FinalizeBindingConcrete
// Il2CppName: FinalizeBindingConcrete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&Zenject::PrefabResourceBindingFinalizer::FinalizeBindingConcrete)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer*), "FinalizeBindingConcrete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteTypes});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::FinalizeBindingSelf
// Il2CppName: FinalizeBindingSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::DiContainer*)>(&Zenject::PrefabResourceBindingFinalizer::FinalizeBindingSelf)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer*), "FinalizeBindingSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::OnFinalizeBinding
// Il2CppName: OnFinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::DiContainer*)>(&Zenject::PrefabResourceBindingFinalizer::OnFinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer*), "OnFinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
