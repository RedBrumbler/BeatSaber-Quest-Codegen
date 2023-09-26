#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class ProgressBar;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__ProgressBar__UxmlFactory;
}
// Type: UnityEngine.UIElements::ProgressBar
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7234))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7236))
// CS Name: UnityEngine.UIElements.ProgressBar
class CORDL_TYPE ProgressBar : public UnityEngine::UIElements::AbstractProgressBar {
public:
// Declarations
using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__ProgressBar__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3e8};

virtual ~ProgressBar() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: " const&", def_value: None }]
constexpr ProgressBar(ProgressBar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "&&", def_value: None }]
constexpr ProgressBar(ProgressBar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProgressBar(void* ptr) noexcept : UnityEngine::UIElements::AbstractProgressBar(ptr) {
}


  constexpr ProgressBar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProgressBar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProgressBar& operator=(ProgressBar&& o) noexcept = default;
  constexpr ProgressBar& operator=(ProgressBar const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ProgressBar() ;

/// @brief Method .ctor addr 0x2cf3418 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5103 }), TypeDefinitionIndex(TypeDefinitionIndex(7233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7235))
// CS Name: UnityEngine.UIElements.ProgressBar::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__ProgressBar__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::ProgressBar,UnityEngine::UIElements::UnityEngine__UIElements__AbstractProgressBar__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__ProgressBar__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ProgressBar__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__ProgressBar__UxmlFactory(UnityEngine__UIElements__ProgressBar__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ProgressBar__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__ProgressBar__UxmlFactory(UnityEngine__UIElements__ProgressBar__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ProgressBar__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::ProgressBar,UnityEngine::UIElements::UnityEngine__UIElements__AbstractProgressBar__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(UnityEngine__UIElements__ProgressBar__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(UnityEngine__UIElements__ProgressBar__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__ProgressBar__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cf346c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ProgressBar);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ProgressBar, "UnityEngine.UIElements", "ProgressBar");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__ProgressBar__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__ProgressBar__UxmlFactory, "UnityEngine.UIElements", "ProgressBar/UxmlFactory");
