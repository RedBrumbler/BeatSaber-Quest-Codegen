#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class ModifierSpec;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class TypeIdentifier;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Threading {
struct StackCrawlMark;
}
// Forward declare root types
namespace System {
struct System__TypeSpec__DisplayNameFormat;
}
namespace System {
class TypeSpec;
}
// Type: ::DisplayNameFormat
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2635))
// CS Name: System.TypeSpec::DisplayNameFormat
struct CORDL_TYPE System__TypeSpec__DisplayNameFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__TypeSpec__DisplayNameFormat(int32_t value__) noexcept;


                    constexpr System__TypeSpec__DisplayNameFormat(System__TypeSpec__DisplayNameFormat const&) = default;
                    constexpr System__TypeSpec__DisplayNameFormat(System__TypeSpec__DisplayNameFormat&&) = default;
                    constexpr System__TypeSpec__DisplayNameFormat& operator=(System__TypeSpec__DisplayNameFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__TypeSpec__DisplayNameFormat& operator=(System__TypeSpec__DisplayNameFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__TypeSpec__DisplayNameFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__TypeSpec__DisplayNameFormat_Unwrapped : int32_t {
__Default = 0,
__WANT_ASSEMBLY = 1,
__NO_MODIFIERS = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__TypeSpec__DisplayNameFormat_Unwrapped () const noexcept {
return std::bit_cast<__System__TypeSpec__DisplayNameFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static System::System__TypeSpec__DisplayNameFormat const Default;

/// @brief Field WANT_ASSEMBLY offset 0
static System::System__TypeSpec__DisplayNameFormat const WANT_ASSEMBLY;

/// @brief Field NO_MODIFIERS offset 0
static System::System__TypeSpec__DisplayNameFormat const NO_MODIFIERS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::TypeSpec
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2636))
// CS Name: System.TypeSpec
class CORDL_TYPE TypeSpec : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DisplayNameFormat = System::System__TypeSpec__DisplayNameFormat;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TypeSpec() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: " const&", def_value: None }]
constexpr TypeSpec(TypeSpec const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "&&", def_value: None }]
constexpr TypeSpec(TypeSpec&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeSpec(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeSpec& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeSpec& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeSpec& operator=(TypeSpec&& o) noexcept = default;
  constexpr TypeSpec& operator=(TypeSpec const& o) noexcept = default;
                


// Fields

 System::TypeIdentifier __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::TypeIdentifier value) ;

constexpr System::TypeIdentifier __get_name() const;

 ::StringW __declspec(property(get=__get_assembly_name, put=__set_assembly_name))  assembly_name;

constexpr void __set_assembly_name(::StringW value) ;

constexpr ::StringW __get_assembly_name() const;

 System::Collections::Generic::List_1<System::TypeIdentifier> __declspec(property(get=__get_nested, put=__set_nested))  nested;

constexpr void __set_nested(System::Collections::Generic::List_1<System::TypeIdentifier> value) ;

constexpr System::Collections::Generic::List_1<System::TypeIdentifier> __get_nested() const;

 System::Collections::Generic::List_1<System::TypeSpec> __declspec(property(get=__get_generic_params, put=__set_generic_params))  generic_params;

constexpr void __set_generic_params(System::Collections::Generic::List_1<System::TypeSpec> value) ;

constexpr System::Collections::Generic::List_1<System::TypeSpec> __get_generic_params() const;

 System::Collections::Generic::List_1<System::ModifierSpec> __declspec(property(get=__get_modifier_spec, put=__set_modifier_spec))  modifier_spec;

constexpr void __set_modifier_spec(System::Collections::Generic::List_1<System::ModifierSpec> value) ;

constexpr System::Collections::Generic::List_1<System::ModifierSpec> __get_modifier_spec() const;

 bool __declspec(property(get=__get_is_byref, put=__set_is_byref))  is_byref;

constexpr void __set_is_byref(bool value) ;

constexpr bool __get_is_byref() const;

 ::StringW __declspec(property(get=__get_display_fullname, put=__set_display_fullname))  display_fullname;

constexpr void __set_display_fullname(::StringW value) ;

constexpr ::StringW __get_display_fullname() const;


// Properties

 bool __declspec(property(get=get_HasModifiers))  HasModifiers;

 ::StringW __declspec(property(get=get_DisplayFullName))  DisplayFullName;


// Methods

/// @brief Method get_HasModifiers addr 0x24cb530 size 0x10 virtual false final false
 bool get_HasModifiers() ;

/// @brief Method GetDisplayFullName addr 0x24cb540 size 0x454 virtual false final false
 ::StringW GetDisplayFullName(System::System__TypeSpec__DisplayNameFormat flags) ;

/// @brief Method GetModifierString addr 0x24cb9bc size 0x1f4 virtual false final false
 System::Text::StringBuilder GetModifierString(System::Text::StringBuilder sb) ;

/// @brief Method get_DisplayFullName addr 0x24cb994 size 0x28 virtual false final false
 ::StringW get_DisplayFullName() ;

/// @brief Method Parse addr 0x24cbbb0 size 0xd8 virtual false final false
static System::TypeSpec Parse(::StringW typeName) ;

/// @brief Method UnescapeInternalName addr 0x24cc80c size 0xe8 virtual false final false
static ::StringW UnescapeInternalName(::StringW displayName) ;

/// @brief Method Resolve addr 0x24cc8f4 size 0x90c virtual false final false
 System::Type Resolve(System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly> assemblyResolver, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type> typeResolver, bool throwOnError, bool ignoreCase, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method AddName addr 0x24cd200 size 0x118 virtual false final false
 void AddName(::StringW type_name) ;

/// @brief Method AddModifier addr 0x24cd320 size 0xf0 virtual false final false
 void AddModifier(System::ModifierSpec md) ;

/// @brief Method SkipSpace addr 0x24cd410 size 0xb0 virtual false final false
static void SkipSpace(::StringW name, ByRef<int32_t> pos) ;

/// @brief Method BoundCheck addr 0x24cd4c0 size 0x88 virtual false final false
static void BoundCheck(int32_t idx, ::StringW s) ;

/// @brief Method ParsedTypeIdentifier addr 0x24cd318 size 0x8 virtual false final false
static System::TypeIdentifier ParsedTypeIdentifier(::StringW displayName) ;

/// @brief Method Parse addr 0x24cbc88 size 0xb84 virtual false final false
static System::TypeSpec Parse(::StringW name, ByRef<int32_t> p, bool is_recurse, bool allow_aqn) ;

// Ctor Parameters []
explicit TypeSpec() ;

/// @brief Method .ctor addr 0x24cd548 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__TypeSpec__DisplayNameFormat, "System", "TypeSpec/DisplayNameFormat");
NEED_NO_BOX(System::TypeSpec);
DEFINE_IL2CPP_ARG_TYPE(System::TypeSpec, "System", "TypeSpec");
