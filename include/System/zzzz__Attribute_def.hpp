#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class PropertyInfo;
}
// Forward declare root types
namespace System {
class Attribute;
}
// Type: System::Attribute
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2546))
// CS Name: System.Attribute
class CORDL_TYPE Attribute : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Attribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: " const&", def_value: None }]
constexpr Attribute(Attribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None }]
constexpr Attribute(Attribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Attribute(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Attribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Attribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Attribute& operator=(Attribute&& o) noexcept = default;
  constexpr Attribute& operator=(Attribute const& o) noexcept = default;
                


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypeId))  TypeId;


// Methods

/// @brief Method InternalGetCustomAttributes addr 0x249e660 size 0xac virtual false final false
static ::ArrayW<System::Attribute> InternalGetCustomAttributes(System::Reflection::PropertyInfo element, System::Type type, bool inherit) ;

/// @brief Method InternalGetCustomAttributes addr 0x249e70c size 0xac virtual false final false
static ::ArrayW<System::Attribute> InternalGetCustomAttributes(System::Reflection::EventInfo element, System::Type type, bool inherit) ;

/// @brief Method InternalParamGetCustomAttributes addr 0x249e7b8 size 0x51c virtual false final false
static ::ArrayW<System::Attribute> InternalParamGetCustomAttributes(System::Reflection::ParameterInfo parameter, System::Type attributeType, bool inherit) ;

/// @brief Method InternalIsDefined addr 0x249ecd4 size 0x70 virtual false final false
static bool InternalIsDefined(System::Reflection::PropertyInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method InternalIsDefined addr 0x249ed44 size 0x70 virtual false final false
static bool InternalIsDefined(System::Reflection::EventInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249edb4 size 0x8 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::MemberInfo element, System::Type type) ;

/// @brief Method GetCustomAttributes addr 0x249edbc size 0x304 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::MemberInfo element, System::Type type, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249f0c0 size 0x244 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::MemberInfo element, bool inherit) ;

/// @brief Method IsDefined addr 0x249f304 size 0x8 virtual false final false
static bool IsDefined(System::Reflection::MemberInfo element, System::Type attributeType) ;

/// @brief Method IsDefined addr 0x249f30c size 0x2e4 virtual false final false
static bool IsDefined(System::Reflection::MemberInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttribute addr 0x249f5f0 size 0x8 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::MemberInfo element, System::Type attributeType) ;

/// @brief Method GetCustomAttribute addr 0x249f5f8 size 0x94 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::MemberInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249f68c size 0x2c8 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::ParameterInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249f954 size 0x1d8 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::ParameterInfo element, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249fb2c size 0x160 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::Module element, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249fc8c size 0x260 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::Module element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x249feec size 0x8 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::Assembly element, System::Type attributeType) ;

/// @brief Method GetCustomAttributes addr 0x249fef4 size 0x23c virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::Assembly element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x24a0130 size 0x8 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::Assembly element) ;

/// @brief Method GetCustomAttributes addr 0x24a0138 size 0x134 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributes(System::Reflection::Assembly element, bool inherit) ;

/// @brief Method GetCustomAttribute addr 0x24a026c size 0x8 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::Assembly element, System::Type attributeType) ;

/// @brief Method GetCustomAttribute addr 0x24a0274 size 0x94 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::Assembly element, System::Type attributeType, bool inherit) ;

// Ctor Parameters []
explicit Attribute() ;

/// @brief Method .ctor addr 0x249c4b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x24a0308 size 0x280 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method AreFieldValuesEqual addr 0x24a0594 size 0x1d8 virtual false final false
static bool AreFieldValuesEqual(::bs_hook::Il2CppWrapperType thisValue, ::bs_hook::Il2CppWrapperType thatValue) ;

/// @brief Method GetHashCode addr 0x24a076c size 0x15c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_TypeId addr 0x24a08c8 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypeId() ;

/// @brief Method Match addr 0x24a08d0 size 0xc virtual true final false
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsDefaultAttribute addr 0x24a08dc size 0x8 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Attribute);
DEFINE_IL2CPP_ARG_TYPE(System::Attribute, "System", "Attribute");
