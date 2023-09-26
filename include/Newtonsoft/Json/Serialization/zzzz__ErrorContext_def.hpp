#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
// Type: Newtonsoft.Json.Serialization::ErrorContext
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11893))
// CS Name: Newtonsoft.Json.Serialization.ErrorContext
class CORDL_TYPE ErrorContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ErrorContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorContext", modifiers: " const&", def_value: None }]
constexpr ErrorContext(ErrorContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorContext", modifiers: "&&", def_value: None }]
constexpr ErrorContext(ErrorContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ErrorContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ErrorContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ErrorContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ErrorContext& operator=(ErrorContext&& o) noexcept = default;
  constexpr ErrorContext& operator=(ErrorContext const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__Traced_k__BackingField, put=__set__Traced_k__BackingField))  _Traced_k__BackingField;

constexpr void __set__Traced_k__BackingField(bool value) ;

constexpr bool __get__Traced_k__BackingField() const;

 System::Exception __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(System::Exception value) ;

constexpr System::Exception __get__Error_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__OriginalObject_k__BackingField, put=__set__OriginalObject_k__BackingField))  _OriginalObject_k__BackingField;

constexpr void __set__OriginalObject_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__OriginalObject_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Member_k__BackingField, put=__set__Member_k__BackingField))  _Member_k__BackingField;

constexpr void __set__Member_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Member_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Path_k__BackingField, put=__set__Path_k__BackingField))  _Path_k__BackingField;

constexpr void __set__Path_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Path_k__BackingField() const;

 bool __declspec(property(get=__get__Handled_k__BackingField, put=__set__Handled_k__BackingField))  _Handled_k__BackingField;

constexpr void __set__Handled_k__BackingField(bool value) ;

constexpr bool __get__Handled_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Traced, put=set_Traced))  Traced;

 System::Exception __declspec(property(get=get_Error, put=set_Error))  Error;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_OriginalObject, put=set_OriginalObject))  OriginalObject;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Member, put=set_Member))  Member;

 ::StringW __declspec(property(get=get_Path, put=set_Path))  Path;

 bool __declspec(property(get=get_Handled, put=set_Handled))  Handled;


// Methods

// Ctor Parameters [CppParam { name: "originalObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "member", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "error", ty: "System::Exception", modifiers: "", def_value: None }]
explicit ErrorContext(::bs_hook::Il2CppWrapperType originalObject, ::bs_hook::Il2CppWrapperType member, ::StringW path, System::Exception error) ;

/// @brief Method .ctor addr 0x2530660 size 0x40 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType originalObject, ::bs_hook::Il2CppWrapperType member, ::StringW path, System::Exception error) ;

/// @brief Method get_Traced addr 0x25306a0 size 0x8 virtual false final false
 bool get_Traced() ;

/// @brief Method set_Traced addr 0x25306a8 size 0xc virtual false final false
 void set_Traced(bool value) ;

/// @brief Method get_Error addr 0x25306b4 size 0x8 virtual false final false
 System::Exception get_Error() ;

/// @brief Method set_Error addr 0x25306bc size 0x8 virtual false final false
 void set_Error(System::Exception value) ;

/// @brief Method get_OriginalObject addr 0x25306c4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_OriginalObject() ;

/// @brief Method set_OriginalObject addr 0x25306cc size 0x8 virtual false final false
 void set_OriginalObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Member addr 0x25306d4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Member() ;

/// @brief Method set_Member addr 0x25306dc size 0x8 virtual false final false
 void set_Member(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Path addr 0x25306e4 size 0x8 virtual false final false
 ::StringW get_Path() ;

/// @brief Method set_Path addr 0x25306ec size 0x8 virtual false final false
 void set_Path(::StringW value) ;

/// @brief Method get_Handled addr 0x25306f4 size 0x8 virtual false final false
 bool get_Handled() ;

/// @brief Method set_Handled addr 0x25306fc size 0xc virtual false final false
 void set_Handled(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::ErrorContext);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ErrorContext, "Newtonsoft.Json.Serialization", "ErrorContext");
