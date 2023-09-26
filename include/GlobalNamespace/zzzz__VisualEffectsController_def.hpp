#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualEffectsController;
}
// Type: ::VisualEffectsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15356))
// CS Name: VisualEffectsController
class CORDL_TYPE VisualEffectsController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VisualEffectsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectsController", modifiers: " const&", def_value: None }]
constexpr VisualEffectsController(VisualEffectsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectsController", modifiers: "&&", def_value: None }]
constexpr VisualEffectsController(VisualEffectsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualEffectsController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VisualEffectsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualEffectsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualEffectsController& operator=(VisualEffectsController&& o) noexcept = default;
  constexpr VisualEffectsController& operator=(VisualEffectsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__depthTextureEnabled, put=__set__depthTextureEnabled))  _depthTextureEnabled;

constexpr void __set__depthTextureEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__depthTextureEnabled() const;

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

/// @brief Field kDepthTextureEnabledKeyword offset 0
static constexpr ::ConstString  kDepthTextureEnabledKeyword{u"DEPTH_TEXTURE_ENABLED"};


// Methods

/// @brief Method Awake addr 0x26abef8 size 0xd4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x26ac02c size 0xe8 virtual false final false
 void OnDestroy() ;

/// @brief Method OnPreRender addr 0x26ac114 size 0x90 virtual false final false
 void OnPreRender() ;

/// @brief Method HandleDepthTextureEnabledDidChange addr 0x26abfcc size 0x60 virtual false final false
 void HandleDepthTextureEnabledDidChange() ;

/// @brief Method SetShaderKeyword addr 0x26ac1a4 size 0x14 virtual false final false
 void SetShaderKeyword(::StringW keyword, bool value) ;

// Ctor Parameters []
explicit VisualEffectsController() ;

/// @brief Method .ctor addr 0x26ac1b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VisualEffectsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisualEffectsController, "", "VisualEffectsController");
