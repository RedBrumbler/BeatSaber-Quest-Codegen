#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class Positions;
}
// Forward declare root types
namespace System::Xml::Schema {
class ChoiceNode;
}
// Type: System.Xml.Schema::ChoiceNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11566))
// CS Name: System.Xml.Schema.ChoiceNode
class CORDL_TYPE ChoiceNode : public System::Xml::Schema::InteriorNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ChoiceNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChoiceNode", modifiers: " const&", def_value: None }]
constexpr ChoiceNode(ChoiceNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChoiceNode", modifiers: "&&", def_value: None }]
constexpr ChoiceNode(ChoiceNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChoiceNode(void* ptr) noexcept : System::Xml::Schema::InteriorNode(ptr) {
}


  constexpr ChoiceNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChoiceNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChoiceNode& operator=(ChoiceNode&& o) noexcept = default;
  constexpr ChoiceNode& operator=(ChoiceNode const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsNullable))  IsNullable;


// Methods

/// @brief Method ConstructChildPos addr 0x274e108 size 0xdc virtual false final false
static void ConstructChildPos(System::Xml::Schema::SyntaxTreeNode child, System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method ConstructPos addr 0x274e1e4 size 0x118 virtual true final false
 void ConstructPos(System::Xml::Schema::BitSet firstpos, System::Xml::Schema::BitSet lastpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method get_IsNullable addr 0x274e2fc size 0x90 virtual true final false
 bool get_IsNullable() ;

/// @brief Method ExpandTree addr 0x274e38c size 0x4 virtual true final false
 void ExpandTree(System::Xml::Schema::InteriorNode parent, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions) ;

// Ctor Parameters []
explicit ChoiceNode() ;

/// @brief Method .ctor addr 0x274d954 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::ChoiceNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::ChoiceNode, "System.Xml.Schema", "ChoiceNode");
