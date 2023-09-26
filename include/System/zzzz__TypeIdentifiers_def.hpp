#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class TypeName;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class TypeIdentifier;
}
// Forward declare root types
namespace System {
class System__TypeIdentifiers__Display;
}
namespace System {
class TypeIdentifiers;
}
// Type: ::Display
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2630))
// CS Name: System.TypeIdentifiers::Display
class CORDL_TYPE System__TypeIdentifiers__Display : public System::System__TypeNames__ATypeName {
public:
// Declarations
/// @brief Convert operator to System::TypeIdentifier
constexpr operator  System::TypeIdentifier() const noexcept;

/// @brief Convert operator to System::TypeName
constexpr operator  System::TypeName() const noexcept;

/// @brief Convert operator to System::IEquatable_1<System::TypeName>
constexpr operator  System::IEquatable_1<System::TypeName>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__TypeIdentifiers__Display() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TypeIdentifiers__Display", modifiers: " const&", def_value: None }]
constexpr System__TypeIdentifiers__Display(System__TypeIdentifiers__Display const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TypeIdentifiers__Display", modifiers: "&&", def_value: None }]
constexpr System__TypeIdentifiers__Display(System__TypeIdentifiers__Display&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__TypeIdentifiers__Display(void* ptr) noexcept : System::System__TypeNames__ATypeName(ptr) {
}


  constexpr System__TypeIdentifiers__Display& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__TypeIdentifiers__Display& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__TypeIdentifiers__Display& operator=(System__TypeIdentifiers__Display&& o) noexcept = default;
  constexpr System__TypeIdentifiers__Display& operator=(System__TypeIdentifiers__Display const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;

 ::StringW __declspec(property(get=__get_internal_name, put=__set_internal_name))  internal_name;

constexpr void __set_internal_name(::StringW value) ;

constexpr ::StringW __get_internal_name() const;


// Properties

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;

 ::StringW __declspec(property(get=get_InternalName))  InternalName;


// Methods

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }]
explicit System__TypeIdentifiers__Display(::StringW displayName) ;

/// @brief Method .ctor addr 0x24cb26c size 0x8 virtual false final false
 void _ctor(::StringW displayName) ;

/// @brief Method get_DisplayName addr 0x24cb274 size 0x8 virtual true final false
 ::StringW get_DisplayName() ;

/// @brief Method get_InternalName addr 0x24cb27c size 0x28 virtual true final true
 ::StringW get_InternalName() ;

/// @brief Method GetInternalName addr 0x24cb2a4 size 0xc virtual false final false
 ::StringW GetInternalName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::TypeIdentifiers
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2631))
// CS Name: System.TypeIdentifiers
class CORDL_TYPE TypeIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Display = System::System__TypeIdentifiers__Display;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers", modifiers: " const&", def_value: None }]
constexpr TypeIdentifiers(TypeIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers", modifiers: "&&", def_value: None }]
constexpr TypeIdentifiers(TypeIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeIdentifiers& operator=(TypeIdentifiers&& o) noexcept = default;
  constexpr TypeIdentifiers& operator=(TypeIdentifiers const& o) noexcept = default;
                


// Methods

/// @brief Method FromDisplay addr 0x24cb218 size 0x54 virtual false final false
static System::TypeIdentifier FromDisplay(::StringW displayName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::System__TypeIdentifiers__Display);
DEFINE_IL2CPP_ARG_TYPE(System::System__TypeIdentifiers__Display, "System", "TypeIdentifiers/Display");
NEED_NO_BOX(System::TypeIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(System::TypeIdentifiers, "System", "TypeIdentifiers");
