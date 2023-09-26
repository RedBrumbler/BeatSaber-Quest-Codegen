#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class AuthenticationHeaderValue;
}
// Type: System.Net.Http.Headers::AuthenticationHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14838))
// CS Name: System.Net.Http.Headers.AuthenticationHeaderValue
class CORDL_TYPE AuthenticationHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AuthenticationHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationHeaderValue", modifiers: " const&", def_value: None }]
constexpr AuthenticationHeaderValue(AuthenticationHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationHeaderValue", modifiers: "&&", def_value: None }]
constexpr AuthenticationHeaderValue(AuthenticationHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticationHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthenticationHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticationHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticationHeaderValue& operator=(AuthenticationHeaderValue&& o) noexcept = default;
  constexpr AuthenticationHeaderValue& operator=(AuthenticationHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Parameter_k__BackingField, put=__set__Parameter_k__BackingField))  _Parameter_k__BackingField;

constexpr void __set__Parameter_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Parameter_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Scheme_k__BackingField, put=__set__Scheme_k__BackingField))  _Scheme_k__BackingField;

constexpr void __set__Scheme_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Scheme_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Parameter, put=set_Parameter))  Parameter;

 ::StringW __declspec(property(get=get_Scheme, put=set_Scheme))  Scheme;


// Methods

// Ctor Parameters [CppParam { name: "scheme", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: None }]
explicit AuthenticationHeaderValue(::StringW scheme, ::StringW parameter) ;

/// @brief Method .ctor addr 0x26d413c size 0x34 virtual false final false
 void _ctor(::StringW scheme, ::StringW parameter) ;

// Ctor Parameters []
explicit AuthenticationHeaderValue() ;

/// @brief Method .ctor addr 0x26d4170 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Parameter addr 0x26d4178 size 0x8 virtual false final false
 ::StringW get_Parameter() ;

/// @brief Method set_Parameter addr 0x26d4180 size 0x8 virtual false final false
 void set_Parameter(::StringW value) ;

/// @brief Method get_Scheme addr 0x26d4188 size 0x8 virtual false final false
 ::StringW get_Scheme() ;

/// @brief Method set_Scheme addr 0x26d4190 size 0x8 virtual false final false
 void set_Scheme(::StringW value) ;

/// @brief Method System.ICloneable.Clone addr 0x26d4198 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26d41a0 size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26d4254 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26d42d0 size 0xd0 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::AuthenticationHeaderValue> parsedValue) ;

/// @brief Method TryParse addr 0x26d44fc size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::AuthenticationHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26d43c8 size 0x134 virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::AuthenticationHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method ToString addr 0x26d4904 size 0x5c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::AuthenticationHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::AuthenticationHeaderValue, "System.Net.Http.Headers", "AuthenticationHeaderValue");
