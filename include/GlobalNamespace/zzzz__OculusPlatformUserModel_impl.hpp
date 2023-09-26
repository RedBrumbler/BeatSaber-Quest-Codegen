#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformUserModel_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2256e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0._GetUserInfo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::User>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::_GetUserInfo_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2256e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0>::get(),
                            "<GetUserInfo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::User>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::__set_tcs(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::__set___4__this(GlobalNamespace::OculusPlatformUserModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformUserModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusPlatformUserModel>(value));
}
constexpr GlobalNamespace::OculusPlatformUserModel GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformUserModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0::_GetUserInfo_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::User> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0>::get(),
                            "<GetUserInfo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::User>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2256fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x225747c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusPlatformUserModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> __t__builder, GlobalNamespace::OculusPlatformUserModel __4__this, GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__set___4__this(GlobalNamespace::OculusPlatformUserModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformUserModel, 0x20>(this->__instance, std::forward<GlobalNamespace::OculusPlatformUserModel>(value));
}
constexpr GlobalNamespace::OculusPlatformUserModel GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformUserModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__set___8__1(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0, 0x28>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass9_0, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel___GetUserInfo_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2256974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0._GetUserFriendsUserIds_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::_GetUserFriendsUserIds_b__0)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x22574d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0>::get(),
                            "<GetUserFriendsUserIds>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::UserList>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::__set_tcs(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::__set___4__this(GlobalNamespace::OculusPlatformUserModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusPlatformUserModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusPlatformUserModel>(value));
}
constexpr GlobalNamespace::OculusPlatformUserModel GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusPlatformUserModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0::_GetUserFriendsUserIds_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass10_0>::get(),
                            "<GetUserFriendsUserIds>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::UserList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2256ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0._GetUserAuthToken_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::_GetUserAuthToken_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2257910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0>::get(),
                            "<GetUserAuthToken>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::__set_tcs(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserAuthTokenData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0::_GetUserAuthToken_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass11_0>::get(),
                            "<GetUserAuthToken>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2256d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0._GetUserNamesForUserIds_g__Fetch_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::*)(int32_t, uint64_t)>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::_GetUserNamesForUserIds_g__Fetch_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2256d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0>::get(),
                            "<GetUserNamesForUserIds>g__Fetch|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__set_requests(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__get_requests() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__set_success(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__get_success() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__set_userNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__get_userNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__set_tcs(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0::_GetUserNamesForUserIds_g__Fetch_0(int32_t index, uint64_t platformId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0>::get(),
                            "<GetUserNamesForUserIds>g__Fetch|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, platformId);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::*)()>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22579d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1._GetUserNamesForUserIds_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::User>)>(&GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::_GetUserNamesForUserIds_b__1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x22579dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1>::get(),
                            "<GetUserNamesForUserIds>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::User>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::__set_CS$__8__locals1(GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1>())) {}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1::_GetUserNamesForUserIds_b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::User> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OculusPlatformUserModel____c__DisplayClass12_1>::get(),
                            "<GetUserNamesForUserIds>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message_1<Oculus::Platform::Models::User>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.add_platformUserInfoDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::*)(System::Action_1<GlobalNamespace::UserInfo>)>(&GlobalNamespace::OculusPlatformUserModel::add_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2256578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "add_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::UserInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.remove_platformUserInfoDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::*)(System::Action_1<GlobalNamespace::UserInfo>)>(&GlobalNamespace::OculusPlatformUserModel::remove_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2256628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "remove_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::UserInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.get_CanXPlatformAccessTokenBeCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformUserModel::*)()>(&GlobalNamespace::OculusPlatformUserModel::get_CanXPlatformAccessTokenBeCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22566d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "get_CanXPlatformAccessTokenBeCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.GetUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo> (GlobalNamespace::OculusPlatformUserModel::*)()>(&GlobalNamespace::OculusPlatformUserModel::GetUserInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22566e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.GetUserFriendsUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> (GlobalNamespace::OculusPlatformUserModel::*)(bool)>(&GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x22567d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserFriendsUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.GetUserAuthToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData> (GlobalNamespace::OculusPlatformUserModel::*)()>(&GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x225697c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserAuthToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.GetUserNamesForUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> (GlobalNamespace::OculusPlatformUserModel::*)(System::Collections::Generic::IReadOnlyList_1<::StringW>)>(&GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2256ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserNamesForUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel.RequestXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> (GlobalNamespace::OculusPlatformUserModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformUserModel::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2256e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusPlatformUserModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::*)()>(&GlobalNamespace::OculusPlatformUserModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2256e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IPlatformUserModel
constexpr  GlobalNamespace::OculusPlatformUserModel::operator GlobalNamespace::IPlatformUserModel() const noexcept {
return GlobalNamespace::IPlatformUserModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr GlobalNamespace::PlatformEnvironment  GlobalNamespace::OculusPlatformUserModel::kPlatformEnvironment{2u};
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__friendsUserIds(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::OculusPlatformUserModel::__get__friendsUserIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__userInfo(GlobalNamespace::UserInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UserInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::UserInfo>(value));
}
constexpr GlobalNamespace::UserInfo GlobalNamespace::OculusPlatformUserModel::__get__userInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UserInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__lastXPlatformTokenStatusChange(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OculusPlatformUserModel::__get__lastXPlatformTokenStatusChange() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::UserInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::UserInfo>>(value));
}
constexpr System::Action_1<GlobalNamespace::UserInfo> GlobalNamespace::OculusPlatformUserModel::__get_platformUserInfoDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::UserInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OculusPlatformUserModel::add_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "add_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::UserInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OculusPlatformUserModel::remove_platformUserInfoDidChangeEvent(System::Action_1<GlobalNamespace::UserInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "remove_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::UserInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OculusPlatformUserModel::get_CanXPlatformAccessTokenBeCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "get_CanXPlatformAccessTokenBeCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo> GlobalNamespace::OculusPlatformUserModel::GetUserInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds(bool cached)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserFriendsUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, false>(const_cast<void*>(instance), ___internal_method, cached);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData> GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserAuthToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::PlatformUserAuthTokenData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>> GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds(System::Collections::Generic::IReadOnlyList_1<::StringW> userIds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "GetUserNamesForUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::StringW>>, false>(const_cast<void*>(instance), ___internal_method, userIds);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData> GlobalNamespace::OculusPlatformUserModel::RequestXPlatformAccessToken(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::XPlatformAccessTokenData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
// Ctor Parameters []
 GlobalNamespace::OculusPlatformUserModel::OculusPlatformUserModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OculusPlatformUserModel>())) {}
 void GlobalNamespace::OculusPlatformUserModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusPlatformUserModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
