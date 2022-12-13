// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Ice.FloorLightTile
#include "Ice/FloorLightTile.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightTilesGrid
  class FloorLightTilesGrid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::FloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTilesGrid*, "Ice", "FloorLightTilesGrid");
// Type namespace: Ice
namespace Ice {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Ice.FloorLightTilesGrid
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorLightTilesGrid : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x114DC40
    // private readonly Ice.FloorLightTile/Ice.Pool _floorLightTileMemoryPool
    // Size: 0x8
    // Offset: 0x18
    ::Ice::FloorLightTile::Pool* floorLightTileMemoryPool;
    // Field size check
    static_assert(sizeof(::Ice::FloorLightTile::Pool*) == 0x8);
    // private MemoryPoolContainer`1<Ice.FloorLightTile> _floorLightTileMemoryPoolContainer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>* floorLightTileMemoryPoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>*) == 0x8);
    // private Ice.FloorLightTile[][] _grid
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::ArrayW<::Ice::FloorLightTile*>> grid;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::Ice::FloorLightTile*>>) == 0x8);
    // private System.Single _tileWidth
    // Size: 0x4
    // Offset: 0x30
    float tileWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _tileHeight
    // Size: 0x4
    // Offset: 0x34
    float tileHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _anchorPoint
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 anchorPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Int32 _ySize
    // Size: 0x4
    // Offset: 0x44
    int ySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly Ice.FloorLightTile/Ice.Pool _floorLightTileMemoryPool
    [[deprecated("Use field access instead!")]] ::Ice::FloorLightTile::Pool*& dyn__floorLightTileMemoryPool();
    // Get instance field reference: private MemoryPoolContainer`1<Ice.FloorLightTile> _floorLightTileMemoryPoolContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>*& dyn__floorLightTileMemoryPoolContainer();
    // Get instance field reference: private Ice.FloorLightTile[][] _grid
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<::Ice::FloorLightTile*>>& dyn__grid();
    // Get instance field reference: private System.Single _tileWidth
    [[deprecated("Use field access instead!")]] float& dyn__tileWidth();
    // Get instance field reference: private System.Single _tileHeight
    [[deprecated("Use field access instead!")]] float& dyn__tileHeight();
    // Get instance field reference: private UnityEngine.Vector3 _anchorPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__anchorPoint();
    // Get instance field reference: private System.Int32 _ySize
    [[deprecated("Use field access instead!")]] int& dyn__ySize();
    // public System.Int32 get_ySize()
    // Offset: 0x2B76C3C
    int get_ySize();
    // public System.Void .ctor()
    // Offset: 0x2B76D78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLightTilesGrid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::FloorLightTilesGrid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLightTilesGrid*, creationType>()));
    }
    // public System.Void Init(UnityEngine.Vector3 anchorPoint, System.Int32 xSize, System.Int32 ySize, System.Single tileWidth, System.Single tileHeight)
    // Offset: 0x2B75C60
    void Init(::UnityEngine::Vector3 anchorPoint, int xSize, int ySize, float tileWidth, float tileHeight);
    // public System.Void HighlightTile(System.Int32 x, System.Int32 y, System.Single fadeInDuration, System.Single fadeOutDuration, UnityEngine.Color color)
    // Offset: 0x2B761B8
    void HighlightTile(int x, int y, float fadeInDuration, float fadeOutDuration, ::UnityEngine::Color color);
    // public System.Void DespawnAllTiles()
    // Offset: 0x2B76C44
    void DespawnAllTiles();
    // private System.Void HandleFloorLightTileDidFinish(Ice.FloorLightTile floorLightTile)
    // Offset: 0x2B76D74
    void HandleFloorLightTileDidFinish(::Ice::FloorLightTile* floorLightTile);
    // private System.Void DespawnTile(Ice.FloorLightTile floorLightTile)
    // Offset: 0x2B76D04
    void DespawnTile(::Ice::FloorLightTile* floorLightTile);
  }; // Ice.FloorLightTilesGrid
  #pragma pack(pop)
  static check_size<sizeof(FloorLightTilesGrid), 68 + sizeof(int)> __Ice_FloorLightTilesGridSizeCheck;
  static_assert(sizeof(FloorLightTilesGrid) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::get_ySize
// Il2CppName: get_ySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Ice::FloorLightTilesGrid::*)()>(&Ice::FloorLightTilesGrid::get_ySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTilesGrid*), "get_ySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightTilesGrid::*)(::UnityEngine::Vector3, int, int, float, float)>(&Ice::FloorLightTilesGrid::Init)> {
  static const MethodInfo* get() {
    static auto* anchorPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* xSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tileWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tileHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTilesGrid*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorPoint, xSize, ySize, tileWidth, tileHeight});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::HighlightTile
// Il2CppName: HighlightTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightTilesGrid::*)(int, int, float, float, ::UnityEngine::Color)>(&Ice::FloorLightTilesGrid::HighlightTile)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fadeInDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeOutDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTilesGrid*), "HighlightTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, fadeInDuration, fadeOutDuration, color});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::DespawnAllTiles
// Il2CppName: DespawnAllTiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightTilesGrid::*)()>(&Ice::FloorLightTilesGrid::DespawnAllTiles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTilesGrid*), "DespawnAllTiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::HandleFloorLightTileDidFinish
// Il2CppName: HandleFloorLightTileDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightTilesGrid::*)(::Ice::FloorLightTile*)>(&Ice::FloorLightTilesGrid::HandleFloorLightTileDidFinish)> {
  static const MethodInfo* get() {
    static auto* floorLightTile = &::il2cpp_utils::GetClassFromName("Ice", "FloorLightTile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTilesGrid*), "HandleFloorLightTileDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floorLightTile});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightTilesGrid::DespawnTile
// Il2CppName: DespawnTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightTilesGrid::*)(::Ice::FloorLightTile*)>(&Ice::FloorLightTilesGrid::DespawnTile)> {
  static const MethodInfo* get() {
    static auto* floorLightTile = &::il2cpp_utils::GetClassFromName("Ice", "FloorLightTile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTilesGrid*), "DespawnTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floorLightTile});
  }
};
