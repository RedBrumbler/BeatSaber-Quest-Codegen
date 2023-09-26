#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__DrawIfAttribute__DisablingType;
}
namespace GlobalNamespace {
class DrawIfAttribute;
}
// Type: ::DisablingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16107))
// CS Name: DrawIfAttribute::DisablingType
struct CORDL_TYPE GlobalNamespace__DrawIfAttribute__DisablingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__DrawIfAttribute__DisablingType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__DrawIfAttribute__DisablingType(GlobalNamespace__DrawIfAttribute__DisablingType const&) = default;
                    constexpr GlobalNamespace__DrawIfAttribute__DisablingType(GlobalNamespace__DrawIfAttribute__DisablingType&&) = default;
                    constexpr GlobalNamespace__DrawIfAttribute__DisablingType& operator=(GlobalNamespace__DrawIfAttribute__DisablingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__DrawIfAttribute__DisablingType& operator=(GlobalNamespace__DrawIfAttribute__DisablingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DrawIfAttribute__DisablingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__DrawIfAttribute__DisablingType_Unwrapped : int32_t {
__ReadOnly = 0,
__DontDraw = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__DrawIfAttribute__DisablingType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__DrawIfAttribute__DisablingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ReadOnly offset 0
static GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType const ReadOnly;

/// @brief Field DontDraw offset 0
static GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType const DontDraw;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DrawIfAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10131))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16108))
// CS Name: DrawIfAttribute
class CORDL_TYPE DrawIfAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
using DisablingType = GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DrawIfAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: " const&", def_value: None }]
constexpr DrawIfAttribute(DrawIfAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "&&", def_value: None }]
constexpr DrawIfAttribute(DrawIfAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DrawIfAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr DrawIfAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DrawIfAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DrawIfAttribute& operator=(DrawIfAttribute&& o) noexcept = default;
  constexpr DrawIfAttribute& operator=(DrawIfAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_propertyName, put=__set_propertyName))  propertyName;

constexpr void __set_propertyName(::StringW value) ;

constexpr ::StringW __get_propertyName() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_orValue, put=__set_orValue))  orValue;

constexpr void __set_orValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_orValue() const;

 GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType __declspec(property(get=__get_disablingType, put=__set_disablingType))  disablingType;

constexpr void __set_disablingType(GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType value) ;

constexpr GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType __get_disablingType() const;


// Methods

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "disablingType", ty: "GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType", modifiers: "", def_value: None }]
explicit DrawIfAttribute(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType) ;

/// @brief Method .ctor addr 0x1fca8cc size 0x3c virtual false final false
 void _ctor(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType) ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "orValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "disablingType", ty: "GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType", modifiers: "", def_value: None }]
explicit DrawIfAttribute(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, ::bs_hook::Il2CppWrapperType orValue, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType) ;

/// @brief Method .ctor addr 0x1fca908 size 0x44 virtual false final false
 void _ctor(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, ::bs_hook::Il2CppWrapperType orValue, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType, "", "DrawIfAttribute/DisablingType");
NEED_NO_BOX(GlobalNamespace::DrawIfAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DrawIfAttribute, "", "DrawIfAttribute");
