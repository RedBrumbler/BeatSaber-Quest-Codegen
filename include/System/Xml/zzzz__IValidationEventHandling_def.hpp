#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System {
class Exception;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
// Forward declare root types
namespace System::Xml {
class IValidationEventHandling;
}
// Type: System.Xml::IValidationEventHandling
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11392))
// CS Name: System.Xml.IValidationEventHandling
class CORDL_TYPE IValidationEventHandling : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValidationEventHandling() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValidationEventHandling(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendEvent(System::Exception exception, System::Xml::Schema::XmlSeverityType severity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IValidationEventHandling);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IValidationEventHandling, "System.Xml", "IValidationEventHandling");
