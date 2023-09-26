#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Newtonsoft::Json {
class JsonArrayAttribute;
}
// Type: Newtonsoft.Json::JsonArrayAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11776))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11775))
// CS Name: Newtonsoft.Json.JsonArrayAttribute
class CORDL_TYPE JsonArrayAttribute : public Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~JsonArrayAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: " const&", def_value: None }]
constexpr JsonArrayAttribute(JsonArrayAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "&&", def_value: None }]
constexpr JsonArrayAttribute(JsonArrayAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonArrayAttribute(void* ptr) noexcept : Newtonsoft::Json::JsonContainerAttribute(ptr) {
}


  constexpr JsonArrayAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonArrayAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonArrayAttribute& operator=(JsonArrayAttribute&& o) noexcept = default;
  constexpr JsonArrayAttribute& operator=(JsonArrayAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__allowNullItems, put=__set__allowNullItems))  _allowNullItems;

constexpr void __set__allowNullItems(bool value) ;

constexpr bool __get__allowNullItems() const;


// Properties

 bool __declspec(property(get=get_AllowNullItems, put=set_AllowNullItems))  AllowNullItems;


// Methods

/// @brief Method get_AllowNullItems addr 0x24f9d6c size 0x8 virtual false final false
 bool get_AllowNullItems() ;

/// @brief Method set_AllowNullItems addr 0x24f9d74 size 0xc virtual false final false
 void set_AllowNullItems(bool value) ;

// Ctor Parameters []
explicit JsonArrayAttribute() ;

/// @brief Method .ctor addr 0x24f9d80 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "allowNullItems", ty: "bool", modifiers: "", def_value: None }]
explicit JsonArrayAttribute(bool allowNullItems) ;

/// @brief Method .ctor addr 0x24f9d88 size 0x28 virtual false final false
 void _ctor(bool allowNullItems) ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonArrayAttribute(::StringW id) ;

/// @brief Method .ctor addr 0x24f9db0 size 0x28 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonArrayAttribute, "Newtonsoft.Json", "JsonArrayAttribute");
