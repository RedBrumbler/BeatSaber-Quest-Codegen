#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class StarNode;
}
// Type: System.Xml.Schema::StarNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11569))
// CS Name: System.Xml.Schema.StarNode
class CORDL_TYPE StarNode : public System::Xml::Schema::InteriorNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StarNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "StarNode", modifiers: " const&", def_value: None }]
constexpr StarNode(StarNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StarNode", modifiers: "&&", def_value: None }]
constexpr StarNode(StarNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StarNode(void* ptr) noexcept : System::Xml::Schema::InteriorNode(ptr) {
}


  constexpr StarNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StarNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StarNode& operator=(StarNode&& o) noexcept = default;
  constexpr StarNode& operator=(StarNode const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsNullable))  IsNullable;


// Methods

/// @brief Method ConstructPos addr 0x274e484 size 0x9c virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x274e520 size 0x8 virtual true final false
 bool get_IsNullable() ;

// Ctor Parameters []
explicit StarNode() ;

/// @brief Method .ctor addr 0x274e528 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::StarNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::StarNode, "System.Xml.Schema", "StarNode");
