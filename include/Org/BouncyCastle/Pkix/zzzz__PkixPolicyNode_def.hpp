#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
// Type: Org.BouncyCastle.Pkix::PkixPolicyNode
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1728))
// CS Name: Org.BouncyCastle.Pkix.PkixPolicyNode
class CORDL_TYPE PkixPolicyNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PkixPolicyNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixPolicyNode", modifiers: " const&", def_value: None }]
constexpr PkixPolicyNode(PkixPolicyNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixPolicyNode", modifiers: "&&", def_value: None }]
constexpr PkixPolicyNode(PkixPolicyNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixPolicyNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixPolicyNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixPolicyNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixPolicyNode& operator=(PkixPolicyNode&& o) noexcept = default;
  constexpr PkixPolicyNode& operator=(PkixPolicyNode const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_mChildren, put=__set_mChildren))  mChildren;

constexpr void __set_mChildren(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mChildren() const;

 int32_t __declspec(property(get=__get_mDepth, put=__set_mDepth))  mDepth;

constexpr void __set_mDepth(int32_t value) ;

constexpr int32_t __get_mDepth() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_mExpectedPolicies, put=__set_mExpectedPolicies))  mExpectedPolicies;

constexpr void __set_mExpectedPolicies(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_mExpectedPolicies() const;

 Org::BouncyCastle::Pkix::PkixPolicyNode __declspec(property(get=__get_mParent, put=__set_mParent))  mParent;

constexpr void __set_mParent(Org::BouncyCastle::Pkix::PkixPolicyNode value) ;

constexpr Org::BouncyCastle::Pkix::PkixPolicyNode __get_mParent() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_mPolicyQualifiers, put=__set_mPolicyQualifiers))  mPolicyQualifiers;

constexpr void __set_mPolicyQualifiers(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_mPolicyQualifiers() const;

 ::StringW __declspec(property(get=__get_mValidPolicy, put=__set_mValidPolicy))  mValidPolicy;

constexpr void __set_mValidPolicy(::StringW value) ;

constexpr ::StringW __get_mValidPolicy() const;

 bool __declspec(property(get=__get_mCritical, put=__set_mCritical))  mCritical;

constexpr void __set_mCritical(bool value) ;

constexpr bool __get_mCritical() const;


// Properties

 int32_t __declspec(property(get=get_Depth))  Depth;

 System::Collections::IEnumerable __declspec(property(get=get_Children))  Children;

 bool __declspec(property(get=get_IsCritical, put=set_IsCritical))  IsCritical;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=get_PolicyQualifiers))  PolicyQualifiers;

 ::StringW __declspec(property(get=get_ValidPolicy))  ValidPolicy;

 bool __declspec(property(get=get_HasChildren))  HasChildren;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=get_ExpectedPolicies, put=set_ExpectedPolicies))  ExpectedPolicies;

 Org::BouncyCastle::Pkix::PkixPolicyNode __declspec(property(get=get_Parent, put=set_Parent))  Parent;


// Methods

/// @brief Method get_Depth addr 0x1095204 size 0x8 virtual true final false
 int32_t get_Depth() ;

/// @brief Method get_Children addr 0x109520c size 0x68 virtual true final false
 System::Collections::IEnumerable get_Children() ;

/// @brief Method get_IsCritical addr 0x1095274 size 0x8 virtual true final false
 bool get_IsCritical() ;

/// @brief Method set_IsCritical addr 0x109527c size 0xc virtual true final false
 void set_IsCritical(bool value) ;

/// @brief Method get_PolicyQualifiers addr 0x1095288 size 0x68 virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet get_PolicyQualifiers() ;

/// @brief Method get_ValidPolicy addr 0x10952f0 size 0x8 virtual true final false
 ::StringW get_ValidPolicy() ;

/// @brief Method get_HasChildren addr 0x10952f8 size 0xb0 virtual true final false
 bool get_HasChildren() ;

/// @brief Method get_ExpectedPolicies addr 0x10953a8 size 0x68 virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet get_ExpectedPolicies() ;

/// @brief Method set_ExpectedPolicies addr 0x1095410 size 0x70 virtual true final false
 void set_ExpectedPolicies(Org::BouncyCastle::Utilities::Collections::ISet value) ;

/// @brief Method get_Parent addr 0x1095480 size 0x8 virtual true final false
 Org::BouncyCastle::Pkix::PkixPolicyNode get_Parent() ;

/// @brief Method set_Parent addr 0x1095488 size 0x8 virtual true final false
 void set_Parent(Org::BouncyCastle::Pkix::PkixPolicyNode value) ;

// Ctor Parameters [CppParam { name: "children", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "expectedPolicies", ty: "Org::BouncyCastle::Utilities::Collections::ISet", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "Org::BouncyCastle::Pkix::PkixPolicyNode", modifiers: "", def_value: None }, CppParam { name: "policyQualifiers", ty: "Org::BouncyCastle::Utilities::Collections::ISet", modifiers: "", def_value: None }, CppParam { name: "validPolicy", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit PkixPolicyNode(System::Collections::IList children, int32_t depth, Org::BouncyCastle::Utilities::Collections::ISet expectedPolicies, Org::BouncyCastle::Pkix::PkixPolicyNode parent, Org::BouncyCastle::Utilities::Collections::ISet policyQualifiers, ::StringW validPolicy, bool critical) ;

/// @brief Method .ctor addr 0x107974c size 0xd0 virtual false final false
 void _ctor(System::Collections::IList children, int32_t depth, Org::BouncyCastle::Utilities::Collections::ISet expectedPolicies, Org::BouncyCastle::Pkix::PkixPolicyNode parent, Org::BouncyCastle::Utilities::Collections::ISet policyQualifiers, ::StringW validPolicy, bool critical) ;

/// @brief Method AddChild addr 0x1095490 size 0xc8 virtual true final false
 void AddChild(Org::BouncyCastle::Pkix::PkixPolicyNode child) ;

/// @brief Method RemoveChild addr 0x1095558 size 0xac virtual true final false
 void RemoveChild(Org::BouncyCastle::Pkix::PkixPolicyNode child) ;

/// @brief Method ToString addr 0x1095604 size 0x54 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x1095658 size 0x4a8 virtual true final false
 ::StringW ToString(::StringW indent) ;

/// @brief Method Clone addr 0x1095b00 size 0x10 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Copy addr 0x1095b10 size 0x45c virtual true final false
 Org::BouncyCastle::Pkix::PkixPolicyNode Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixPolicyNode);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixPolicyNode, "Org.BouncyCastle.Pkix", "PkixPolicyNode");
