// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PersistentSingleton`1
  template<typename T>
  class PersistentSingleton_1 : public UnityEngine::MonoBehaviour {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, UnityEngine::MonoBehaviour*>));
    public:
    // Autogenerated static field getter
    // Get static field: static private T _instance
    static T _get__instance() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private T _instance
    static void _set__instance(T value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_instance", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Object _lock
    static ::Il2CppObject* _get__lock() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_lock"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Object _lock
    static void _set__lock(::Il2CppObject* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_lock", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Boolean _applicationIsQuitting
    static bool _get__applicationIsQuitting() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_applicationIsQuitting"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Boolean _applicationIsQuitting
    static void _set__applicationIsQuitting(bool value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_applicationIsQuitting", value));
    }
    // static protected System.Void NoDomainReloadInit()
    // Offset: 0xFFFFFFFF
    static void NoDomainReloadInit() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "NoDomainReloadInit"));
    }
    // static public T get_instance()
    // Offset: 0xFFFFFFFF
    static T get_instance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "get_instance"));
    }
    // static public System.Void TouchInstance()
    // Offset: 0xFFFFFFFF
    static void TouchInstance() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "TouchInstance"));
    }
    // static public System.Boolean get_IsSingletonAvailable()
    // Offset: 0xFFFFFFFF
    static bool get_IsSingletonAvailable() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "get_IsSingletonAvailable"));
    }
    // protected System.Void OnEnable()
    // Offset: 0xFFFFFFFF
    void OnEnable() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PersistentSingleton_1<T>* New_ctor() {
      return (PersistentSingleton_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), ".cctor"));
    }
  }; // PersistentSingleton`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::PersistentSingleton_1, "", "PersistentSingleton`1");
#pragma pack(pop)