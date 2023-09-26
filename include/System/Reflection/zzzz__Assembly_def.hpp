#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Runtime::InteropServices {
class _Assembly;
}
namespace System::Reflection {
class Module;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Type;
}
namespace System::Reflection {
class AssemblyName;
}
// Forward declare root types
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class System__Reflection__Assembly__ResolveEventHolder;
}
// Type: ::ResolveEventHolder
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3502))
// CS Name: System.Reflection.Assembly::ResolveEventHolder
class CORDL_TYPE System__Reflection__Assembly__ResolveEventHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Reflection__Assembly__ResolveEventHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__Assembly__ResolveEventHolder", modifiers: " const&", def_value: None }]
constexpr System__Reflection__Assembly__ResolveEventHolder(System__Reflection__Assembly__ResolveEventHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__Assembly__ResolveEventHolder", modifiers: "&&", def_value: None }]
constexpr System__Reflection__Assembly__ResolveEventHolder(System__Reflection__Assembly__ResolveEventHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Reflection__Assembly__ResolveEventHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Reflection__Assembly__ResolveEventHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Reflection__Assembly__ResolveEventHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Reflection__Assembly__ResolveEventHolder& operator=(System__Reflection__Assembly__ResolveEventHolder&& o) noexcept = default;
  constexpr System__Reflection__Assembly__ResolveEventHolder& operator=(System__Reflection__Assembly__ResolveEventHolder const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit System__Reflection__Assembly__ResolveEventHolder() ;

/// @brief Method .ctor addr 0x23b9038 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: System.Reflection::Assembly
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3503))
// CS Name: System.Reflection.Assembly
class CORDL_TYPE Assembly : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ResolveEventHolder = System::Reflection::System__Reflection__Assembly__ResolveEventHolder;

/// @brief Convert operator to System::Reflection::ICustomAttributeProvider
constexpr operator  System::Reflection::ICustomAttributeProvider() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::InteropServices::_Assembly
constexpr operator  System::Runtime::InteropServices::_Assembly() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Assembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: " const&", def_value: None }]
constexpr Assembly(Assembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "&&", def_value: None }]
constexpr Assembly(Assembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Assembly(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Assembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Assembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Assembly& operator=(Assembly&& o) noexcept = default;
  constexpr Assembly& operator=(Assembly const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_CodeBase))  CodeBase;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 ::cordl_internals::intptr_t __declspec(property(get=get_MonoAssembly))  MonoAssembly;

 bool __declspec(property(get=get_IsFullyTrusted))  IsFullyTrusted;


// Methods

/// @brief Method get_CodeBase addr 0x23b8a48 size 0x40 virtual true final false
 ::StringW get_CodeBase() ;

/// @brief Method get_FullName addr 0x23b8a88 size 0x40 virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_MonoAssembly addr 0x23b8ac8 size 0x40 virtual true final false
 ::cordl_internals::intptr_t get_MonoAssembly() ;

/// @brief Method GetObjectData addr 0x23b8b08 size 0x40 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method IsDefined addr 0x23b8b48 size 0x40 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23b8b88 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23b8bc8 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetTypes addr 0x23b8c08 size 0x8 virtual true final false
 ::ArrayW<System::Type> GetTypes(bool exportedOnly) ;

/// @brief Method GetTypes addr 0x23b8c10 size 0x14 virtual true final false
 ::ArrayW<System::Type> GetTypes() ;

/// @brief Method GetType addr 0x23b8c24 size 0x18 virtual true final false
 System::Type GetType(::StringW name) ;

/// @brief Method InternalGetType addr 0x23b8c3c size 0xc virtual false final false
 System::Type InternalGetType(System::Reflection::Module module, ::StringW name, bool throwOnError, bool ignoreCase) ;

/// @brief Method GetName addr 0x23b8c48 size 0x40 virtual true final false
 System::Reflection::AssemblyName GetName(bool copiedName) ;

/// @brief Method GetName addr 0x23b8c88 size 0x14 virtual true final false
 System::Reflection::AssemblyName GetName() ;

/// @brief Method ToString addr 0x23b8c9c size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetAssembly addr 0x23b8ca4 size 0xc8 virtual false final false
static System::Reflection::Assembly GetAssembly(System::Type type) ;

/// @brief Method Load addr 0x23b8d6c size 0x28 virtual false final false
static System::Reflection::Assembly Load(::StringW assemblyString) ;

/// @brief Method ReflectionOnlyLoad addr 0x23b8d94 size 0x48 virtual false final false
static System::Reflection::Assembly ReflectionOnlyLoad(::StringW assemblyString) ;

/// @brief Method load_with_partial_name addr 0x23b8ddc size 0x4 virtual false final false
static System::Reflection::Assembly load_with_partial_name(::StringW name, System::Security::Policy::Evidence e) ;

/// @brief Method LoadWithPartialName addr 0x23b8de0 size 0x8 virtual false final false
static System::Reflection::Assembly LoadWithPartialName(::StringW partialName, System::Security::Policy::Evidence securityEvidence) ;

/// @brief Method LoadWithPartialName addr 0x23b8de8 size 0x78 virtual false final false
static System::Reflection::Assembly LoadWithPartialName(::StringW partialName, System::Security::Policy::Evidence securityEvidence, bool oldBehavior) ;

/// @brief Method GetModulesInternal addr 0x23b8e60 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::Module> GetModulesInternal() ;

/// @brief Method GetExecutingAssembly addr 0x23b8ea0 size 0x40 virtual false final false
static System::Reflection::Assembly GetExecutingAssembly() ;

/// @brief Method GetCallingAssembly addr 0x23aa62c size 0x4 virtual false final false
static System::Reflection::Assembly GetCallingAssembly() ;

/// @brief Method GetHashCode addr 0x23b8ee0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x23b8ee8 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CreateNIE addr 0x23b8ef0 size 0x74 virtual false final false
static System::Exception CreateNIE() ;

/// @brief Method get_IsFullyTrusted addr 0x23b8f64 size 0x8 virtual false final false
 bool get_IsFullyTrusted() ;

/// @brief Method GetType addr 0x23b8f6c size 0x24 virtual true final false
 System::Type GetType(::StringW name, bool throwOnError, bool ignoreCase) ;

/// @brief Method GetModule addr 0x23b8f90 size 0x24 virtual true final false
 System::Reflection::Module GetModule(::StringW name) ;

/// @brief Method GetModules addr 0x23b8fb4 size 0x24 virtual true final false
 ::ArrayW<System::Reflection::Module> GetModules(bool getResourceModules) ;

/// @brief Method op_Equality addr 0x23aa4c4 size 0x50 virtual false final false
static bool op_Equality(System::Reflection::Assembly left, System::Reflection::Assembly right) ;

/// @brief Method op_Inequality addr 0x23b8fd8 size 0x58 virtual false final false
static bool op_Inequality(System::Reflection::Assembly left, System::Reflection::Assembly right) ;

// Ctor Parameters []
explicit Assembly() ;

/// @brief Method .ctor addr 0x23b9030 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::Assembly);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Assembly, "System.Reflection", "Assembly");
NEED_NO_BOX(System::Reflection::System__Reflection__Assembly__ResolveEventHolder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::System__Reflection__Assembly__ResolveEventHolder, "System.Reflection", "Assembly/ResolveEventHolder");
