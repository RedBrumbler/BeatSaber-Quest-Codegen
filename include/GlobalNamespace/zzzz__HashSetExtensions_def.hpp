#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>;
}
namespace GlobalNamespace {
class HashSetExtensions;
}
// Type: ::HashSetDelegateHolder`1
// Type: ::HashSetExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10567))
// CS Name: HashSetExtensions
class CORDL_TYPE HashSetExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using HashSetDelegateHolder_1 = GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashSetExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: " const&", def_value: None }]
constexpr HashSetExtensions(HashSetExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None }]
constexpr HashSetExtensions(HashSetExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSetExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSetExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSetExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSetExtensions& operator=(HashSetExtensions&& o) noexcept = default;
  constexpr HashSetExtensions& operator=(HashSetExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SetCapacity(System::Collections::Generic::HashSet_1<T> hs, int32_t capacity) ;

/// @brief Method GetHashSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::HashSet_1<T> GetHashSet(int32_t capacity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HashSetDelegateHolder`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10566))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10566), inst: 2 })
// CS Name: HashSetExtensions::HashSetDelegateHolder`1
class CORDL_TYPE GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1(GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1(GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1&& o) noexcept = default;
  constexpr GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Flags offset 0
static System::Reflection::BindingFlags const Flags;

static System::Reflection::MethodInfo __declspec(property(get=__get__InitializeMethod_k__BackingField, put=__set__InitializeMethod_k__BackingField))  _InitializeMethod_k__BackingField;

static void __set__InitializeMethod_k__BackingField(System::Reflection::MethodInfo value) ;

static System::Reflection::MethodInfo __get__InitializeMethod_k__BackingField() ;


// Properties

static System::Reflection::MethodInfo __declspec(property(get=get_InitializeMethod))  InitializeMethod;


// Methods

/// @brief Method get_InitializeMethod addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Reflection::MethodInfo get_InitializeMethod() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1, "", "HashSetExtensions/HashSetDelegateHolder`1");
NEED_NO_BOX(GlobalNamespace::HashSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HashSetExtensions, "", "HashSetExtensions");
