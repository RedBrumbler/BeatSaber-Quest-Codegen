// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_2");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Bevel::$$c__DisplayClass0_2 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 c
    // Size: 0x4
    // Offset: 0x10
    int c;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: c and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public UnityEngine.ProBuilder.MeshOperations.Bevel/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 c
    [[deprecated("Use field access instead!")]] int& dyn_c();
    // Get instance field reference: public UnityEngine.ProBuilder.MeshOperations.Bevel/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x1A79B8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bevel::$$c__DisplayClass0_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bevel::$$c__DisplayClass0_2*, creationType>()));
    }
    // System.Boolean <BevelEdges>b__5(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x1A79FE4
    bool $BevelEdges$b__5(::UnityEngine::ProBuilder::WingedEdge* x);
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_2
  #pragma pack(pop)
  static check_size<sizeof(Bevel::$$c__DisplayClass0_2), 24 + sizeof(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*)> __UnityEngine_ProBuilder_MeshOperations_Bevel_$$c__DisplayClass0_2SizeCheck;
  static_assert(sizeof(Bevel::$$c__DisplayClass0_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::$BevelEdges$b__5
// Il2CppName: <BevelEdges>b__5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::$BevelEdges$b__5)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2*), "<BevelEdges>b__5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
