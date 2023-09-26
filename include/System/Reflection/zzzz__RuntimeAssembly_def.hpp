#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class System__Reflection__Assembly__ResolveEventHolder;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Threading {
struct StackCrawlMark;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeAssembly;
}
// Type: System.Reflection::RuntimeAssembly
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3503))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3509))
// CS Name: System.Reflection.RuntimeAssembly
class CORDL_TYPE RuntimeAssembly : public System::Reflection::Assembly {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RuntimeAssembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: " const&", def_value: None }]
constexpr RuntimeAssembly(RuntimeAssembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "&&", def_value: None }]
constexpr RuntimeAssembly(RuntimeAssembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeAssembly(void* ptr) noexcept : System::Reflection::Assembly(ptr) {
}


  constexpr RuntimeAssembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeAssembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeAssembly& operator=(RuntimeAssembly&& o) noexcept = default;
  constexpr RuntimeAssembly& operator=(RuntimeAssembly const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__mono_assembly, put=__set__mono_assembly))  _mono_assembly;

constexpr void __set__mono_assembly(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__mono_assembly() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__evidence, put=__set__evidence))  _evidence;

constexpr void __set__evidence(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__evidence() const;

 System::Reflection::System__Reflection__Assembly__ResolveEventHolder __declspec(property(get=__get_resolve_event_holder, put=__set_resolve_event_holder))  resolve_event_holder;

constexpr void __set_resolve_event_holder(System::Reflection::System__Reflection__Assembly__ResolveEventHolder value) ;

constexpr System::Reflection::System__Reflection__Assembly__ResolveEventHolder __get_resolve_event_holder() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__minimum, put=__set__minimum))  _minimum;

constexpr void __set__minimum(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__minimum() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__optional, put=__set__optional))  _optional;

constexpr void __set__optional(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__optional() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__refuse, put=__set__refuse))  _refuse;

constexpr void __set__refuse(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__refuse() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__granted, put=__set__granted))  _granted;

constexpr void __set__granted(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__granted() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__denied, put=__set__denied))  _denied;

constexpr void __set__denied(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__denied() const;

 bool __declspec(property(get=__get_fromByteArray, put=__set_fromByteArray))  fromByteArray;

constexpr void __set_fromByteArray(bool value) ;

constexpr bool __get_fromByteArray() const;

 ::StringW __declspec(property(get=__get_assemblyName, put=__set_assemblyName))  assemblyName;

constexpr void __set_assemblyName(::StringW value) ;

constexpr ::StringW __get_assemblyName() const;


// Properties

 ::StringW __declspec(property(get=get_CodeBase))  CodeBase;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 ::cordl_internals::intptr_t __declspec(property(get=get_MonoAssembly))  MonoAssembly;


// Methods

// Ctor Parameters []
explicit RuntimeAssembly() ;

/// @brief Method .ctor addr 0x23bb978 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method GetObjectData addr 0x23bb9e4 size 0x8c virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method LoadWithPartialNameInternal addr 0x23bba70 size 0x88 virtual false final false
static System::Reflection::RuntimeAssembly LoadWithPartialNameInternal(::StringW partialName, System::Security::Policy::Evidence securityEvidence, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method LoadWithPartialNameInternal addr 0x23bbaf8 size 0x28 virtual false final false
static System::Reflection::RuntimeAssembly LoadWithPartialNameInternal(System::Reflection::AssemblyName an, System::Security::Policy::Evidence securityEvidence, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method GetName addr 0x23bbb20 size 0x8 virtual true final false
 System::Reflection::AssemblyName GetName(bool copiedName) ;

/// @brief Method GetType addr 0x23bbb28 size 0xc4 virtual true final false
 System::Type GetType(::StringW name, bool throwOnError, bool ignoreCase) ;

/// @brief Method GetModule addr 0x23bbbec size 0x130 virtual true final false
 System::Reflection::Module GetModule(::StringW name) ;

/// @brief Method GetModules addr 0x23bbd1c size 0x194 virtual true final false
 ::ArrayW<System::Reflection::Module> GetModules(bool getResourceModules) ;

/// @brief Method GetAotId addr 0x23bbeb0 size 0x58 virtual false final false
static ::ArrayW<uint8_t> GetAotId() ;

/// @brief Method get_code_base addr 0x23bbf0c size 0x8 virtual false final false
static ::StringW get_code_base(System::Reflection::Assembly a, bool escaped) ;

/// @brief Method get_fullname addr 0x23bbf14 size 0x4 virtual false final false
static ::StringW get_fullname(System::Reflection::Assembly a) ;

/// @brief Method GetAotIdInternal addr 0x23bbf08 size 0x4 virtual false final false
static bool GetAotIdInternal(::ArrayW<uint8_t> aotid) ;

/// @brief Method GetCodeBase addr 0x23bbf18 size 0x8 virtual false final false
static ::StringW GetCodeBase(System::Reflection::Assembly a, bool escaped) ;

/// @brief Method get_CodeBase addr 0x23bbf20 size 0x8 virtual true final false
 ::StringW get_CodeBase() ;

/// @brief Method get_FullName addr 0x23bbf28 size 0x4 virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_MonoAssembly addr 0x23bbf2c size 0x8 virtual true final false
 ::cordl_internals::intptr_t get_MonoAssembly() ;

/// @brief Method GetManifestResourceInternal addr 0x23bbf34 size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetManifestResourceInternal(::StringW name, ByRef<int32_t> size, ByRef<System::Reflection::Module> module) ;

/// @brief Method IsDefined addr 0x23bbf38 size 0x70 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23bbfa8 size 0x68 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23bc010 size 0x70 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetModulesInternal addr 0x23bc080 size 0x4 virtual true final false
 ::ArrayW<System::Reflection::Module> GetModulesInternal() ;

/// @brief Method GetHashCode addr 0x23bc084 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x23bc08c size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method ToString addr 0x23bc12c size 0x2c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RuntimeAssembly);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeAssembly, "System.Reflection", "RuntimeAssembly");
