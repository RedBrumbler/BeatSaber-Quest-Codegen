#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Cache;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
class Caching;
}
// Type: UnityEngine::Caching
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10104))
// CS Name: UnityEngine.Caching
class CORDL_TYPE Caching : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Caching() = default;

// Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: " const&", def_value: None }]
constexpr Caching(Caching const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "&&", def_value: None }]
constexpr Caching(Caching&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Caching(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Caching& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Caching& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Caching& operator=(Caching&& o) noexcept = default;
  constexpr Caching& operator=(Caching const& o) noexcept = default;
                


// Properties

static bool __declspec(property(put=set_compressionEnabled))  compressionEnabled;

static bool __declspec(property(get=get_ready))  ready;

static UnityEngine::Cache __declspec(property(get=get_defaultCache))  defaultCache;

static UnityEngine::Cache __declspec(property(get=get_currentCacheForWriting, put=set_currentCacheForWriting))  currentCacheForWriting;


// Methods

/// @brief Method set_compressionEnabled addr 0x2b80ab8 size 0x3c virtual false final false
static void set_compressionEnabled(bool value) ;

/// @brief Method get_ready addr 0x2b80af4 size 0x28 virtual false final false
static bool get_ready() ;

/// @brief Method ClearCachedVersion addr 0x2b80b1c size 0x84 virtual false final false
static bool ClearCachedVersion(::StringW assetBundleName, UnityEngine::Hash128 hash) ;

/// @brief Method ClearCachedVersionInternal addr 0x2b80ba0 size 0x54 virtual false final false
static bool ClearCachedVersionInternal(::StringW assetBundleName, UnityEngine::Hash128 hash) ;

/// @brief Method ClearOtherCachedVersions addr 0x2b80c38 size 0x88 virtual false final false
static bool ClearOtherCachedVersions(::StringW assetBundleName, UnityEngine::Hash128 hash) ;

/// @brief Method ClearAllCachedVersions addr 0x2b80d1c size 0x78 virtual false final false
static bool ClearAllCachedVersions(::StringW assetBundleName) ;

/// @brief Method ClearCachedVersions addr 0x2b80cc0 size 0x5c virtual false final false
static bool ClearCachedVersions(::StringW assetBundleName, UnityEngine::Hash128 hash, bool keepInputVersion) ;

/// @brief Method IsVersionCached addr 0x2b80de8 size 0xa8 virtual false final false
static bool IsVersionCached(UnityEngine::CachedAssetBundle cachedBundle) ;

/// @brief Method IsVersionCached addr 0x2b80ea4 size 0x5c virtual false final false
static bool IsVersionCached(::StringW url, ::StringW assetBundleName, UnityEngine::Hash128 hash) ;

/// @brief Method AddCache addr 0x2b80f54 size 0x254 virtual false final false
static UnityEngine::Cache AddCache(::StringW cachePath) ;

/// @brief Method AddCache addr 0x2b81230 size 0x5c virtual false final false
static UnityEngine::Cache AddCache(::StringW cachePath, bool isReadonly) ;

/// @brief Method GetCacheByPath addr 0x2b811a8 size 0x4c virtual false final false
static UnityEngine::Cache GetCacheByPath(::StringW cachePath) ;

/// @brief Method get_defaultCache addr 0x2b81324 size 0x44 virtual false final false
static UnityEngine::Cache get_defaultCache() ;

/// @brief Method get_currentCacheForWriting addr 0x2b813a4 size 0x44 virtual false final false
static UnityEngine::Cache get_currentCacheForWriting() ;

/// @brief Method set_currentCacheForWriting addr 0x2b81424 size 0x40 virtual false final false
static void set_currentCacheForWriting(UnityEngine::Cache value) ;

/// @brief Method ClearCachedVersionInternal_Injected addr 0x2b80bf4 size 0x44 virtual false final false
static bool ClearCachedVersionInternal_Injected(::StringW assetBundleName, ByRef<UnityEngine::Hash128> hash) ;

/// @brief Method ClearCachedVersions_Injected addr 0x2b80d94 size 0x54 virtual false final false
static bool ClearCachedVersions_Injected(::StringW assetBundleName, ByRef<UnityEngine::Hash128> hash, bool keepInputVersion) ;

/// @brief Method IsVersionCached_Injected addr 0x2b80f00 size 0x54 virtual false final false
static bool IsVersionCached_Injected(::StringW url, ::StringW assetBundleName, ByRef<UnityEngine::Hash128> hash) ;

/// @brief Method AddCache_Injected addr 0x2b8128c size 0x54 virtual false final false
static void AddCache_Injected(::StringW cachePath, bool isReadonly, ByRef<UnityEngine::Cache> ret) ;

/// @brief Method GetCacheByPath_Injected addr 0x2b812e0 size 0x44 virtual false final false
static void GetCacheByPath_Injected(::StringW cachePath, ByRef<UnityEngine::Cache> ret) ;

/// @brief Method get_defaultCache_Injected addr 0x2b81368 size 0x3c virtual false final false
static void get_defaultCache_Injected(ByRef<UnityEngine::Cache> ret) ;

/// @brief Method get_currentCacheForWriting_Injected addr 0x2b813e8 size 0x3c virtual false final false
static void get_currentCacheForWriting_Injected(ByRef<UnityEngine::Cache> ret) ;

/// @brief Method set_currentCacheForWriting_Injected addr 0x2b81464 size 0x3c virtual false final false
static void set_currentCacheForWriting_Injected(ByRef<UnityEngine::Cache> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Caching);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Caching, "UnityEngine", "Caching");
