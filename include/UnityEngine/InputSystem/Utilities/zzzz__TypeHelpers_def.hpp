#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct TypeCode;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class TypeHelpers;
}
// Type: UnityEngine.InputSystem.Utilities::TypeHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6812))
// CS Name: UnityEngine.InputSystem.Utilities.TypeHelpers
class CORDL_TYPE TypeHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeHelpers", modifiers: " const&", def_value: None }]
constexpr TypeHelpers(TypeHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeHelpers", modifiers: "&&", def_value: None }]
constexpr TypeHelpers(TypeHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeHelpers& operator=(TypeHelpers&& o) noexcept = default;
  constexpr TypeHelpers& operator=(TypeHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method As addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
static TObject As(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsInt addr 0x28fa1e0 size 0x10 virtual false final false
static bool IsInt(System::TypeCode type) ;

/// @brief Method GetValueType addr 0x28fa1f0 size 0x1a0 virtual false final false
static System::Type GetValueType(System::Reflection::MemberInfo member) ;

/// @brief Method GetNiceTypeName addr 0x28fa390 size 0x490 virtual false final false
static ::StringW GetNiceTypeName(System::Type type) ;

/// @brief Method GetGenericTypeArgumentFromHierarchy addr 0x28fa820 size 0x3cc virtual false final false
static System::Type GetGenericTypeArgumentFromHierarchy(System::Type type, System::Type genericTypeDefinition, int32_t argumentIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::TypeHelpers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::TypeHelpers, "UnityEngine.InputSystem.Utilities", "TypeHelpers");
