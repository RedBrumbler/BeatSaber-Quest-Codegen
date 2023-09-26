#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
struct SynchronizationContextProperties;
}
// Forward declare root types
namespace System::Threading {
class SynchronizationContext;
}
// Type: System.Threading::SynchronizationContext
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2716))
// CS Name: System.Threading.SynchronizationContext
class CORDL_TYPE SynchronizationContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SynchronizationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContext", modifiers: " const&", def_value: None }]
constexpr SynchronizationContext(SynchronizationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContext", modifiers: "&&", def_value: None }]
constexpr SynchronizationContext(SynchronizationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SynchronizationContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SynchronizationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SynchronizationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SynchronizationContext& operator=(SynchronizationContext&& o) noexcept = default;
  constexpr SynchronizationContext& operator=(SynchronizationContext const& o) noexcept = default;
                


// Fields

 System::Threading::SynchronizationContextProperties __declspec(property(get=__get__props, put=__set__props))  _props;

constexpr void __set__props(System::Threading::SynchronizationContextProperties value) ;

constexpr System::Threading::SynchronizationContextProperties __get__props() const;

static System::Type __declspec(property(get=__get_s_cachedPreparedType1, put=__set_s_cachedPreparedType1))  s_cachedPreparedType1;

static void __set_s_cachedPreparedType1(System::Type value) ;

static System::Type __get_s_cachedPreparedType1() ;

static System::Type __declspec(property(get=__get_s_cachedPreparedType2, put=__set_s_cachedPreparedType2))  s_cachedPreparedType2;

static void __set_s_cachedPreparedType2(System::Type value) ;

static System::Type __get_s_cachedPreparedType2() ;

static System::Type __declspec(property(get=__get_s_cachedPreparedType3, put=__set_s_cachedPreparedType3))  s_cachedPreparedType3;

static void __set_s_cachedPreparedType3(System::Type value) ;

static System::Type __get_s_cachedPreparedType3() ;

static System::Type __declspec(property(get=__get_s_cachedPreparedType4, put=__set_s_cachedPreparedType4))  s_cachedPreparedType4;

static void __set_s_cachedPreparedType4(System::Type value) ;

static System::Type __get_s_cachedPreparedType4() ;

static System::Type __declspec(property(get=__get_s_cachedPreparedType5, put=__set_s_cachedPreparedType5))  s_cachedPreparedType5;

static void __set_s_cachedPreparedType5(System::Type value) ;

static System::Type __get_s_cachedPreparedType5() ;


// Properties

static System::Threading::SynchronizationContext __declspec(property(get=get_Current))  Current;

static System::Threading::SynchronizationContext __declspec(property(get=get_CurrentNoFlow))  CurrentNoFlow;

static System::Threading::SynchronizationContext __declspec(property(get=get_CurrentExplicit))  CurrentExplicit;


// Methods

// Ctor Parameters []
explicit SynchronizationContext() ;

/// @brief Method .ctor addr 0x24dd034 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method IsWaitNotificationRequired addr 0x24dd03c size 0xc virtual false final false
 bool IsWaitNotificationRequired() ;

/// @brief Method Send addr 0x24dd048 size 0x28 virtual true final false
 void Send(System::Threading::SendOrPostCallback d, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Post addr 0x24dd070 size 0x8c virtual true final false
 void Post(System::Threading::SendOrPostCallback d, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method OperationStarted addr 0x24dd228 size 0x4 virtual true final false
 void OperationStarted() ;

/// @brief Method OperationCompleted addr 0x24dd22c size 0x4 virtual true final false
 void OperationCompleted() ;

/// @brief Method Wait addr 0x24dd230 size 0x64 virtual true final false
 int32_t Wait(::ArrayW<::cordl_internals::intptr_t> waitHandles, bool waitAll, int32_t millisecondsTimeout) ;

/// @brief Method WaitHelper addr 0x24dd294 size 0x8c virtual false final false
static int32_t WaitHelper(::ArrayW<::cordl_internals::intptr_t> waitHandles, bool waitAll, int32_t millisecondsTimeout) ;

/// @brief Method SetSynchronizationContext addr 0x24dd320 size 0x28 virtual false final false
static void SetSynchronizationContext(System::Threading::SynchronizationContext syncContext) ;

/// @brief Method get_Current addr 0x24d5088 size 0x30 virtual false final false
static System::Threading::SynchronizationContext get_Current() ;

/// @brief Method get_CurrentNoFlow addr 0x24dd394 size 0x30 virtual false final false
static System::Threading::SynchronizationContext get_CurrentNoFlow() ;

/// @brief Method GetThreadLocalContext addr 0x24dd348 size 0x4c virtual false final false
static System::Threading::SynchronizationContext GetThreadLocalContext() ;

/// @brief Method CreateCopy addr 0x24dd520 size 0x5c virtual true final false
 System::Threading::SynchronizationContext CreateCopy() ;

/// @brief Method get_CurrentExplicit addr 0x24dd57c size 0x4 virtual false final false
static System::Threading::SynchronizationContext get_CurrentExplicit() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::SynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SynchronizationContext, "System.Threading", "SynchronizationContext");
