#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
// Type: UnityEngine.InputSystem.Utilities::Substring
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6811))
// CS Name: UnityEngine.InputSystem.Utilities.Substring
struct CORDL_TYPE Substring : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<UnityEngine::InputSystem::Utilities::Substring>
constexpr operator  System::IComparable_1<UnityEngine::InputSystem::Utilities::Substring>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::Substring>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Utilities::Substring>() const;

// Ctor Parameters [CppParam { name: "m_String", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Substring(::StringW m_String, int32_t m_Index, int32_t m_Length) noexcept;


                    constexpr Substring(Substring const&) = default;
                    constexpr Substring(Substring&&) = default;
                    constexpr Substring& operator=(Substring const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Substring& operator=(Substring&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Substring(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_String, put=__set_m_String))  m_String;

constexpr void __set_m_String(::StringW value) ;

constexpr ::StringW __get_m_String() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 int32_t __declspec(property(get=get_length))  length;

 int32_t __declspec(property(get=get_index))  index;

 char16_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_isEmpty addr 0x28f9bec size 0x10 virtual false final false
 bool get_isEmpty() ;

/// @brief Method .ctor addr 0x28f9bfc size 0x20 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method .ctor addr 0x28f9c1c size 0xc virtual false final false
 void _ctor(::StringW str, int32_t index, int32_t length) ;

/// @brief Method .ctor addr 0x28f9c28 size 0x28 virtual false final false
 void _ctor(::StringW str, int32_t index) ;

/// @brief Method Equals addr 0x28f9c50 size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x28f9d34 size 0xc0 virtual false final false
 bool Equals(::StringW other) ;

/// @brief Method Equals addr 0x28f9d04 size 0x30 virtual true final true
 bool Equals(UnityEngine::InputSystem::Utilities::Substring other) ;

/// @brief Method Equals addr 0x28f9e10 size 0x80 virtual false final false
 bool Equals(UnityEngine::InputSystem::Utilities::InternedString other) ;

/// @brief Method CompareTo addr 0x28f9df4 size 0x1c virtual true final true
 int32_t CompareTo(UnityEngine::InputSystem::Utilities::Substring other) ;

/// @brief Method Compare addr 0x28f9e90 size 0x28 virtual false final false
static int32_t Compare(UnityEngine::InputSystem::Utilities::Substring left, UnityEngine::InputSystem::Utilities::Substring right, System::StringComparison comparison) ;

/// @brief Method StartsWith addr 0x28f9eb8 size 0x98 virtual false final false
 bool StartsWith(::StringW str) ;

/// @brief Method Substr addr 0x28f9f50 size 0x34 virtual false final false
 ::StringW Substr(int32_t index, int32_t length) ;

/// @brief Method ToString addr 0x28f9f84 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x28f9fec size 0x50 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x28fa03c size 0x1c virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::Substring a, UnityEngine::InputSystem::Utilities::Substring b) ;

/// @brief Method op_Inequality addr 0x28fa058 size 0x1c virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::Substring a, UnityEngine::InputSystem::Utilities::Substring b) ;

/// @brief Method op_Equality addr 0x28fa074 size 0x2c virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::Substring a, UnityEngine::InputSystem::Utilities::InternedString b) ;

/// @brief Method op_Inequality addr 0x28fa0a0 size 0x30 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::Substring a, UnityEngine::InputSystem::Utilities::InternedString b) ;

/// @brief Method op_Equality addr 0x28fa0d0 size 0x30 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::InternedString a, UnityEngine::InputSystem::Utilities::Substring b) ;

/// @brief Method op_Inequality addr 0x28fa100 size 0x34 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::InternedString a, UnityEngine::InputSystem::Utilities::Substring b) ;

/// @brief Method op_Implicit addr 0x28fa134 size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::Substring op_Implicit_UnityEngine__InputSystem__Utilities__Substring(::StringW s) ;

/// @brief Method get_length addr 0x28fa14c size 0x8 virtual false final false
 int32_t get_length() ;

/// @brief Method get_index addr 0x28fa154 size 0x8 virtual false final false
 int32_t get_index() ;

/// @brief Method get_Item addr 0x28fa15c size 0x84 virtual false final false
 char16_t get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::Substring, "UnityEngine.InputSystem.Utilities", "Substring");
