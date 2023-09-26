#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableOnPlatform;
}
// Type: ::DisableOnPlatform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5460))
// CS Name: DisableOnPlatform
class CORDL_TYPE DisableOnPlatform : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisableOnPlatform() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnPlatform", modifiers: " const&", def_value: None }]
constexpr DisableOnPlatform(DisableOnPlatform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnPlatform", modifiers: "&&", def_value: None }]
constexpr DisableOnPlatform(DisableOnPlatform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableOnPlatform(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableOnPlatform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableOnPlatform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableOnPlatform& operator=(DisableOnPlatform&& o) noexcept = default;
  constexpr DisableOnPlatform& operator=(DisableOnPlatform const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::RuntimePlatform> __declspec(property(get=__get__disabledPlatforms, put=__set__disabledPlatforms))  _disabledPlatforms;

constexpr void __set__disabledPlatforms(::ArrayW<UnityEngine::RuntimePlatform> value) ;

constexpr ::ArrayW<UnityEngine::RuntimePlatform> __get__disabledPlatforms() const;


// Methods

/// @brief Method Awake addr 0x214d530 size 0x98 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit DisableOnPlatform() ;

/// @brief Method .ctor addr 0x214d5c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableOnPlatform, "", "DisableOnPlatform");
