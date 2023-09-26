#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System {
class WeakReference;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class EventArgs;
}
namespace System::Threading {
class ManualResetEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct System__Net__TimerThread__TimerNode__TimerState;
}
namespace System::Net {
class System__Net__TimerThread__Callback;
}
namespace System::Net {
class System__Net__TimerThread__InfiniteTimer;
}
namespace System::Net {
class System__Net__TimerThread__InfiniteTimerQueue;
}
namespace System::Net {
class System__Net__TimerThread__Queue;
}
namespace System::Net {
class System__Net__TimerThread__Timer;
}
namespace System::Net {
class System__Net__TimerThread__TimerNode;
}
namespace System::Net {
class System__Net__TimerThread__TimerQueue;
}
namespace System::Net {
class TimerThread;
}
// Type: ::Queue
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7980))
// CS Name: System.Net.TimerThread::Queue
class CORDL_TYPE System__Net__TimerThread__Queue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Net__TimerThread__Queue() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__Queue", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__Queue(System__Net__TimerThread__Queue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__Queue", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__Queue(System__Net__TimerThread__Queue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__Queue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__TimerThread__Queue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__Queue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__Queue& operator=(System__Net__TimerThread__Queue&& o) noexcept = default;
  constexpr System__Net__TimerThread__Queue& operator=(System__Net__TimerThread__Queue const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_DurationMilliseconds, put=__set_m_DurationMilliseconds))  m_DurationMilliseconds;

constexpr void __set_m_DurationMilliseconds(int32_t value) ;

constexpr int32_t __get_m_DurationMilliseconds() const;


// Properties

 int32_t __declspec(property(get=get_Duration))  Duration;


// Methods

// Ctor Parameters [CppParam { name: "durationMilliseconds", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Net__TimerThread__Queue(int32_t durationMilliseconds) ;

/// @brief Method .ctor addr 0x2848ce4 size 0x28 virtual false final false
 void _ctor(int32_t durationMilliseconds) ;

/// @brief Method get_Duration addr 0x2848d0c size 0x8 virtual false final false
 int32_t get_Duration() ;

/// @brief Method CreateTimer addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::System__Net__TimerThread__Timer CreateTimer(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Timer
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7981))
// CS Name: System.Net.TimerThread::Timer
class CORDL_TYPE System__Net__TimerThread__Timer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Net__TimerThread__Timer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__Timer", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__Timer(System__Net__TimerThread__Timer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__Timer", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__Timer(System__Net__TimerThread__Timer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__Timer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__TimerThread__Timer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__Timer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__Timer& operator=(System__Net__TimerThread__Timer&& o) noexcept = default;
  constexpr System__Net__TimerThread__Timer& operator=(System__Net__TimerThread__Timer const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_StartTimeMilliseconds, put=__set_m_StartTimeMilliseconds))  m_StartTimeMilliseconds;

constexpr void __set_m_StartTimeMilliseconds(int32_t value) ;

constexpr int32_t __get_m_StartTimeMilliseconds() const;

 int32_t __declspec(property(get=__get_m_DurationMilliseconds, put=__set_m_DurationMilliseconds))  m_DurationMilliseconds;

constexpr void __set_m_DurationMilliseconds(int32_t value) ;

constexpr int32_t __get_m_DurationMilliseconds() const;


// Properties

 int32_t __declspec(property(get=get_StartTime))  StartTime;

 int32_t __declspec(property(get=get_Expiration))  Expiration;

 bool __declspec(property(get=get_HasExpired))  HasExpired;


// Methods

// Ctor Parameters [CppParam { name: "durationMilliseconds", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Net__TimerThread__Timer(int32_t durationMilliseconds) ;

/// @brief Method .ctor addr 0x2848d14 size 0x34 virtual false final false
 void _ctor(int32_t durationMilliseconds) ;

/// @brief Method get_StartTime addr 0x2848d48 size 0x8 virtual false final false
 int32_t get_StartTime() ;

/// @brief Method get_Expiration addr 0x2848d50 size 0xc virtual false final false
 int32_t get_Expiration() ;

/// @brief Method Cancel addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Cancel() ;

/// @brief Method get_HasExpired addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasExpired() ;

/// @brief Method Dispose addr 0x2848d5c size 0xc virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Callback
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7982))
// CS Name: System.Net.TimerThread::Callback
class CORDL_TYPE System__Net__TimerThread__Callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Net__TimerThread__Callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__Callback", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__Callback(System__Net__TimerThread__Callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__Callback", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__Callback(System__Net__TimerThread__Callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__Callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Net__TimerThread__Callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__Callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__Callback& operator=(System__Net__TimerThread__Callback&& o) noexcept = default;
  constexpr System__Net__TimerThread__Callback& operator=(System__Net__TimerThread__Callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__Net__TimerThread__Callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2848d68 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2848e98 size 0x14 virtual true final false
 void Invoke(System::Net::System__Net__TimerThread__Timer timer, int32_t timeNoticed, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::TimerQueue
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7980))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7983))
// CS Name: System.Net.TimerThread::TimerQueue
class CORDL_TYPE System__Net__TimerThread__TimerQueue : public System::Net::System__Net__TimerThread__Queue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Net__TimerThread__TimerQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__TimerQueue", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__TimerQueue(System__Net__TimerThread__TimerQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__TimerQueue", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__TimerQueue(System__Net__TimerThread__TimerQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__TimerQueue(void* ptr) noexcept : System::Net::System__Net__TimerThread__Queue(ptr) {
}


  constexpr System__Net__TimerThread__TimerQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__TimerQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__TimerQueue& operator=(System__Net__TimerThread__TimerQueue&& o) noexcept = default;
  constexpr System__Net__TimerThread__TimerQueue& operator=(System__Net__TimerThread__TimerQueue const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_ThisHandle, put=__set_m_ThisHandle))  m_ThisHandle;

constexpr void __set_m_ThisHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_ThisHandle() const;

 System::Net::System__Net__TimerThread__TimerNode __declspec(property(get=__get_m_Timers, put=__set_m_Timers))  m_Timers;

constexpr void __set_m_Timers(System::Net::System__Net__TimerThread__TimerNode value) ;

constexpr System::Net::System__Net__TimerThread__TimerNode __get_m_Timers() const;


// Methods

// Ctor Parameters [CppParam { name: "durationMilliseconds", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Net__TimerThread__TimerQueue(int32_t durationMilliseconds) ;

/// @brief Method .ctor addr 0x28476a0 size 0x98 virtual false final false
 void _ctor(int32_t durationMilliseconds) ;

/// @brief Method CreateTimer addr 0x2848edc size 0x20c virtual true final false
 System::Net::System__Net__TimerThread__Timer CreateTimer(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method Fire addr 0x28489b0 size 0x1d0 virtual false final false
 bool Fire(ByRef<int32_t> nextExpiration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::InfiniteTimerQueue
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7980))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7984))
// CS Name: System.Net.TimerThread::InfiniteTimerQueue
class CORDL_TYPE System__Net__TimerThread__InfiniteTimerQueue : public System::Net::System__Net__TimerThread__Queue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Net__TimerThread__InfiniteTimerQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__InfiniteTimerQueue", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__InfiniteTimerQueue(System__Net__TimerThread__InfiniteTimerQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__InfiniteTimerQueue", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__InfiniteTimerQueue(System__Net__TimerThread__InfiniteTimerQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__InfiniteTimerQueue(void* ptr) noexcept : System::Net::System__Net__TimerThread__Queue(ptr) {
}


  constexpr System__Net__TimerThread__InfiniteTimerQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__InfiniteTimerQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__InfiniteTimerQueue& operator=(System__Net__TimerThread__InfiniteTimerQueue&& o) noexcept = default;
  constexpr System__Net__TimerThread__InfiniteTimerQueue& operator=(System__Net__TimerThread__InfiniteTimerQueue const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit System__Net__TimerThread__InfiniteTimerQueue() ;

/// @brief Method .ctor addr 0x2847680 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method CreateTimer addr 0x28493bc size 0x70 virtual true final false
 System::Net::System__Net__TimerThread__Timer CreateTimer(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::TimerState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7985))
// CS Name: System.Net.TimerThread::TimerNode::TimerState
struct CORDL_TYPE System__Net__TimerThread__TimerNode__TimerState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__TimerThread__TimerNode__TimerState(int32_t value__) noexcept;


                    constexpr System__Net__TimerThread__TimerNode__TimerState(System__Net__TimerThread__TimerNode__TimerState const&) = default;
                    constexpr System__Net__TimerThread__TimerNode__TimerState(System__Net__TimerThread__TimerNode__TimerState&&) = default;
                    constexpr System__Net__TimerThread__TimerNode__TimerState& operator=(System__Net__TimerThread__TimerNode__TimerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__TimerThread__TimerNode__TimerState& operator=(System__Net__TimerThread__TimerNode__TimerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__TimerNode__TimerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__TimerThread__TimerNode__TimerState_Unwrapped : int32_t {
__Ready = 0,
__Fired = 1,
__Cancelled = 2,
__Sentinel = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__TimerThread__TimerNode__TimerState_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__TimerThread__TimerNode__TimerState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ready offset 0
static GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState const Ready;

/// @brief Field Fired offset 0
static GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState const Fired;

/// @brief Field Cancelled offset 0
static GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState const Cancelled;

/// @brief Field Sentinel offset 0
static GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState const Sentinel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TimerNode
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7981))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7986))
// CS Name: System.Net.TimerThread::TimerNode
class CORDL_TYPE System__Net__TimerThread__TimerNode : public System::Net::System__Net__TimerThread__Timer {
public:
// Declarations
using TimerState = GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~System__Net__TimerThread__TimerNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__TimerNode", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__TimerNode(System__Net__TimerThread__TimerNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__TimerNode", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__TimerNode(System__Net__TimerThread__TimerNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__TimerNode(void* ptr) noexcept : System::Net::System__Net__TimerThread__Timer(ptr) {
}


  constexpr System__Net__TimerThread__TimerNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__TimerNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__TimerNode& operator=(System__Net__TimerThread__TimerNode&& o) noexcept = default;
  constexpr System__Net__TimerThread__TimerNode& operator=(System__Net__TimerThread__TimerNode const& o) noexcept = default;
                


// Fields

 GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState __declspec(property(get=__get_m_TimerState, put=__set_m_TimerState))  m_TimerState;

constexpr void __set_m_TimerState(GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState value) ;

constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState __get_m_TimerState() const;

 System::Net::System__Net__TimerThread__Callback __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(System::Net::System__Net__TimerThread__Callback value) ;

constexpr System::Net::System__Net__TimerThread__Callback __get_m_Callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Context, put=__set_m_Context))  m_Context;

constexpr void __set_m_Context(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Context() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_QueueLock, put=__set_m_QueueLock))  m_QueueLock;

constexpr void __set_m_QueueLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_QueueLock() const;

 System::Net::System__Net__TimerThread__TimerNode __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Net::System__Net__TimerThread__TimerNode value) ;

constexpr System::Net::System__Net__TimerThread__TimerNode __get_next() const;

 System::Net::System__Net__TimerThread__TimerNode __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Net::System__Net__TimerThread__TimerNode value) ;

constexpr System::Net::System__Net__TimerThread__TimerNode __get_prev() const;


// Properties

 bool __declspec(property(get=get_HasExpired))  HasExpired;

 System::Net::System__Net__TimerThread__TimerNode __declspec(property(get=get_Next, put=set_Next))  Next;

 System::Net::System__Net__TimerThread__TimerNode __declspec(property(get=get_Prev, put=set_Prev))  Prev;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "System::Net::System__Net__TimerThread__Callback", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "durationMilliseconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "queueLock", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit System__Net__TimerThread__TimerNode(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context, int32_t durationMilliseconds, ::bs_hook::Il2CppWrapperType queueLock) ;

/// @brief Method .ctor addr 0x28490e8 size 0x58 virtual false final false
 void _ctor(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context, int32_t durationMilliseconds, ::bs_hook::Il2CppWrapperType queueLock) ;

// Ctor Parameters []
explicit System__Net__TimerThread__TimerNode() ;

/// @brief Method .ctor addr 0x2848eac size 0x30 virtual false final false
 void _ctor() ;

/// @brief Method get_HasExpired addr 0x2849458 size 0x10 virtual true final false
 bool get_HasExpired() ;

/// @brief Method get_Next addr 0x2849468 size 0x8 virtual false final false
 System::Net::System__Net__TimerThread__TimerNode get_Next() ;

/// @brief Method set_Next addr 0x2849470 size 0x8 virtual false final false
 void set_Next(System::Net::System__Net__TimerThread__TimerNode value) ;

/// @brief Method get_Prev addr 0x2849478 size 0x8 virtual false final false
 System::Net::System__Net__TimerThread__TimerNode get_Prev() ;

/// @brief Method set_Prev addr 0x2849480 size 0x8 virtual false final false
 void set_Prev(System::Net::System__Net__TimerThread__TimerNode value) ;

/// @brief Method Cancel addr 0x2849488 size 0x138 virtual true final false
 bool Cancel() ;

/// @brief Method Fire addr 0x2849140 size 0x27c virtual false final false
 bool Fire() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::InfiniteTimer
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7981))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7987))
// CS Name: System.Net.TimerThread::InfiniteTimer
class CORDL_TYPE System__Net__TimerThread__InfiniteTimer : public System::Net::System__Net__TimerThread__Timer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Net__TimerThread__InfiniteTimer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__InfiniteTimer", modifiers: " const&", def_value: None }]
constexpr System__Net__TimerThread__InfiniteTimer(System__Net__TimerThread__InfiniteTimer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__TimerThread__InfiniteTimer", modifiers: "&&", def_value: None }]
constexpr System__Net__TimerThread__InfiniteTimer(System__Net__TimerThread__InfiniteTimer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__TimerThread__InfiniteTimer(void* ptr) noexcept : System::Net::System__Net__TimerThread__Timer(ptr) {
}


  constexpr System__Net__TimerThread__InfiniteTimer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__TimerThread__InfiniteTimer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__TimerThread__InfiniteTimer& operator=(System__Net__TimerThread__InfiniteTimer&& o) noexcept = default;
  constexpr System__Net__TimerThread__InfiniteTimer& operator=(System__Net__TimerThread__InfiniteTimer const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_cancelled, put=__set_cancelled))  cancelled;

constexpr void __set_cancelled(int32_t value) ;

constexpr int32_t __get_cancelled() const;


// Properties

 bool __declspec(property(get=get_HasExpired))  HasExpired;


// Methods

// Ctor Parameters []
explicit System__Net__TimerThread__InfiniteTimer() ;

/// @brief Method .ctor addr 0x284942c size 0x2c virtual false final false
 void _ctor() ;

/// @brief Method get_HasExpired addr 0x28495c0 size 0x8 virtual true final false
 bool get_HasExpired() ;

/// @brief Method Cancel addr 0x28495c8 size 0x24 virtual true final false
 bool Cancel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::TimerThread
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7988))
// CS Name: System.Net.TimerThread
class CORDL_TYPE TimerThread : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InfiniteTimer = System::Net::System__Net__TimerThread__InfiniteTimer;

using TimerNode = System::Net::System__Net__TimerThread__TimerNode;

using InfiniteTimerQueue = System::Net::System__Net__TimerThread__InfiniteTimerQueue;

using TimerQueue = System::Net::System__Net__TimerThread__TimerQueue;

using Callback = System::Net::System__Net__TimerThread__Callback;

using Timer = System::Net::System__Net__TimerThread__Timer;

using Queue = System::Net::System__Net__TimerThread__Queue;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimerThread() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimerThread", modifiers: " const&", def_value: None }]
constexpr TimerThread(TimerThread const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimerThread", modifiers: "&&", def_value: None }]
constexpr TimerThread(TimerThread&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimerThread(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimerThread& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimerThread& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimerThread& operator=(TimerThread&& o) noexcept = default;
  constexpr TimerThread& operator=(TimerThread const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::LinkedList_1<System::WeakReference> __declspec(property(get=__get_s_Queues, put=__set_s_Queues))  s_Queues;

static void __set_s_Queues(System::Collections::Generic::LinkedList_1<System::WeakReference> value) ;

static System::Collections::Generic::LinkedList_1<System::WeakReference> __get_s_Queues() ;

static System::Collections::Generic::LinkedList_1<System::WeakReference> __declspec(property(get=__get_s_NewQueues, put=__set_s_NewQueues))  s_NewQueues;

static void __set_s_NewQueues(System::Collections::Generic::LinkedList_1<System::WeakReference> value) ;

static System::Collections::Generic::LinkedList_1<System::WeakReference> __get_s_NewQueues() ;

static int32_t __declspec(property(get=__get_s_ThreadState, put=__set_s_ThreadState))  s_ThreadState;

static void __set_s_ThreadState(int32_t value) ;

static int32_t __get_s_ThreadState() ;

static System::Threading::AutoResetEvent __declspec(property(get=__get_s_ThreadReadyEvent, put=__set_s_ThreadReadyEvent))  s_ThreadReadyEvent;

static void __set_s_ThreadReadyEvent(System::Threading::AutoResetEvent value) ;

static System::Threading::AutoResetEvent __get_s_ThreadReadyEvent() ;

static System::Threading::ManualResetEvent __declspec(property(get=__get_s_ThreadShutdownEvent, put=__set_s_ThreadShutdownEvent))  s_ThreadShutdownEvent;

static void __set_s_ThreadShutdownEvent(System::Threading::ManualResetEvent value) ;

static System::Threading::ManualResetEvent __get_s_ThreadShutdownEvent() ;

static ::ArrayW<System::Threading::WaitHandle> __declspec(property(get=__get_s_ThreadEvents, put=__set_s_ThreadEvents))  s_ThreadEvents;

static void __set_s_ThreadEvents(::ArrayW<System::Threading::WaitHandle> value) ;

static ::ArrayW<System::Threading::WaitHandle> __get_s_ThreadEvents() ;

static int32_t __declspec(property(get=__get_s_CacheScanIteration, put=__set_s_CacheScanIteration))  s_CacheScanIteration;

static void __set_s_CacheScanIteration(int32_t value) ;

static int32_t __get_s_CacheScanIteration() ;

static System::Collections::Hashtable __declspec(property(get=__get_s_QueuesCache, put=__set_s_QueuesCache))  s_QueuesCache;

static void __set_s_QueuesCache(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_s_QueuesCache() ;


// Methods

/// @brief Method CreateQueue addr 0x2842cd8 size 0x264 virtual false final false
static System::Net::System__Net__TimerThread__Queue CreateQueue(int32_t durationMilliseconds) ;

/// @brief Method GetOrCreateQueue addr 0x2847738 size 0x99c virtual false final false
static System::Net::System__Net__TimerThread__Queue GetOrCreateQueue(int32_t durationMilliseconds) ;

/// @brief Method Prod addr 0x28480d4 size 0x114 virtual false final false
static void Prod() ;

/// @brief Method ThreadProc addr 0x28481e8 size 0x7c8 virtual false final false
static void ThreadProc() ;

/// @brief Method StopTimerThread addr 0x2848ba4 size 0x7c virtual false final false
static void StopTimerThread() ;

/// @brief Method IsTickBetween addr 0x2848b80 size 0x24 virtual false final false
static bool IsTickBetween(int32_t start, int32_t end, int32_t comparand) ;

/// @brief Method OnDomainUnload addr 0x2848c20 size 0xc4 virtual false final false
static void OnDomainUnload(::bs_hook::Il2CppWrapperType sender, System::EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState, "System.Net", "TimerThread/TimerNode/TimerState");
NEED_NO_BOX(System::Net::System__Net__TimerThread__Callback);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__Callback, "System.Net", "TimerThread/Callback");
NEED_NO_BOX(System::Net::System__Net__TimerThread__InfiniteTimer);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__InfiniteTimer, "System.Net", "TimerThread/InfiniteTimer");
NEED_NO_BOX(System::Net::System__Net__TimerThread__InfiniteTimerQueue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__InfiniteTimerQueue, "System.Net", "TimerThread/InfiniteTimerQueue");
NEED_NO_BOX(System::Net::System__Net__TimerThread__Queue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__Queue, "System.Net", "TimerThread/Queue");
NEED_NO_BOX(System::Net::System__Net__TimerThread__Timer);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__Timer, "System.Net", "TimerThread/Timer");
NEED_NO_BOX(System::Net::System__Net__TimerThread__TimerNode);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__TimerNode, "System.Net", "TimerThread/TimerNode");
NEED_NO_BOX(System::Net::System__Net__TimerThread__TimerQueue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__TimerThread__TimerQueue, "System.Net", "TimerThread/TimerQueue");
NEED_NO_BOX(System::Net::TimerThread);
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread, "System.Net", "TimerThread");
