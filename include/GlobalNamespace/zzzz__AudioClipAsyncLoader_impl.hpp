#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21d9b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21d9f18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21d9f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21d9f4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d9b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0._Load_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21d9f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::__set_audioClip(UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioClip>(value));
}
constexpr UnityEngine::AudioClip GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::__get_audioClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>())) {}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_Load_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d9dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0._Load_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_Load_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21d9fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__set___4__this(GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr GlobalNamespace::AudioClipAsyncLoader GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__set_audioClipFilePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__get_audioClipFilePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>())) {}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_Load_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21da0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c._Unload_b__19_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::*)(UnityEngine::AudioClip)>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::_Unload_b__19_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21da0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            "<Unload>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::__set___9(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>(value));
}
 GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::__set___9__19_0(System::Action_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::AudioClip>, "<>9__19_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get>(std::forward<System::Action_1<UnityEngine::AudioClip>>(value));
}
 System::Action_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::__get___9__19_0()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::AudioClip>, "<>9__19_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::GlobalNamespace__AudioClipAsyncLoader____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__AudioClipAsyncLoader____c>())) {}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c::_Unload_b__19_0(UnityEngine::AudioClip loadedAudioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            "<Unload>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadedAudioClip);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::*)()>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x21da0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21da484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::AudioClipAsyncLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDelete", ty: "System::Action_1<UnityEngine::AudioClip>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::AudioClipAsyncLoader __4__this, int32_t cacheKey, System::Action_1<UnityEngine::AudioClip> onDelete, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cacheKey = cacheKey;
this->onDelete = onDelete;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___4__this(GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x28>(this->__instance, std::forward<GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr GlobalNamespace::AudioClipAsyncLoader GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set_cacheKey(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get_cacheKey() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set_onDelete(System::Action_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::AudioClip>, 0x38>(this->__instance, std::forward<System::Action_1<UnityEngine::AudioClip>>(value));
}
constexpr System::Action_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get_onDelete() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::AudioClip>, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>, GlobalNamespace::IMediaAsyncLoader)>(&GlobalNamespace::AudioClipAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21d8b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMediaAsyncLoader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.LoadPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::AudioClipAsyncLoader::LoadPreview)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x21d8b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.LoadSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::AudioClipAsyncLoader::LoadSong)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x21d8e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.UnloadPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::AudioClipAsyncLoader::UnloadPreview)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21d91cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.UnloadSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IBeatmapLevel)>(&GlobalNamespace::AudioClipAsyncLoader::UnloadSong)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21d94d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IAssetSongPreviewAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d8d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IAssetSongAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d9074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IFilePathSongPreviewAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IFilePathSongAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d9120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IAssetSongPreviewAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d9380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IAssetSongAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IFilePathSongPreviewAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d942c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(GlobalNamespace::IFilePathSongAudioClipProvider)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d9738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(UnityEngine::AudioClip)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21d97e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21d98bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip> (GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate)>(&GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x21d9c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(UnityEngine::AudioClip)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x21d9994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21d9aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, System::Action_1<UnityEngine::AudioClip>)>(&GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21d9e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::AudioClip>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::AudioClipAsyncLoader::*)(UnityEngine::AudioClip)>(&GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21d9b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21d9df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioClipAsyncLoader.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::AudioClipAsyncLoader::LogError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21d9ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AudioClipAsyncLoader::__set__cache(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>>(value));
}
constexpr GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> GlobalNamespace::AudioClipAsyncLoader::__get__cache() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__set__mediaAsyncLoader(GlobalNamespace::IMediaAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMediaAsyncLoader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMediaAsyncLoader>(value));
}
constexpr GlobalNamespace::IMediaAsyncLoader GlobalNamespace::AudioClipAsyncLoader::__get__mediaAsyncLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMediaAsyncLoader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cache", ty: "GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "mediaAsyncLoader", ty: "GlobalNamespace::IMediaAsyncLoader", modifiers: "", def_value: None }]
 GlobalNamespace::AudioClipAsyncLoader::AudioClipAsyncLoader(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> cache, GlobalNamespace::IMediaAsyncLoader mediaAsyncLoader)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AudioClipAsyncLoader>(cache, mediaAsyncLoader))) {}
 void GlobalNamespace::AudioClipAsyncLoader::_ctor(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> cache, GlobalNamespace::IMediaAsyncLoader mediaAsyncLoader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMediaAsyncLoader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cache, mediaAsyncLoader);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::LoadPreview(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::LoadSong(GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void GlobalNamespace::AudioClipAsyncLoader::UnloadPreview(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void GlobalNamespace::AudioClipAsyncLoader::UnloadSong(GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(GlobalNamespace::IAssetSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(GlobalNamespace::IAssetSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(GlobalNamespace::IFilePathSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(GlobalNamespace::IFilePathSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(GlobalNamespace::IAssetSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(GlobalNamespace::IAssetSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(GlobalNamespace::IFilePathSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(GlobalNamespace::IFilePathSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(UnityEngine::AudioClip audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, audioClip);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(::StringW audioClipFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, audioClipFilePath);
}
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GlobalNamespace::AudioClipAsyncLoader::Load(int32_t cacheKey, GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate loadMethodDelegate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, cacheKey, loadMethodDelegate);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(UnityEngine::AudioClip audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioClip);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(::StringW audioClipFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioClipFilePath);
}
 void GlobalNamespace::AudioClipAsyncLoader::Unload(int32_t cacheKey, System::Action_1<UnityEngine::AudioClip> onDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::AudioClip>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cacheKey, onDelete);
}
 int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(UnityEngine::AudioClip audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, audioClip);
}
 int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::StringW audioClipFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, audioClipFilePath);
}
 void GlobalNamespace::AudioClipAsyncLoader::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
