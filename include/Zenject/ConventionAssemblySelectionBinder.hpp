// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConventionAssemblySelectionBinder
  class ConventionAssemblySelectionBinder : public ::CsObject {
    public:
    // Nested type: Zenject::ConventionAssemblySelectionBinder::$$c
    class $$c;
    // Nested type: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // private Zenject.ConventionBindInfo <BindInfo>k__BackingField
    // Offset: 0x10
    Zenject::ConventionBindInfo* BindInfo;
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0xD6A954
    static ConventionAssemblySelectionBinder* New_ctor(Zenject::ConventionBindInfo* bindInfo);
    // protected Zenject.ConventionBindInfo get_BindInfo()
    // Offset: 0xD6A988
    Zenject::ConventionBindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.ConventionBindInfo value)
    // Offset: 0xD6A990
    void set_BindInfo(Zenject::ConventionBindInfo* value);
    // public System.Void FromAllAssemblies()
    // Offset: 0xD6A998
    void FromAllAssemblies();
    // public System.Void FromAssemblyContaining()
    // Offset: 0xFFFFFFFF
    template<class T>
    void FromAssemblyContaining() {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "FromAssemblyContaining", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // public System.Void FromAssembliesContaining(System.Type[] types)
    // Offset: 0xD6A99C
    void FromAssembliesContaining(::Array<System::Type*>* types);
    // public System.Void FromAssembliesContaining(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0xD6A9A0
    void FromAssembliesContaining(System::Collections::Generic::IEnumerable_1<System::Type*>* types);
    // public System.Void FromThisAssembly()
    // Offset: 0xD6AB88
    void FromThisAssembly();
    // public System.Void FromAssembly(System.Reflection.Assembly assembly)
    // Offset: 0xD6AC50
    void FromAssembly(System::Reflection::Assembly* assembly);
    // public System.Void FromAssemblies(System.Reflection.Assembly[] assemblies)
    // Offset: 0xD6AC4C
    void FromAssemblies(::Array<System::Reflection::Assembly*>* assemblies);
    // public System.Void FromAssemblies(System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> assemblies)
    // Offset: 0xD6AAC4
    void FromAssemblies(System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* assemblies);
    // public System.Void FromAssembliesWhere(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0xD6AD7C
    void FromAssembliesWhere(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
  }; // Zenject.ConventionAssemblySelectionBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionAssemblySelectionBinder*, "Zenject", "ConventionAssemblySelectionBinder");
#pragma pack(pop)
