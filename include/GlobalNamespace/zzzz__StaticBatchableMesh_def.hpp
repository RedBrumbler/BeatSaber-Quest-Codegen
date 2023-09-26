#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class StaticBatchableMesh;
}
// Type: ::StaticBatchableMesh
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16116))
// CS Name: StaticBatchableMesh
class CORDL_TYPE StaticBatchableMesh : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StaticBatchableMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchableMesh", modifiers: " const&", def_value: None }]
constexpr StaticBatchableMesh(StaticBatchableMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchableMesh", modifiers: "&&", def_value: None }]
constexpr StaticBatchableMesh(StaticBatchableMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticBatchableMesh(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StaticBatchableMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticBatchableMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticBatchableMesh& operator=(StaticBatchableMesh&& o) noexcept = default;
  constexpr StaticBatchableMesh& operator=(StaticBatchableMesh const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit StaticBatchableMesh() ;

/// @brief Method .ctor addr 0x26ac544 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StaticBatchableMesh);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticBatchableMesh, "", "StaticBatchableMesh");
