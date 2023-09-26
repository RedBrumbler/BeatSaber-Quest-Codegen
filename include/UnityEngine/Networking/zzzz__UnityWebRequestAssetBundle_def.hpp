#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestAssetBundle;
}
// Type: UnityEngine.Networking::UnityWebRequestAssetBundle
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16004))
// CS Name: UnityEngine.Networking.UnityWebRequestAssetBundle
class CORDL_TYPE UnityWebRequestAssetBundle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityWebRequestAssetBundle() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAssetBundle", modifiers: " const&", def_value: None }]
constexpr UnityWebRequestAssetBundle(UnityWebRequestAssetBundle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAssetBundle", modifiers: "&&", def_value: None }]
constexpr UnityWebRequestAssetBundle(UnityWebRequestAssetBundle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequestAssetBundle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityWebRequestAssetBundle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequestAssetBundle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequestAssetBundle& operator=(UnityWebRequestAssetBundle&& o) noexcept = default;
  constexpr UnityWebRequestAssetBundle& operator=(UnityWebRequestAssetBundle const& o) noexcept = default;
                


// Methods

/// @brief Method GetAssetBundle addr 0x2d655e0 size 0x8 virtual false final false
static UnityEngine::Networking::UnityWebRequest GetAssetBundle(::StringW uri) ;

/// @brief Method GetAssetBundle addr 0x2d655e8 size 0xc0 virtual false final false
static UnityEngine::Networking::UnityWebRequest GetAssetBundle(::StringW uri, uint32_t crc) ;

/// @brief Method GetAssetBundle addr 0x2d6570c size 0xf0 virtual false final false
static UnityEngine::Networking::UnityWebRequest GetAssetBundle(::StringW uri, UnityEngine::CachedAssetBundle cachedAssetBundle, uint32_t crc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::UnityWebRequestAssetBundle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestAssetBundle, "UnityEngine.Networking", "UnityWebRequestAssetBundle");
