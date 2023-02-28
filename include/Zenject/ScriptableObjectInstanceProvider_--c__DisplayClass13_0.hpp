// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScriptableObjectInstanceProvider
#include "Zenject/ScriptableObjectInstanceProvider.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*, "Zenject", "ScriptableObjectInstanceProvider/<>c__DisplayClass13_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectInstanceProvider/Zenject.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ScriptableObjectInstanceProvider::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<System.Object> buffer
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // public Zenject.ScriptableObjectInstanceProvider <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::ScriptableObjectInstanceProvider* $$4__this;
    // Field size check
    static_assert(sizeof(::Zenject::ScriptableObjectInstanceProvider*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*) == 0x8);
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(::Zenject::InjectContext*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<System.Object> buffer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn_buffer();
    // Get instance field reference: public Zenject.ScriptableObjectInstanceProvider <>4__this
    [[deprecated("Use field access instead!")]] ::Zenject::ScriptableObjectInstanceProvider*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& dyn_args();
    // Get instance field reference: public Zenject.InjectContext context
    [[deprecated("Use field access instead!")]] ::Zenject::InjectContext*& dyn_context();
    // public System.Void .ctor()
    // Offset: 0x1DE4058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectInstanceProvider::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*, creationType>()));
    }
    // System.Void <GetAllInstancesWithInjectSplit>b__0()
    // Offset: 0x1DE4060
    void $GetAllInstancesWithInjectSplit$b__0();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DE41D0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DE422C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ScriptableObjectInstanceProvider/Zenject.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(ScriptableObjectInstanceProvider::$$c__DisplayClass13_0), 40 + sizeof(::Zenject::InjectContext*)> __Zenject_ScriptableObjectInstanceProvider_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(ScriptableObjectInstanceProvider::$$c__DisplayClass13_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::$GetAllInstancesWithInjectSplit$b__0
// Il2CppName: <GetAllInstancesWithInjectSplit>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::*)()>(&Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::$GetAllInstancesWithInjectSplit$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*), "<GetAllInstancesWithInjectSplit>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
