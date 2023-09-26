#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace System {
struct System__DefaultBinder__Primitives;
}
namespace System {
class DefaultBinder;
}
namespace System {
class System__DefaultBinder__BinderState;
}
namespace System {
class System__DefaultBinder____c;
}
// Type: ::BinderState
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2550))
// CS Name: System.DefaultBinder::BinderState
class CORDL_TYPE System__DefaultBinder__BinderState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__DefaultBinder__BinderState() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__DefaultBinder__BinderState", modifiers: " const&", def_value: None }]
constexpr System__DefaultBinder__BinderState(System__DefaultBinder__BinderState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__DefaultBinder__BinderState", modifiers: "&&", def_value: None }]
constexpr System__DefaultBinder__BinderState(System__DefaultBinder__BinderState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__DefaultBinder__BinderState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__DefaultBinder__BinderState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__DefaultBinder__BinderState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__DefaultBinder__BinderState& operator=(System__DefaultBinder__BinderState&& o) noexcept = default;
  constexpr System__DefaultBinder__BinderState& operator=(System__DefaultBinder__BinderState const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_m_argsMap, put=__set_m_argsMap))  m_argsMap;

constexpr void __set_m_argsMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_argsMap() const;

 int32_t __declspec(property(get=__get_m_originalSize, put=__set_m_originalSize))  m_originalSize;

constexpr void __set_m_originalSize(int32_t value) ;

constexpr int32_t __get_m_originalSize() const;

 bool __declspec(property(get=__get_m_isParamArray, put=__set_m_isParamArray))  m_isParamArray;

constexpr void __set_m_isParamArray(bool value) ;

constexpr bool __get_m_isParamArray() const;


// Methods

// Ctor Parameters [CppParam { name: "argsMap", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "originalSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isParamArray", ty: "bool", modifiers: "", def_value: None }]
explicit System__DefaultBinder__BinderState(::ArrayW<int32_t> argsMap, int32_t originalSize, bool isParamArray) ;

/// @brief Method .ctor addr 0x24a31cc size 0x40 virtual false final false
 void _ctor(::ArrayW<int32_t> argsMap, int32_t originalSize, bool isParamArray) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::Primitives
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2551))
// CS Name: System.DefaultBinder::Primitives
struct CORDL_TYPE System__DefaultBinder__Primitives : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__DefaultBinder__Primitives(int32_t value__) noexcept;


                    constexpr System__DefaultBinder__Primitives(System__DefaultBinder__Primitives const&) = default;
                    constexpr System__DefaultBinder__Primitives(System__DefaultBinder__Primitives&&) = default;
                    constexpr System__DefaultBinder__Primitives& operator=(System__DefaultBinder__Primitives const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__DefaultBinder__Primitives& operator=(System__DefaultBinder__Primitives&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__DefaultBinder__Primitives(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__DefaultBinder__Primitives_Unwrapped : int32_t {
__Boolean = 8,
__Char = 16,
__SByte = 32,
__Byte = 64,
__Int16 = 128,
__UInt16 = 256,
__Int32 = 512,
__UInt32 = 1024,
__Int64 = 2048,
__UInt64 = 4096,
__Single = 8192,
__Double = 16384,
__Decimal = 32768,
__DateTime = 65536,
__String = 262144,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__DefaultBinder__Primitives_Unwrapped () const noexcept {
return std::bit_cast<__System__DefaultBinder__Primitives_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Boolean offset 0
static System::System__DefaultBinder__Primitives const Boolean;

/// @brief Field Char offset 0
static System::System__DefaultBinder__Primitives const Char;

/// @brief Field SByte offset 0
static System::System__DefaultBinder__Primitives const SByte;

/// @brief Field Byte offset 0
static System::System__DefaultBinder__Primitives const Byte;

/// @brief Field Int16 offset 0
static System::System__DefaultBinder__Primitives const Int16;

/// @brief Field UInt16 offset 0
static System::System__DefaultBinder__Primitives const UInt16;

/// @brief Field Int32 offset 0
static System::System__DefaultBinder__Primitives const Int32;

/// @brief Field UInt32 offset 0
static System::System__DefaultBinder__Primitives const UInt32;

/// @brief Field Int64 offset 0
static System::System__DefaultBinder__Primitives const Int64;

/// @brief Field UInt64 offset 0
static System::System__DefaultBinder__Primitives const UInt64;

/// @brief Field Single offset 0
static System::System__DefaultBinder__Primitives const Single;

/// @brief Field Double offset 0
static System::System__DefaultBinder__Primitives const Double;

/// @brief Field Decimal offset 0
static System::System__DefaultBinder__Primitives const Decimal;

/// @brief Field DateTime offset 0
static System::System__DefaultBinder__Primitives const DateTime;

/// @brief Field String offset 0
static System::System__DefaultBinder__Primitives const String;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::<>c
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2552))
// CS Name: System.DefaultBinder::<>c
class CORDL_TYPE System__DefaultBinder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__DefaultBinder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__DefaultBinder____c", modifiers: " const&", def_value: None }]
constexpr System__DefaultBinder____c(System__DefaultBinder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__DefaultBinder____c", modifiers: "&&", def_value: None }]
constexpr System__DefaultBinder____c(System__DefaultBinder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__DefaultBinder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__DefaultBinder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__DefaultBinder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__DefaultBinder____c& operator=(System__DefaultBinder____c&& o) noexcept = default;
  constexpr System__DefaultBinder____c& operator=(System__DefaultBinder____c const& o) noexcept = default;
                


// Fields

static System::System__DefaultBinder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::System__DefaultBinder____c value) ;

static System::System__DefaultBinder____c __get___9() ;

static System::Predicate_1<System::Type> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Predicate_1<System::Type> value) ;

static System::Predicate_1<System::Type> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit System__DefaultBinder____c() ;

/// @brief Method .ctor addr 0x24a65dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SelectProperty>b__2_0 addr 0x24a65e4 size 0x5c virtual false final false
 bool _SelectProperty_b__2_0(System::Type t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::DefaultBinder
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3450))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2553))
// CS Name: System.DefaultBinder
class CORDL_TYPE DefaultBinder : public System::Reflection::Binder {
public:
// Declarations
using __c = System::System__DefaultBinder____c;

using Primitives = System::System__DefaultBinder__Primitives;

using BinderState = System::System__DefaultBinder__BinderState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: " const&", def_value: None }]
constexpr DefaultBinder(DefaultBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "&&", def_value: None }]
constexpr DefaultBinder(DefaultBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultBinder(void* ptr) noexcept : System::Reflection::Binder(ptr) {
}


  constexpr DefaultBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultBinder& operator=(DefaultBinder&& o) noexcept = default;
  constexpr DefaultBinder& operator=(DefaultBinder const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::System__DefaultBinder__Primitives> __declspec(property(get=__get__primitiveConversions, put=__set__primitiveConversions))  _primitiveConversions;

static void __set__primitiveConversions(::ArrayW<System::System__DefaultBinder__Primitives> value) ;

static ::ArrayW<System::System__DefaultBinder__Primitives> __get__primitiveConversions() ;


// Methods

/// @brief Method BindToMethod addr 0x24a0f90 size 0x1eec virtual true final false
 System::Reflection::MethodBase BindToMethod(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::MethodBase> match, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo cultureInfo, ::ArrayW<::StringW> names, ByRef<::bs_hook::Il2CppWrapperType> state) ;

/// @brief Method BindToField addr 0x24a34dc size 0x4b4 virtual true final false
 System::Reflection::FieldInfo BindToField(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::FieldInfo> match, ::bs_hook::Il2CppWrapperType value, System::Globalization::CultureInfo cultureInfo) ;

/// @brief Method SelectProperty addr 0x24a3a78 size 0xa24 virtual true final false
 System::Reflection::PropertyInfo SelectProperty(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::PropertyInfo> match, System::Type returnType, ::ArrayW<System::Type> indexes, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method ChangeType addr 0x24a4f7c size 0x60 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type type, System::Globalization::CultureInfo cultureInfo) ;

/// @brief Method ReorderArgumentArray addr 0x24a4fdc size 0x2d8 virtual true final false
 void ReorderArgumentArray(ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> args, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method ExactBinding addr 0x24a52b4 size 0x270 virtual false final false
static System::Reflection::MethodBase ExactBinding(::ArrayW<System::Reflection::MethodBase> match, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method ExactPropertyBinding addr 0x24a5674 size 0x2bc virtual false final false
static System::Reflection::PropertyInfo ExactPropertyBinding(::ArrayW<System::Reflection::PropertyInfo> match, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method FindMostSpecific addr 0x24a4a58 size 0x43c virtual false final false
static int32_t FindMostSpecific(::ArrayW<System::Reflection::ParameterInfo> p1, ::ArrayW<int32_t> paramOrder1, System::Type paramArrayType1, ::ArrayW<System::Reflection::ParameterInfo> p2, ::ArrayW<int32_t> paramOrder2, System::Type paramArrayType2, ::ArrayW<System::Type> types, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method FindMostSpecificType addr 0x24a46c0 size 0x398 virtual false final false
static int32_t FindMostSpecificType(System::Type c1, System::Type c2, System::Type t) ;

/// @brief Method FindMostSpecificMethod addr 0x24a335c size 0x180 virtual false final false
static int32_t FindMostSpecificMethod(System::Reflection::MethodBase m1, ::ArrayW<int32_t> paramOrder1, System::Type paramArrayType1, System::Reflection::MethodBase m2, ::ArrayW<int32_t> paramOrder2, System::Type paramArrayType2, ::ArrayW<System::Type> types, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method FindMostSpecificField addr 0x24a3990 size 0xe8 virtual false final false
static int32_t FindMostSpecificField(System::Reflection::FieldInfo cur1, System::Reflection::FieldInfo cur2) ;

/// @brief Method FindMostSpecificProperty addr 0x24a4e94 size 0xe8 virtual false final false
static int32_t FindMostSpecificProperty(System::Reflection::PropertyInfo cur1, System::Reflection::PropertyInfo cur2) ;

/// @brief Method CompareMethodSigAndName addr 0x24a5930 size 0x15c virtual false final false
static bool CompareMethodSigAndName(System::Reflection::MethodBase m1, System::Reflection::MethodBase m2) ;

/// @brief Method GetHierarchyDepth addr 0x24a5a8c size 0x94 virtual false final false
static int32_t GetHierarchyDepth(System::Type t) ;

/// @brief Method FindMostDerivedNewSlotMeth addr 0x24a5524 size 0x150 virtual false final false
static System::Reflection::MethodBase FindMostDerivedNewSlotMeth(::ArrayW<System::Reflection::MethodBase> match, int32_t cMatches) ;

/// @brief Method ReorderParams addr 0x24a320c size 0x150 virtual false final false
static void ReorderParams(::ArrayW<int32_t> paramOrder, ::ArrayW<::bs_hook::Il2CppWrapperType> vars) ;

/// @brief Method CreateParamOrder addr 0x24a2e7c size 0x240 virtual false final false
static bool CreateParamOrder(::ArrayW<int32_t> paramOrder, ::ArrayW<System::Reflection::ParameterInfo> pars, ::ArrayW<::StringW> names) ;

/// @brief Method CanConvertPrimitive addr 0x24a449c size 0x224 virtual false final false
static bool CanConvertPrimitive(System::RuntimeType source, System::RuntimeType target) ;

/// @brief Method CanConvertPrimitiveObjectToType addr 0x24a30bc size 0x110 virtual false final false
static bool CanConvertPrimitiveObjectToType(::bs_hook::Il2CppWrapperType source, System::RuntimeType type) ;

/// @brief Method CompareMethodSig addr 0x24a5b20 size 0x15c virtual false final false
static bool CompareMethodSig(System::Reflection::MethodBase m1, System::Reflection::MethodBase m2) ;

/// @brief Method SelectMethod addr 0x24a5c7c size 0x724 virtual true final true
 System::Reflection::MethodBase SelectMethod(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::MethodBase> match, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method CanChangePrimitive addr 0x24a63a0 size 0x64 virtual false final false
static bool CanChangePrimitive(System::Type source, System::Type target) ;

/// @brief Method CanPrimitiveWiden addr 0x24a6404 size 0xd8 virtual false final false
static bool CanPrimitiveWiden(System::Type source, System::Type target) ;

// Ctor Parameters []
explicit DefaultBinder() ;

/// @brief Method .ctor addr 0x24a64dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__DefaultBinder__Primitives, "System", "DefaultBinder/Primitives");
NEED_NO_BOX(System::DefaultBinder);
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder, "System", "DefaultBinder");
NEED_NO_BOX(System::System__DefaultBinder__BinderState);
DEFINE_IL2CPP_ARG_TYPE(System::System__DefaultBinder__BinderState, "System", "DefaultBinder/BinderState");
NEED_NO_BOX(System::System__DefaultBinder____c);
DEFINE_IL2CPP_ARG_TYPE(System::System__DefaultBinder____c, "System", "DefaultBinder/<>c");
