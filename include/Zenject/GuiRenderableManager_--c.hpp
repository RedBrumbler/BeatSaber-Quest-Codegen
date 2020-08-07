// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.GuiRenderableManager
#include "Zenject/GuiRenderableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.GuiRenderableManager/<>c
  class GuiRenderableManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.GuiRenderableManager/<>c <>9
    static Zenject::GuiRenderableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.GuiRenderableManager/<>c <>9
    static void _set_$$9(Zenject::GuiRenderableManager::$$c* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__1_2
    static System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* _get_$$9__1_2();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> <>9__1_2
    static void _set_$$9__1_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type*, int>*, int>* value);
    // Get static field: static public System.Func`2<Zenject.GuiRenderableManager/RenderableInfo,System.Int32> <>9__1_0
    static System::Func_2<Zenject::GuiRenderableManager::RenderableInfo*, int>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<Zenject.GuiRenderableManager/RenderableInfo,System.Int32> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<Zenject::GuiRenderableManager::RenderableInfo*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xF245CC
    static void _cctor();
    // System.Int32 <.ctor>b__1_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0xF2463C
    int $_ctor$b__1_2(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // System.Int32 <.ctor>b__1_0(Zenject.GuiRenderableManager/RenderableInfo x)
    // Offset: 0xF24654
    int $_ctor$b__1_0(Zenject::GuiRenderableManager::RenderableInfo* x);
    // public System.Void .ctor()
    // Offset: 0xF24634
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GuiRenderableManager::$$c* New_ctor();
  }; // Zenject.GuiRenderableManager/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager::$$c*, "Zenject", "GuiRenderableManager/<>c");
#pragma pack(pop)