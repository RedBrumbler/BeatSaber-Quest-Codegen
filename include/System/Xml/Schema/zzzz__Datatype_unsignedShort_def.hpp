#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_unsignedInt_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_unsignedShort;
}
// Type: System.Xml.Schema::Datatype_unsignedShort
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11634))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11635))
// CS Name: System.Xml.Schema.Datatype_unsignedShort
class CORDL_TYPE Datatype_unsignedShort : public System::Xml::Schema::Datatype_unsignedInt {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_unsignedShort() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_unsignedShort", modifiers: " const&", def_value: None }]
constexpr Datatype_unsignedShort(Datatype_unsignedShort const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_unsignedShort", modifiers: "&&", def_value: None }]
constexpr Datatype_unsignedShort(Datatype_unsignedShort&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_unsignedShort(void* ptr) noexcept : System::Xml::Schema::Datatype_unsignedInt(ptr) {
}


  constexpr Datatype_unsignedShort& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_unsignedShort& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_unsignedShort& operator=(Datatype_unsignedShort&& o) noexcept = default;
  constexpr Datatype_unsignedShort& operator=(Datatype_unsignedShort const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric10FacetsChecker, put=__set_numeric10FacetsChecker))  numeric10FacetsChecker;

static void __set_numeric10FacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_numeric10FacetsChecker() ;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;


// Methods

/// @brief Method get_FacetsChecker addr 0x275d6d0 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x275d728 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method Compare addr 0x275d730 size 0x94 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method get_ValueType addr 0x275d7c4 size 0x58 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x275d81c size 0x58 virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method TryParseValue addr 0x275d874 size 0x140 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_unsignedShort() ;

/// @brief Method .ctor addr 0x275d9b4 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_unsignedShort);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_unsignedShort, "System.Xml.Schema", "Datatype_unsignedShort");
