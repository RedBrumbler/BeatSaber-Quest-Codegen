#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GuiRenderableManager;
}
// Forward declare root types
namespace Zenject {
class GuiRenderer;
}
// Type: Zenject::GuiRenderer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11277))
// CS Name: Zenject.GuiRenderer
class CORDL_TYPE GuiRenderer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GuiRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GuiRenderer", modifiers: " const&", def_value: None }]
constexpr GuiRenderer(GuiRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GuiRenderer", modifiers: "&&", def_value: None }]
constexpr GuiRenderer(GuiRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GuiRenderer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GuiRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GuiRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GuiRenderer& operator=(GuiRenderer&& o) noexcept = default;
  constexpr GuiRenderer& operator=(GuiRenderer const& o) noexcept = default;
                


// Fields

 Zenject::GuiRenderableManager __declspec(property(get=__get__renderableManager, put=__set__renderableManager))  _renderableManager;

constexpr void __set__renderableManager(Zenject::GuiRenderableManager value) ;

constexpr Zenject::GuiRenderableManager __get__renderableManager() const;


// Methods

/// @brief Method Construct addr 0x2dcbbdc size 0x8 virtual false final false
 void Construct(Zenject::GuiRenderableManager renderableManager) ;

/// @brief Method OnGUI addr 0x2dcbbe4 size 0x18 virtual false final false
 void OnGUI() ;

// Ctor Parameters []
explicit GuiRenderer() ;

/// @brief Method .ctor addr 0x2dcbbfc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2dcbc04 size 0xdc virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dcbce0 size 0x2f8 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::GuiRenderer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderer, "Zenject", "GuiRenderer");
