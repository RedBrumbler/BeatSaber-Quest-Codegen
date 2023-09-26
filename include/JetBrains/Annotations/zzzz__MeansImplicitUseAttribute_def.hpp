#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
// Forward declare root types
namespace JetBrains::Annotations {
class MeansImplicitUseAttribute;
}
// Type: JetBrains.Annotations::MeansImplicitUseAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15712))
// CS Name: JetBrains.Annotations.MeansImplicitUseAttribute
class CORDL_TYPE MeansImplicitUseAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MeansImplicitUseAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeansImplicitUseAttribute", modifiers: " const&", def_value: None }]
constexpr MeansImplicitUseAttribute(MeansImplicitUseAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeansImplicitUseAttribute", modifiers: "&&", def_value: None }]
constexpr MeansImplicitUseAttribute(MeansImplicitUseAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeansImplicitUseAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr MeansImplicitUseAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeansImplicitUseAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeansImplicitUseAttribute& operator=(MeansImplicitUseAttribute&& o) noexcept = default;
  constexpr MeansImplicitUseAttribute& operator=(MeansImplicitUseAttribute const& o) noexcept = default;
                


// Fields

 JetBrains::Annotations::ImplicitUseKindFlags __declspec(property(get=__get__UseKindFlags_k__BackingField, put=__set__UseKindFlags_k__BackingField))  _UseKindFlags_k__BackingField;

constexpr void __set__UseKindFlags_k__BackingField(JetBrains::Annotations::ImplicitUseKindFlags value) ;

constexpr JetBrains::Annotations::ImplicitUseKindFlags __get__UseKindFlags_k__BackingField() const;

 JetBrains::Annotations::ImplicitUseTargetFlags __declspec(property(get=__get__TargetFlags_k__BackingField, put=__set__TargetFlags_k__BackingField))  _TargetFlags_k__BackingField;

constexpr void __set__TargetFlags_k__BackingField(JetBrains::Annotations::ImplicitUseTargetFlags value) ;

constexpr JetBrains::Annotations::ImplicitUseTargetFlags __get__TargetFlags_k__BackingField() const;


// Properties

 JetBrains::Annotations::ImplicitUseKindFlags __declspec(property(get=get_UseKindFlags, put=set_UseKindFlags))  UseKindFlags;

 JetBrains::Annotations::ImplicitUseTargetFlags __declspec(property(get=get_TargetFlags, put=set_TargetFlags))  TargetFlags;


// Methods

// Ctor Parameters []
explicit MeansImplicitUseAttribute() ;

/// @brief Method .ctor addr 0x2d72ebc size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "useKindFlags", ty: "JetBrains::Annotations::ImplicitUseKindFlags", modifiers: "", def_value: None }]
explicit MeansImplicitUseAttribute(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags) ;

/// @brief Method .ctor addr 0x2d72f0c size 0x2c virtual false final false
 void _ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags) ;

// Ctor Parameters [CppParam { name: "targetFlags", ty: "JetBrains::Annotations::ImplicitUseTargetFlags", modifiers: "", def_value: None }]
explicit MeansImplicitUseAttribute(JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) ;

/// @brief Method .ctor addr 0x2d72f38 size 0x2c virtual false final false
 void _ctor(JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) ;

// Ctor Parameters [CppParam { name: "useKindFlags", ty: "JetBrains::Annotations::ImplicitUseKindFlags", modifiers: "", def_value: None }, CppParam { name: "targetFlags", ty: "JetBrains::Annotations::ImplicitUseTargetFlags", modifiers: "", def_value: None }]
explicit MeansImplicitUseAttribute(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) ;

/// @brief Method .ctor addr 0x2d72ee0 size 0x2c virtual false final false
 void _ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) ;

/// @brief Method get_UseKindFlags addr 0x2d72f64 size 0x8 virtual false final false
 JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags() ;

/// @brief Method set_UseKindFlags addr 0x2d72f6c size 0x8 virtual false final false
 void set_UseKindFlags(JetBrains::Annotations::ImplicitUseKindFlags value) ;

/// @brief Method get_TargetFlags addr 0x2d72f74 size 0x8 virtual false final false
 JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags() ;

/// @brief Method set_TargetFlags addr 0x2d72f7c size 0x8 virtual false final false
 void set_TargetFlags(JetBrains::Annotations::ImplicitUseTargetFlags value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::MeansImplicitUseAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MeansImplicitUseAttribute, "JetBrains.Annotations", "MeansImplicitUseAttribute");
