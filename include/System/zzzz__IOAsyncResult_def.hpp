#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System {
class IOAsyncResult;
}
// Type: System::IOAsyncResult
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7765))
// CS Name: System.IOAsyncResult
class CORDL_TYPE IOAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IOAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "IOAsyncResult", modifiers: " const&", def_value: None }]
constexpr IOAsyncResult(IOAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IOAsyncResult", modifiers: "&&", def_value: None }]
constexpr IOAsyncResult(IOAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IOAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IOAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IOAsyncResult& operator=(IOAsyncResult&& o) noexcept = default;
  constexpr IOAsyncResult& operator=(IOAsyncResult const& o) noexcept = default;
                


// Fields

 System::AsyncCallback __declspec(property(get=__get_async_callback, put=__set_async_callback))  async_callback;

constexpr void __set_async_callback(System::AsyncCallback value) ;

constexpr System::AsyncCallback __get_async_callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_async_state, put=__set_async_state))  async_state;

constexpr void __set_async_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_async_state() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_wait_handle, put=__set_wait_handle))  wait_handle;

constexpr void __set_wait_handle(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_wait_handle() const;

 bool __declspec(property(get=__get_completed_synchronously, put=__set_completed_synchronously))  completed_synchronously;

constexpr void __set_completed_synchronously(bool value) ;

constexpr bool __get_completed_synchronously() const;

 bool __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(bool value) ;

constexpr bool __get_completed() const;


// Properties

 System::AsyncCallback __declspec(property(get=get_AsyncCallback))  AsyncCallback;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 bool __declspec(property(get=get_CompletedSynchronously, put=set_CompletedSynchronously))  CompletedSynchronously;

 bool __declspec(property(get=get_IsCompleted, put=set_IsCompleted))  IsCompleted;


// Methods

// Ctor Parameters []
explicit IOAsyncResult() ;

/// @brief Method .ctor addr 0x27ead2c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x27ead34 size 0x20 virtual false final false
 void Init(System::AsyncCallback async_callback, ::bs_hook::Il2CppWrapperType async_state) ;

// Ctor Parameters [CppParam { name: "async_callback", ty: "System::AsyncCallback", modifiers: "", def_value: None }, CppParam { name: "async_state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit IOAsyncResult(System::AsyncCallback async_callback, ::bs_hook::Il2CppWrapperType async_state) ;

/// @brief Method .ctor addr 0x27ead54 size 0x2c virtual false final false
 void _ctor(System::AsyncCallback async_callback, ::bs_hook::Il2CppWrapperType async_state) ;

/// @brief Method get_AsyncCallback addr 0x27ead80 size 0x8 virtual false final false
 System::AsyncCallback get_AsyncCallback() ;

/// @brief Method get_AsyncState addr 0x27ead88 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_AsyncWaitHandle addr 0x27ead90 size 0x124 virtual true final true
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_CompletedSynchronously addr 0x27eaeb4 size 0x8 virtual true final true
 bool get_CompletedSynchronously() ;

/// @brief Method set_CompletedSynchronously addr 0x27eaebc size 0xc virtual false final false
 void set_CompletedSynchronously(bool value) ;

/// @brief Method get_IsCompleted addr 0x27eaec8 size 0x8 virtual true final true
 bool get_IsCompleted() ;

/// @brief Method set_IsCompleted addr 0x27eaed0 size 0xd8 virtual false final false
 void set_IsCompleted(bool value) ;

/// @brief Method CompleteDisposed addr 0x0 size 0xffffffffffffffff virtual true final false
 void CompleteDisposed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IOAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::IOAsyncResult, "System", "IOAsyncResult");
