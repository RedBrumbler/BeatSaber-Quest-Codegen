#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Label__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Label__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6918))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7150))
// CS Name: UnityEngine.UIElements.Label::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__Label__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__Label__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Label__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Label__UxmlTraits(UnityEngine__UIElements__Label__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Label__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Label__UxmlTraits(UnityEngine__UIElements__Label__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Label__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__Label__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Label__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Label__UxmlTraits& operator=(UnityEngine__UIElements__Label__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Label__UxmlTraits& operator=(UnityEngine__UIElements__Label__UxmlTraits const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Label__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cd9018 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Label
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6919))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7151))
// CS Name: UnityEngine.UIElements.Label
class CORDL_TYPE Label : public UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x478};

virtual ~Label() = default;

// Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: " const&", def_value: None }]
constexpr Label(Label const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: "&&", def_value: None }]
constexpr Label(Label&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Label(void* ptr) noexcept : UnityEngine::UIElements::TextElement(ptr) {
}


  constexpr Label& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Label& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Label& operator=(Label&& o) noexcept = default;
  constexpr Label& operator=(Label const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;


// Methods

// Ctor Parameters []
explicit Label() ;

/// @brief Method .ctor addr 0x2cd8f68 size 0x50 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }]
explicit Label(::StringW text) ;

/// @brief Method .ctor addr 0x2cce7e0 size 0xb8 virtual false final false
 void _ctor(::StringW text) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7150)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5099 }), TypeDefinitionIndex(TypeDefinitionIndex(7151)), TypeDefinitionIndex(TypeDefinitionIndex(7108))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7149))
// CS Name: UnityEngine.UIElements.Label::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Label__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Label,UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Label__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Label__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Label__UxmlFactory(UnityEngine__UIElements__Label__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Label__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Label__UxmlFactory(UnityEngine__UIElements__Label__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Label__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Label,UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__Label__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Label__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Label__UxmlFactory& operator=(UnityEngine__UIElements__Label__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Label__UxmlFactory& operator=(UnityEngine__UIElements__Label__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Label__UxmlFactory() ;

/// @brief Method .ctor addr 0x2ccc560 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Label);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Label, "UnityEngine.UIElements", "Label");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlFactory, "UnityEngine.UIElements", "Label/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Label__UxmlTraits, "UnityEngine.UIElements", "Label/UxmlTraits");
