#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
struct HelpBoxMessageType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HelpBox;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__HelpBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__HelpBox__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7228))
// CS Name: UnityEngine.UIElements.HelpBox::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__HelpBox__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__HelpBox__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__HelpBox__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__HelpBox__UxmlTraits(UnityEngine__UIElements__HelpBox__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__HelpBox__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__HelpBox__UxmlTraits(UnityEngine__UIElements__HelpBox__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__HelpBox__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__HelpBox__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__HelpBox__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__HelpBox__UxmlTraits& operator=(UnityEngine__UIElements__HelpBox__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__HelpBox__UxmlTraits& operator=(UnityEngine__UIElements__HelpBox__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::HelpBoxMessageType> __declspec(property(get=__get_m_MessageType, put=__set_m_MessageType))  m_MessageType;

constexpr void __set_m_MessageType(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::HelpBoxMessageType> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::HelpBoxMessageType> __get_m_MessageType() const;


// Methods

/// @brief Method Init addr 0x2cf2138 size 0x154 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__HelpBox__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cf228c size 0xfc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::HelpBox
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6847))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7229))
// CS Name: UnityEngine.UIElements.HelpBox
class CORDL_TYPE HelpBox : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3d0};

virtual ~HelpBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: " const&", def_value: None }]
constexpr HelpBox(HelpBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "&&", def_value: None }]
constexpr HelpBox(HelpBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HelpBox(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr HelpBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HelpBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HelpBox& operator=(HelpBox&& o) noexcept = default;
  constexpr HelpBox& operator=(HelpBox const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_iconUssClassName, put=__set_iconUssClassName))  iconUssClassName;

static void __set_iconUssClassName(::StringW value) ;

static ::StringW __get_iconUssClassName() ;

static ::StringW __declspec(property(get=__get_iconInfoUssClassName, put=__set_iconInfoUssClassName))  iconInfoUssClassName;

static void __set_iconInfoUssClassName(::StringW value) ;

static ::StringW __get_iconInfoUssClassName() ;

static ::StringW __declspec(property(get=__get_iconwarningUssClassName, put=__set_iconwarningUssClassName))  iconwarningUssClassName;

static void __set_iconwarningUssClassName(::StringW value) ;

static ::StringW __get_iconwarningUssClassName() ;

static ::StringW __declspec(property(get=__get_iconErrorUssClassName, put=__set_iconErrorUssClassName))  iconErrorUssClassName;

static void __set_iconErrorUssClassName(::StringW value) ;

static ::StringW __get_iconErrorUssClassName() ;

 UnityEngine::UIElements::HelpBoxMessageType __declspec(property(get=__get_m_HelpBoxMessageType, put=__set_m_HelpBoxMessageType))  m_HelpBoxMessageType;

constexpr void __set_m_HelpBoxMessageType(UnityEngine::UIElements::HelpBoxMessageType value) ;

constexpr UnityEngine::UIElements::HelpBoxMessageType __get_m_HelpBoxMessageType() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Icon, put=__set_m_Icon))  m_Icon;

constexpr void __set_m_Icon(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Icon() const;

 ::StringW __declspec(property(get=__get_m_IconClass, put=__set_m_IconClass))  m_IconClass;

constexpr void __set_m_IconClass(::StringW value) ;

constexpr ::StringW __get_m_IconClass() const;

 UnityEngine::UIElements::Label __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(UnityEngine::UIElements::Label value) ;

constexpr UnityEngine::UIElements::Label __get_m_Label() const;


// Properties

 ::StringW __declspec(property(put=set_text))  text;

 UnityEngine::UIElements::HelpBoxMessageType __declspec(property(put=set_messageType))  messageType;


// Methods

/// @brief Method set_text addr 0x2cf1c38 size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method set_messageType addr 0x2cf1c5c size 0x18 virtual false final false
 void set_messageType(UnityEngine::UIElements::HelpBoxMessageType value) ;

// Ctor Parameters []
explicit HelpBox() ;

/// @brief Method .ctor addr 0x2cf1d28 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "messageType", ty: "UnityEngine::UIElements::HelpBoxMessageType", modifiers: "", def_value: None }]
explicit HelpBox(::StringW text, UnityEngine::UIElements::HelpBoxMessageType messageType) ;

/// @brief Method .ctor addr 0x2cf1d7c size 0x150 virtual false final false
 void _ctor(::StringW text, UnityEngine::UIElements::HelpBoxMessageType messageType) ;

/// @brief Method GetIconClass addr 0x2cf1ecc size 0xb8 virtual false final false
 ::StringW GetIconClass(UnityEngine::UIElements::HelpBoxMessageType messageType) ;

/// @brief Method UpdateIcon addr 0x2cf1c74 size 0xb4 virtual false final false
 void UpdateIcon(UnityEngine::UIElements::HelpBoxMessageType messageType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5095 }), TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7227))
// CS Name: UnityEngine.UIElements.HelpBox::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__HelpBox__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::HelpBox,UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__HelpBox__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__HelpBox__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__HelpBox__UxmlFactory(UnityEngine__UIElements__HelpBox__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__HelpBox__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__HelpBox__UxmlFactory(UnityEngine__UIElements__HelpBox__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__HelpBox__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::HelpBox,UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__HelpBox__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__HelpBox__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__HelpBox__UxmlFactory& operator=(UnityEngine__UIElements__HelpBox__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__HelpBox__UxmlFactory& operator=(UnityEngine__UIElements__HelpBox__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__HelpBox__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cf20f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::HelpBox);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::HelpBox, "UnityEngine.UIElements", "HelpBox");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlFactory, "UnityEngine.UIElements", "HelpBox/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__HelpBox__UxmlTraits, "UnityEngine.UIElements", "HelpBox/UxmlTraits");
