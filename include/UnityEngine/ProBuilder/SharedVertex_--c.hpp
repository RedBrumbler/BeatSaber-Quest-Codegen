// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.SharedVertex
#include "UnityEngine/ProBuilder/SharedVertex.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SharedVertex/<>c
  class SharedVertex::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.SharedVertex/<>c <>9
    static UnityEngine::ProBuilder::SharedVertex::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.SharedVertex/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::SharedVertex::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Boolean> <>9__26_0
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<int, int>, bool>* _get_$$9__26_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Boolean> <>9__26_0
    static void _set_$$9__26_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<int, int>, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x18B49C4
    static void _cctor();
    // System.Boolean <SortedRemoveAndShift>b__26_0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x18B4A34
    bool $SortedRemoveAndShift$b__26_0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // public System.Void .ctor()
    // Offset: 0x18B4A2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SharedVertex::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.SharedVertex/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SharedVertex::$$c*, "UnityEngine.ProBuilder", "SharedVertex/<>c");
#pragma pack(pop)