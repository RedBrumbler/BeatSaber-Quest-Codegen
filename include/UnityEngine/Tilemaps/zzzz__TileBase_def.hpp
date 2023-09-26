#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Tilemaps {
struct TileAnimationData;
}
namespace UnityEngine::Tilemaps {
class ITilemap;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class TileBase;
}
// Type: UnityEngine.Tilemaps::TileBase
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15852))
// CS Name: UnityEngine.Tilemaps.TileBase
class CORDL_TYPE TileBase : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TileBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "TileBase", modifiers: " const&", def_value: None }]
constexpr TileBase(TileBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TileBase", modifiers: "&&", def_value: None }]
constexpr TileBase(TileBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TileBase(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TileBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TileBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TileBase& operator=(TileBase&& o) noexcept = default;
  constexpr TileBase& operator=(TileBase const& o) noexcept = default;
                


// Methods

/// @brief Method RefreshTile addr 0x2c09630 size 0x18 virtual true final false
 void RefreshTile(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap) ;

/// @brief Method GetTileData addr 0x2c097ac size 0x4 virtual true final false
 void GetTileData(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap, ByRef<UnityEngine::Tilemaps::TileData> tileData) ;

/// @brief Method GetTileDataNoRef addr 0x2c097b0 size 0x4c virtual false final false
 UnityEngine::Tilemaps::TileData GetTileDataNoRef(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap) ;

/// @brief Method GetTileAnimationData addr 0x2c097fc size 0x8 virtual true final false
 bool GetTileAnimationData(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap, ByRef<UnityEngine::Tilemaps::TileAnimationData> tileAnimationData) ;

/// @brief Method GetTileAnimationDataNoRef addr 0x2c09804 size 0x30 virtual false final false
 UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap) ;

/// @brief Method GetTileAnimationDataRef addr 0x2c09834 size 0x28 virtual false final false
 void GetTileAnimationDataRef(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap, ByRef<UnityEngine::Tilemaps::TileAnimationData> tileAnimationData, ByRef<bool> hasAnimation) ;

/// @brief Method StartUp addr 0x2c0985c size 0x8 virtual true final false
 bool StartUp(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap, UnityEngine::GameObject go) ;

/// @brief Method StartUpRef addr 0x2c09864 size 0x28 virtual false final false
 void StartUpRef(UnityEngine::Vector3Int position, UnityEngine::Tilemaps::ITilemap tilemap, UnityEngine::GameObject go, ByRef<bool> startUpInvokedByUser) ;

// Ctor Parameters []
explicit TileBase() ;

/// @brief Method .ctor addr 0x2c09628 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
NEED_NO_BOX(UnityEngine::Tilemaps::TileBase);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Tilemaps::TileBase, "UnityEngine.Tilemaps", "TileBase");
