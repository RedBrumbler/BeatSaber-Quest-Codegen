#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
namespace System::Xml::Linq {
class XDocumentType;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDocumentTypeWrapper;
}
// Type: Newtonsoft.Json.Converters::XDocumentTypeWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12026))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12020))
// CS Name: Newtonsoft.Json.Converters.XDocumentTypeWrapper
class CORDL_TYPE XDocumentTypeWrapper : public Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlDocumentType
constexpr operator  Newtonsoft::Json::Converters::IXmlDocumentType() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XDocumentTypeWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentTypeWrapper", modifiers: " const&", def_value: None }]
constexpr XDocumentTypeWrapper(XDocumentTypeWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentTypeWrapper", modifiers: "&&", def_value: None }]
constexpr XDocumentTypeWrapper(XDocumentTypeWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XDocumentTypeWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XObjectWrapper(ptr) {
}


  constexpr XDocumentTypeWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XDocumentTypeWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XDocumentTypeWrapper& operator=(XDocumentTypeWrapper&& o) noexcept = default;
  constexpr XDocumentTypeWrapper& operator=(XDocumentTypeWrapper const& o) noexcept = default;
                


// Fields

 System::Xml::Linq::XDocumentType __declspec(property(get=__get__documentType, put=__set__documentType))  _documentType;

constexpr void __set__documentType(System::Xml::Linq::XDocumentType value) ;

constexpr System::Xml::Linq::XDocumentType __get__documentType() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_System))  System;

 ::StringW __declspec(property(get=get_Public))  Public;

 ::StringW __declspec(property(get=get_InternalSubset))  InternalSubset;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;


// Methods

// Ctor Parameters [CppParam { name: "documentType", ty: "System::Xml::Linq::XDocumentType", modifiers: "", def_value: None }]
explicit XDocumentTypeWrapper(System::Xml::Linq::XDocumentType documentType) ;

/// @brief Method .ctor addr 0x2572d38 size 0x6c virtual false final false
 void _ctor(System::Xml::Linq::XDocumentType documentType) ;

/// @brief Method get_Name addr 0x2572da4 size 0x1c virtual true final true
 ::StringW get_Name() ;

/// @brief Method get_System addr 0x2572dc0 size 0x1c virtual true final true
 ::StringW get_System() ;

/// @brief Method get_Public addr 0x2572ddc size 0x1c virtual true final true
 ::StringW get_Public() ;

/// @brief Method get_InternalSubset addr 0x2572df8 size 0x1c virtual true final true
 ::StringW get_InternalSubset() ;

/// @brief Method get_LocalName addr 0x2572e14 size 0x40 virtual true final false
 ::StringW get_LocalName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XDocumentTypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XDocumentTypeWrapper, "Newtonsoft.Json.Converters", "XDocumentTypeWrapper");
