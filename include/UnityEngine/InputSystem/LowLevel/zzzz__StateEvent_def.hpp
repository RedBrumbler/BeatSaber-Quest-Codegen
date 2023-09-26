#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct StateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer;
}
// Type: ::<stateData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6647))
// CS Name: UnityEngine.InputSystem.LowLevel.StateEvent::<stateData>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::StateEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6648))
// CS Name: UnityEngine.InputSystem.LowLevel.StateEvent
struct CORDL_TYPE StateEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _stateData_e__FixedBuffer = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "stateFormat", ty: "UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "stateData", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr StateEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, UnityEngine::InputSystem::Utilities::FourCC stateFormat, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer stateData) noexcept;


                    constexpr StateEvent(StateEvent const&) = default;
                    constexpr StateEvent(StateEvent&&) = default;
                    constexpr StateEvent& operator=(StateEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StateEvent& operator=(StateEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x19};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StateEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Type offset 0
static constexpr int32_t  Type{1398030676};

/// @brief Field kStateDataSizeToSubtract offset 0
static constexpr int32_t  kStateDataSizeToSubtract{1};

 UnityEngine::InputSystem::LowLevel::InputEvent __declspec(property(get=__get_baseEvent, put=__set_baseEvent))  baseEvent;

constexpr void __set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEvent __get_baseEvent() const;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_stateFormat, put=__set_stateFormat))  stateFormat;

constexpr void __set_stateFormat(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get_stateFormat() const;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer __declspec(property(get=__get_stateData, put=__set_stateData))  stateData;

constexpr void __set_stateData(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer __get_stateData() const;


// Properties

 uint32_t __declspec(property(get=get_stateSizeInBytes))  stateSizeInBytes;

 void* __declspec(property(get=get_state))  state;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_stateSizeInBytes addr 0x29894cc size 0xc virtual false final false
 uint32_t get_stateSizeInBytes() ;

/// @brief Method get_state addr 0x298dc4c size 0x8 virtual false final false
 void* get_state() ;

/// @brief Method ToEventPtr addr 0x298dc54 size 0x4 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

/// @brief Method get_typeStatic addr 0x298dc58 size 0x20 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
 TState GetState() ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static TState GetState(UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) ;

/// @brief Method GetEventSizeWithPayload addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static int32_t GetEventSizeWithPayload() ;

/// @brief Method From addr 0x298939c size 0x130 virtual false final false
static void* From(UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) ;

/// @brief Method FromUnchecked addr 0x29891e4 size 0x4 virtual false final false
static void* FromUnchecked(UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) ;

/// @brief Method From addr 0x298dc78 size 0x8 virtual false final false
static Unity::Collections::NativeArray_1<uint8_t> From(UnityEngine::InputSystem::InputDevice device, ByRef<UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr, Unity::Collections::Allocator allocator) ;

/// @brief Method FromDefaultStateFor addr 0x298dfb8 size 0x8 virtual false final false
static Unity::Collections::NativeArray_1<uint8_t> FromDefaultStateFor(UnityEngine::InputSystem::InputDevice device, ByRef<UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr, Unity::Collections::Allocator allocator) ;

/// @brief Method From addr 0x298dc80 size 0x338 virtual false final false
static Unity::Collections::NativeArray_1<uint8_t> From(UnityEngine::InputSystem::InputDevice device, ByRef<UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr, Unity::Collections::Allocator allocator, bool useDefaultState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::StateEvent, "UnityEngine.InputSystem.LowLevel", "StateEvent");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "StateEvent/<stateData>e__FixedBuffer");
