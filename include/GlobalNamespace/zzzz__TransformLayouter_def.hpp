#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class TransformLayouter;
}
// Type: ::TransformLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13860))
// CS Name: TransformLayouter
class CORDL_TYPE TransformLayouter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TransformLayouter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformLayouter", modifiers: " const&", def_value: None }]
constexpr TransformLayouter(TransformLayouter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformLayouter", modifiers: "&&", def_value: None }]
constexpr TransformLayouter(TransformLayouter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransformLayouter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TransformLayouter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransformLayouter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransformLayouter& operator=(TransformLayouter&& o) noexcept = default;
  constexpr TransformLayouter& operator=(TransformLayouter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TransformLayouter() ;

/// @brief Method .ctor addr 0x1fb7cdc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TransformLayouter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TransformLayouter, "", "TransformLayouter");
