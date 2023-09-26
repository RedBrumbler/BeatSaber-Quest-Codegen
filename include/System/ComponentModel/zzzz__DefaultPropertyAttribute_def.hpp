#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class DefaultPropertyAttribute;
}
// Type: System.ComponentModel::DefaultPropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8288))
// CS Name: System.ComponentModel.DefaultPropertyAttribute
class CORDL_TYPE DefaultPropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultPropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultPropertyAttribute(DefaultPropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultPropertyAttribute(DefaultPropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultPropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DefaultPropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultPropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultPropertyAttribute& operator=(DefaultPropertyAttribute&& o) noexcept = default;
  constexpr DefaultPropertyAttribute& operator=(DefaultPropertyAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

static System::ComponentModel::DefaultPropertyAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::DefaultPropertyAttribute value) ;

static System::ComponentModel::DefaultPropertyAttribute __get_Default() ;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit DefaultPropertyAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x27acdac size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x27acdd4 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method Equals addr 0x27acddc size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x27ace5c size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DefaultPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DefaultPropertyAttribute, "System.ComponentModel", "DefaultPropertyAttribute");
