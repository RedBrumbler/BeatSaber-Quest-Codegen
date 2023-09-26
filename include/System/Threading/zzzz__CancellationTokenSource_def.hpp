#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
template<typename T>
class SparselyPopulatedArray_1;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
namespace System {
struct TimeSpan;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
struct CancellationCallbackCoreWorkArguments;
}
namespace System::Threading {
class Timer;
}
namespace System::Threading {
class TimerCallback;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class System__Threading__CancellationTokenSource__Linked1CancellationTokenSource;
}
namespace System::Threading {
class System__Threading__CancellationTokenSource__Linked2CancellationTokenSource;
}
namespace System::Threading {
class System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource;
}
// Type: System.Threading::CancellationTokenSource
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2687))
// CS Name: System.Threading.CancellationTokenSource
class CORDL_TYPE CancellationTokenSource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LinkedNCancellationTokenSource = System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource;

using Linked2CancellationTokenSource = System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource;

using Linked1CancellationTokenSource = System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CancellationTokenSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource", modifiers: " const&", def_value: None }]
constexpr CancellationTokenSource(CancellationTokenSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource", modifiers: "&&", def_value: None }]
constexpr CancellationTokenSource(CancellationTokenSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CancellationTokenSource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CancellationTokenSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CancellationTokenSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CancellationTokenSource& operator=(CancellationTokenSource&& o) noexcept = default;
  constexpr CancellationTokenSource& operator=(CancellationTokenSource const& o) noexcept = default;
                


// Fields

static System::Threading::CancellationTokenSource __declspec(property(get=__get_s_canceledSource, put=__set_s_canceledSource))  s_canceledSource;

static void __set_s_canceledSource(System::Threading::CancellationTokenSource value) ;

static System::Threading::CancellationTokenSource __get_s_canceledSource() ;

static System::Threading::CancellationTokenSource __declspec(property(get=__get_s_neverCanceledSource, put=__set_s_neverCanceledSource))  s_neverCanceledSource;

static void __set_s_neverCanceledSource(System::Threading::CancellationTokenSource value) ;

static System::Threading::CancellationTokenSource __get_s_neverCanceledSource() ;

static int32_t __declspec(property(get=__get_s_nLists, put=__set_s_nLists))  s_nLists;

static void __set_s_nLists(int32_t value) ;

static int32_t __get_s_nLists() ;

 System::Threading::ManualResetEvent __declspec(property(get=__get__kernelEvent, put=__set__kernelEvent))  _kernelEvent;

constexpr void __set__kernelEvent(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get__kernelEvent() const;

 ::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>> __declspec(property(get=__get__registeredCallbacksLists, put=__set__registeredCallbacksLists))  _registeredCallbacksLists;

constexpr void __set__registeredCallbacksLists(::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>> value) ;

constexpr ::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>> __get__registeredCallbacksLists() const;

/// @brief Field CannotBeCanceled offset 0
static constexpr int32_t  CannotBeCanceled{0};

/// @brief Field NotCanceledState offset 0
static constexpr int32_t  NotCanceledState{1};

/// @brief Field NotifyingState offset 0
static constexpr int32_t  NotifyingState{2};

/// @brief Field NotifyingCompleteState offset 0
static constexpr int32_t  NotifyingCompleteState{3};

 int32_t __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(int32_t value) ;

constexpr int32_t __get__state() const;

 int32_t __declspec(property(get=__get__threadIDExecutingCallbacks, put=__set__threadIDExecutingCallbacks))  _threadIDExecutingCallbacks;

constexpr void __set__threadIDExecutingCallbacks(int32_t value) ;

constexpr int32_t __get__threadIDExecutingCallbacks() const;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;

 System::Threading::CancellationCallbackInfo __declspec(property(get=__get__executingCallback, put=__set__executingCallback))  _executingCallback;

constexpr void __set__executingCallback(System::Threading::CancellationCallbackInfo value) ;

constexpr System::Threading::CancellationCallbackInfo __get__executingCallback() const;

 System::Threading::Timer __declspec(property(get=__get__timer, put=__set__timer))  _timer;

constexpr void __set__timer(System::Threading::Timer value) ;

constexpr System::Threading::Timer __get__timer() const;

static System::Threading::TimerCallback __declspec(property(get=__get_s_timerCallback, put=__set_s_timerCallback))  s_timerCallback;

static void __set_s_timerCallback(System::Threading::TimerCallback value) ;

static System::Threading::TimerCallback __get_s_timerCallback() ;


// Properties

 bool __declspec(property(get=get_IsCancellationRequested))  IsCancellationRequested;

 bool __declspec(property(get=get_IsCancellationCompleted))  IsCancellationCompleted;

 bool __declspec(property(get=get_IsDisposed))  IsDisposed;

 int32_t __declspec(property(get=get_ThreadIDExecutingCallbacks, put=set_ThreadIDExecutingCallbacks))  ThreadIDExecutingCallbacks;

 System::Threading::CancellationToken __declspec(property(get=get_Token))  Token;

 System::Threading::CancellationCallbackInfo __declspec(property(get=get_ExecutingCallback))  ExecutingCallback;


// Methods

/// @brief Method get_IsCancellationRequested addr 0x24d4d54 size 0x1c virtual false final false
 bool get_IsCancellationRequested() ;

/// @brief Method get_IsCancellationCompleted addr 0x24d6ea4 size 0x1c virtual false final false
 bool get_IsCancellationCompleted() ;

/// @brief Method get_IsDisposed addr 0x24d70c4 size 0x8 virtual false final false
 bool get_IsDisposed() ;

/// @brief Method get_ThreadIDExecutingCallbacks addr 0x24d6ec0 size 0x18 virtual false final false
 int32_t get_ThreadIDExecutingCallbacks() ;

/// @brief Method set_ThreadIDExecutingCallbacks addr 0x24d70cc size 0x24 virtual false final false
 void set_ThreadIDExecutingCallbacks(int32_t value) ;

/// @brief Method get_Token addr 0x24d70f0 size 0x18 virtual false final false
 System::Threading::CancellationToken get_Token() ;

/// @brief Method get_ExecutingCallback addr 0x24d715c size 0x18 virtual false final false
 System::Threading::CancellationCallbackInfo get_ExecutingCallback() ;

// Ctor Parameters []
explicit CancellationTokenSource() ;

/// @brief Method .ctor addr 0x24d7174 size 0x34 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "delay", ty: "System::TimeSpan", modifiers: "", def_value: None }]
explicit CancellationTokenSource(System::TimeSpan delay) ;

/// @brief Method .ctor addr 0x24d71a8 size 0xbc virtual false final false
 void _ctor(System::TimeSpan delay) ;

/// @brief Method InitializeWithTimer addr 0x24d7264 size 0xbc virtual false final false
 void InitializeWithTimer(int32_t millisecondsDelay) ;

/// @brief Method Cancel addr 0x24d7320 size 0x1c virtual false final false
 void Cancel() ;

/// @brief Method Cancel addr 0x24d733c size 0x28 virtual false final false
 void Cancel(bool throwOnFirstException) ;

/// @brief Method CancelAfter addr 0x24d7414 size 0xa4 virtual false final false
 void CancelAfter(System::TimeSpan delay) ;

/// @brief Method CancelAfter addr 0x24d74b8 size 0x1ec virtual false final false
 void CancelAfter(int32_t millisecondsDelay) ;

/// @brief Method TimerCallbackLogic addr 0x24d76a4 size 0x118 virtual false final false
static void TimerCallbackLogic(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Dispose addr 0x24d77bc size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x24d7828 size 0x90 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ThrowIfDisposed addr 0x24d7108 size 0x54 virtual false final false
 void ThrowIfDisposed() ;

/// @brief Method ThrowObjectDisposedException addr 0x24d78b8 size 0x54 virtual false final false
static void ThrowObjectDisposedException() ;

/// @brief Method InternalRegister addr 0x24d5108 size 0x2c8 virtual false final false
 System::Threading::CancellationTokenRegistration InternalRegister(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::SynchronizationContext targetSyncContext, System::Threading::ExecutionContext executionContext) ;

/// @brief Method NotifyCancellation addr 0x24d7364 size 0xb0 virtual false final false
 void NotifyCancellation(bool throwOnFirstException) ;

/// @brief Method ExecuteCallbackHandlers addr 0x24d799c size 0x4d4 virtual false final false
 void ExecuteCallbackHandlers(bool throwOnFirstException) ;

/// @brief Method CancellationCallbackCoreWork_OnSyncContext addr 0x24d7f38 size 0x78 virtual false final false
 void CancellationCallbackCoreWork_OnSyncContext(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CancellationCallbackCoreWork addr 0x24d7e7c size 0xbc virtual false final false
 void CancellationCallbackCoreWork(System::Threading::CancellationCallbackCoreWorkArguments args) ;

/// @brief Method CreateLinkedTokenSource addr 0x24d80ac size 0xd4 virtual false final false
static System::Threading::CancellationTokenSource CreateLinkedTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2) ;

/// @brief Method CreateLinkedTokenSource addr 0x24d8364 size 0xb0 virtual false final false
static System::Threading::CancellationTokenSource CreateLinkedTokenSource(System::Threading::CancellationToken token) ;

/// @brief Method WaitForCallbackToComplete addr 0x24d6ed8 size 0x4c virtual false final false
 void WaitForCallbackToComplete(System::Threading::CancellationCallbackInfo callbackInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::Linked1CancellationTokenSource
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2683))
// CS Name: System.Threading.CancellationTokenSource::Linked1CancellationTokenSource
class CORDL_TYPE System__Threading__CancellationTokenSource__Linked1CancellationTokenSource : public System::Threading::CancellationTokenSource {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~System__Threading__CancellationTokenSource__Linked1CancellationTokenSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__Linked1CancellationTokenSource", modifiers: " const&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__Linked1CancellationTokenSource(System__Threading__CancellationTokenSource__Linked1CancellationTokenSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__Linked1CancellationTokenSource", modifiers: "&&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__Linked1CancellationTokenSource(System__Threading__CancellationTokenSource__Linked1CancellationTokenSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__CancellationTokenSource__Linked1CancellationTokenSource(void* ptr) noexcept : System::Threading::CancellationTokenSource(ptr) {
}


  constexpr System__Threading__CancellationTokenSource__Linked1CancellationTokenSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__Linked1CancellationTokenSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__Linked1CancellationTokenSource& operator=(System__Threading__CancellationTokenSource__Linked1CancellationTokenSource&& o) noexcept = default;
  constexpr System__Threading__CancellationTokenSource__Linked1CancellationTokenSource& operator=(System__Threading__CancellationTokenSource__Linked1CancellationTokenSource const& o) noexcept = default;
                


// Fields

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__reg1, put=__set__reg1))  _reg1;

constexpr void __set__reg1(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__reg1() const;


// Methods

// Ctor Parameters [CppParam { name: "token1", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit System__Threading__CancellationTokenSource__Linked1CancellationTokenSource(System::Threading::CancellationToken token1) ;

/// @brief Method .ctor addr 0x24d8180 size 0xd8 virtual false final false
 void _ctor(System::Threading::CancellationToken token1) ;

/// @brief Method Dispose addr 0x24d8594 size 0x34 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::Linked2CancellationTokenSource
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2684))
// CS Name: System.Threading.CancellationTokenSource::Linked2CancellationTokenSource
class CORDL_TYPE System__Threading__CancellationTokenSource__Linked2CancellationTokenSource : public System::Threading::CancellationTokenSource {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~System__Threading__CancellationTokenSource__Linked2CancellationTokenSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__Linked2CancellationTokenSource", modifiers: " const&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__Linked2CancellationTokenSource(System__Threading__CancellationTokenSource__Linked2CancellationTokenSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__Linked2CancellationTokenSource", modifiers: "&&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__Linked2CancellationTokenSource(System__Threading__CancellationTokenSource__Linked2CancellationTokenSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__CancellationTokenSource__Linked2CancellationTokenSource(void* ptr) noexcept : System::Threading::CancellationTokenSource(ptr) {
}


  constexpr System__Threading__CancellationTokenSource__Linked2CancellationTokenSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__Linked2CancellationTokenSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__Linked2CancellationTokenSource& operator=(System__Threading__CancellationTokenSource__Linked2CancellationTokenSource&& o) noexcept = default;
  constexpr System__Threading__CancellationTokenSource__Linked2CancellationTokenSource& operator=(System__Threading__CancellationTokenSource__Linked2CancellationTokenSource const& o) noexcept = default;
                


// Fields

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__reg1, put=__set__reg1))  _reg1;

constexpr void __set__reg1(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__reg1() const;

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__reg2, put=__set__reg2))  _reg2;

constexpr void __set__reg2(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__reg2() const;


// Methods

// Ctor Parameters [CppParam { name: "token1", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "token2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit System__Threading__CancellationTokenSource__Linked2CancellationTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2) ;

/// @brief Method .ctor addr 0x24d8258 size 0x10c virtual false final false
 void _ctor(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2) ;

/// @brief Method Dispose addr 0x24d85c8 size 0x3c virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2685))
// CS Name: System.Threading.CancellationTokenSource::LinkedNCancellationTokenSource::<>c
class CORDL_TYPE System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c", modifiers: " const&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c", modifiers: "&&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c& operator=(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c&& o) noexcept = default;
  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c& operator=(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c value) ;

static GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c __get___9() ;


// Methods

// Ctor Parameters []
explicit System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c() ;

/// @brief Method .ctor addr 0x24d872c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__4_0 addr 0x24d8734 size 0x84 virtual false final false
 void __cctor_b__4_0(::bs_hook::Il2CppWrapperType s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LinkedNCancellationTokenSource
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2686))
// CS Name: System.Threading.CancellationTokenSource::LinkedNCancellationTokenSource
class CORDL_TYPE System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource : public System::Threading::CancellationTokenSource {
public:
// Declarations
using __c = GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource", modifiers: " const&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource", modifiers: "&&", def_value: None }]
constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource(void* ptr) noexcept : System::Threading::CancellationTokenSource(ptr) {
}


  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource& operator=(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource&& o) noexcept = default;
  constexpr System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource& operator=(System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource const& o) noexcept = default;
                


// Fields

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_linkedTokenCancelDelegate, put=__set_s_linkedTokenCancelDelegate))  s_linkedTokenCancelDelegate;

static void __set_s_linkedTokenCancelDelegate(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_linkedTokenCancelDelegate() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource/<>c");
NEED_NO_BOX(System::Threading::CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationTokenSource, "System.Threading", "CancellationTokenSource");
NEED_NO_BOX(System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource, "System.Threading", "CancellationTokenSource/Linked1CancellationTokenSource");
NEED_NO_BOX(System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource, "System.Threading", "CancellationTokenSource/Linked2CancellationTokenSource");
NEED_NO_BOX(System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource");
