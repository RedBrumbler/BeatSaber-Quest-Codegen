// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`4
#include "Zenject/IFactory_4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabFactory`3<P1, P2, T>
  template<typename P1, typename P2, typename T>
  class PrefabFactory_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabFactory_3, "Zenject", "PrefabFactory`3");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PrefabFactory`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename P1, typename P2, typename T>
  class PrefabFactory_3 : public ::Il2CppObject/*, public ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x10ECED8
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>
    operator ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>() noexcept {
      return *reinterpret_cast<::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>*>(this);
    }
    // Creating interface conversion operator: i_Object_P1_P2_T
    inline ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>* i_Object_P1_P2_T() noexcept {
      return reinterpret_cast<::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>*>(this);
    }
    // Creating conversion operator: operator ::Zenject::DiContainer*
    constexpr operator ::Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::dyn__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<::Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabFactory_3<P1, P2, T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabFactory_3<P1, P2, T>*, creationType>()));
    }
    // public T Create(UnityEngine.Object prefab, P1 param, P2 param2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Create(::UnityEngine::Object* prefab, P1 param, P2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab), ::il2cpp_utils::ExtractType(param), ::il2cpp_utils::ExtractType(param2)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, prefab, param, param2);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabFactory_3<P1, P2, T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private System.Void __zenFieldSetter0(System.Object P_0, System.Object P_1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void __zenFieldSetter0(::Il2CppObject* P_0, ::Il2CppObject* P_1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::__zenFieldSetter0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabFactory_3<P1, P2, T>*>::get(), "__zenFieldSetter0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0), ::il2cpp_utils::ExtractType(P_1)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0, P_1);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabFactory_3::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabFactory_3<P1, P2, T>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.PrefabFactory`3
  // Could not write size check! Type: Zenject.PrefabFactory`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
