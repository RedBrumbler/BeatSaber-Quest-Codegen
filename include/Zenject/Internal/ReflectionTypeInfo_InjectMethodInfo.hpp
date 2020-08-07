// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo
  class ReflectionTypeInfo::InjectMethodInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.MethodInfo MethodInfo
    // Offset: 0x10
    System::Reflection::MethodInfo* MethodInfo;
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> Parameters
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* Parameters;
    // public System.Void .ctor(System.Reflection.MethodInfo methodInfo, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> parameters)
    // Offset: 0xF2971C
    static ReflectionTypeInfo::InjectMethodInfo* New_ctor(System::Reflection::MethodInfo* methodInfo, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* parameters);
  }; // Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectMethodInfo");
#pragma pack(pop)