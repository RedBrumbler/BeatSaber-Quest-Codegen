// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InvalidBindResponses
  struct InvalidBindResponses;
  // Forward declaring type: IProvider
  class IProvider;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.BindingUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class BindingUtil : public ::Il2CppObject {
    public:
    // static public System.Void AssertIsValidPrefab(UnityEngine.Object prefab)
    // Offset: 0x14DBA3C
    static void AssertIsValidPrefab(UnityEngine::Object* prefab);
    // static public System.Void AssertIsValidGameObject(UnityEngine.GameObject gameObject)
    // Offset: 0x14DBA9C
    static void AssertIsValidGameObject(UnityEngine::GameObject* gameObject);
    // static public System.Void AssertIsNotComponent(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DBAFC
    static void AssertIsNotComponent(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsNotComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AssertIsNotComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingUtil::AssertIsNotComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "BindingUtil", "AssertIsNotComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void AssertIsNotComponent(System.Type type)
    // Offset: 0x14DBD44
    static void AssertIsNotComponent(System::Type* type);
    // static public System.Void AssertDerivesFromUnityObject(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DBE08
    static void AssertDerivesFromUnityObject(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertDerivesFromUnityObject()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AssertDerivesFromUnityObject() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingUtil::AssertDerivesFromUnityObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "BindingUtil", "AssertDerivesFromUnityObject", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void AssertDerivesFromUnityObject(System.Type type)
    // Offset: 0x14DC050
    static void AssertDerivesFromUnityObject(System::Type* type);
    // static public System.Void AssertTypesAreNotComponents(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DC0D8
    static void AssertTypesAreNotComponents(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsValidResourcePath(System.String resourcePath)
    // Offset: 0x14DC320
    static void AssertIsValidResourcePath(::Il2CppString* resourcePath);
    // static public System.Void AssertIsInterfaceOrScriptableObject(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DC380
    static void AssertIsInterfaceOrScriptableObject(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsInterfaceOrScriptableObject()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AssertIsInterfaceOrScriptableObject() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingUtil::AssertIsInterfaceOrScriptableObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "BindingUtil", "AssertIsInterfaceOrScriptableObject", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void AssertIsInterfaceOrScriptableObject(System.Type type)
    // Offset: 0x14DC5C8
    static void AssertIsInterfaceOrScriptableObject(System::Type* type);
    // static public System.Void AssertIsInterfaceOrComponent(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DC6C8
    static void AssertIsInterfaceOrComponent(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsInterfaceOrComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AssertIsInterfaceOrComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingUtil::AssertIsInterfaceOrComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "BindingUtil", "AssertIsInterfaceOrComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void AssertIsInterfaceOrComponent(System.Type type)
    // Offset: 0x14DC910
    static void AssertIsInterfaceOrComponent(System::Type* type);
    // static public System.Void AssertIsComponent(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DCA10
    static void AssertIsComponent(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AssertIsComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingUtil::AssertIsComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "BindingUtil", "AssertIsComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void AssertIsComponent(System.Type type)
    // Offset: 0x14DCC58
    static void AssertIsComponent(System::Type* type);
    // static public System.Void AssertTypesAreNotAbstract(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DCD18
    static void AssertTypesAreNotAbstract(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsNotAbstract(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x14DCFEC
    static void AssertIsNotAbstract(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // static public System.Void AssertIsNotAbstract()
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AssertIsNotAbstract() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::BindingUtil::AssertIsNotAbstract");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "BindingUtil", "AssertIsNotAbstract", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void AssertIsNotAbstract(System.Type type)
    // Offset: 0x14DCF60
    static void AssertIsNotAbstract(System::Type* type);
    // static public System.Void AssertIsDerivedFromType(System.Type concreteType, System.Type parentType)
    // Offset: 0x14DD234
    static void AssertIsDerivedFromType(System::Type* concreteType, System::Type* parentType);
    // static public System.Void AssertConcreteTypeListIsNotEmpty(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes)
    // Offset: 0x14DD35C
    static void AssertConcreteTypeListIsNotEmpty(System::Collections::Generic::IEnumerable_1<System::Type*>* concreteTypes);
    // static public System.Void AssertIsDerivedFromTypes(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes, System.Collections.Generic.IEnumerable`1<System.Type> parentTypes, Zenject.InvalidBindResponses invalidBindResponse)
    // Offset: 0x14DD3C4
    static void AssertIsDerivedFromTypes(System::Collections::Generic::IEnumerable_1<System::Type*>* concreteTypes, System::Collections::Generic::IEnumerable_1<System::Type*>* parentTypes, Zenject::InvalidBindResponses invalidBindResponse);
    // static public System.Void AssertIsDerivedFromTypes(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes, System.Collections.Generic.IEnumerable`1<System.Type> parentTypes)
    // Offset: 0x14DD478
    static void AssertIsDerivedFromTypes(System::Collections::Generic::IEnumerable_1<System::Type*>* concreteTypes, System::Collections::Generic::IEnumerable_1<System::Type*>* parentTypes);
    // static public System.Void AssertIsDerivedFromTypes(System.Type concreteType, System.Collections.Generic.IEnumerable`1<System.Type> parentTypes)
    // Offset: 0x14DD6CC
    static void AssertIsDerivedFromTypes(System::Type* concreteType, System::Collections::Generic::IEnumerable_1<System::Type*>* parentTypes);
    // static public System.Void AssertInstanceDerivesFromOrEqual(System.Object instance, System.Collections.Generic.IEnumerable`1<System.Type> parentTypes)
    // Offset: 0x14DD924
    static void AssertInstanceDerivesFromOrEqual(::Il2CppObject* instance, System::Collections::Generic::IEnumerable_1<System::Type*>* parentTypes);
    // static public System.Void AssertInstanceDerivesFromOrEqual(System.Object instance, System.Type baseType)
    // Offset: 0x14DDB8C
    static void AssertInstanceDerivesFromOrEqual(::Il2CppObject* instance, System::Type* baseType);
    // static public Zenject.IProvider CreateCachedProvider(Zenject.IProvider creator)
    // Offset: 0x14DDC6C
    static Zenject::IProvider* CreateCachedProvider(Zenject::IProvider* creator);
  }; // Zenject.BindingUtil
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingUtil*, "Zenject", "BindingUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsValidPrefab
// Il2CppName: AssertIsValidPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*)>(&Zenject::BindingUtil::AssertIsValidPrefab)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsValidPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsValidGameObject
// Il2CppName: AssertIsValidGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*)>(&Zenject::BindingUtil::AssertIsValidGameObject)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsValidGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsNotComponent
// Il2CppName: AssertIsNotComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsNotComponent)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsNotComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsNotComponent
// Il2CppName: AssertIsNotComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsNotComponent
// Il2CppName: AssertIsNotComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::BindingUtil::AssertIsNotComponent)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsNotComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertDerivesFromUnityObject
// Il2CppName: AssertDerivesFromUnityObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertDerivesFromUnityObject)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertDerivesFromUnityObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertDerivesFromUnityObject
// Il2CppName: AssertDerivesFromUnityObject
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertDerivesFromUnityObject
// Il2CppName: AssertDerivesFromUnityObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::BindingUtil::AssertDerivesFromUnityObject)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertDerivesFromUnityObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertTypesAreNotComponents
// Il2CppName: AssertTypesAreNotComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertTypesAreNotComponents)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertTypesAreNotComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsValidResourcePath
// Il2CppName: AssertIsValidResourcePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&Zenject::BindingUtil::AssertIsValidResourcePath)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsValidResourcePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsInterfaceOrScriptableObject
// Il2CppName: AssertIsInterfaceOrScriptableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsInterfaceOrScriptableObject)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsInterfaceOrScriptableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsInterfaceOrScriptableObject
// Il2CppName: AssertIsInterfaceOrScriptableObject
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsInterfaceOrScriptableObject
// Il2CppName: AssertIsInterfaceOrScriptableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::BindingUtil::AssertIsInterfaceOrScriptableObject)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsInterfaceOrScriptableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsInterfaceOrComponent
// Il2CppName: AssertIsInterfaceOrComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsInterfaceOrComponent)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsInterfaceOrComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsInterfaceOrComponent
// Il2CppName: AssertIsInterfaceOrComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsInterfaceOrComponent
// Il2CppName: AssertIsInterfaceOrComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::BindingUtil::AssertIsInterfaceOrComponent)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsInterfaceOrComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsComponent
// Il2CppName: AssertIsComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsComponent)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsComponent
// Il2CppName: AssertIsComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsComponent
// Il2CppName: AssertIsComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::BindingUtil::AssertIsComponent)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertTypesAreNotAbstract
// Il2CppName: AssertTypesAreNotAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertTypesAreNotAbstract)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertTypesAreNotAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsNotAbstract
// Il2CppName: AssertIsNotAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsNotAbstract)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsNotAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsNotAbstract
// Il2CppName: AssertIsNotAbstract
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsNotAbstract
// Il2CppName: AssertIsNotAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&Zenject::BindingUtil::AssertIsNotAbstract)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsNotAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsDerivedFromType
// Il2CppName: AssertIsDerivedFromType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*, System::Type*)>(&Zenject::BindingUtil::AssertIsDerivedFromType)> {
  static const MethodInfo* get() {
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsDerivedFromType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{concreteType, parentType});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertConcreteTypeListIsNotEmpty
// Il2CppName: AssertConcreteTypeListIsNotEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertConcreteTypeListIsNotEmpty)> {
  static const MethodInfo* get() {
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertConcreteTypeListIsNotEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{concreteTypes});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsDerivedFromTypes
// Il2CppName: AssertIsDerivedFromTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*, System::Collections::Generic::IEnumerable_1<System::Type*>*, Zenject::InvalidBindResponses)>(&Zenject::BindingUtil::AssertIsDerivedFromTypes)> {
  static const MethodInfo* get() {
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* parentTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* invalidBindResponse = &::il2cpp_utils::GetClassFromName("Zenject", "InvalidBindResponses")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsDerivedFromTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{concreteTypes, parentTypes, invalidBindResponse});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsDerivedFromTypes
// Il2CppName: AssertIsDerivedFromTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<System::Type*>*, System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsDerivedFromTypes)> {
  static const MethodInfo* get() {
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* parentTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsDerivedFromTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{concreteTypes, parentTypes});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertIsDerivedFromTypes
// Il2CppName: AssertIsDerivedFromTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*, System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertIsDerivedFromTypes)> {
  static const MethodInfo* get() {
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* parentTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertIsDerivedFromTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{concreteType, parentTypes});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertInstanceDerivesFromOrEqual
// Il2CppName: AssertInstanceDerivesFromOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::BindingUtil::AssertInstanceDerivesFromOrEqual)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* parentTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertInstanceDerivesFromOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, parentTypes});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::AssertInstanceDerivesFromOrEqual
// Il2CppName: AssertInstanceDerivesFromOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Type*)>(&Zenject::BindingUtil::AssertInstanceDerivesFromOrEqual)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* baseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "AssertInstanceDerivesFromOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, baseType});
  }
};
// Writing MetadataGetter for method: Zenject::BindingUtil::CreateCachedProvider
// Il2CppName: CreateCachedProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (*)(Zenject::IProvider*)>(&Zenject::BindingUtil::CreateCachedProvider)> {
  static const MethodInfo* get() {
    static auto* creator = &::il2cpp_utils::GetClassFromName("Zenject", "IProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindingUtil*), "CreateCachedProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{creator});
  }
};
