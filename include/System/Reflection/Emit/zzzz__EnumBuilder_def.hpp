#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class EventInfo;
}
// Forward declare root types
namespace System::Reflection::Emit {
class EnumBuilder;
}
// Type: System.Reflection.Emit::EnumBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3494))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3529))
// CS Name: System.Reflection.Emit.EnumBuilder
class CORDL_TYPE EnumBuilder : public System::Reflection::TypeInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EnumBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumBuilder", modifiers: " const&", def_value: None }]
constexpr EnumBuilder(EnumBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumBuilder", modifiers: "&&", def_value: None }]
constexpr EnumBuilder(EnumBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumBuilder(void* ptr) noexcept : System::Reflection::TypeInfo(ptr) {
}


  constexpr EnumBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumBuilder& operator=(EnumBuilder&& o) noexcept = default;
  constexpr EnumBuilder& operator=(EnumBuilder const& o) noexcept = default;
                


// Properties

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 ::StringW __declspec(property(get=get_AssemblyQualifiedName))  AssemblyQualifiedName;

 System::Type __declspec(property(get=get_BaseType))  BaseType;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 System::Guid __declspec(property(get=get_GUID))  GUID;

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 System::Type __declspec(property(get=get_UnderlyingSystemType))  UnderlyingSystemType;


// Methods

/// @brief Method get_Assembly addr 0x23c39f4 size 0x40 virtual true final false
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName addr 0x23c3a34 size 0x40 virtual true final false
 ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType addr 0x23c3a74 size 0x40 virtual true final false
 System::Type get_BaseType() ;

/// @brief Method get_FullName addr 0x23c3ab4 size 0x40 virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_GUID addr 0x23c3af4 size 0x40 virtual true final false
 System::Guid get_GUID() ;

/// @brief Method get_Module addr 0x23c3b34 size 0x40 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method get_Name addr 0x23c3b74 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Namespace addr 0x23c3bb4 size 0x40 virtual true final false
 ::StringW get_Namespace() ;

/// @brief Method get_UnderlyingSystemType addr 0x23c3bf4 size 0x40 virtual true final false
 System::Type get_UnderlyingSystemType() ;

/// @brief Method GetAttributeFlagsImpl addr 0x23c3c34 size 0x40 virtual true final false
 System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructorImpl addr 0x23c3c74 size 0x40 virtual true final false
 System::Reflection::ConstructorInfo GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetConstructors addr 0x23c3cb4 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::ConstructorInfo> GetConstructors(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetCustomAttributes addr 0x23c3cf4 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23c3d34 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetElementType addr 0x23c3d74 size 0x40 virtual true final false
 System::Type GetElementType() ;

/// @brief Method GetEvent addr 0x23c3db4 size 0x40 virtual true final false
 System::Reflection::EventInfo GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvents addr 0x23c3df4 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::EventInfo> GetEvents(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetField addr 0x23c3e34 size 0x40 virtual true final false
 System::Reflection::FieldInfo GetField(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetFields addr 0x23c3e74 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::FieldInfo> GetFields(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetInterfaces addr 0x23c3eb4 size 0x40 virtual true final false
 ::ArrayW<System::Type> GetInterfaces() ;

/// @brief Method GetMethodImpl addr 0x23c3ef4 size 0x40 virtual true final false
 System::Reflection::MethodInfo GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethods addr 0x23c3f34 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::MethodInfo> GetMethods(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetNestedType addr 0x23c3f74 size 0x40 virtual true final false
 System::Type GetNestedType(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperties addr 0x23c3fb4 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::PropertyInfo> GetProperties(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetPropertyImpl addr 0x23c3ff4 size 0x40 virtual true final false
 System::Reflection::PropertyInfo GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method HasElementTypeImpl addr 0x23c4034 size 0x40 virtual true final false
 bool HasElementTypeImpl() ;

/// @brief Method InvokeMember addr 0x23c4074 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType InvokeMember(::StringW name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParameters) ;

/// @brief Method IsArrayImpl addr 0x23c40b4 size 0x40 virtual true final false
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x23c40f4 size 0x40 virtual true final false
 bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl addr 0x23c4134 size 0x40 virtual true final false
 bool IsCOMObjectImpl() ;

/// @brief Method IsDefined addr 0x23c4174 size 0x40 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method IsPointerImpl addr 0x23c41b4 size 0x40 virtual true final false
 bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl addr 0x23c41f4 size 0x40 virtual true final false
 bool IsPrimitiveImpl() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::EnumBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::EnumBuilder, "System.Reflection.Emit", "EnumBuilder");
