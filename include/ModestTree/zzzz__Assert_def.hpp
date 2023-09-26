#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
class Type;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Exception;
}
namespace Zenject {
class ZenjectException;
}
// Forward declare root types
namespace ModestTree {
class Assert;
}
// Type: ModestTree::Assert
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10570))
// CS Name: ModestTree.Assert
class CORDL_TYPE Assert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Assert() = default;

// Ctor Parameters [CppParam { name: "", ty: "Assert", modifiers: " const&", def_value: None }]
constexpr Assert(Assert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Assert", modifiers: "&&", def_value: None }]
constexpr Assert(Assert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Assert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Assert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Assert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Assert& operator=(Assert&& o) noexcept = default;
  constexpr Assert& operator=(Assert const& o) noexcept = default;
                


// Methods

/// @brief Method That addr 0x2d73678 size 0x38 virtual false final false
static void That(bool condition) ;

/// @brief Method IsNotEmpty addr 0x2d73714 size 0x44 virtual false final false
static void IsNotEmpty(::StringW str) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsEmpty(System::Collections::Generic::IList_1<T> list) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsEmpty(System::Collections::Generic::IEnumerable_1<T> sequence) ;

/// @brief Method IsType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsType(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsType(::bs_hook::Il2CppWrapperType obj, ::StringW message) ;

/// @brief Method DerivesFrom addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DerivesFrom(System::Type type) ;

/// @brief Method DerivesFromOrEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DerivesFromOrEqual(System::Type type) ;

/// @brief Method DerivesFrom addr 0x2d73758 size 0x138 virtual false final false
static void DerivesFrom(System::Type childType, System::Type parentType) ;

/// @brief Method DerivesFromOrEqual addr 0x2d739c4 size 0x138 virtual false final false
static void DerivesFromOrEqual(System::Type childType, System::Type parentType) ;

/// @brief Method IsEqual addr 0x2d73b9c size 0x58 virtual false final false
static void IsEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right) ;

/// @brief Method IsEqual addr 0x2d73d00 size 0x12c virtual false final false
static void IsEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, System::Func_1<::StringW> messageGenerator) ;

/// @brief Method IsApproximately addr 0x2d73e2c size 0x13c virtual false final false
static void IsApproximately(float_t left, float_t right, float_t epsilon) ;

/// @brief Method IsEqual addr 0x2d73bf4 size 0x10c virtual false final false
static void IsEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, ::StringW message) ;

/// @brief Method IsNotEqual addr 0x2d73f68 size 0x58 virtual false final false
static void IsNotEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right) ;

/// @brief Method IsNotEqual addr 0x2d7409c size 0x12c virtual false final false
static void IsNotEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, System::Func_1<::StringW> messageGenerator) ;

/// @brief Method IsNull addr 0x2d741c8 size 0x80 virtual false final false
static void IsNull(::bs_hook::Il2CppWrapperType val) ;

/// @brief Method IsNull addr 0x2d74248 size 0x7c virtual false final false
static void IsNull(::bs_hook::Il2CppWrapperType val, ::StringW message) ;

/// @brief Method IsNull addr 0x2d742c4 size 0xd0 virtual false final false
static void IsNull(::bs_hook::Il2CppWrapperType val, ::StringW message, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method IsNotNull addr 0x2d74548 size 0x38 virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val) ;

/// @brief Method IsNotNull addr 0x2d74580 size 0x7c virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val, ::StringW message) ;

/// @brief Method IsNotNull addr 0x2d745fc size 0xd0 virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val, ::StringW message, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method IsNotNull addr 0x2d746cc size 0xf8 virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val, ::StringW message, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2) ;

/// @brief Method IsNotEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsNotEmpty(System::Collections::Generic::IEnumerable_1<T> val, ::StringW message) ;

/// @brief Method IsNotEqual addr 0x2d73fc0 size 0xdc virtual false final false
static void IsNotEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, ::StringW message) ;

/// @brief Method Warn addr 0x2d747c4 size 0xac virtual false final false
static void Warn(bool condition) ;

/// @brief Method Warn addr 0x2d748e8 size 0xe8 virtual false final false
static void Warn(bool condition, System::Func_1<::StringW> messageGenerator) ;

/// @brief Method That addr 0x2d749d0 size 0x48 virtual false final false
static void That(bool condition, ::StringW message) ;

/// @brief Method That addr 0x2d74a18 size 0x98 virtual false final false
static void That(bool condition, ::StringW message, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method That addr 0x2d74ab0 size 0xc4 virtual false final false
static void That(bool condition, ::StringW message, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2) ;

/// @brief Method That addr 0x2d74b74 size 0xec virtual false final false
static void That(bool condition, ::StringW message, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2, ::bs_hook::Il2CppWrapperType p3) ;

/// @brief Method Warn addr 0x2d74c60 size 0xd0 virtual false final false
static void Warn(bool condition, ::StringW message) ;

/// @brief Method Throws addr 0x2d74d30 size 0x48 virtual false final false
static void Throws(System::Action action) ;

/// @brief Method Throws addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TException>
static void Throws(System::Action action) ;

/// @brief Method CreateException addr 0x2d74d78 size 0x74 virtual false final false
static Zenject::ZenjectException CreateException() ;

/// @brief Method CreateException addr 0x2d736b0 size 0x64 virtual false final false
static Zenject::ZenjectException CreateException(::StringW message) ;

/// @brief Method CreateException addr 0x2d73940 size 0x84 virtual false final false
static Zenject::ZenjectException CreateException(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method CreateException addr 0x2d74dec size 0x8c virtual false final false
static Zenject::ZenjectException CreateException(System::Exception innerException, ::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
NEED_NO_BOX(ModestTree::Assert);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Assert, "ModestTree", "Assert");
