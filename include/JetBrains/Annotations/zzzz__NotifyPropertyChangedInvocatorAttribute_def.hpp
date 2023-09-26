#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class NotifyPropertyChangedInvocatorAttribute;
}
// Type: JetBrains.Annotations::NotifyPropertyChangedInvocatorAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15706))
// CS Name: JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
class CORDL_TYPE NotifyPropertyChangedInvocatorAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NotifyPropertyChangedInvocatorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyPropertyChangedInvocatorAttribute", modifiers: " const&", def_value: None }]
constexpr NotifyPropertyChangedInvocatorAttribute(NotifyPropertyChangedInvocatorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyPropertyChangedInvocatorAttribute", modifiers: "&&", def_value: None }]
constexpr NotifyPropertyChangedInvocatorAttribute(NotifyPropertyChangedInvocatorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotifyPropertyChangedInvocatorAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NotifyPropertyChangedInvocatorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotifyPropertyChangedInvocatorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotifyPropertyChangedInvocatorAttribute& operator=(NotifyPropertyChangedInvocatorAttribute&& o) noexcept = default;
  constexpr NotifyPropertyChangedInvocatorAttribute& operator=(NotifyPropertyChangedInvocatorAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__ParameterName_k__BackingField, put=__set__ParameterName_k__BackingField))  _ParameterName_k__BackingField;

constexpr void __set__ParameterName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ParameterName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_ParameterName, put=set_ParameterName))  ParameterName;


// Methods

// Ctor Parameters []
explicit NotifyPropertyChangedInvocatorAttribute() ;

/// @brief Method .ctor addr 0x2d72c90 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "parameterName", ty: "::StringW", modifiers: "", def_value: None }]
explicit NotifyPropertyChangedInvocatorAttribute(::StringW parameterName) ;

/// @brief Method .ctor addr 0x2d72c98 size 0x28 virtual false final false
 void _ctor(::StringW parameterName) ;

/// @brief Method get_ParameterName addr 0x2d72cc0 size 0x8 virtual false final false
 ::StringW get_ParameterName() ;

/// @brief Method set_ParameterName addr 0x2d72cc8 size 0x8 virtual false final false
 void set_ParameterName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute, "JetBrains.Annotations", "NotifyPropertyChangedInvocatorAttribute");
