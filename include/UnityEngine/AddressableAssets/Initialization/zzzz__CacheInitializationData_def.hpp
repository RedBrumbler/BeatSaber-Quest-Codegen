#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class CacheInitializationData;
}
// Type: UnityEngine.AddressableAssets.Initialization::CacheInitializationData
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14421))
// CS Name: UnityEngine.AddressableAssets.Initialization.CacheInitializationData
class CORDL_TYPE CacheInitializationData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CacheInitializationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheInitializationData", modifiers: " const&", def_value: None }]
constexpr CacheInitializationData(CacheInitializationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheInitializationData", modifiers: "&&", def_value: None }]
constexpr CacheInitializationData(CacheInitializationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CacheInitializationData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CacheInitializationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CacheInitializationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CacheInitializationData& operator=(CacheInitializationData&& o) noexcept = default;
  constexpr CacheInitializationData& operator=(CacheInitializationData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_CompressionEnabled, put=__set_m_CompressionEnabled))  m_CompressionEnabled;

constexpr void __set_m_CompressionEnabled(bool value) ;

constexpr bool __get_m_CompressionEnabled() const;

 ::StringW __declspec(property(get=__get_m_CacheDirectoryOverride, put=__set_m_CacheDirectoryOverride))  m_CacheDirectoryOverride;

constexpr void __set_m_CacheDirectoryOverride(::StringW value) ;

constexpr ::StringW __get_m_CacheDirectoryOverride() const;

 int32_t __declspec(property(get=__get_m_ExpirationDelay, put=__set_m_ExpirationDelay))  m_ExpirationDelay;

constexpr void __set_m_ExpirationDelay(int32_t value) ;

constexpr int32_t __get_m_ExpirationDelay() const;

 bool __declspec(property(get=__get_m_LimitCacheSize, put=__set_m_LimitCacheSize))  m_LimitCacheSize;

constexpr void __set_m_LimitCacheSize(bool value) ;

constexpr bool __get_m_LimitCacheSize() const;

 int64_t __declspec(property(get=__get_m_MaximumCacheSize, put=__set_m_MaximumCacheSize))  m_MaximumCacheSize;

constexpr void __set_m_MaximumCacheSize(int64_t value) ;

constexpr int64_t __get_m_MaximumCacheSize() const;


// Properties

 bool __declspec(property(get=get_CompressionEnabled, put=set_CompressionEnabled))  CompressionEnabled;

 ::StringW __declspec(property(get=get_CacheDirectoryOverride, put=set_CacheDirectoryOverride))  CacheDirectoryOverride;

 int32_t __declspec(property(get=get_ExpirationDelay, put=set_ExpirationDelay))  ExpirationDelay;

 bool __declspec(property(get=get_LimitCacheSize, put=set_LimitCacheSize))  LimitCacheSize;

 int64_t __declspec(property(get=get_MaximumCacheSize, put=set_MaximumCacheSize))  MaximumCacheSize;


// Methods

/// @brief Method get_CompressionEnabled addr 0x28d112c size 0x8 virtual false final false
 bool get_CompressionEnabled() ;

/// @brief Method set_CompressionEnabled addr 0x28d1134 size 0xc virtual false final false
 void set_CompressionEnabled(bool value) ;

/// @brief Method get_CacheDirectoryOverride addr 0x28d1140 size 0x8 virtual false final false
 ::StringW get_CacheDirectoryOverride() ;

/// @brief Method set_CacheDirectoryOverride addr 0x28d1148 size 0x8 virtual false final false
 void set_CacheDirectoryOverride(::StringW value) ;

/// @brief Method get_ExpirationDelay addr 0x28d1150 size 0x8 virtual false final false
 int32_t get_ExpirationDelay() ;

/// @brief Method set_ExpirationDelay addr 0x28d1158 size 0x8 virtual false final false
 void set_ExpirationDelay(int32_t value) ;

/// @brief Method get_LimitCacheSize addr 0x28d1160 size 0x8 virtual false final false
 bool get_LimitCacheSize() ;

/// @brief Method set_LimitCacheSize addr 0x28d1168 size 0xc virtual false final false
 void set_LimitCacheSize(bool value) ;

/// @brief Method get_MaximumCacheSize addr 0x28d1174 size 0x8 virtual false final false
 int64_t get_MaximumCacheSize() ;

/// @brief Method set_MaximumCacheSize addr 0x28d117c size 0x8 virtual false final false
 void set_MaximumCacheSize(int64_t value) ;

// Ctor Parameters []
explicit CacheInitializationData() ;

/// @brief Method .ctor addr 0x28d1184 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::CacheInitializationData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::CacheInitializationData, "UnityEngine.AddressableAssets.Initialization", "CacheInitializationData");
