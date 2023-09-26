#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputControlScheme__MatchResult__Result;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputControlScheme__MatchResult__Match;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlScheme__SchemeJson;
}
// Type: ::Result
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6298))
// CS Name: UnityEngine.InputSystem.InputControlScheme::MatchResult::Result
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__MatchResult__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Result(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Result(UnityEngine__InputSystem__InputControlScheme__MatchResult__Result const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Result(UnityEngine__InputSystem__InputControlScheme__MatchResult__Result&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Result& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Result& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__MatchResult__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputControlScheme__MatchResult__Result_Unwrapped : int32_t {
__AllSatisfied = 0,
__MissingRequired = 1,
__MissingOptional = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputControlScheme__MatchResult__Result_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputControlScheme__MatchResult__Result_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllSatisfied offset 0
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result const AllSatisfied;

/// @brief Field MissingRequired offset 0
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result const MissingRequired;

/// @brief Field MissingOptional offset 0
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result const MissingOptional;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Match
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6299))
// CS Name: UnityEngine.InputSystem.InputControlScheme::MatchResult::Match
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__MatchResult__Match : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }, CppParam { name: "m_Controls", ty: "UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Match(int32_t m_RequirementIndex, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Requirements, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> m_Controls) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Match(UnityEngine__InputSystem__InputControlScheme__MatchResult__Match const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Match(UnityEngine__InputSystem__InputControlScheme__MatchResult__Match&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Match& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult__Match const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Match& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult__Match&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__MatchResult__Match(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_RequirementIndex, put=__set_m_RequirementIndex))  m_RequirementIndex;

constexpr void __set_m_RequirementIndex(int32_t value) ;

constexpr int32_t __get_m_RequirementIndex() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_m_Requirements, put=__set_m_Requirements))  m_Requirements;

constexpr void __set_m_Requirements(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_m_Requirements() const;

 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_Controls, put=__set_m_Controls))  m_Controls;

constexpr void __set_m_Controls(UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> value) ;

constexpr UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> __get_m_Controls() const;


// Properties

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control))  control;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=get_device))  device;

 int32_t __declspec(property(get=get_requirementIndex))  requirementIndex;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement __declspec(property(get=get_requirement))  requirement;

 bool __declspec(property(get=get_isOptional))  isOptional;


// Methods

/// @brief Method get_control addr 0x28fc9d0 size 0x4c virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method get_device addr 0x28fca1c size 0x18 virtual false final false
 UnityEngine::InputSystem::InputDevice get_device() ;

/// @brief Method get_requirementIndex addr 0x28fca34 size 0x8 virtual false final false
 int32_t get_requirementIndex() ;

/// @brief Method get_requirement addr 0x28fca3c size 0x34 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement get_requirement() ;

/// @brief Method get_isOptional addr 0x28fca70 size 0x14 virtual false final false
 bool get_isOptional() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Enumerator
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6300))
// CS Name: UnityEngine.InputSystem.InputControlScheme::MatchResult::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }, CppParam { name: "m_Controls", ty: "UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator(int32_t m_Index, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Requirements, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> m_Controls) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator(UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator(UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_m_Requirements, put=__set_m_Requirements))  m_Requirements;

constexpr void __set_m_Requirements(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_m_Requirements() const;

 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_Controls, put=__set_m_Controls))  m_Controls;

constexpr void __set_m_Controls(UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> value) ;

constexpr UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> __get_m_Controls() const;


// Properties

 GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x28fca90 size 0x2c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x28fcabc size 0xc virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x28fcac8 size 0x84 virtual true final true
 GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28fcb4c size 0x70 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x28fcbbc size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MatchResult
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6301))
// CS Name: UnityEngine.InputSystem.InputControlScheme::MatchResult
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__MatchResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator;

using Match = GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match;

using Result = GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Result", ty: "GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result", modifiers: "", def_value: None }, CppParam { name: "m_Score", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Devices", ty: "UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: None }, CppParam { name: "m_Controls", ty: "UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result m_Result, float_t m_Score, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> m_Devices, UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> m_Controls, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Requirements) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult(UnityEngine__InputSystem__InputControlScheme__MatchResult const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult(UnityEngine__InputSystem__InputControlScheme__MatchResult&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__MatchResult& operator=(UnityEngine__InputSystem__InputControlScheme__MatchResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__MatchResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result __declspec(property(get=__get_m_Result, put=__set_m_Result))  m_Result;

constexpr void __set_m_Result(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result __get_m_Result() const;

 float_t __declspec(property(get=__get_m_Score, put=__set_m_Score))  m_Score;

constexpr void __set_m_Score(float_t value) ;

constexpr float_t __get_m_Score() const;

 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_Devices, put=__set_m_Devices))  m_Devices;

constexpr void __set_m_Devices(UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> value) ;

constexpr UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> __get_m_Devices() const;

 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_Controls, put=__set_m_Controls))  m_Controls;

constexpr void __set_m_Controls(UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> value) ;

constexpr UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> __get_m_Controls() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_m_Requirements, put=__set_m_Requirements))  m_Requirements;

constexpr void __set_m_Requirements(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_m_Requirements() const;


// Properties

 float_t __declspec(property(get=get_score))  score;

 bool __declspec(property(get=get_isSuccessfulMatch))  isSuccessfulMatch;

 bool __declspec(property(get=get_hasMissingRequiredDevices))  hasMissingRequiredDevices;

 bool __declspec(property(get=get_hasMissingOptionalDevices))  hasMissingOptionalDevices;

 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_devices))  devices;

 GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_score addr 0x28fc6f4 size 0x8 virtual false final false
 float_t get_score() ;

/// @brief Method get_isSuccessfulMatch addr 0x28fc6fc size 0x10 virtual false final false
 bool get_isSuccessfulMatch() ;

/// @brief Method get_hasMissingRequiredDevices addr 0x28fc70c size 0x10 virtual false final false
 bool get_hasMissingRequiredDevices() ;

/// @brief Method get_hasMissingOptionalDevices addr 0x28fc71c size 0x10 virtual false final false
 bool get_hasMissingOptionalDevices() ;

/// @brief Method get_devices addr 0x28fc72c size 0x13c virtual false final false
 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> get_devices() ;

/// @brief Method get_Item addr 0x28fc868 size 0x84 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match get_Item(int32_t index) ;

/// @brief Method GetEnumerator addr 0x28fc8ec size 0x70 virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28fc95c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dispose addr 0x28fc960 size 0x70 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6302))
// CS Name: UnityEngine.InputSystem.InputControlScheme::DeviceRequirement::Flags
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags& operator=(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags& operator=(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags_Unwrapped : int32_t {
__None = 0,
__Optional = 1,
__Or = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags const None;

/// @brief Field Optional offset 0
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags const Optional;

/// @brief Field Or offset 0
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags const Or;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DeviceRequirement
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6303))
// CS Name: UnityEngine.InputSystem.InputControlScheme::DeviceRequirement
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__DeviceRequirement : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Flags = GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>() const;

// Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement(::StringW m_ControlPath, GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags m_Flags) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement& operator=(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__DeviceRequirement& operator=(UnityEngine__InputSystem__InputControlScheme__DeviceRequirement&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__DeviceRequirement(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_ControlPath, put=__set_m_ControlPath))  m_ControlPath;

constexpr void __set_m_ControlPath(::StringW value) ;

constexpr ::StringW __get_m_ControlPath() const;

 GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags __get_m_Flags() const;


// Properties

 ::StringW __declspec(property(get=get_controlPath, put=set_controlPath))  controlPath;

 bool __declspec(property(get=get_isOptional, put=set_isOptional))  isOptional;

 bool __declspec(property(get=get_isAND, put=set_isAND))  isAND;

 bool __declspec(property(get=get_isOR, put=set_isOR))  isOR;


// Methods

/// @brief Method get_controlPath addr 0x28fcbc0 size 0x8 virtual false final false
 ::StringW get_controlPath() ;

/// @brief Method set_controlPath addr 0x28fcbc8 size 0x8 virtual false final false
 void set_controlPath(::StringW value) ;

/// @brief Method get_isOptional addr 0x28fca84 size 0xc virtual false final false
 bool get_isOptional() ;

/// @brief Method set_isOptional addr 0x28fcbd0 size 0x1c virtual false final false
 void set_isOptional(bool value) ;

/// @brief Method get_isAND addr 0x28fcbec size 0x10 virtual false final false
 bool get_isAND() ;

/// @brief Method set_isAND addr 0x28fcc08 size 0x1c virtual false final false
 void set_isAND(bool value) ;

/// @brief Method get_isOR addr 0x28fcbfc size 0xc virtual false final false
 bool get_isOR() ;

/// @brief Method set_isOR addr 0x28fcc24 size 0x1c virtual false final false
 void set_isOR(bool value) ;

/// @brief Method ToString addr 0x28fcc40 size 0xc4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x28fcd04 size 0x6c virtual true final true
 bool Equals(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement other) ;

/// @brief Method Equals addr 0x28fcd70 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x28fcde8 size 0xac virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x28fce94 size 0x2c virtual false final false
static bool op_Equality(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement left, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement right) ;

/// @brief Method op_Inequality addr 0x28fcec0 size 0x30 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement left, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceJson
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6304))
// CS Name: UnityEngine.InputSystem.InputControlScheme::SchemeJson::DeviceJson
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOR", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson(::StringW devicePath, bool isOptional, bool isOR) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson(UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson(UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson& operator=(UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson& operator=(UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_devicePath, put=__set_devicePath))  devicePath;

constexpr void __set_devicePath(::StringW value) ;

constexpr ::StringW __get_devicePath() const;

 bool __declspec(property(get=__get_isOptional, put=__set_isOptional))  isOptional;

constexpr void __set_isOptional(bool value) ;

constexpr bool __get_isOptional() const;

 bool __declspec(property(get=__get_isOR, put=__set_isOR))  isOR;

constexpr void __set_isOR(bool value) ;

constexpr bool __get_isOR() const;


// Methods

/// @brief Method ToDeviceEntry addr 0x28fd034 size 0x1c virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement ToDeviceEntry() ;

/// @brief Method From addr 0x28fd130 size 0x14 virtual false final false
static GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson From(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement requirement) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SchemeJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6305))
// CS Name: UnityEngine.InputSystem.InputControlScheme::SchemeJson
struct CORDL_TYPE UnityEngine__InputSystem__InputControlScheme__SchemeJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DeviceJson = GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "devices", ty: "::ArrayW<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson(::StringW name, ::StringW bindingGroup, ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> devices) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson(UnityEngine__InputSystem__InputControlScheme__SchemeJson const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson(UnityEngine__InputSystem__InputControlScheme__SchemeJson&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson& operator=(UnityEngine__InputSystem__InputControlScheme__SchemeJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlScheme__SchemeJson& operator=(UnityEngine__InputSystem__InputControlScheme__SchemeJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlScheme__SchemeJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_bindingGroup, put=__set_bindingGroup))  bindingGroup;

constexpr void __set_bindingGroup(::StringW value) ;

constexpr ::StringW __get_bindingGroup() const;

 ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> __declspec(property(get=__get_devices, put=__set_devices))  devices;

constexpr void __set_devices(::ArrayW<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson> __get_devices() const;


// Methods

/// @brief Method ToScheme addr 0x28fcef0 size 0x144 virtual false final false
 UnityEngine::InputSystem::InputControlScheme ToScheme() ;

/// @brief Method ToJson addr 0x28fd050 size 0xe0 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__SchemeJson ToJson(UnityEngine::InputSystem::InputControlScheme scheme) ;

/// @brief Method ToJson addr 0x28fd144 size 0x108 virtual false final false
static ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__SchemeJson> ToJson(::ArrayW<UnityEngine::InputSystem::InputControlScheme> schemes) ;

/// @brief Method ToSchemes addr 0x28fd24c size 0xf8 virtual false final false
static ::ArrayW<UnityEngine::InputSystem::InputControlScheme> ToSchemes(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__SchemeJson> schemes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlScheme
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6306))
// CS Name: UnityEngine.InputSystem.InputControlScheme
struct CORDL_TYPE InputControlScheme : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using SchemeJson = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__SchemeJson;

using DeviceRequirement = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement;

using MatchResult = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::InputControlScheme>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::InputControlScheme>() const;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_DeviceRequirements", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }]
constexpr InputControlScheme(::StringW m_Name, ::StringW m_BindingGroup, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_DeviceRequirements) noexcept;


                    constexpr InputControlScheme(InputControlScheme const&) = default;
                    constexpr InputControlScheme(InputControlScheme&&) = default;
                    constexpr InputControlScheme& operator=(InputControlScheme const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputControlScheme& operator=(InputControlScheme&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputControlScheme(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 ::StringW __declspec(property(get=__get_m_BindingGroup, put=__set_m_BindingGroup))  m_BindingGroup;

constexpr void __set_m_BindingGroup(::StringW value) ;

constexpr ::StringW __get_m_BindingGroup() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_m_DeviceRequirements, put=__set_m_DeviceRequirements))  m_DeviceRequirements;

constexpr void __set_m_DeviceRequirements(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_m_DeviceRequirements() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 ::StringW __declspec(property(get=get_bindingGroup, put=set_bindingGroup))  bindingGroup;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=get_deviceRequirements))  deviceRequirements;


// Methods

/// @brief Method get_name addr 0x28f84c0 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_bindingGroup addr 0x28f84c8 size 0x8 virtual false final false
 ::StringW get_bindingGroup() ;

/// @brief Method set_bindingGroup addr 0x28f84d0 size 0x8 virtual false final false
 void set_bindingGroup(::StringW value) ;

/// @brief Method get_deviceRequirements addr 0x28f84d8 size 0x60 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> get_deviceRequirements() ;

/// @brief Method .ctor addr 0x28f8538 size 0xf4 virtual false final false
 void _ctor(::StringW name, System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> devices, ::StringW bindingGroup) ;

/// @brief Method SetNameAndBindingGroup addr 0x28f862c size 0xb8 virtual false final false
 void SetNameAndBindingGroup(::StringW name, ::StringW bindingGroup) ;

/// @brief Method FindControlSchemeForDevices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevices,typename TSchemes>
static System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevices(TDevices devices, TSchemes schemes, UnityEngine::InputSystem::InputDevice mustIncludeDevice, bool allowUnsuccesfulMatch) ;

/// @brief Method FindControlSchemeForDevices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevices,typename TSchemes>
static bool FindControlSchemeForDevices(TDevices devices, TSchemes schemes, ByRef<UnityEngine::InputSystem::InputControlScheme> controlScheme, ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult> matchResult, UnityEngine::InputSystem::InputDevice mustIncludeDevice, bool allowUnsuccessfulMatch) ;

/// @brief Method FindControlSchemeForDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSchemes>
static System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevice(UnityEngine::InputSystem::InputDevice device, TSchemes schemes) ;

/// @brief Method SupportsDevice addr 0x28f86e4 size 0xd4 virtual false final false
 bool SupportsDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method PickDevicesFrom addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevices>
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult PickDevicesFrom(TDevices devices, UnityEngine::InputSystem::InputDevice favorDevice) ;

/// @brief Method Equals addr 0x28f87b8 size 0x13c virtual true final true
 bool Equals(UnityEngine::InputSystem::InputControlScheme other) ;

/// @brief Method Equals addr 0x28f88f4 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x28f8984 size 0x80 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x28f8a04 size 0x184 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x28f8b88 size 0x30 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::InputControlScheme left, UnityEngine::InputSystem::InputControlScheme right) ;

/// @brief Method op_Inequality addr 0x28f8bb8 size 0x1034 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::InputControlScheme left, UnityEngine::InputSystem::InputControlScheme right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement/Flags");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Result, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Result");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Enumerator, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__MatchResult__Match, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Match");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputControlScheme__SchemeJson__DeviceJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson/DeviceJson");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputControlScheme, "UnityEngine.InputSystem", "InputControlScheme");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult, "UnityEngine.InputSystem", "InputControlScheme/MatchResult");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__SchemeJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson");
