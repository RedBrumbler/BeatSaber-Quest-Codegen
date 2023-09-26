#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class Binder;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
// Forward declare root types
namespace System::Reflection {
class MethodBase;
}
// Type: System.Reflection::MethodBase
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3469))
// CS Name: System.Reflection.MethodBase
class CORDL_TYPE MethodBase : public System::Reflection::MemberInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MethodBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: " const&", def_value: None }]
constexpr MethodBase(MethodBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: "&&", def_value: None }]
constexpr MethodBase(MethodBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodBase(void* ptr) noexcept : System::Reflection::MemberInfo(ptr) {
}


  constexpr MethodBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodBase& operator=(MethodBase&& o) noexcept = default;
  constexpr MethodBase& operator=(MethodBase const& o) noexcept = default;
                


// Properties

 System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 System::Reflection::CallingConventions __declspec(property(get=get_CallingConvention))  CallingConvention;

 bool __declspec(property(get=get_IsAbstract))  IsAbstract;

 bool __declspec(property(get=get_IsConstructor))  IsConstructor;

 bool __declspec(property(get=get_IsStatic))  IsStatic;

 bool __declspec(property(get=get_IsVirtual))  IsVirtual;

 bool __declspec(property(get=get_IsPublic))  IsPublic;

 bool __declspec(property(get=get_IsGenericMethod))  IsGenericMethod;

 bool __declspec(property(get=get_IsGenericMethodDefinition))  IsGenericMethodDefinition;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 bool __declspec(property(get=get_IsSecurityCritical))  IsSecurityCritical;


// Methods

// Ctor Parameters []
explicit MethodBase() ;

/// @brief Method .ctor addr 0x23afcb4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method get_Attributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method GetMethodImplementationFlags addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method get_CallingConvention addr 0x23b1c0c size 0x8 virtual true final false
 System::Reflection::CallingConventions get_CallingConvention() ;

/// @brief Method get_IsAbstract addr 0x23b1c14 size 0x20 virtual true final true
 bool get_IsAbstract() ;

/// @brief Method get_IsConstructor addr 0x23b1c34 size 0xa4 virtual true final true
 bool get_IsConstructor() ;

/// @brief Method get_IsStatic addr 0x23b1cd8 size 0x20 virtual true final true
 bool get_IsStatic() ;

/// @brief Method get_IsVirtual addr 0x23b1cf8 size 0x20 virtual true final true
 bool get_IsVirtual() ;

/// @brief Method get_IsPublic addr 0x23b1d18 size 0x28 virtual true final true
 bool get_IsPublic() ;

/// @brief Method get_IsGenericMethod addr 0x23b1d40 size 0x8 virtual true final false
 bool get_IsGenericMethod() ;

/// @brief Method get_IsGenericMethodDefinition addr 0x23b1d48 size 0x8 virtual true final false
 bool get_IsGenericMethodDefinition() ;

/// @brief Method GetGenericArguments addr 0x23b1d50 size 0x50 virtual true final false
 ::ArrayW<System::Type> GetGenericArguments() ;

/// @brief Method get_ContainsGenericParameters addr 0x23b1da0 size 0x8 virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method Invoke addr 0x23b1da8 size 0x20 virtual true final true
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture) ;

/// @brief Method get_MethodHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_IsSecurityCritical addr 0x23b1dc8 size 0x28 virtual true final false
 bool get_IsSecurityCritical() ;

/// @brief Method Equals addr 0x23afcec size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x23afcfc size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x23b19d8 size 0x1b4 virtual false final false
static bool op_Equality(System::Reflection::MethodBase left, System::Reflection::MethodBase right) ;

/// @brief Method op_Inequality addr 0x23b19c0 size 0x18 virtual false final false
static bool op_Inequality(System::Reflection::MethodBase left, System::Reflection::MethodBase right) ;

/// @brief Method GetParametersInternal addr 0x23b1e58 size 0x10 virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParametersInternal() ;

/// @brief Method GetParametersCount addr 0x23b1e68 size 0x28 virtual true final false
 int32_t GetParametersCount() ;

/// @brief Method FormatNameAndSig addr 0x23b1e90 size 0x12c virtual true final false
 ::StringW FormatNameAndSig(bool serialization) ;

/// @brief Method GetParameterTypes addr 0x23b21a8 size 0x108 virtual true final false
 ::ArrayW<System::Type> GetParameterTypes() ;

/// @brief Method GetParametersNoCopy addr 0x23b22b0 size 0x10 virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParametersNoCopy() ;

/// @brief Method GetMethodFromHandle addr 0x23b22c0 size 0x208 virtual false final false
static System::Reflection::MethodBase GetMethodFromHandle(System::RuntimeMethodHandle handle) ;

/// @brief Method ConstructParameters addr 0x23b1fbc size 0x1ec virtual false final false
static ::StringW ConstructParameters(::ArrayW<System::Type> parameterTypes, System::Reflection::CallingConventions callingConvention, bool serialization) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::MethodBase);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodBase, "System.Reflection", "MethodBase");
