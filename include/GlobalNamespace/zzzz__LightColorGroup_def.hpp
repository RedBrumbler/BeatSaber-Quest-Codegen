#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IEditTimeValidated;
}
namespace GlobalNamespace {
class LightWithIds;
}
namespace GlobalNamespace {
class LightColorGroupParent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LightColorGroup__LightColorGroupControlType;
}
namespace GlobalNamespace {
class LightColorGroup;
}
// Type: ::LightColorGroupControlType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5022))
// CS Name: LightColorGroup::LightColorGroupControlType
struct CORDL_TYPE GlobalNamespace__LightColorGroup__LightColorGroupControlType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LightColorGroup__LightColorGroupControlType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LightColorGroup__LightColorGroupControlType(GlobalNamespace__LightColorGroup__LightColorGroupControlType const&) = default;
                    constexpr GlobalNamespace__LightColorGroup__LightColorGroupControlType(GlobalNamespace__LightColorGroup__LightColorGroupControlType&&) = default;
                    constexpr GlobalNamespace__LightColorGroup__LightColorGroupControlType& operator=(GlobalNamespace__LightColorGroup__LightColorGroupControlType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LightColorGroup__LightColorGroupControlType& operator=(GlobalNamespace__LightColorGroup__LightColorGroupControlType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightColorGroup__LightColorGroupControlType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LightColorGroup__LightColorGroupControlType_Unwrapped : int32_t {
__LightWithIdsFromHierarchy = 0,
__LightWithIdsCollection = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LightColorGroup__LightColorGroupControlType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LightColorGroup__LightColorGroupControlType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LightWithIdsFromHierarchy offset 0
static GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType const LightWithIdsFromHierarchy;

/// @brief Field LightWithIdsCollection offset 0
static GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType const LightWithIdsCollection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightColorGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5039))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5023))
// CS Name: LightColorGroup
class CORDL_TYPE LightColorGroup : public GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
using LightColorGroupControlType = GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType;

/// @brief Convert operator to GlobalNamespace::IEditTimeValidated
constexpr operator  GlobalNamespace::IEditTimeValidated() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LightColorGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: " const&", def_value: None }]
constexpr LightColorGroup(LightColorGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "&&", def_value: None }]
constexpr LightColorGroup(LightColorGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorGroup(void* ptr) noexcept : GlobalNamespace::LightGroupSubsystem(ptr) {
}


  constexpr LightColorGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorGroup& operator=(LightColorGroup&& o) noexcept = default;
  constexpr LightColorGroup& operator=(LightColorGroup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType __declspec(property(get=__get__lightColorGroupControlType, put=__set__lightColorGroupControlType))  _lightColorGroupControlType;

constexpr void __set__lightColorGroupControlType(GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType value) ;

constexpr GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType __get__lightColorGroupControlType() const;

 bool __declspec(property(get=__get__disableAutomaticIdAssignment, put=__set__disableAutomaticIdAssignment))  _disableAutomaticIdAssignment;

constexpr void __set__disableAutomaticIdAssignment(bool value) ;

constexpr bool __get__disableAutomaticIdAssignment() const;

 System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent> __declspec(property(get=__get__lightColorGroupParents, put=__set__lightColorGroupParents))  _lightColorGroupParents;

constexpr void __set__lightColorGroupParents(System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent> __get__lightColorGroupParents() const;

 GlobalNamespace::LightWithIds __declspec(property(get=__get__lightWithIds, put=__set__lightWithIds))  _lightWithIds;

constexpr void __set__lightWithIds(GlobalNamespace::LightWithIds value) ;

constexpr GlobalNamespace::LightWithIds __get__lightWithIds() const;


// Methods

// Ctor Parameters []
explicit LightColorGroup() ;

/// @brief Method .ctor addr 0x22969d8 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType, "", "LightColorGroup/LightColorGroupControlType");
NEED_NO_BOX(GlobalNamespace::LightColorGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorGroup, "", "LightColorGroup");
