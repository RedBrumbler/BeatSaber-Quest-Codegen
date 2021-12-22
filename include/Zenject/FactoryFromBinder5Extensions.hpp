// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryFromBinder_6;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class IFactory_6;
  // Forward declaring type: IPoolable`6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class IPoolable_6;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: MemoryPool`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class MemoryPool_7;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryFromBinder5Extensions
  class FactoryFromBinder5Extensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::FactoryFromBinder5Extensions);
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder5Extensions*, "Zenject", "FactoryFromBinder5Extensions");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinder5Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class FactoryFromBinder5Extensions : public ::Il2CppObject {
    public:
    // Nested type: Zenject::FactoryFromBinder5Extensions::$$c__DisplayClass0_0_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
    class $$c__DisplayClass0_0_6;
    // Nested type: Zenject::FactoryFromBinder5Extensions::$$c__1_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
    class $$c__1_6;
    // Nested type: Zenject::FactoryFromBinder5Extensions::$$c__3_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
    class $$c__3_6;
    // Nested type: Zenject::FactoryFromBinder5Extensions::$$c__5_7<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TMemoryPool>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TMemoryPool>
    class $$c__5_7;
    // Nested type: Zenject::FactoryFromBinder5Extensions::$$c__DisplayClass6_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TContract, TMemoryPool>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TMemoryPool>
    class $$c__DisplayClass6_0_7;
    // static public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder, System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>*>* factoryBindGenerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromIFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromIFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(factoryBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder, factoryBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_6<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_6<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(poolBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_6<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromMonoPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromMonoPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_6<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromMonoPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromMonoPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(poolBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_6<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_6<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder5Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(poolBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
  }; // Zenject.FactoryFromBinder5Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromIFactory
// Il2CppName: FromIFactory
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromMonoPoolableMemoryPool
// Il2CppName: FromMonoPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromMonoPoolableMemoryPool
// Il2CppName: FromMonoPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder5Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
