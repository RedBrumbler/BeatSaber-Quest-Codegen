// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IAnimatorIkHandler
  class IAnimatorIkHandler;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: AnimatorIkHandlerManager
  class AnimatorIkHandlerManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::AnimatorIkHandlerManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AnimatorIkHandlerManager*, "Zenject", "AnimatorIkHandlerManager");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AnimatorIkHandlerManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatorIkHandlerManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> _handlers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* handlers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> _handlers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*& dyn__handlers();
    // public System.Void .ctor()
    // Offset: 0x17BB460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorIkHandlerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::AnimatorIkHandlerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorIkHandlerManager*, creationType>()));
    }
    // public System.Void Construct(System.Collections.Generic.List`1<Zenject.IAnimatorIkHandler> handlers)
    // Offset: 0x17BB2F8
    void Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* handlers);
    // public System.Void OnAnimatorIk()
    // Offset: 0x17BB300
    void OnAnimatorIk();
    // static private System.Void __zenInjectMethod0(System.Object P_0, System.Object[] P_1)
    // Offset: 0x17BB468
    static void __zenInjectMethod0(::Il2CppObject* P_0, ::ArrayW<::Il2CppObject*> P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x17BB554
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.AnimatorIkHandlerManager
  #pragma pack(pop)
  static check_size<sizeof(AnimatorIkHandlerManager), 24 + sizeof(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*)> __Zenject_AnimatorIkHandlerManagerSizeCheck;
  static_assert(sizeof(AnimatorIkHandlerManager) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorIkHandlerManager::*)(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*)>(&Zenject::AnimatorIkHandlerManager::Construct)> {
  static const MethodInfo* get() {
    static auto* handlers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "IAnimatorIkHandler")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorIkHandlerManager*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handlers});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::OnAnimatorIk
// Il2CppName: OnAnimatorIk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorIkHandlerManager::*)()>(&Zenject::AnimatorIkHandlerManager::OnAnimatorIk)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorIkHandlerManager*), "OnAnimatorIk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::__zenInjectMethod0
// Il2CppName: __zenInjectMethod0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&Zenject::AnimatorIkHandlerManager::__zenInjectMethod0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorIkHandlerManager*), "__zenInjectMethod0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::AnimatorIkHandlerManager::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::AnimatorIkHandlerManager::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorIkHandlerManager*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
