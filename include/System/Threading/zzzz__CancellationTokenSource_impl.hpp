#pragma once
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackCoreWorkArguments_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
//  Writing Method size for method: System::Threading::CancellationTokenSource.get_IsCancellationRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24d4d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_IsCancellationRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.get_IsCancellationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_IsCancellationCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24d6ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_IsCancellationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.get_IsDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d70c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_IsDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.get_ThreadIDExecutingCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24d6ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_ThreadIDExecutingCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.set_ThreadIDExecutingCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(int32_t)>(&System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24d70cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "set_ThreadIDExecutingCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.get_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationToken (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_Token)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24d70f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.get_ExecutingCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationCallbackInfo (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_ExecutingCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24d715c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_ExecutingCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24d7174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::TimeSpan)>(&System::Threading::CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24d71a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.InitializeWithTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(int32_t)>(&System::Threading::CancellationTokenSource::InitializeWithTimer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24d7264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "InitializeWithTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::Cancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24d7320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d733c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.CancelAfter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::TimeSpan)>(&System::Threading::CancellationTokenSource::CancelAfter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24d7414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancelAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.CancelAfter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(int32_t)>(&System::Threading::CancellationTokenSource::CancelAfter)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x24d74b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancelAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.TimerCallbackLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::CancellationTokenSource::TimerCallbackLogic)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x24d76a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "TimerCallbackLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24d77bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24d7828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::CancellationTokenSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.ThrowIfDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24d7108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "ThrowIfDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.ThrowObjectDisposedException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::CancellationTokenSource::ThrowObjectDisposedException)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24d78b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "ThrowObjectDisposedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.InternalRegister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenRegistration (System::Threading::CancellationTokenSource::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::SynchronizationContext, System::Threading::ExecutionContext)>(&System::Threading::CancellationTokenSource::InternalRegister)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x24d5108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "InternalRegister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SynchronizationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.NotifyCancellation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::NotifyCancellation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24d7364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "NotifyCancellation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.ExecuteCallbackHandlers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::ExecuteCallbackHandlers)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x24d799c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "ExecuteCallbackHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.CancellationCallbackCoreWork_OnSyncContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24d7f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancellationCallbackCoreWork_OnSyncContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.CancellationCallbackCoreWork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::Threading::CancellationCallbackCoreWorkArguments)>(&System::Threading::CancellationTokenSource::CancellationCallbackCoreWork)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24d7e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancellationCallbackCoreWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationCallbackCoreWorkArguments>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenSource (*)(System::Threading::CancellationToken, System::Threading::CancellationToken)>(&System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24d80ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CreateLinkedTokenSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenSource (*)(System::Threading::CancellationToken)>(&System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24d8364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CreateLinkedTokenSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenSource.WaitForCallbackToComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::Threading::CancellationCallbackInfo)>(&System::Threading::CancellationTokenSource::WaitForCallbackToComplete)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24d6ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "WaitForCallbackToComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationCallbackInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Threading::CancellationTokenSource::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::CancellationTokenSource::__set_s_canceledSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setStaticField<System::Threading::CancellationTokenSource, "s_canceledSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>(std::forward<System::Threading::CancellationTokenSource>(value));
}
 System::Threading::CancellationTokenSource System::Threading::CancellationTokenSource::__get_s_canceledSource()  {
return ::cordl_internals::getStaticField<System::Threading::CancellationTokenSource, "s_canceledSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>();
}
 void System::Threading::CancellationTokenSource::__set_s_neverCanceledSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setStaticField<System::Threading::CancellationTokenSource, "s_neverCanceledSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>(std::forward<System::Threading::CancellationTokenSource>(value));
}
 System::Threading::CancellationTokenSource System::Threading::CancellationTokenSource::__get_s_neverCanceledSource()  {
return ::cordl_internals::getStaticField<System::Threading::CancellationTokenSource, "s_neverCanceledSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>();
}
 void System::Threading::CancellationTokenSource::__set_s_nLists(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_nLists", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>(std::forward<int32_t>(value));
}
 int32_t System::Threading::CancellationTokenSource::__get_s_nLists()  {
return ::cordl_internals::getStaticField<int32_t, "s_nLists", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>();
}
constexpr void System::Threading::CancellationTokenSource::__set__kernelEvent(System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEvent, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEvent>(value));
}
constexpr System::Threading::ManualResetEvent System::Threading::CancellationTokenSource::__get__kernelEvent() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEvent, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationTokenSource::__set__registeredCallbacksLists(::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>>>(value));
}
constexpr ::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>> System::Threading::CancellationTokenSource::__get__registeredCallbacksLists() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationTokenSource::__set__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::CancellationTokenSource::__get__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationTokenSource::__set__threadIDExecutingCallbacks(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::CancellationTokenSource::__get__threadIDExecutingCallbacks() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationTokenSource::__set__disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::CancellationTokenSource::__get__disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationTokenSource::__set__executingCallback(System::Threading::CancellationCallbackInfo value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationCallbackInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationCallbackInfo>(value));
}
constexpr System::Threading::CancellationCallbackInfo System::Threading::CancellationTokenSource::__get__executingCallback() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationCallbackInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::CancellationTokenSource::__set__timer(System::Threading::Timer value)  {
::cordl_internals::setInstanceField<System::Threading::Timer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Timer>(value));
}
constexpr System::Threading::Timer System::Threading::CancellationTokenSource::__get__timer() const {
return ::cordl_internals::getInstanceField<System::Threading::Timer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::CancellationTokenSource::__set_s_timerCallback(System::Threading::TimerCallback value)  {
::cordl_internals::setStaticField<System::Threading::TimerCallback, "s_timerCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>(std::forward<System::Threading::TimerCallback>(value));
}
 System::Threading::TimerCallback System::Threading::CancellationTokenSource::__get_s_timerCallback()  {
return ::cordl_internals::getStaticField<System::Threading::TimerCallback, "s_timerCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get>();
}
 bool System::Threading::CancellationTokenSource::get_IsCancellationRequested()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_IsCancellationRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::CancellationTokenSource::get_IsCancellationCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_IsCancellationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::CancellationTokenSource::get_IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_IsDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_ThreadIDExecutingCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "set_ThreadIDExecutingCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::CancellationToken System::Threading::CancellationTokenSource::get_Token()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::CancellationToken, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::CancellationCallbackInfo System::Threading::CancellationTokenSource::get_ExecutingCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "get_ExecutingCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::CancellationCallbackInfo, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Threading::CancellationTokenSource::CancellationTokenSource()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CancellationTokenSource>())) {}
 void System::Threading::CancellationTokenSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "delay", ty: "System::TimeSpan", modifiers: "", def_value: None }]
 System::Threading::CancellationTokenSource::CancellationTokenSource(System::TimeSpan delay)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CancellationTokenSource>(delay))) {}
 void System::Threading::CancellationTokenSource::_ctor(System::TimeSpan delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, delay);
}
 void System::Threading::CancellationTokenSource::InitializeWithTimer(int32_t millisecondsDelay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "InitializeWithTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, millisecondsDelay);
}
 void System::Threading::CancellationTokenSource::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::CancellationTokenSource::Cancel(bool throwOnFirstException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, throwOnFirstException);
}
 void System::Threading::CancellationTokenSource::CancelAfter(System::TimeSpan delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancelAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, delay);
}
 void System::Threading::CancellationTokenSource::CancelAfter(int32_t millisecondsDelay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancelAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, millisecondsDelay);
}
 void System::Threading::CancellationTokenSource::TimerCallbackLogic(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "TimerCallbackLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
 void System::Threading::CancellationTokenSource::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::CancellationTokenSource::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Threading::CancellationTokenSource::ThrowIfDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "ThrowIfDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::CancellationTokenSource::ThrowObjectDisposedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "ThrowObjectDisposedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 System::Threading::CancellationTokenRegistration System::Threading::CancellationTokenSource::InternalRegister(System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType stateForCallback, System::Threading::SynchronizationContext targetSyncContext, System::Threading::ExecutionContext executionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "InternalRegister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SynchronizationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::CancellationTokenRegistration, false>(const_cast<void*>(instance), ___internal_method, callback, stateForCallback, targetSyncContext, executionContext);
}
 void System::Threading::CancellationTokenSource::NotifyCancellation(bool throwOnFirstException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "NotifyCancellation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, throwOnFirstException);
}
 void System::Threading::CancellationTokenSource::ExecuteCallbackHandlers(bool throwOnFirstException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "ExecuteCallbackHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, throwOnFirstException);
}
 void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancellationCallbackCoreWork_OnSyncContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork(System::Threading::CancellationCallbackCoreWorkArguments args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CancellationCallbackCoreWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationCallbackCoreWorkArguments>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 System::Threading::CancellationTokenSource System::Threading::CancellationTokenSource::CreateLinkedTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CreateLinkedTokenSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::CancellationTokenSource, false>(nullptr, ___internal_method, token1, token2);
}
 System::Threading::CancellationTokenSource System::Threading::CancellationTokenSource::CreateLinkedTokenSource(System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "CreateLinkedTokenSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::CancellationTokenSource, false>(nullptr, ___internal_method, token);
}
 void System::Threading::CancellationTokenSource::WaitForCallbackToComplete(System::Threading::CancellationCallbackInfo callbackInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenSource>::get(),
                            "WaitForCallbackToComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationCallbackInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callbackInfo);
}
//  Writing Method size for method: System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::*)(System::Threading::CancellationToken)>(&System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24d8180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::*)(bool)>(&System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24d8594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::__set__reg1(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::__get__reg1() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "token1", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
 System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource(System::Threading::CancellationToken token1)  : System::Threading::CancellationTokenSource(THROW_UNLESS(::il2cpp_utils::New<System__Threading__CancellationTokenSource__Linked1CancellationTokenSource>(token1))) {}
 void System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::_ctor(System::Threading::CancellationToken token1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token1);
}
 void System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked1CancellationTokenSource>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
//  Writing Method size for method: System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::*)(System::Threading::CancellationToken, System::Threading::CancellationToken)>(&System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x24d8258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::*)(bool)>(&System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24d85c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::__set__reg1(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::__get__reg1() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::__set__reg2(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::__get__reg2() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "token1", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "token2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
 System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2)  : System::Threading::CancellationTokenSource(THROW_UNLESS(::il2cpp_utils::New<System__Threading__CancellationTokenSource__Linked2CancellationTokenSource>(token1, token2))) {}
 void System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::_ctor(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token1, token2);
}
 void System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__Linked2CancellationTokenSource>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
//  Writing Method size for method: GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::*)()>(&GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d872c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c.__cctor_b__4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24d8734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>::get(),
                            "<.cctor>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::__set___9(GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>::get>(std::forward<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>(value));
}
 GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>())) {}
 void GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c::__cctor_b__4_0(::bs_hook::Il2CppWrapperType s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource____c>::get(),
                            "<.cctor>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource::__set_s_linkedTokenCancelDelegate(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_linkedTokenCancelDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource>::get>(std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_1<::bs_hook::Il2CppWrapperType> System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource::__get_s_linkedTokenCancelDelegate()  {
return ::cordl_internals::getStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_linkedTokenCancelDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__CancellationTokenSource__LinkedNCancellationTokenSource>::get>();
}
