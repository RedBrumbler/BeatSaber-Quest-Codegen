#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System {
struct TypeNameFormatFlags;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
struct RuntimeMethodHandle;
}
// Type: System::RuntimeMethodHandle
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2616))
// CS Name: System.RuntimeMethodHandle
struct CORDL_TYPE RuntimeMethodHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeMethodHandle(::cordl_internals::intptr_t value) noexcept;


                    constexpr RuntimeMethodHandle(RuntimeMethodHandle const&) = default;
                    constexpr RuntimeMethodHandle(RuntimeMethodHandle&&) = default;
                    constexpr RuntimeMethodHandle& operator=(RuntimeMethodHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeMethodHandle& operator=(RuntimeMethodHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeMethodHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

/// @brief Method .ctor addr 0x24c3bdc size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t v) ;

/// @brief Method .ctor addr 0x24c3be4 size 0x1b4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Value addr 0x24c3d98 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_Value() ;

/// @brief Method GetObjectData addr 0x24c3da0 size 0x1bc virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x24c3f5c size 0xfc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x24c4058 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ConstructInstantiation addr 0x24c4060 size 0x158 virtual false final false
static ::StringW ConstructInstantiation(System::Reflection::RuntimeMethodInfo method, System::TypeNameFormatFlags format) ;

/// @brief Method IsNullHandle addr 0x24c41b8 size 0x58 virtual false final false
 bool IsNullHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeMethodHandle, "System", "RuntimeMethodHandle");
