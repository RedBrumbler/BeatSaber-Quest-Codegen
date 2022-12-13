// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_TreePrototypeInfo
  class HEU_TreePrototypeInfo;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_VolumeScatterTrees
  class HEU_VolumeScatterTrees;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeScatterTrees);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeScatterTrees*, "HoudiniEngineUnity", "HEU_VolumeScatterTrees");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_VolumeScatterTrees
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_VolumeScatterTrees : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*/ {
    public:
    public:
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TreePrototypeInfo> _treePrototypInfos
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* treePrototypInfos;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*) == 0x8);
    // public UnityEngine.Color32[] _colors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Color32> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color32>) == 0x8);
    // public System.Single[] _heightScales
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> heightScales;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public UnityEngine.Color32[] _lightmapColors
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Color32> lightmapColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color32>) == 0x8);
    // public UnityEngine.Vector3[] _positions
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector3> positions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public System.Int32[] _prototypeIndices
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> prototypeIndices;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.Single[] _rotations
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<float> rotations;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] _widthScales
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<float> widthScales;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Int32[] _terrainTiles
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<int> terrainTiles;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_VolumeScatterTrees
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>* i_HEU_VolumeScatterTrees() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*>(this);
    }
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TreePrototypeInfo> _treePrototypInfos
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*& dyn__treePrototypInfos();
    // Get instance field reference: public UnityEngine.Color32[] _colors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color32>& dyn__colors();
    // Get instance field reference: public System.Single[] _heightScales
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__heightScales();
    // Get instance field reference: public UnityEngine.Color32[] _lightmapColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color32>& dyn__lightmapColors();
    // Get instance field reference: public UnityEngine.Vector3[] _positions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__positions();
    // Get instance field reference: public System.Int32[] _prototypeIndices
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__prototypeIndices();
    // Get instance field reference: public System.Single[] _rotations
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__rotations();
    // Get instance field reference: public System.Single[] _widthScales
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__widthScales();
    // Get instance field reference: public System.Int32[] _terrainTiles
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__terrainTiles();
    // public System.Void .ctor()
    // Offset: 0x1A5908C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_VolumeScatterTrees* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_VolumeScatterTrees::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_VolumeScatterTrees*, creationType>()));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_VolumeScatterTrees other)
    // Offset: 0x1A5E2B4
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeScatterTrees* other);
  }; // HoudiniEngineUnity.HEU_VolumeScatterTrees
  #pragma pack(pop)
  static check_size<sizeof(HEU_VolumeScatterTrees), 80 + sizeof(::ArrayW<int>)> __HoudiniEngineUnity_HEU_VolumeScatterTreesSizeCheck;
  static_assert(sizeof(HEU_VolumeScatterTrees) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_VolumeScatterTrees::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_VolumeScatterTrees::*)(::HoudiniEngineUnity::HEU_VolumeScatterTrees*)>(&HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_VolumeScatterTrees")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_VolumeScatterTrees*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
