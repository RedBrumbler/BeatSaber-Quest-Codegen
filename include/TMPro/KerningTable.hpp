// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
  // Forward declaring type: GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.KerningTable
  class KerningTable : public ::Il2CppObject {
    public:
    // Nested type: TMPro::KerningTable::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: TMPro::KerningTable::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: TMPro::KerningTable::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: TMPro::KerningTable::$$c
    class $$c;
    // public System.Collections.Generic.List`1<TMPro.KerningPair> kerningPairs
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::KerningPair*>* kerningPairs;
    // public System.Void AddKerningPair()
    // Offset: 0xB651F8
    void AddKerningPair();
    // public System.Int32 AddKerningPair(System.UInt32 first, System.UInt32 second, System.Single offset)
    // Offset: 0xB65320
    int AddKerningPair(uint first, uint second, float offset);
    // public System.Int32 AddGlyphPairAdjustmentRecord(System.UInt32 first, TMPro.GlyphValueRecord_Legacy firstAdjustments, System.UInt32 second, TMPro.GlyphValueRecord_Legacy secondAdjustments)
    // Offset: 0xB65460
    int AddGlyphPairAdjustmentRecord(uint first, TMPro::GlyphValueRecord_Legacy firstAdjustments, uint second, TMPro::GlyphValueRecord_Legacy secondAdjustments);
    // public System.Void RemoveKerningPair(System.Int32 left, System.Int32 right)
    // Offset: 0xB655E0
    void RemoveKerningPair(int left, int right);
    // public System.Void RemoveKerningPair(System.Int32 index)
    // Offset: 0xB656E4
    void RemoveKerningPair(int index);
    // public System.Void SortKerningPairs()
    // Offset: 0xB6574C
    void SortKerningPairs();
    // public System.Void .ctor()
    // Offset: 0xB6517C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static KerningTable* New_ctor();
  }; // TMPro.KerningTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable*, "TMPro", "KerningTable");
#pragma pack(pop)