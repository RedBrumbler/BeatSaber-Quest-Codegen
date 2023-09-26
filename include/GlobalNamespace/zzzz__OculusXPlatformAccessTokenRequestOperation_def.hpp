#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;
}
namespace GlobalNamespace {
class OculusXPlatformAccessTokenRequestOperation;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;
}
// Type: ::OculusTokenRequestOperationState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4716))
// CS Name: OculusXPlatformAccessTokenRequestOperation::OculusTokenRequestOperationState
struct CORDL_TYPE GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const&) = default;
                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState&&) = default;
                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState& operator=(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState& operator=(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped : int32_t {
__NotStarted = 0,
__Requesting = 1,
__Succeeded = 2,
__Failed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotStarted offset 0
static GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const NotStarted;

/// @brief Field Requesting offset 0
static GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Requesting;

/// @brief Field Succeeded offset 0
static GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Succeeded;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4717))
// CS Name: OculusXPlatformAccessTokenRequestOperation::<RequestXPlatformAccessToken>d__7
struct CORDL_TYPE GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusXPlatformAccessTokenRequestOperation", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> __t__builder, GlobalNamespace::OculusXPlatformAccessTokenRequestOperation __4__this, System::Threading::CancellationToken cancellationToken, int32_t _attemptCount_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7 const&) = default;
                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7&&) = default;
                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7& operator=(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7& operator=(GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> __get___t__builder() const;

 GlobalNamespace::OculusXPlatformAccessTokenRequestOperation __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusXPlatformAccessTokenRequestOperation value) ;

constexpr GlobalNamespace::OculusXPlatformAccessTokenRequestOperation __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 int32_t __declspec(property(get=__get__attemptCount_5__2, put=__set__attemptCount_5__2))  _attemptCount_5__2;

constexpr void __set__attemptCount_5__2(int32_t value) ;

constexpr int32_t __get__attemptCount_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2258fcc size 0x2d8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22592a4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusXPlatformAccessTokenRequestOperation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4718))
// CS Name: OculusXPlatformAccessTokenRequestOperation
class CORDL_TYPE OculusXPlatformAccessTokenRequestOperation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _RequestXPlatformAccessToken_d__7 = GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;

using OculusTokenRequestOperationState = GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OculusXPlatformAccessTokenRequestOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: " const&", def_value: None }]
constexpr OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "&&", def_value: None }]
constexpr OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusXPlatformAccessTokenRequestOperation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusXPlatformAccessTokenRequestOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusXPlatformAccessTokenRequestOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusXPlatformAccessTokenRequestOperation& operator=(OculusXPlatformAccessTokenRequestOperation&& o) noexcept = default;
  constexpr OculusXPlatformAccessTokenRequestOperation& operator=(OculusXPlatformAccessTokenRequestOperation const& o) noexcept = default;
                


// Fields

 GlobalNamespace::XPlatformAccessTokenData __declspec(property(get=__get__tokenData, put=__set__tokenData))  _tokenData;

constexpr void __set__tokenData(GlobalNamespace::XPlatformAccessTokenData value) ;

constexpr GlobalNamespace::XPlatformAccessTokenData __get__tokenData() const;

 GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState __declspec(property(get=__get__operationState, put=__set__operationState))  _operationState;

constexpr void __set__operationState(GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState value) ;

constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState __get__operationState() const;

/// @brief Field kMillisecondsDelayToCheckCallbackResponse offset 0
static constexpr int32_t  kMillisecondsDelayToCheckCallbackResponse{500};

/// @brief Field kMaxTokenRetry offset 0
static constexpr int32_t  kMaxTokenRetry{3};


// Methods

// Ctor Parameters []
explicit OculusXPlatformAccessTokenRequestOperation() ;

/// @brief Method .ctor addr 0x2258c30 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method Run addr 0x2256e18 size 0x68 virtual false final false
static System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> Run(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method RequestXPlatformAccessToken addr 0x2258c4c size 0xf8 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> RequestXPlatformAccessToken(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method RequestAccessToken addr 0x2258d44 size 0x10c virtual false final false
 void RequestAccessToken() ;

/// @brief Method OnCompleteLoadingOculusAccessToken addr 0x2258e50 size 0x17c virtual false final false
 void OnCompleteLoadingOculusAccessToken(Oculus::Platform::Message_1<::StringW> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, "", "OculusXPlatformAccessTokenRequestOperation/OculusTokenRequestOperationState");
NEED_NO_BOX(GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, "", "OculusXPlatformAccessTokenRequestOperation");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, "", "OculusXPlatformAccessTokenRequestOperation/<RequestXPlatformAccessToken>d__7");
