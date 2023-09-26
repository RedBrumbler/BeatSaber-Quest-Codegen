#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XObject;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XContainerWrapper;
}
// Type: Newtonsoft.Json.Converters::XContainerWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12026))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12025))
// CS Name: Newtonsoft.Json.Converters.XContainerWrapper
class CORDL_TYPE XContainerWrapper : public Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XContainerWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: " const&", def_value: None }]
constexpr XContainerWrapper(XContainerWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "&&", def_value: None }]
constexpr XContainerWrapper(XContainerWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XContainerWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XObjectWrapper(ptr) {
}


  constexpr XContainerWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XContainerWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XContainerWrapper& operator=(XContainerWrapper&& o) noexcept = default;
  constexpr XContainerWrapper& operator=(XContainerWrapper const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=__get__childNodes, put=__set__childNodes))  _childNodes;

constexpr void __set__childNodes(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __get__childNodes() const;


// Properties

 System::Xml::Linq::XContainer __declspec(property(get=get_Container))  Container;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_ChildNodes))  ChildNodes;

 Newtonsoft::Json::Converters::IXmlNode __declspec(property(get=get_ParentNode))  ParentNode;


// Methods

/// @brief Method get_Container addr 0x2574734 size 0x78 virtual false final false
 System::Xml::Linq::XContainer get_Container() ;

// Ctor Parameters [CppParam { name: "container", ty: "System::Xml::Linq::XContainer", modifiers: "", def_value: None }]
explicit XContainerWrapper(System::Xml::Linq::XContainer container) ;

/// @brief Method .ctor addr 0x2572ed0 size 0x6c virtual false final false
 void _ctor(System::Xml::Linq::XContainer container) ;

/// @brief Method get_ChildNodes addr 0x25730a0 size 0x3b8 virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_ChildNodes() ;

/// @brief Method get_ParentNode addr 0x25747ac size 0x44 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode get_ParentNode() ;

/// @brief Method WrapNode addr 0x2574068 size 0x490 virtual false final false
static Newtonsoft::Json::Converters::IXmlNode WrapNode(System::Xml::Linq::XObject node) ;

/// @brief Method AppendChild addr 0x2573e30 size 0xd0 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode AppendChild(Newtonsoft::Json::Converters::IXmlNode newChild) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XContainerWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XContainerWrapper, "Newtonsoft.Json.Converters", "XContainerWrapper");
