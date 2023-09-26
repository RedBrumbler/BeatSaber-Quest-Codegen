#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class User;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0;
}
namespace GlobalNamespace {
class OculusPlatformUserModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9;
}
// Type: ::<>c__DisplayClass9_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4698))
// CS Name: OculusPlatformUserModel::<>c__DisplayClass9_0
class CORDL_TYPE GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo> __get_tcs() const;

 GlobalNamespace::OculusPlatformUserModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformUserModel value) ;

constexpr GlobalNamespace::OculusPlatformUserModel __get___4__this() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0() ;

/// @brief Method .ctor addr 0x2256e88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUserInfo>b__0 addr 0x2256e90 size 0x11c virtual false final false
 void _GetUserInfo_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::User> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetUserInfo>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4699))
// CS Name: OculusPlatformUserModel::<GetUserInfo>d__9
struct CORDL_TYPE GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformUserModel", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> __t__builder, GlobalNamespace::OculusPlatformUserModel __4__this, GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __u__2) noexcept;


                    constexpr GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9(GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9 const&) = default;
                    constexpr GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9(GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9&&) = default;
                    constexpr GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9& operator=(GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9& operator=(GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> __get___t__builder() const;

 GlobalNamespace::OculusPlatformUserModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformUserModel value) ;

constexpr GlobalNamespace::OculusPlatformUserModel __get___4__this() const;

 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 __get___8__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x2256fe8 size 0x494 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x225747c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4700))
// CS Name: OculusPlatformUserModel::<>c__DisplayClass10_0
class CORDL_TYPE GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> __get_tcs() const;

 GlobalNamespace::OculusPlatformUserModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformUserModel value) ;

constexpr GlobalNamespace::OculusPlatformUserModel __get___4__this() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x2256974 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUserFriendsUserIds>b__0 addr 0x22574d4 size 0x43c virtual false final false
 void _GetUserFriendsUserIds_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass11_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4701))
// CS Name: OculusPlatformUserModel::<>c__DisplayClass11_0
class CORDL_TYPE GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData> __get_tcs() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0() ;

/// @brief Method .ctor addr 0x2256ab0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUserAuthToken>b__0 addr 0x2257910 size 0xc4 virtual false final false
 void _GetUserAuthToken_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4702))
// CS Name: OculusPlatformUserModel::<>c__DisplayClass12_0
class CORDL_TYPE GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_requests, put=__set_requests))  requests;

constexpr void __set_requests(int32_t value) ;

constexpr int32_t __get_requests() const;

 bool __declspec(property(get=__get_success, put=__set_success))  success;

constexpr void __set_success(bool value) ;

constexpr bool __get_success() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_userNames, put=__set_userNames))  userNames;

constexpr void __set_userNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_userNames() const;

 System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> __declspec(property(get=__get_tcs, put=__set_tcs))  tcs;

constexpr void __set_tcs(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> __get_tcs() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x2256d14 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUserNamesForUserIds>g__Fetch|0 addr 0x2256d1c size 0xf4 virtual false final false
 void _GetUserNamesForUserIds_g__Fetch_0(int32_t index, uint64_t platformId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4703))
// CS Name: OculusPlatformUserModel::<>c__DisplayClass12_1
class CORDL_TYPE GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1& operator=(GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1() ;

/// @brief Method .ctor addr 0x22579d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUserNamesForUserIds>b__1 addr 0x22579dc size 0x128 virtual false final false
 void _GetUserNamesForUserIds_b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::User> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusPlatformUserModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4704))
// CS Name: OculusPlatformUserModel
class CORDL_TYPE OculusPlatformUserModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass12_1 = GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1;

using __c__DisplayClass12_0 = GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0;

using __c__DisplayClass11_0 = GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0;

using __c__DisplayClass10_0 = GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0;

using _GetUserInfo_d__9 = GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9;

using __c__DisplayClass9_0 = GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0;

/// @brief Convert operator to GlobalNamespace::IPlatformUserModel
constexpr operator  GlobalNamespace::IPlatformUserModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OculusPlatformUserModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel", modifiers: " const&", def_value: None }]
constexpr OculusPlatformUserModel(OculusPlatformUserModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel", modifiers: "&&", def_value: None }]
constexpr OculusPlatformUserModel(OculusPlatformUserModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusPlatformUserModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusPlatformUserModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusPlatformUserModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusPlatformUserModel& operator=(OculusPlatformUserModel&& o) noexcept = default;
  constexpr OculusPlatformUserModel& operator=(OculusPlatformUserModel const& o) noexcept = default;
                


// Fields

/// @brief Field kPlatformEnvironment offset 0
static GlobalNamespace::PlatformEnvironment const kPlatformEnvironment;

 ::ArrayW<::StringW> __declspec(property(get=__get__friendsUserIds, put=__set__friendsUserIds))  _friendsUserIds;

constexpr void __set__friendsUserIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__friendsUserIds() const;

 GlobalNamespace::UserInfo __declspec(property(get=__get__userInfo, put=__set__userInfo))  _userInfo;

constexpr void __set__userInfo(GlobalNamespace::UserInfo value) ;

constexpr GlobalNamespace::UserInfo __get__userInfo() const;

 float_t __declspec(property(get=__get__lastXPlatformTokenStatusChange, put=__set__lastXPlatformTokenStatusChange))  _lastXPlatformTokenStatusChange;

constexpr void __set__lastXPlatformTokenStatusChange(float_t value) ;

constexpr float_t __get__lastXPlatformTokenStatusChange() const;

 System::Action_1<GlobalNamespace::UserInfo> __declspec(property(get=__get_platformUserInfoDidChangeEvent, put=__set_platformUserInfoDidChangeEvent))  platformUserInfoDidChangeEvent;

constexpr void __set_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value) ;

constexpr System::Action_1<GlobalNamespace::UserInfo> __get_platformUserInfoDidChangeEvent() const;


// Properties

 bool __declspec(property(get=get_CanXPlatformAccessTokenBeCached))  CanXPlatformAccessTokenBeCached;


// Methods

/// @brief Method add_platformUserInfoDidChangeEvent addr 0x2256578 size 0xb0 virtual true final true
 void add_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value) ;

/// @brief Method remove_platformUserInfoDidChangeEvent addr 0x2256628 size 0xb0 virtual true final true
 void remove_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value) ;

/// @brief Method get_CanXPlatformAccessTokenBeCached addr 0x22566d8 size 0x8 virtual true final true
 bool get_CanXPlatformAccessTokenBeCached() ;

/// @brief Method GetUserInfo addr 0x22566e0 size 0xf0 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo> GetUserInfo() ;

/// @brief Method GetUserFriendsUserIds addr 0x22567d0 size 0x1a4 virtual true final true
 System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GetUserFriendsUserIds(bool cached) ;

/// @brief Method GetUserAuthToken addr 0x225697c size 0x134 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData> GetUserAuthToken() ;

/// @brief Method GetUserNamesForUserIds addr 0x2256ab8 size 0x25c virtual true final true
 System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GetUserNamesForUserIds(System::Collections::Generic::IReadOnlyList_1<::StringW> userIds) ;

/// @brief Method RequestXPlatformAccessToken addr 0x2256e10 size 0x8 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> RequestXPlatformAccessToken(System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters []
explicit OculusPlatformUserModel() ;

/// @brief Method .ctor addr 0x2256e80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0, "", "OculusPlatformUserModel/<>c__DisplayClass10_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0, "", "OculusPlatformUserModel/<>c__DisplayClass11_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0, "", "OculusPlatformUserModel/<>c__DisplayClass12_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1, "", "OculusPlatformUserModel/<>c__DisplayClass12_1");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0, "", "OculusPlatformUserModel/<>c__DisplayClass9_0");
NEED_NO_BOX(GlobalNamespace::OculusPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel, "", "OculusPlatformUserModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9, "", "OculusPlatformUserModel/<GetUserInfo>d__9");
