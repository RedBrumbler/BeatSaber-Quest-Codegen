#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlImplementation;
}
// Type: System.Xml::XmlImplementation
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11473))
// CS Name: System.Xml.XmlImplementation
class CORDL_TYPE XmlImplementation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlImplementation() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlImplementation", modifiers: " const&", def_value: None }]
constexpr XmlImplementation(XmlImplementation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlImplementation", modifiers: "&&", def_value: None }]
constexpr XmlImplementation(XmlImplementation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlImplementation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlImplementation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlImplementation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlImplementation& operator=(XmlImplementation&& o) noexcept = default;
  constexpr XmlImplementation& operator=(XmlImplementation const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(System::Xml::XmlNameTable value) ;

constexpr System::Xml::XmlNameTable __get_nameTable() const;


// Properties

 System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;


// Methods

// Ctor Parameters []
explicit XmlImplementation() ;

/// @brief Method .ctor addr 0x2729a64 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "nt", ty: "System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlImplementation(System::Xml::XmlNameTable nt) ;

/// @brief Method .ctor addr 0x2729b3c size 0x28 virtual false final false
 void _ctor(System::Xml::XmlNameTable nt) ;

/// @brief Method CreateDocument addr 0x2729b64 size 0x64 virtual true final false
 System::Xml::XmlDocument CreateDocument() ;

/// @brief Method get_NameTable addr 0x2729bc8 size 0x8 virtual false final false
 System::Xml::XmlNameTable get_NameTable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlImplementation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlImplementation, "System.Xml", "XmlImplementation");
