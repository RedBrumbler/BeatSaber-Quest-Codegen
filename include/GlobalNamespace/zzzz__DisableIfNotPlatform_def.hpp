#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableIfNotPlatform;
}
// Type: ::DisableIfNotPlatform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5456))
// CS Name: DisableIfNotPlatform
class CORDL_TYPE DisableIfNotPlatform : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisableIfNotPlatform() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableIfNotPlatform", modifiers: " const&", def_value: None }]
constexpr DisableIfNotPlatform(DisableIfNotPlatform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableIfNotPlatform", modifiers: "&&", def_value: None }]
constexpr DisableIfNotPlatform(DisableIfNotPlatform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableIfNotPlatform(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableIfNotPlatform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableIfNotPlatform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableIfNotPlatform& operator=(DisableIfNotPlatform&& o) noexcept = default;
  constexpr DisableIfNotPlatform& operator=(DisableIfNotPlatform const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::RuntimePlatform> __declspec(property(get=__get__whitelistPlatforms, put=__set__whitelistPlatforms))  _whitelistPlatforms;

constexpr void __set__whitelistPlatforms(::ArrayW<UnityEngine::RuntimePlatform> value) ;

constexpr ::ArrayW<UnityEngine::RuntimePlatform> __get__whitelistPlatforms() const;


// Methods

/// @brief Method Awake addr 0x214d454 size 0x98 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit DisableIfNotPlatform() ;

/// @brief Method .ctor addr 0x214d4ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableIfNotPlatform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableIfNotPlatform, "", "DisableIfNotPlatform");
