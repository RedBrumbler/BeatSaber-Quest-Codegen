#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
class Version;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct DeltaStateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct StateEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputSystem;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputSystem____c;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputSystem__StateEventBuffer;
}
// Type: ::<data>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6309))
// CS Name: UnityEngine.InputSystem.InputSystem::StateEventBuffer::<data>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer(UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer(UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer& operator=(UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer& operator=(UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1ff};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
} // namespace end def GlobalNamespace
// Type: ::StateEventBuffer
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6310))
// CS Name: UnityEngine.InputSystem.InputSystem::StateEventBuffer
struct CORDL_TYPE UnityEngine__InputSystem__InputSystem__StateEventBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _data_e__FixedBuffer = GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "stateEvent", ty: "UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: None }, CppParam { name: "data", ty: "GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer(UnityEngine::InputSystem::LowLevel::StateEvent stateEvent, GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer data) noexcept;


                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer(UnityEngine__InputSystem__InputSystem__StateEventBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer(UnityEngine__InputSystem__InputSystem__StateEventBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer& operator=(UnityEngine__InputSystem__InputSystem__StateEventBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSystem__StateEventBuffer& operator=(UnityEngine__InputSystem__InputSystem__StateEventBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x218};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSystem__StateEventBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::StateEvent __declspec(property(get=__get_stateEvent, put=__set_stateEvent))  stateEvent;

constexpr void __set_stateEvent(UnityEngine::InputSystem::LowLevel::StateEvent value) ;

constexpr UnityEngine::InputSystem::LowLevel::StateEvent __get_stateEvent() const;

/// @brief Field kMaxSize offset 0
static constexpr int32_t  kMaxSize{512};

 GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<data>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6311))
// CS Name: UnityEngine.InputSystem.InputSystem::DeltaStateEventBuffer::<data>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer& operator=(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer& operator=(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1ff};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
} // namespace end def GlobalNamespace
// Type: ::DeltaStateEventBuffer
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6312))
// CS Name: UnityEngine.InputSystem.InputSystem::DeltaStateEventBuffer
struct CORDL_TYPE UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _data_e__FixedBuffer = GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "stateEvent", ty: "UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: None }, CppParam { name: "data", ty: "GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer(UnityEngine::InputSystem::LowLevel::DeltaStateEvent stateEvent, GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer data) noexcept;


                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer& operator=(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer& operator=(UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x21c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::DeltaStateEvent __declspec(property(get=__get_stateEvent, put=__set_stateEvent))  stateEvent;

constexpr void __set_stateEvent(UnityEngine::InputSystem::LowLevel::DeltaStateEvent value) ;

constexpr UnityEngine::InputSystem::LowLevel::DeltaStateEvent __get_stateEvent() const;

/// @brief Field kMaxSize offset 0
static constexpr int32_t  kMaxSize{512};

 GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6313))
// CS Name: UnityEngine.InputSystem.InputSystem::<>c
class CORDL_TYPE UnityEngine__InputSystem__InputSystem____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputSystem____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputSystem____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputSystem____c(UnityEngine__InputSystem__InputSystem____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputSystem____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputSystem____c(UnityEngine__InputSystem__InputSystem____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSystem____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputSystem____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputSystem____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputSystem____c& operator=(UnityEngine__InputSystem__InputSystem____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputSystem____c& operator=(UnityEngine__InputSystem__InputSystem____c const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem____c value) ;

static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem____c __get___9() ;

static System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputControl> __declspec(property(get=__get___9__79_0, put=__set___9__79_0))  __9__79_0;

static void __set___9__79_0(System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputControl> value) ;

static System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputControl> __get___9__79_0() ;

static System::Func_2<UnityEngine::InputSystem::InputControl,bool> __declspec(property(get=__get___9__79_1, put=__set___9__79_1))  __9__79_1;

static void __set___9__79_1(System::Func_2<UnityEngine::InputSystem::InputControl,bool> value) ;

static System::Func_2<UnityEngine::InputSystem::InputControl,bool> __get___9__79_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__InputSystem____c() ;

/// @brief Method .ctor addr 0x290236c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_onAnyButtonPress>b__79_0 addr 0x2902374 size 0x10 virtual false final false
 UnityEngine::InputSystem::InputControl _get_onAnyButtonPress_b__79_0(UnityEngine::InputSystem::LowLevel::InputEventPtr e) ;

/// @brief Method <get_onAnyButtonPress>b__79_1 addr 0x290255c size 0xc virtual false final false
 bool _get_onAnyButtonPress_b__79_1(UnityEngine::InputSystem::InputControl c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputSystem
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6314))
// CS Name: UnityEngine.InputSystem.InputSystem
class CORDL_TYPE InputSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem____c;

using DeltaStateEventBuffer = UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer;

using StateEventBuffer = UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem__StateEventBuffer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: " const&", def_value: None }]
constexpr InputSystem(InputSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "&&", def_value: None }]
constexpr InputSystem(InputSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputSystem& operator=(InputSystem&& o) noexcept = default;
  constexpr InputSystem& operator=(InputSystem const& o) noexcept = default;
                


// Fields

/// @brief Field kAssemblyVersion offset 0
static constexpr ::ConstString  kAssemblyVersion{u"1.4.4"};

/// @brief Field kDocUrl offset 0
static constexpr ::ConstString  kDocUrl{u"https://docs.unity3d.com/Packages/com.unity.inputsystem@1.4"};

static UnityEngine::InputSystem::InputManager __declspec(property(get=__get_s_Manager, put=__set_s_Manager))  s_Manager;

static void __set_s_Manager(UnityEngine::InputSystem::InputManager value) ;

static UnityEngine::InputSystem::InputManager __get_s_Manager() ;

static UnityEngine::InputSystem::InputRemoting __declspec(property(get=__get_s_Remote, put=__set_s_Remote))  s_Remote;

static void __set_s_Remote(UnityEngine::InputSystem::InputRemoting value) ;

static UnityEngine::InputSystem::InputRemoting __get_s_Remote() ;


// Properties

static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_devices))  devices;

static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_disconnectedDevices))  disconnectedDevices;

static float_t __declspec(property(get=get_pollingFrequency, put=set_pollingFrequency))  pollingFrequency;

static bool __declspec(property(get=get_isProcessingEvents))  isProcessingEvents;

static UnityEngine::InputSystem::LowLevel::InputEventListener __declspec(property(get=get_onEvent, put=set_onEvent))  onEvent;

static System::IObservable_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=get_onAnyButtonPress))  onAnyButtonPress;

static UnityEngine::InputSystem::InputSettings __declspec(property(get=get_settings, put=set_settings))  settings;

static UnityEngine::InputSystem::InputRemoting __declspec(property(get=get_remoting))  remoting;

static System::Version __declspec(property(get=get_version))  version;

static UnityEngine::InputSystem::LowLevel::InputMetrics __declspec(property(get=get_metrics))  metrics;


// Methods

/// @brief Method add_onLayoutChange addr 0x28fd658 size 0x12c virtual false final false
static void add_onLayoutChange(System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange> value) ;

/// @brief Method remove_onLayoutChange addr 0x28fd784 size 0x12c virtual false final false
static void remove_onLayoutChange(System::Action_2<::StringW,UnityEngine::InputSystem::InputControlLayoutChange> value) ;

/// @brief Method RegisterLayout addr 0x28fd8b0 size 0x1a4 virtual false final false
static void RegisterLayout(System::Type type, ::StringW name, System::Nullable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) ;

/// @brief Method RegisterLayout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RegisterLayout(::StringW name, System::Nullable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) ;

/// @brief Method RegisterLayout addr 0x28fda54 size 0xfc virtual false final false
static void RegisterLayout(::StringW json, ::StringW name, System::Nullable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) ;

/// @brief Method RegisterLayoutOverride addr 0x28fdb50 size 0x80 virtual false final false
static void RegisterLayoutOverride(::StringW json, ::StringW name) ;

/// @brief Method RegisterLayoutMatcher addr 0x28fdbd0 size 0x7c virtual false final false
static void RegisterLayoutMatcher(::StringW layoutName, UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) ;

/// @brief Method RegisterLayoutMatcher addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static void RegisterLayoutMatcher(UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) ;

/// @brief Method RegisterLayoutBuilder addr 0x28fdc4c size 0x184 virtual false final false
static void RegisterLayoutBuilder(System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout> buildMethod, ::StringW name, ::StringW baseLayout, System::Nullable_1<UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) ;

/// @brief Method RegisterPrecompiledLayout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static void RegisterPrecompiledLayout(::StringW metadata) ;

/// @brief Method RemoveLayout addr 0x28fddd0 size 0x6c virtual false final false
static void RemoveLayout(::StringW name) ;

/// @brief Method TryFindMatchingLayout addr 0x28fde3c size 0x78 virtual false final false
static ::StringW TryFindMatchingLayout(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) ;

/// @brief Method ListLayouts addr 0x28fdeb4 size 0x68 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> ListLayouts() ;

/// @brief Method ListLayoutsBasedOn addr 0x28fdf1c size 0xc8 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> ListLayoutsBasedOn(::StringW baseLayout) ;

/// @brief Method LoadLayout addr 0x28fdfe4 size 0xec virtual false final false
static UnityEngine::InputSystem::Layouts::InputControlLayout LoadLayout(::StringW name) ;

/// @brief Method LoadLayout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static UnityEngine::InputSystem::Layouts::InputControlLayout LoadLayout() ;

/// @brief Method GetNameOfBaseLayout addr 0x28fe0d0 size 0x11c virtual false final false
static ::StringW GetNameOfBaseLayout(::StringW layoutName) ;

/// @brief Method IsFirstLayoutBasedOnSecond addr 0x28fe1ec size 0x150 virtual false final false
static bool IsFirstLayoutBasedOnSecond(::StringW firstLayoutName, ::StringW secondLayoutName) ;

/// @brief Method RegisterProcessor addr 0x28fe33c size 0x3e0 virtual false final false
static void RegisterProcessor(System::Type type, ::StringW name) ;

/// @brief Method RegisterProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RegisterProcessor(::StringW name) ;

/// @brief Method TryGetProcessor addr 0x28fe71c size 0xdc virtual false final false
static System::Type TryGetProcessor(::StringW name) ;

/// @brief Method ListProcessors addr 0x28fe7f8 size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> ListProcessors() ;

/// @brief Method get_devices addr 0x28fe870 size 0x64 virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> get_devices() ;

/// @brief Method get_disconnectedDevices addr 0x28fe8d4 size 0x9c virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> get_disconnectedDevices() ;

/// @brief Method add_onDeviceChange addr 0x28fe970 size 0x17c virtual false final false
static void add_onDeviceChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value) ;

/// @brief Method remove_onDeviceChange addr 0x28feaec size 0x17c virtual false final false
static void remove_onDeviceChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value) ;

/// @brief Method add_onDeviceCommand addr 0x28fec68 size 0x17c virtual false final false
static void add_onDeviceCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate value) ;

/// @brief Method remove_onDeviceCommand addr 0x28fede4 size 0x17c virtual false final false
static void remove_onDeviceCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate value) ;

/// @brief Method add_onFindLayoutForDevice addr 0x28fef60 size 0x12c virtual false final false
static void add_onFindLayoutForDevice(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate value) ;

/// @brief Method remove_onFindLayoutForDevice addr 0x28ff08c size 0x12c virtual false final false
static void remove_onFindLayoutForDevice(UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate value) ;

/// @brief Method get_pollingFrequency addr 0x28ff1b8 size 0x64 virtual false final false
static float_t get_pollingFrequency() ;

/// @brief Method set_pollingFrequency addr 0x28ff21c size 0x74 virtual false final false
static void set_pollingFrequency(float_t value) ;

/// @brief Method AddDevice addr 0x28ff290 size 0x104 virtual false final false
static UnityEngine::InputSystem::InputDevice AddDevice(::StringW layout, ::StringW name, ::StringW variants) ;

/// @brief Method AddDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static TDevice AddDevice(::StringW name) ;

/// @brief Method AddDevice addr 0x28ff394 size 0x118 virtual false final false
static UnityEngine::InputSystem::InputDevice AddDevice(UnityEngine::InputSystem::Layouts::InputDeviceDescription description) ;

/// @brief Method AddDevice addr 0x28ff4ac size 0xbc virtual false final false
static void AddDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method RemoveDevice addr 0x28ff568 size 0x70 virtual false final false
static void RemoveDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method FlushDisconnectedDevices addr 0x28ff5d8 size 0x64 virtual false final false
static void FlushDisconnectedDevices() ;

/// @brief Method GetDevice addr 0x28ff63c size 0x6c virtual false final false
static UnityEngine::InputSystem::InputDevice GetDevice(::StringW nameOrLayout) ;

/// @brief Method GetDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static TDevice GetDevice() ;

/// @brief Method GetDevice addr 0x28ff6a8 size 0x204 virtual false final false
static UnityEngine::InputSystem::InputDevice GetDevice(System::Type type) ;

/// @brief Method GetDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static TDevice GetDevice(UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method GetDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static TDevice GetDevice(::StringW usage) ;

/// @brief Method GetDeviceById addr 0x28ff8ac size 0x6c virtual false final false
static UnityEngine::InputSystem::InputDevice GetDeviceById(int32_t deviceId) ;

/// @brief Method GetUnsupportedDevices addr 0x28ff918 size 0x9c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription> GetUnsupportedDevices() ;

/// @brief Method GetUnsupportedDevices addr 0x28ff9b4 size 0x6c virtual false final false
static int32_t GetUnsupportedDevices(System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription> descriptions) ;

/// @brief Method EnableDevice addr 0x28ffa20 size 0x74 virtual false final false
static void EnableDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method DisableDevice addr 0x28ffa94 size 0x80 virtual false final false
static void DisableDevice(UnityEngine::InputSystem::InputDevice device, bool keepSendingEvents) ;

/// @brief Method TrySyncDevice addr 0x28ffb14 size 0xd4 virtual false final false
static bool TrySyncDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ResetDevice addr 0x28ffc64 size 0x80 virtual false final false
static void ResetDevice(UnityEngine::InputSystem::InputDevice device, bool alsoResetDontResetControls) ;

/// @brief Method TryResetDevice addr 0x28ffce4 size 0x58 virtual false final false
static bool TryResetDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method PauseHaptics addr 0x28ffda8 size 0x130 virtual false final false
static void PauseHaptics() ;

/// @brief Method ResumeHaptics addr 0x28ffed8 size 0x134 virtual false final false
static void ResumeHaptics() ;

/// @brief Method ResetHaptics addr 0x290000c size 0x134 virtual false final false
static void ResetHaptics() ;

/// @brief Method SetDeviceUsage addr 0x2900140 size 0x84 virtual false final false
static void SetDeviceUsage(UnityEngine::InputSystem::InputDevice device, ::StringW usage) ;

/// @brief Method SetDeviceUsage addr 0x29001c4 size 0x84 virtual false final false
static void SetDeviceUsage(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method AddDeviceUsage addr 0x2900248 size 0xa0 virtual false final false
static void AddDeviceUsage(UnityEngine::InputSystem::InputDevice device, ::StringW usage) ;

/// @brief Method AddDeviceUsage addr 0x29002e8 size 0x84 virtual false final false
static void AddDeviceUsage(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method RemoveDeviceUsage addr 0x290036c size 0xa0 virtual false final false
static void RemoveDeviceUsage(UnityEngine::InputSystem::InputDevice device, ::StringW usage) ;

/// @brief Method RemoveDeviceUsage addr 0x290040c size 0x84 virtual false final false
static void RemoveDeviceUsage(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method FindControl addr 0x2900490 size 0x140 virtual false final false
static UnityEngine::InputSystem::InputControl FindControl(::StringW path) ;

/// @brief Method FindControls addr 0x2900630 size 0x90 virtual false final false
static UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputControl> FindControls(::StringW path) ;

/// @brief Method FindControls addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static UnityEngine::InputSystem::InputControlList_1<TControl> FindControls(::StringW path) ;

/// @brief Method FindControls addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static int32_t FindControls(::StringW path, ByRef<UnityEngine::InputSystem::InputControlList_1<TControl>> controls) ;

/// @brief Method get_isProcessingEvents addr 0x29006c0 size 0x64 virtual false final false
static bool get_isProcessingEvents() ;

/// @brief Method get_onEvent addr 0x2900724 size 0x8 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventListener get_onEvent() ;

/// @brief Method set_onEvent addr 0x290072c size 0x4 virtual false final false
static void set_onEvent(UnityEngine::InputSystem::LowLevel::InputEventListener value) ;

/// @brief Method get_onAnyButtonPress addr 0x2900730 size 0x208 virtual false final false
static System::IObservable_1<UnityEngine::InputSystem::InputControl> get_onAnyButtonPress() ;

/// @brief Method QueueEvent addr 0x2900938 size 0xe0 virtual false final false
static void QueueEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEvent>
static void QueueEvent(ByRef<TEvent> inputEvent) ;

/// @brief Method QueueStateEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static void QueueStateEvent(UnityEngine::InputSystem::InputDevice device, TState state, double_t time) ;

/// @brief Method QueueDeltaStateEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDelta>
static void QueueDeltaStateEvent(UnityEngine::InputSystem::InputControl control, TDelta delta, double_t time) ;

/// @brief Method QueueConfigChangeEvent addr 0x2900a18 size 0x218 virtual false final false
static void QueueConfigChangeEvent(UnityEngine::InputSystem::InputDevice device, double_t time) ;

/// @brief Method QueueTextEvent addr 0x2900c30 size 0x228 virtual false final false
static void QueueTextEvent(UnityEngine::InputSystem::InputDevice device, char16_t character, double_t time) ;

/// @brief Method Update addr 0x2900e58 size 0x64 virtual false final false
static void Update() ;

/// @brief Method Update addr 0x2900ebc size 0x158 virtual false final false
static void Update(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method add_onBeforeUpdate addr 0x2901078 size 0x12c virtual false final false
static void add_onBeforeUpdate(System::Action value) ;

/// @brief Method remove_onBeforeUpdate addr 0x29011a4 size 0x12c virtual false final false
static void remove_onBeforeUpdate(System::Action value) ;

/// @brief Method add_onAfterUpdate addr 0x29012d0 size 0x12c virtual false final false
static void add_onAfterUpdate(System::Action value) ;

/// @brief Method remove_onAfterUpdate addr 0x29013fc size 0x12c virtual false final false
static void remove_onAfterUpdate(System::Action value) ;

/// @brief Method get_settings addr 0x2901014 size 0x64 virtual false final false
static UnityEngine::InputSystem::InputSettings get_settings() ;

/// @brief Method set_settings addr 0x2901528 size 0x144 virtual false final false
static void set_settings(UnityEngine::InputSystem::InputSettings value) ;

/// @brief Method add_onSettingsChange addr 0x290166c size 0x6c virtual false final false
static void add_onSettingsChange(System::Action value) ;

/// @brief Method remove_onSettingsChange addr 0x29016d8 size 0x6c virtual false final false
static void remove_onSettingsChange(System::Action value) ;

/// @brief Method add_onActionChange addr 0x2901744 size 0xb8 virtual false final false
static void add_onActionChange(System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange> value) ;

/// @brief Method remove_onActionChange addr 0x29017fc size 0xb8 virtual false final false
static void remove_onActionChange(System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange> value) ;

/// @brief Method RegisterInteraction addr 0x29018b4 size 0x18c virtual false final false
static void RegisterInteraction(System::Type type, ::StringW name) ;

/// @brief Method RegisterInteraction addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RegisterInteraction(::StringW name) ;

/// @brief Method TryGetInteraction addr 0x2901a40 size 0xdc virtual false final false
static System::Type TryGetInteraction(::StringW name) ;

/// @brief Method ListInteractions addr 0x2901b1c size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> ListInteractions() ;

/// @brief Method RegisterBindingComposite addr 0x2901b94 size 0x18c virtual false final false
static void RegisterBindingComposite(System::Type type, ::StringW name) ;

/// @brief Method RegisterBindingComposite addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RegisterBindingComposite(::StringW name) ;

/// @brief Method TryGetBindingComposite addr 0x2901d20 size 0xdc virtual false final false
static System::Type TryGetBindingComposite(::StringW name) ;

/// @brief Method DisableAllEnabledActions addr 0x2901dfc size 0x8 virtual false final false
static void DisableAllEnabledActions() ;

/// @brief Method ListEnabledActions addr 0x2901e04 size 0x9c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::InputSystem::InputAction> ListEnabledActions() ;

/// @brief Method ListEnabledActions addr 0x2901ea0 size 0x5c virtual false final false
static int32_t ListEnabledActions(System::Collections::Generic::List_1<UnityEngine::InputSystem::InputAction> actions) ;

/// @brief Method get_remoting addr 0x2901efc size 0x58 virtual false final false
static UnityEngine::InputSystem::InputRemoting get_remoting() ;

/// @brief Method get_version addr 0x2901f54 size 0x74 virtual false final false
static System::Version get_version() ;

/// @brief Method get_metrics addr 0x2901fc8 size 0x94 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method RunInitializeInPlayer addr 0x2902200 size 0x7c virtual false final false
static void RunInitializeInPlayer() ;

/// @brief Method EnsureInitialized addr 0x290227c size 0x4 virtual false final false
static void EnsureInitialized() ;

/// @brief Method InitializeInPlayer addr 0x2902068 size 0x198 virtual false final false
static void InitializeInPlayer(UnityEngine::InputSystem::LowLevel::IInputRuntime runtime, UnityEngine::InputSystem::InputSettings settings) ;

/// @brief Method RunInitialUpdate addr 0x29022b8 size 0x50 virtual false final false
static void RunInitialUpdate() ;

/// @brief Method PerformDefaultPluginInitialization addr 0x2902280 size 0x38 virtual false final false
static void PerformDefaultPluginInitialization() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::InputSystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputSystem, "UnityEngine.InputSystem", "InputSystem");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem____c, "UnityEngine.InputSystem", "InputSystem/<>c");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer/<data>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputSystem__StateEventBuffer___data_e__FixedBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer/<data>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem__DeltaStateEventBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSystem__StateEventBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer");
