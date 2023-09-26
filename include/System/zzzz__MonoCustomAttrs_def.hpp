#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Reflection {
class RuntimeEventInfo;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace System {
class AttributeUsageAttribute;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Attribute;
}
// Forward declare root types
namespace System {
class MonoCustomAttrs;
}
namespace System {
class System__MonoCustomAttrs__AttributeInfo;
}
// Type: ::AttributeInfo
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2606))
// CS Name: System.MonoCustomAttrs::AttributeInfo
class CORDL_TYPE System__MonoCustomAttrs__AttributeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__MonoCustomAttrs__AttributeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__MonoCustomAttrs__AttributeInfo", modifiers: " const&", def_value: None }]
constexpr System__MonoCustomAttrs__AttributeInfo(System__MonoCustomAttrs__AttributeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__MonoCustomAttrs__AttributeInfo", modifiers: "&&", def_value: None }]
constexpr System__MonoCustomAttrs__AttributeInfo(System__MonoCustomAttrs__AttributeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__MonoCustomAttrs__AttributeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__MonoCustomAttrs__AttributeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__MonoCustomAttrs__AttributeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__MonoCustomAttrs__AttributeInfo& operator=(System__MonoCustomAttrs__AttributeInfo&& o) noexcept = default;
  constexpr System__MonoCustomAttrs__AttributeInfo& operator=(System__MonoCustomAttrs__AttributeInfo const& o) noexcept = default;
                


// Fields

 System::AttributeUsageAttribute __declspec(property(get=__get__usage, put=__set__usage))  _usage;

constexpr void __set__usage(System::AttributeUsageAttribute value) ;

constexpr System::AttributeUsageAttribute __get__usage() const;

 int32_t __declspec(property(get=__get__inheritanceLevel, put=__set__inheritanceLevel))  _inheritanceLevel;

constexpr void __set__inheritanceLevel(int32_t value) ;

constexpr int32_t __get__inheritanceLevel() const;


// Properties

 System::AttributeUsageAttribute __declspec(property(get=get_Usage))  Usage;

 int32_t __declspec(property(get=get_InheritanceLevel))  InheritanceLevel;


// Methods

// Ctor Parameters [CppParam { name: "usage", ty: "System::AttributeUsageAttribute", modifiers: "", def_value: None }, CppParam { name: "inheritanceLevel", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__MonoCustomAttrs__AttributeInfo(System::AttributeUsageAttribute usage, int32_t inheritanceLevel) ;

/// @brief Method .ctor addr 0x24c0564 size 0xc virtual false final false
 void _ctor(System::AttributeUsageAttribute usage, int32_t inheritanceLevel) ;

/// @brief Method get_Usage addr 0x24c2c88 size 0x8 virtual false final false
 System::AttributeUsageAttribute get_Usage() ;

/// @brief Method get_InheritanceLevel addr 0x24c2c90 size 0x8 virtual false final false
 int32_t get_InheritanceLevel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::MonoCustomAttrs
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2607))
// CS Name: System.MonoCustomAttrs
class CORDL_TYPE MonoCustomAttrs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AttributeInfo = System::System__MonoCustomAttrs__AttributeInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoCustomAttrs() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs", modifiers: " const&", def_value: None }]
constexpr MonoCustomAttrs(MonoCustomAttrs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs", modifiers: "&&", def_value: None }]
constexpr MonoCustomAttrs(MonoCustomAttrs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoCustomAttrs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoCustomAttrs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoCustomAttrs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoCustomAttrs& operator=(MonoCustomAttrs&& o) noexcept = default;
  constexpr MonoCustomAttrs& operator=(MonoCustomAttrs const& o) noexcept = default;
                


// Fields

static System::Reflection::Assembly __declspec(property(get=__get_corlib, put=__set_corlib))  corlib;

static void __set_corlib(System::Reflection::Assembly value) ;

static System::Reflection::Assembly __get_corlib() ;

static System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute> __declspec(property(get=__get_usage_cache, put=__set_usage_cache))  usage_cache;

static void __set_usage_cache(System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute> __get_usage_cache() ;

static System::AttributeUsageAttribute __declspec(property(get=__get_DefaultAttributeUsage, put=__set_DefaultAttributeUsage))  DefaultAttributeUsage;

static void __set_DefaultAttributeUsage(System::AttributeUsageAttribute value) ;

static System::AttributeUsageAttribute __get_DefaultAttributeUsage() ;


// Methods

/// @brief Method IsUserCattrProvider addr 0x24beeec size 0x1cc virtual false final false
static bool IsUserCattrProvider(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetCustomAttributesInternal addr 0x24bf0b8 size 0x8 virtual false final false
static ::ArrayW<System::Attribute> GetCustomAttributesInternal(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool pseudoAttrs) ;

/// @brief Method GetPseudoCustomAttributes addr 0x24bf0c0 size 0x2ec virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetPseudoCustomAttributes(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType) ;

/// @brief Method GetPseudoCustomAttributes addr 0x24bf3ac size 0x164 virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetPseudoCustomAttributes(System::Type type) ;

/// @brief Method GetCustomAttributesBase addr 0x24bf510 size 0x1a4 virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributesBase(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inheritedOnly) ;

/// @brief Method GetCustomAttributes addr 0x24bf6b4 size 0x988 virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x24c0570 size 0x178 virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Reflection::ICustomAttributeProvider obj, bool inherit) ;

/// @brief Method GetCustomAttributesDataInternal addr 0x24c06e8 size 0x4 virtual false final false
static ::ArrayW<System::Reflection::CustomAttributeData> GetCustomAttributesDataInternal(System::Reflection::ICustomAttributeProvider obj) ;

/// @brief Method GetCustomAttributesData addr 0x24c06ec size 0x12c virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributesData(System::Reflection::ICustomAttributeProvider obj, bool inherit) ;

/// @brief Method GetCustomAttributesData addr 0x24c09c4 size 0x1360 virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributesData(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributesDataBase addr 0x24c0818 size 0x1ac virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributesDataBase(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inheritedOnly) ;

/// @brief Method GetPseudoCustomAttributesData addr 0x24c1d24 size 0x2f0 virtual false final false
static ::ArrayW<System::Reflection::CustomAttributeData> GetPseudoCustomAttributesData(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType) ;

/// @brief Method GetPseudoCustomAttributesData addr 0x24c2014 size 0x218 virtual false final false
static ::ArrayW<System::Reflection::CustomAttributeData> GetPseudoCustomAttributesData(System::Type type) ;

/// @brief Method IsDefined addr 0x24c222c size 0x298 virtual false final false
static bool IsDefined(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inherit) ;

/// @brief Method IsDefinedInternal addr 0x24c24c4 size 0x4 virtual false final false
static bool IsDefinedInternal(System::Reflection::ICustomAttributeProvider obj, System::Type AttributeType) ;

/// @brief Method GetBasePropertyDefinition addr 0x24c24c8 size 0x2e8 virtual false final false
static System::Reflection::PropertyInfo GetBasePropertyDefinition(System::Reflection::RuntimePropertyInfo property) ;

/// @brief Method GetBaseEventDefinition addr 0x24c27b0 size 0x210 virtual false final false
static System::Reflection::EventInfo GetBaseEventDefinition(System::Reflection::RuntimeEventInfo evt) ;

/// @brief Method GetBase addr 0x24c003c size 0x3b4 virtual false final false
static System::Reflection::ICustomAttributeProvider GetBase(System::Reflection::ICustomAttributeProvider obj) ;

/// @brief Method RetrieveAttributeUsageNoCache addr 0x24c29c0 size 0x24c virtual false final false
static System::AttributeUsageAttribute RetrieveAttributeUsageNoCache(System::Type attributeType) ;

/// @brief Method RetrieveAttributeUsage addr 0x24c03f0 size 0x174 virtual false final false
static System::AttributeUsageAttribute RetrieveAttributeUsage(System::Type attributeType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MonoCustomAttrs);
DEFINE_IL2CPP_ARG_TYPE(System::MonoCustomAttrs, "System", "MonoCustomAttrs");
NEED_NO_BOX(System::System__MonoCustomAttrs__AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(System::System__MonoCustomAttrs__AttributeInfo, "System", "MonoCustomAttrs/AttributeInfo");
