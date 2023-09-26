#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRAutoDestroyInMRC;
}
// Type: ::OVRAutoDestroyInMRC
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8897))
// CS Name: OVRAutoDestroyInMRC
class CORDL_TYPE OVRAutoDestroyInMRC : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRAutoDestroyInMRC() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: " const&", def_value: None }]
constexpr OVRAutoDestroyInMRC(OVRAutoDestroyInMRC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: "&&", def_value: None }]
constexpr OVRAutoDestroyInMRC(OVRAutoDestroyInMRC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRAutoDestroyInMRC(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRAutoDestroyInMRC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRAutoDestroyInMRC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRAutoDestroyInMRC& operator=(OVRAutoDestroyInMRC&& o) noexcept = default;
  constexpr OVRAutoDestroyInMRC& operator=(OVRAutoDestroyInMRC const& o) noexcept = default;
                


// Methods

/// @brief Method Start addr 0x264a1c0 size 0x118 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x264a2d8 size 0x4 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRAutoDestroyInMRC() ;

/// @brief Method .ctor addr 0x264a2dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRAutoDestroyInMRC);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAutoDestroyInMRC, "", "OVRAutoDestroyInMRC");
