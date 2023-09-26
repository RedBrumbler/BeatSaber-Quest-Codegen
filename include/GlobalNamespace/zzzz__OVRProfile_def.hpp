#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRProfile__State;
}
namespace GlobalNamespace {
class OVRProfile;
}
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8826))
// CS Name: OVRProfile::State
struct CORDL_TYPE GlobalNamespace__OVRProfile__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRProfile__State(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRProfile__State(GlobalNamespace__OVRProfile__State const&) = default;
                    constexpr GlobalNamespace__OVRProfile__State(GlobalNamespace__OVRProfile__State&&) = default;
                    constexpr GlobalNamespace__OVRProfile__State& operator=(GlobalNamespace__OVRProfile__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRProfile__State& operator=(GlobalNamespace__OVRProfile__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRProfile__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRProfile__State_Unwrapped : int32_t {
__NOT_TRIGGERED = 0,
__LOADING = 1,
__READY = 2,
__ERROR = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRProfile__State_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRProfile__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NOT_TRIGGERED offset 0
static GlobalNamespace::GlobalNamespace__OVRProfile__State const NOT_TRIGGERED;

/// @brief Field LOADING offset 0
static GlobalNamespace::GlobalNamespace__OVRProfile__State const LOADING;

/// @brief Field READY offset 0
static GlobalNamespace::GlobalNamespace__OVRProfile__State const READY;

/// @brief Field ERROR offset 0
static GlobalNamespace::GlobalNamespace__OVRProfile__State const ERROR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRProfile
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8827))
// CS Name: OVRProfile
class CORDL_TYPE OVRProfile : public UnityEngine::Object {
public:
// Declarations
using State = GlobalNamespace::GlobalNamespace__OVRProfile__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: " const&", def_value: None }]
constexpr OVRProfile(OVRProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: "&&", def_value: None }]
constexpr OVRProfile(OVRProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRProfile(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr OVRProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRProfile& operator=(OVRProfile&& o) noexcept = default;
  constexpr OVRProfile& operator=(OVRProfile const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_userName))  userName;

 ::StringW __declspec(property(get=get_locale))  locale;

 float_t __declspec(property(get=get_ipd))  ipd;

 float_t __declspec(property(get=get_eyeHeight))  eyeHeight;

 float_t __declspec(property(get=get_eyeDepth))  eyeDepth;

 float_t __declspec(property(get=get_neckHeight))  neckHeight;

 GlobalNamespace::GlobalNamespace__OVRProfile__State __declspec(property(get=get_state))  state;


// Methods

/// @brief Method get_id addr 0x2631fac size 0x40 virtual false final false
 ::StringW get_id() ;

/// @brief Method get_userName addr 0x2631fec size 0x40 virtual false final false
 ::StringW get_userName() ;

/// @brief Method get_locale addr 0x263202c size 0x40 virtual false final false
 ::StringW get_locale() ;

/// @brief Method get_ipd addr 0x263206c size 0x134 virtual false final false
 float_t get_ipd() ;

/// @brief Method get_eyeHeight addr 0x26321a0 size 0x50 virtual false final false
 float_t get_eyeHeight() ;

/// @brief Method get_eyeDepth addr 0x26321f0 size 0x50 virtual false final false
 float_t get_eyeDepth() ;

/// @brief Method get_neckHeight addr 0x2632240 size 0x1c virtual false final false
 float_t get_neckHeight() ;

/// @brief Method get_state addr 0x263225c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRProfile__State get_state() ;

// Ctor Parameters []
explicit OVRProfile() ;

/// @brief Method .ctor addr 0x2632264 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRProfile__State, "", "OVRProfile/State");
NEED_NO_BOX(GlobalNamespace::OVRProfile);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProfile, "", "OVRProfile");
