// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TickableManager
#include "Zenject/TickableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateTickable
  class ILateTickable;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TickableManager/<>c__DisplayClass19_0
  // [CompilerGeneratedAttribute] Offset: DDE6CC
  class TickableManager::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    // public Zenject.ILateTickable tickable
    // Size: 0x8
    // Offset: 0x10
    Zenject::ILateTickable* tickable;
    // Field size check
    static_assert(sizeof(Zenject::ILateTickable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass19_0
    $$c__DisplayClass19_0(Zenject::ILateTickable* tickable_ = {}) noexcept : tickable{tickable_} {}
    // Creating conversion operator: operator Zenject::ILateTickable*
    constexpr operator Zenject::ILateTickable*() const noexcept {
      return tickable;
    }
    // System.Boolean <InitLateTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x16ED414
    bool $InitLateTickables$b__1(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x16ECEDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickableManager::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TickableManager::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickableManager::$$c__DisplayClass19_0*, creationType>()));
    }
  }; // Zenject.TickableManager/<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(TickableManager::$$c__DisplayClass19_0), 16 + sizeof(Zenject::ILateTickable*)> __Zenject_TickableManager_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(TickableManager::$$c__DisplayClass19_0) == 0x18);
  // Writing MetadataGetter for method: TickableManager::$$c__DisplayClass19_0::$InitLateTickables$b__1
  // Il2CppName: <InitLateTickables>b__1
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TickableManager::$$c__DisplayClass19_0::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&TickableManager::$$c__DisplayClass19_0::$InitLateTickables$b__1)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TickableManager::$$c__DisplayClass19_0*), "<InitLateTickables>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<ModestTree::Util::ValuePair_2<System::Type*, int>*>()});
    }
  };
  // Writing MetadataGetter for method: TickableManager::$$c__DisplayClass19_0::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TickableManager::$$c__DisplayClass19_0::*)()>(&TickableManager::$$c__DisplayClass19_0::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TickableManager::$$c__DisplayClass19_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TickableManager::$$c__DisplayClass19_0::*)()>(&TickableManager::$$c__DisplayClass19_0::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TickableManager::$$c__DisplayClass19_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickableManager::$$c__DisplayClass19_0*, "Zenject", "TickableManager/<>c__DisplayClass19_0");
