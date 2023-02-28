// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SceneDecoratorContext
  class SceneDecoratorContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneContext::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContext::$$c*, "Zenject", "SceneContext/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SceneContext::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.SceneContext/Zenject.<>c <>9
    static ::Zenject::SceneContext::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.SceneContext/Zenject.<>c <>9
    static void _set_$$9(::Zenject::SceneContext::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__49_0
    static ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* _get_$$9__49_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__49_0
    static void _set_$$9__49_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__49_1
    static ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* _get_$$9__49_1();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__49_1
    static void _set_$$9__49_1(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* value);
    // Get static field: static public System.Func`2<Zenject.SceneContext,Zenject.DiContainer> <>9__49_3
    static ::System::Func_2<::Zenject::SceneContext*, ::Zenject::DiContainer*>* _get_$$9__49_3();
    // Set static field: static public System.Func`2<Zenject.SceneContext,Zenject.DiContainer> <>9__49_3
    static void _set_$$9__49_3(::System::Func_2<::Zenject::SceneContext*, ::Zenject::DiContainer*>* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__50_0
    static ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* _get_$$9__50_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__50_0
    static void _set_$$9__50_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneDecoratorContext>> <>9__50_1
    static ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>*>* _get_$$9__50_1();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneDecoratorContext>> <>9__50_1
    static void _set_$$9__50_1(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1CDCE2C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1CDCE90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneContext::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext::$$c*, creationType>()));
    }
    // System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> <GetParentContainers>b__49_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1CDCE98
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* $GetParentContainers$b__49_0(::UnityEngine::SceneManagement::Scene scene);
    // System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> <GetParentContainers>b__49_1(UnityEngine.GameObject root)
    // Offset: 0x1CDCEC0
    ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* $GetParentContainers$b__49_1(::UnityEngine::GameObject* root);
    // Zenject.DiContainer <GetParentContainers>b__49_3(Zenject.SceneContext x)
    // Offset: 0x1CDCF18
    ::Zenject::DiContainer* $GetParentContainers$b__49_3(::Zenject::SceneContext* x);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> <LookupDecoratorContexts>b__50_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1CDCF38
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* $LookupDecoratorContexts$b__50_0(::UnityEngine::SceneManagement::Scene scene);
    // System.Collections.Generic.IEnumerable`1<Zenject.SceneDecoratorContext> <LookupDecoratorContexts>b__50_1(UnityEngine.GameObject root)
    // Offset: 0x1CDCF60
    ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>* $LookupDecoratorContexts$b__50_1(::UnityEngine::GameObject* root);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CDCFB8
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CDD014
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SceneContext/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::SceneContext::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::$GetParentContainers$b__49_0
// Il2CppName: <GetParentContainers>b__49_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* (Zenject::SceneContext::$$c::*)(::UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContext::$$c::$GetParentContainers$b__49_0)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "<GetParentContainers>b__49_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::$GetParentContainers$b__49_1
// Il2CppName: <GetParentContainers>b__49_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* (Zenject::SceneContext::$$c::*)(::UnityEngine::GameObject*)>(&Zenject::SceneContext::$$c::$GetParentContainers$b__49_1)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "<GetParentContainers>b__49_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::$GetParentContainers$b__49_3
// Il2CppName: <GetParentContainers>b__49_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SceneContext::$$c::*)(::Zenject::SceneContext*)>(&Zenject::SceneContext::$$c::$GetParentContainers$b__49_3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "<GetParentContainers>b__49_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::$LookupDecoratorContexts$b__50_0
// Il2CppName: <LookupDecoratorContexts>b__50_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* (Zenject::SceneContext::$$c::*)(::UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContext::$$c::$LookupDecoratorContexts$b__50_0)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "<LookupDecoratorContexts>b__50_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::$LookupDecoratorContexts$b__50_1
// Il2CppName: <LookupDecoratorContexts>b__50_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>* (Zenject::SceneContext::$$c::*)(::UnityEngine::GameObject*)>(&Zenject::SceneContext::$$c::$LookupDecoratorContexts$b__50_1)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "<LookupDecoratorContexts>b__50_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SceneContext::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneContext::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
