#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class RuntimeType;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
struct CorElementType;
}
namespace System {
class Type;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System {
struct RuntimeTypeHandle;
}
// Type: System::RuntimeTypeHandle
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2617))
// CS Name: System.RuntimeTypeHandle
struct CORDL_TYPE RuntimeTypeHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeTypeHandle(::cordl_internals::intptr_t value) noexcept;


                    constexpr RuntimeTypeHandle(RuntimeTypeHandle const&) = default;
                    constexpr RuntimeTypeHandle(RuntimeTypeHandle&&) = default;
                    constexpr RuntimeTypeHandle& operator=(RuntimeTypeHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeTypeHandle& operator=(RuntimeTypeHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeTypeHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_value() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x24c4210 size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t val) ;

/// @brief Method .ctor addr 0x24c4218 size 0x1c virtual false final false
 void _ctor(System::RuntimeType type) ;

/// @brief Method .ctor addr 0x24c4234 size 0x1b4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Value addr 0x24c43e8 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_Value() ;

/// @brief Method GetObjectData addr 0x24c43f0 size 0x1b8 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x24c45a8 size 0xfc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x24c46a4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetAttributes addr 0x24c46ac size 0x4 virtual false final false
static System::Reflection::TypeAttributes GetAttributes(System::RuntimeType type) ;

/// @brief Method GetMetadataToken addr 0x24c46b0 size 0x4 virtual false final false
static int32_t GetMetadataToken(System::RuntimeType type) ;

/// @brief Method GetToken addr 0x24c46b4 size 0x4 virtual false final false
static int32_t GetToken(System::RuntimeType type) ;

/// @brief Method GetGenericTypeDefinition_impl addr 0x24c46b8 size 0x4 virtual false final false
static System::Type GetGenericTypeDefinition_impl(System::RuntimeType type) ;

/// @brief Method GetGenericTypeDefinition addr 0x24c46bc size 0x4 virtual false final false
static System::Type GetGenericTypeDefinition(System::RuntimeType type) ;

/// @brief Method IsPrimitive addr 0x24c46c0 size 0x3c virtual false final false
static bool IsPrimitive(System::RuntimeType type) ;

/// @brief Method IsByRef addr 0x24c4700 size 0x1c virtual false final false
static bool IsByRef(System::RuntimeType type) ;

/// @brief Method IsPointer addr 0x24c471c size 0x1c virtual false final false
static bool IsPointer(System::RuntimeType type) ;

/// @brief Method IsArray addr 0x24c4738 size 0x28 virtual false final false
static bool IsArray(System::RuntimeType type) ;

/// @brief Method IsSzArray addr 0x24c4760 size 0x1c virtual false final false
static bool IsSzArray(System::RuntimeType type) ;

/// @brief Method HasElementType addr 0x24c477c size 0x3c virtual false final false
static bool HasElementType(System::RuntimeType type) ;

/// @brief Method GetCorElementType addr 0x24c46fc size 0x4 virtual false final false
static System::Reflection::CorElementType GetCorElementType(System::RuntimeType type) ;

/// @brief Method HasInstantiation addr 0x24c47b8 size 0x4 virtual false final false
static bool HasInstantiation(System::RuntimeType type) ;

/// @brief Method IsComObject addr 0x24c47bc size 0x4 virtual false final false
static bool IsComObject(System::RuntimeType type) ;

/// @brief Method IsInstanceOfType addr 0x24c47c0 size 0x4 virtual false final false
static bool IsInstanceOfType(System::RuntimeType type, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method HasReferences addr 0x24c47c4 size 0x4 virtual false final false
static bool HasReferences(System::RuntimeType type) ;

/// @brief Method IsComObject addr 0x24c47c8 size 0x10 virtual false final false
static bool IsComObject(System::RuntimeType type, bool isGenericCOM) ;

/// @brief Method IsContextful addr 0x24c47d8 size 0x94 virtual false final false
static bool IsContextful(System::RuntimeType type) ;

/// @brief Method IsEquivalentTo addr 0x24c486c size 0x8 virtual false final false
static bool IsEquivalentTo(System::RuntimeType rtType1, System::RuntimeType rtType2) ;

/// @brief Method IsInterface addr 0x24c4874 size 0x20 virtual false final false
static bool IsInterface(System::RuntimeType type) ;

/// @brief Method GetArrayRank addr 0x24c4894 size 0x4 virtual false final false
static int32_t GetArrayRank(System::RuntimeType type) ;

/// @brief Method GetAssembly addr 0x24c4898 size 0x4 virtual false final false
static System::Reflection::RuntimeAssembly GetAssembly(System::RuntimeType type) ;

/// @brief Method GetElementType addr 0x24c489c size 0x4 virtual false final false
static System::RuntimeType GetElementType(System::RuntimeType type) ;

/// @brief Method GetModule addr 0x24c48a0 size 0x4 virtual false final false
static System::Reflection::RuntimeModule GetModule(System::RuntimeType type) ;

/// @brief Method IsGenericVariable addr 0x24c48a4 size 0x4 virtual false final false
static bool IsGenericVariable(System::RuntimeType type) ;

/// @brief Method GetBaseType addr 0x24c48a8 size 0x4 virtual false final false
static System::RuntimeType GetBaseType(System::RuntimeType type) ;

/// @brief Method CanCastTo addr 0x24c48ac size 0x10 virtual false final false
static bool CanCastTo(System::RuntimeType type, System::RuntimeType target) ;

/// @brief Method type_is_assignable_from addr 0x24c48bc size 0x4 virtual false final false
static bool type_is_assignable_from(System::Type a, System::Type b) ;

/// @brief Method IsGenericTypeDefinition addr 0x24c48c0 size 0x4 virtual false final false
static bool IsGenericTypeDefinition(System::RuntimeType type) ;

/// @brief Method GetGenericParameterInfo addr 0x24c48c4 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetGenericParameterInfo(System::RuntimeType type) ;

/// @brief Method IsSubclassOf addr 0x24c48c8 size 0x20 virtual false final false
static bool IsSubclassOf(System::RuntimeType childType, System::RuntimeType baseType) ;

/// @brief Method is_subclass_of addr 0x24c48e8 size 0x4 virtual false final false
static bool is_subclass_of(::cordl_internals::intptr_t childType, ::cordl_internals::intptr_t baseType) ;

/// @brief Method internal_from_name addr 0x24c48ec size 0x10 virtual false final false
static System::RuntimeType internal_from_name(::StringW name, ByRef<System::Threading::StackCrawlMark> stackMark, System::Reflection::Assembly callerAssembly, bool throwOnError, bool ignoreCase, bool reflectionOnly) ;

/// @brief Method GetTypeByName addr 0x24c48fc size 0x368 virtual false final false
static System::RuntimeType GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<System::Threading::StackCrawlMark> stackMark, bool loadTypeFromPartialName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
