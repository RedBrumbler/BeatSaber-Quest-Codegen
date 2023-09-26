#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Tilemaps {
class TileBase;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
class Grid;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Type: UnityEngine.Tilemaps::Tilemap
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16029))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15844))
// CS Name: UnityEngine.Tilemaps.Tilemap
class CORDL_TYPE Tilemap : public UnityEngine::GridLayout {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Tilemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: " const&", def_value: None }]
constexpr Tilemap(Tilemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None }]
constexpr Tilemap(Tilemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tilemap(void* ptr) noexcept : UnityEngine::GridLayout(ptr) {
}


  constexpr Tilemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tilemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tilemap& operator=(Tilemap&& o) noexcept = default;
  constexpr Tilemap& operator=(Tilemap const& o) noexcept = default;
                


// Properties

 UnityEngine::Grid __declspec(property(get=get_layoutGrid))  layoutGrid;

 UnityEngine::BoundsInt __declspec(property(get=get_cellBounds))  cellBounds;

 UnityEngine::Vector3Int __declspec(property(get=get_origin))  origin;

 UnityEngine::Vector3Int __declspec(property(get=get_size))  size;

 UnityEngine::Vector3 __declspec(property(get=get_tileAnchor))  tileAnchor;

 UnityEngine::Matrix4x4 __declspec(property(get=get_orientationMatrix))  orientationMatrix;


// Methods

/// @brief Method get_layoutGrid addr 0x2c088b0 size 0x3c virtual false final false
 UnityEngine::Grid get_layoutGrid() ;

/// @brief Method get_cellBounds addr 0x2c088ec size 0x84 virtual false final false
 UnityEngine::BoundsInt get_cellBounds() ;

/// @brief Method get_origin addr 0x2c08970 size 0x5c virtual false final false
 UnityEngine::Vector3Int get_origin() ;

/// @brief Method get_size addr 0x2c089cc size 0x5c virtual false final false
 UnityEngine::Vector3Int get_size() ;

/// @brief Method get_tileAnchor addr 0x2c08ab0 size 0x5c virtual false final false
 UnityEngine::Vector3 get_tileAnchor() ;

/// @brief Method get_orientationMatrix addr 0x2c08b50 size 0x6c virtual false final false
 UnityEngine::Matrix4x4 get_orientationMatrix() ;

/// @brief Method GetTileAsset addr 0x2c08c00 size 0x54 virtual false final false
 UnityEngine::Object GetTileAsset(UnityEngine::Vector3Int position) ;

/// @brief Method GetTile addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetTile(UnityEngine::Vector3Int position) ;

/// @brief Method GetTileAssetsBlock addr 0x2c08c98 size 0x60 virtual false final false
 ::ArrayW<UnityEngine::Object> GetTileAssetsBlock(UnityEngine::Vector3Int position, UnityEngine::Vector3Int blockDimensions) ;

/// @brief Method GetTilesBlock addr 0x2c08d4c size 0x194 virtual false final false
 ::ArrayW<UnityEngine::Tilemaps::TileBase> GetTilesBlock(UnityEngine::BoundsInt bounds) ;

/// @brief Method HasTile addr 0x2c08ee0 size 0x84 virtual false final false
 bool HasTile(UnityEngine::Vector3Int position) ;

/// @brief Method RefreshTile addr 0x2c08f64 size 0x54 virtual false final false
 void RefreshTile(UnityEngine::Vector3Int position) ;

/// @brief Method RefreshTilesNative addr 0x2c08ffc size 0x54 virtual false final false
 void RefreshTilesNative(void* positions, int32_t count) ;

/// @brief Method GetUsedTilesCount addr 0x2c09050 size 0x3c virtual false final false
 int32_t GetUsedTilesCount() ;

/// @brief Method GetUsedTilesNonAlloc addr 0x2c0908c size 0x44 virtual false final false
 int32_t GetUsedTilesNonAlloc(::ArrayW<UnityEngine::Tilemaps::TileBase> usedTiles) ;

/// @brief Method Internal_GetUsedTilesNonAlloc addr 0x2c090d0 size 0x44 virtual false final false
 int32_t Internal_GetUsedTilesNonAlloc(::ArrayW<UnityEngine::Object> usedTiles) ;

/// @brief Method get_origin_Injected addr 0x2c08a28 size 0x44 virtual false final false
 void get_origin_Injected(ByRef<UnityEngine::Vector3Int> ret) ;

/// @brief Method get_size_Injected addr 0x2c08a6c size 0x44 virtual false final false
 void get_size_Injected(ByRef<UnityEngine::Vector3Int> ret) ;

/// @brief Method get_tileAnchor_Injected addr 0x2c08b0c size 0x44 virtual false final false
 void get_tileAnchor_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_orientationMatrix_Injected addr 0x2c08bbc size 0x44 virtual false final false
 void get_orientationMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method GetTileAsset_Injected addr 0x2c08c54 size 0x44 virtual false final false
 UnityEngine::Object GetTileAsset_Injected(ByRef<UnityEngine::Vector3Int> position) ;

/// @brief Method GetTileAssetsBlock_Injected addr 0x2c08cf8 size 0x54 virtual false final false
 ::ArrayW<UnityEngine::Object> GetTileAssetsBlock_Injected(ByRef<UnityEngine::Vector3Int> position, ByRef<UnityEngine::Vector3Int> blockDimensions) ;

/// @brief Method RefreshTile_Injected addr 0x2c08fb8 size 0x44 virtual false final false
 void RefreshTile_Injected(ByRef<UnityEngine::Vector3Int> position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
NEED_NO_BOX(UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Tilemaps::Tilemap, "UnityEngine.Tilemaps", "Tilemap");
