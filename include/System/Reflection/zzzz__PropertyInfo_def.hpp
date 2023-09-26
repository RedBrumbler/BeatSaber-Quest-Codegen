#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection {
class PropertyInfo;
}
// Type: System.Reflection::PropertyInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3480))
// CS Name: System.Reflection.PropertyInfo
class CORDL_TYPE PropertyInfo : public System::Reflection::MemberInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PropertyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyInfo", modifiers: " const&", def_value: None }]
constexpr PropertyInfo(PropertyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyInfo", modifiers: "&&", def_value: None }]
constexpr PropertyInfo(PropertyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyInfo(void* ptr) noexcept : System::Reflection::MemberInfo(ptr) {
}


  constexpr PropertyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyInfo& operator=(PropertyInfo&& o) noexcept = default;
  constexpr PropertyInfo& operator=(PropertyInfo const& o) noexcept = default;
                


// Properties

 System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;


// Methods

// Ctor Parameters []
explicit PropertyInfo() ;

/// @brief Method .ctor addr 0x23b35f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x23b35f8 size 0x8 virtual true final false
 System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method get_PropertyType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method GetIndexParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetIndexParameters() ;

/// @brief Method get_CanRead addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanWrite() ;

/// @brief Method GetGetMethod addr 0x23b3600 size 0x14 virtual true final true
 System::Reflection::MethodInfo GetGetMethod() ;

/// @brief Method GetGetMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo GetGetMethod(bool nonPublic) ;

/// @brief Method GetSetMethod addr 0x23b3614 size 0x14 virtual true final true
 System::Reflection::MethodInfo GetSetMethod() ;

/// @brief Method GetSetMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo GetSetMethod(bool nonPublic) ;

/// @brief Method GetValue addr 0x23b3628 size 0x14 virtual false final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetValue addr 0x23b363c size 0x20 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> index) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> index, System::Globalization::CultureInfo culture) ;

/// @brief Method SetValue addr 0x23b365c size 0x20 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, ::ArrayW<::bs_hook::Il2CppWrapperType> index) ;

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> index, System::Globalization::CultureInfo culture) ;

/// @brief Method Equals addr 0x23b367c size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x23b3684 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x23b1bc8 size 0x2c virtual false final false
static bool op_Equality(System::Reflection::PropertyInfo left, System::Reflection::PropertyInfo right) ;

/// @brief Method op_Inequality addr 0x23b1b8c size 0x3c virtual false final false
static bool op_Inequality(System::Reflection::PropertyInfo left, System::Reflection::PropertyInfo right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::PropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PropertyInfo, "System.Reflection", "PropertyInfo");
