#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
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
// Forward declare root types
namespace UnityEngine::UIElements {
class GroupBox;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__GroupBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__GroupBox__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6904))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7231))
// CS Name: UnityEngine.UIElements.GroupBox::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__GroupBox__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__GroupBox__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__GroupBox__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__GroupBox__UxmlTraits(UnityEngine__UIElements__GroupBox__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__GroupBox__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__GroupBox__UxmlTraits(UnityEngine__UIElements__GroupBox__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__GroupBox__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__GroupBox__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__GroupBox__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__GroupBox__UxmlTraits& operator=(UnityEngine__UIElements__GroupBox__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__GroupBox__UxmlTraits& operator=(UnityEngine__UIElements__GroupBox__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;


// Methods

/// @brief Method Init addr 0x2cf2618 size 0xf8 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__GroupBox__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cf2710 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::GroupBox
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6905))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7232))
// CS Name: UnityEngine.UIElements.GroupBox
class CORDL_TYPE GroupBox : public UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlFactory;

/// @brief Convert operator to UnityEngine::UIElements::IGroupBox
constexpr operator  UnityEngine::UIElements::IGroupBox() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3c8};

virtual ~GroupBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupBox", modifiers: " const&", def_value: None }]
constexpr GroupBox(GroupBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupBox", modifiers: "&&", def_value: None }]
constexpr GroupBox(GroupBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupBox(void* ptr) noexcept : UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr GroupBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupBox& operator=(GroupBox&& o) noexcept = default;
  constexpr GroupBox& operator=(GroupBox const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

 UnityEngine::UIElements::Label __declspec(property(get=__get_m_TitleLabel, put=__set_m_TitleLabel))  m_TitleLabel;

constexpr void __set_m_TitleLabel(UnityEngine::UIElements::Label value) ;

constexpr UnityEngine::UIElements::Label __get_m_TitleLabel() const;


// Properties

 ::StringW __declspec(property(put=set_text))  text;


// Methods

/// @brief Method set_text addr 0x2cf2388 size 0x118 virtual false final false
 void set_text(::StringW value) ;

// Ctor Parameters []
explicit GroupBox() ;

/// @brief Method .ctor addr 0x2cf24a0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }]
explicit GroupBox(::StringW text) ;

/// @brief Method .ctor addr 0x2cf24a8 size 0x88 virtual false final false
 void _ctor(::StringW text) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7231)), TypeDefinitionIndex(TypeDefinitionIndex(7232)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5094 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7230))
// CS Name: UnityEngine.UIElements.GroupBox::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__GroupBox__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::GroupBox,UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__GroupBox__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__GroupBox__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__GroupBox__UxmlFactory(UnityEngine__UIElements__GroupBox__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__GroupBox__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__GroupBox__UxmlFactory(UnityEngine__UIElements__GroupBox__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__GroupBox__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::GroupBox,UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__GroupBox__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__GroupBox__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__GroupBox__UxmlFactory& operator=(UnityEngine__UIElements__GroupBox__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__GroupBox__UxmlFactory& operator=(UnityEngine__UIElements__GroupBox__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__GroupBox__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cf25d0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::GroupBox);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::GroupBox, "UnityEngine.UIElements", "GroupBox");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlFactory, "UnityEngine.UIElements", "GroupBox/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__GroupBox__UxmlTraits, "UnityEngine.UIElements", "GroupBox/UxmlTraits");
