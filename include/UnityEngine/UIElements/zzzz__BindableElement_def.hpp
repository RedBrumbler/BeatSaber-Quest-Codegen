#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class IBinding;
}
namespace UnityEngine::UIElements {
class IBindable;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BindableElement;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__BindableElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__BindableElement__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6904))
// CS Name: UnityEngine.UIElements.BindableElement::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__BindableElement__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~UnityEngine__UIElements__BindableElement__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__BindableElement__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__BindableElement__UxmlTraits(UnityEngine__UIElements__BindableElement__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__BindableElement__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__BindableElement__UxmlTraits(UnityEngine__UIElements__BindableElement__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__BindableElement__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__BindableElement__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__BindableElement__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__BindableElement__UxmlTraits& operator=(UnityEngine__UIElements__BindableElement__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__BindableElement__UxmlTraits& operator=(UnityEngine__UIElements__BindableElement__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_PropertyPath, put=__set_m_PropertyPath))  m_PropertyPath;

constexpr void __set_m_PropertyPath(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_PropertyPath() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__BindableElement__UxmlTraits() ;

/// @brief Method .ctor addr 0x2c72aa8 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2c728ec size 0x134 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BindableElement
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6847))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6905))
// CS Name: UnityEngine.UIElements.BindableElement
class CORDL_TYPE BindableElement : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory;

/// @brief Convert operator to UnityEngine::UIElements::IBindable
constexpr operator  UnityEngine::UIElements::IBindable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3c0};

virtual ~BindableElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindableElement", modifiers: " const&", def_value: None }]
constexpr BindableElement(BindableElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindableElement", modifiers: "&&", def_value: None }]
constexpr BindableElement(BindableElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindableElement(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr BindableElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindableElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindableElement& operator=(BindableElement&& o) noexcept = default;
  constexpr BindableElement& operator=(BindableElement const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::IBinding __declspec(property(get=__get__binding_k__BackingField, put=__set__binding_k__BackingField))  _binding_k__BackingField;

constexpr void __set__binding_k__BackingField(UnityEngine::UIElements::IBinding value) ;

constexpr UnityEngine::UIElements::IBinding __get__binding_k__BackingField() const;

 ::StringW __declspec(property(get=__get__bindingPath_k__BackingField, put=__set__bindingPath_k__BackingField))  _bindingPath_k__BackingField;

constexpr void __set__bindingPath_k__BackingField(::StringW value) ;

constexpr ::StringW __get__bindingPath_k__BackingField() const;


// Properties

 UnityEngine::UIElements::IBinding __declspec(property(get=get_binding))  binding;

 ::StringW __declspec(property(put=set_bindingPath))  bindingPath;


// Methods

/// @brief Method get_binding addr 0x2c7638c size 0x8 virtual true final true
 UnityEngine::UIElements::IBinding get_binding() ;

/// @brief Method set_bindingPath addr 0x2c76394 size 0x8 virtual true final true
 void set_bindingPath(::StringW value) ;

// Ctor Parameters []
explicit BindableElement() ;

/// @brief Method .ctor addr 0x2c72344 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7108)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5089 }), TypeDefinitionIndex(TypeDefinitionIndex(6905)), TypeDefinitionIndex(TypeDefinitionIndex(6904))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6903))
// CS Name: UnityEngine.UIElements.BindableElement::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__BindableElement__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::BindableElement,UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__BindableElement__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__BindableElement__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__BindableElement__UxmlFactory(UnityEngine__UIElements__BindableElement__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__BindableElement__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__BindableElement__UxmlFactory(UnityEngine__UIElements__BindableElement__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__BindableElement__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::BindableElement,UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__BindableElement__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__BindableElement__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__BindableElement__UxmlFactory& operator=(UnityEngine__UIElements__BindableElement__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__BindableElement__UxmlFactory& operator=(UnityEngine__UIElements__BindableElement__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__BindableElement__UxmlFactory() ;

/// @brief Method .ctor addr 0x2c7639c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::BindableElement);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BindableElement, "UnityEngine.UIElements", "BindableElement");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory, "UnityEngine.UIElements", "BindableElement/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits, "UnityEngine.UIElements", "BindableElement/UxmlTraits");
