#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OculusXPlatformAccessTokenRequestOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState  GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::NotStarted{0};
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState  GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::Requesting{1};
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState  GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::Succeeded{2};
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState  GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState::Failed{3};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::*)()>(&GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2258fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22592a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusXPlatformAccessTokenRequestOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> __t__builder, GlobalNamespace::OculusXPlatformAccessTokenRequestOperation __4__this, System::Threading::CancellationToken cancellationToken, int32_t _attemptCount_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_attemptCount_5__2 = _attemptCount_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData> GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::XPlatformAccessTokenData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__set___4__this(GlobalNamespace::OculusXPlatformAccessTokenRequestOperation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>(value));
}
constexpr GlobalNamespace::OculusXPlatformAccessTokenRequestOperation GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__set__attemptCount_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__get__attemptCount_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::OculusXPlatformAccessTokenRequestOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)()>(&GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2258c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> (*)(System::Threading::CancellationToken)>(&GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::Run)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2256e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.RequestXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> (GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)(System::Threading::CancellationToken)>(&GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2258c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.RequestAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)()>(&GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestAccessToken)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2258d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "RequestAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusXPlatformAccessTokenRequestOperation.OnCompleteLoadingOculusAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::*)(Oculus::Platform::Message_1<::StringW>)>(&GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::OnCompleteLoadingOculusAccessToken)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2258e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "OnCompleteLoadingOculusAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__set__tokenData(GlobalNamespace::XPlatformAccessTokenData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::XPlatformAccessTokenData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::XPlatformAccessTokenData>(value));
}
constexpr GlobalNamespace::XPlatformAccessTokenData GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__get__tokenData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::XPlatformAccessTokenData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__set__operationState(GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::__get__operationState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::OculusXPlatformAccessTokenRequestOperation()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OculusXPlatformAccessTokenRequestOperation>())) {}
 void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::Run(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData>, false>(nullptr, ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestXPlatformAccessToken(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::RequestAccessToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "RequestAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OculusXPlatformAccessTokenRequestOperation::OnCompleteLoadingOculusAccessToken(Oculus::Platform::Message_1<::StringW> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusXPlatformAccessTokenRequestOperation>::get(),
                            "OnCompleteLoadingOculusAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
