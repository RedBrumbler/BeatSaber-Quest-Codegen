#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Permissions {
struct ReflectionPermissionFlag;
}
namespace System::Security {
class IPermission;
}
// Forward declare root types
namespace System::Security::Permissions {
class ReflectionPermission;
}
// Type: System.Security.Permissions::ReflectionPermission
namespace System::Security::Permissions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2878))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2900))
// CS Name: System.Security.Permissions.ReflectionPermission
class CORDL_TYPE ReflectionPermission : public System::Security::CodeAccessPermission {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReflectionPermission() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionPermission", modifiers: " const&", def_value: None }]
constexpr ReflectionPermission(ReflectionPermission const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionPermission", modifiers: "&&", def_value: None }]
constexpr ReflectionPermission(ReflectionPermission&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionPermission(void* ptr) noexcept : System::Security::CodeAccessPermission(ptr) {
}


  constexpr ReflectionPermission& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionPermission& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionPermission& operator=(ReflectionPermission&& o) noexcept = default;
  constexpr ReflectionPermission& operator=(ReflectionPermission const& o) noexcept = default;
                


// Fields

 System::Security::Permissions::ReflectionPermissionFlag __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(System::Security::Permissions::ReflectionPermissionFlag value) ;

constexpr System::Security::Permissions::ReflectionPermissionFlag __get_flags() const;


// Properties

 System::Security::Permissions::ReflectionPermissionFlag __declspec(property(get=get_Flags, put=set_Flags))  Flags;


// Methods

// Ctor Parameters [CppParam { name: "flag", ty: "System::Security::Permissions::ReflectionPermissionFlag", modifiers: "", def_value: None }]
explicit ReflectionPermission(System::Security::Permissions::ReflectionPermissionFlag flag) ;

/// @brief Method .ctor addr 0x232366c size 0x2c virtual false final false
 void _ctor(System::Security::Permissions::ReflectionPermissionFlag flag) ;

/// @brief Method get_Flags addr 0x2323750 size 0x8 virtual false final false
 System::Security::Permissions::ReflectionPermissionFlag get_Flags() ;

/// @brief Method set_Flags addr 0x2323698 size 0xb8 virtual false final false
 void set_Flags(System::Security::Permissions::ReflectionPermissionFlag value) ;

/// @brief Method IsSubsetOf addr 0x2323758 size 0x50 virtual true final false
 bool IsSubsetOf(System::Security::IPermission target) ;

/// @brief Method IsUnrestricted addr 0x232384c size 0x10 virtual true final true
 bool IsUnrestricted() ;

/// @brief Method ToXml addr 0x232385c size 0x1e8 virtual true final false
 System::Security::SecurityElement ToXml() ;

/// @brief Method Cast addr 0x23237a8 size 0xa4 virtual false final false
 System::Security::Permissions::ReflectionPermission Cast(System::Security::IPermission target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Permissions
NEED_NO_BOX(System::Security::Permissions::ReflectionPermission);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Permissions::ReflectionPermission, "System.Security.Permissions", "ReflectionPermission");
