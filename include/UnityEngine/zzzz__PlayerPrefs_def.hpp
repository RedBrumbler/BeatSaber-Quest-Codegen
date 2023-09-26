#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Type: UnityEngine::PlayerPrefs
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10001))
// CS Name: UnityEngine.PlayerPrefs
class CORDL_TYPE PlayerPrefs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayerPrefs() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: " const&", def_value: None }]
constexpr PlayerPrefs(PlayerPrefs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None }]
constexpr PlayerPrefs(PlayerPrefs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerPrefs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerPrefs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerPrefs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerPrefs& operator=(PlayerPrefs&& o) noexcept = default;
  constexpr PlayerPrefs& operator=(PlayerPrefs const& o) noexcept = default;
                


// Methods

/// @brief Method TrySetInt addr 0x2b5ad54 size 0x44 virtual false final false
static bool TrySetInt(::StringW key, int32_t value) ;

/// @brief Method TrySetSetString addr 0x2b5ad98 size 0x44 virtual false final false
static bool TrySetSetString(::StringW key, ::StringW value) ;

/// @brief Method SetInt addr 0x2b5addc size 0x94 virtual false final false
static void SetInt(::StringW key, int32_t value) ;

/// @brief Method GetInt addr 0x2b5ae70 size 0x44 virtual false final false
static int32_t GetInt(::StringW key, int32_t defaultValue) ;

/// @brief Method GetInt addr 0x2b5aeb4 size 0x40 virtual false final false
static int32_t GetInt(::StringW key) ;

/// @brief Method SetString addr 0x2b5aef4 size 0x94 virtual false final false
static void SetString(::StringW key, ::StringW value) ;

/// @brief Method GetString addr 0x2b5af88 size 0x44 virtual false final false
static ::StringW GetString(::StringW key, ::StringW defaultValue) ;

/// @brief Method GetString addr 0x2b5afcc size 0x6c virtual false final false
static ::StringW GetString(::StringW key) ;

/// @brief Method HasKey addr 0x2b5b038 size 0x3c virtual false final false
static bool HasKey(::StringW key) ;

/// @brief Method DeleteKey addr 0x2b5b074 size 0x3c virtual false final false
static void DeleteKey(::StringW key) ;

/// @brief Method DeleteAll addr 0x2b5b0b0 size 0x28 virtual false final false
static void DeleteAll() ;

/// @brief Method Save addr 0x2b5b0d8 size 0x28 virtual false final false
static void Save() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PlayerPrefs);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefs, "UnityEngine", "PlayerPrefs");
