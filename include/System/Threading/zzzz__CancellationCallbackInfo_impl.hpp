#pragma once
#include "System/Threading/zzzz__CancellationCallbackInfo_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
//  Writing Method size for method: System::Threading::CancellationCallbackInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationCallbackInfo::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::ExecutionContext, System::Threading::CancellationTokenSource)>(&System::Threading::CancellationCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24d790c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenSource>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationCallbackInfo.ExecuteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationCallbackInfo::*)()>(&System::Threading::CancellationCallbackInfo::ExecuteCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x24d7fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get(),
                            "ExecuteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationCallbackInfo.ExecutionContextCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::CancellationCallbackInfo::ExecutionContextCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24d89cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get(),
                            "ExecutionContextCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::CancellationCallbackInfo::__set_Callback(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Action_1<::bs_hook::Il2CppWrapperType> System::Threading::CancellationCallbackInfo::__get_Callback() const {
return ::cordl_internals::getInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationCallbackInfo::__set_StateForCallback(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::CancellationCallbackInfo::__get_StateForCallback() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationCallbackInfo::__set_TargetExecutionContext(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Threading::CancellationCallbackInfo::__get_TargetExecutionContext() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationCallbackInfo::__set_CancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource System::Threading::CancellationCallbackInfo::__get_CancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::CancellationCallbackInfo::__set_s_executionContextCallback(System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<System::Threading::ContextCallback, "s_executionContextCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get>(std::forward<System::Threading::ContextCallback>(value));
}
 System::Threading::ContextCallback System::Threading::CancellationCallbackInfo::__get_s_executionContextCallback()  {
return ::cordl_internals::getStaticField<System::Threading::ContextCallback, "s_executionContextCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get>();
}
// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "stateForCallback", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "targetExecutionContext", ty: "System::Threading::ExecutionContext", modifiers: "", def_value: None }, CppParam { name: "cancellationTokenSource", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }]
 System::Threading::CancellationCallbackInfo::CancellationCallbackInfo(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::ExecutionContext targetExecutionContext, System::Threading::CancellationTokenSource cancellationTokenSource)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CancellationCallbackInfo>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource))) {}
 void System::Threading::CancellationCallbackInfo::_ctor(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::ExecutionContext targetExecutionContext, System::Threading::CancellationTokenSource cancellationTokenSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource);
}
 void System::Threading::CancellationCallbackInfo::ExecuteCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get(),
                            "ExecuteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::CancellationCallbackInfo::ExecutionContextCallback(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationCallbackInfo>::get(),
                            "ExecutionContextCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
//  Writing Method size for method: System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::ExecutionContext, System::Threading::CancellationTokenSource, System::Threading::SynchronizationContext)>(&System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24d794c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SynchronizationContext>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext::__set_TargetSyncContext(System::Threading::SynchronizationContext value)  {
::cordl_internals::setInstanceField<System::Threading::SynchronizationContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SynchronizationContext>(value));
}
constexpr System::Threading::SynchronizationContext System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext::__get_TargetSyncContext() const {
return ::cordl_internals::getInstanceField<System::Threading::SynchronizationContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "stateForCallback", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "targetExecutionContext", ty: "System::Threading::ExecutionContext", modifiers: "", def_value: None }, CppParam { name: "cancellationTokenSource", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "targetSyncContext", ty: "System::Threading::SynchronizationContext", modifiers: "", def_value: None }]
 System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext::System__Threading__CancellationCallbackInfo__WithSyncContext(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::ExecutionContext targetExecutionContext, System::Threading::CancellationTokenSource cancellationTokenSource, System::Threading::SynchronizationContext targetSyncContext)  : System::Threading::CancellationCallbackInfo(THROW_UNLESS(::il2cpp_utils::New<System__Threading__CancellationCallbackInfo__WithSyncContext>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext))) {}
 void System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext::_ctor(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::ExecutionContext targetExecutionContext, System::Threading::CancellationTokenSource cancellationTokenSource, System::Threading::SynchronizationContext targetSyncContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationCallbackInfo__WithSyncContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SynchronizationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext);
}
