#pragma once
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_impl.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::__set_partyManager(GlobalNamespace::INetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayerModel, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayerModel>(value));
}
constexpr GlobalNamespace::INetworkPlayerModel GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::__get_partyManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayerModel, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BaseNetworkPlayerModel__PartyConfig>())) {}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x223b88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223bb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x223bb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayer (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x223bbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x223bc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223bc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::__set___2__current(GlobalNamespace::INetworkPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayer>(value));
}
constexpr GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::__get___2__current() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x223b930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x223bca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayer (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x223bcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x223bd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::*)()>(&GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223bda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept {
return System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::__set___2__current(GlobalNamespace::INetworkPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayer>(value));
}
constexpr GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::__get___2__current() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::INetworkPlayer GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_connectedPlayerManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_partyManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayerModel (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_partyManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x223b0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_partyManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_isConnectedOrConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_isConnectedOrConnecting)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x223b10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isConnectedOrConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x223b120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_discoveryEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.set_discoveryEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(bool)>(&GlobalNamespace::BaseNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223b13c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_hasNetworkingFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b150;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x223b158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x223b16c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223b180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223b230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223b2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223b390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.add_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::BaseNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.remove_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayerModel>)>(&GlobalNamespace::BaseNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.add_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<int32_t>)>(&GlobalNamespace::BaseNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.remove_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<int32_t>)>(&GlobalNamespace::BaseNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b44c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.add_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::BaseNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b450;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.remove_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::BaseNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.add_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::BaseNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.remove_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(System::Action_1<GlobalNamespace::INetworkPlayer>)>(&GlobalNamespace::BaseNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b45c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_partyPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x223b460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_partyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.INetworkPlayerModel_get_otherPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::INetworkPlayerModel_get_otherPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x223b470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "INetworkPlayerModel.get_otherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_localPlayerIsPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_isServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_isServer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x223b488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.get_isClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::get_isClient)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x223b4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x223b7ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.GetPartyPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::GetPartyPlayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x223b81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.GetOtherPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::GetOtherPlayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x223b8c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.ConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::BaseNetworkPlayerModel::ConnectionFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x223b964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.PlayerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::BaseNetworkPlayerModel::PlayerConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.PlayerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::BaseNetworkPlayerModel::PlayerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b978;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.PlayerStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::BaseNetworkPlayerModel::PlayerStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b97c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.ConnectedPlayerManagerChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::ConnectedPlayerManagerChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.PlayerOrderChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::BaseNetworkPlayerModel::PlayerOrderChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.PartySizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(int32_t)>(&GlobalNamespace::BaseNetworkPlayerModel::PartySizeChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.Connected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::Connected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223b98c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.Disconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::BaseNetworkPlayerModel::Disconnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x223b990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.DestroyPartyConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x223b9a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseNetworkPlayerModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.DestroyConnectedPlayerManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::DestroyConnectedPlayerManager)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x223b514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "DestroyConnectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)(::StringW)>(&GlobalNamespace::BaseNetworkPlayerModel::Log)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x223bab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseNetworkPlayerModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223bb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr  GlobalNamespace::BaseNetworkPlayerModel::operator GlobalNamespace::INetworkPlayerModel() const noexcept {
return GlobalNamespace::INetworkPlayerModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set__connectedPlayerManager(GlobalNamespace::ConnectedPlayerManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ConnectedPlayerManager>(value));
}
constexpr GlobalNamespace::ConnectedPlayerManager GlobalNamespace::BaseNetworkPlayerModel::__get__connectedPlayerManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set__partyManager(GlobalNamespace::INetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkPlayerModel, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkPlayerModel>(value));
}
constexpr GlobalNamespace::INetworkPlayerModel GlobalNamespace::BaseNetworkPlayerModel::__get__partyManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkPlayerModel, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set__configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::BaseNetworkPlayerModel::__get__configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::BaseNetworkPlayerModel::__get__selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set__discoveryEnabled_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BaseNetworkPlayerModel::__get__discoveryEnabled_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> GlobalNamespace::BaseNetworkPlayerModel::__get_connectedPlayerManagerCreatedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__set_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::INetworkPlayerModel>>(value));
}
constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> GlobalNamespace::BaseNetworkPlayerModel::__get_connectedPlayerManagerDestroyedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::INetworkPlayerModel>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ConnectedPlayerManager GlobalNamespace::BaseNetworkPlayerModel::get_connectedPlayerManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ConnectedPlayerManager, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::INetworkPlayerModel GlobalNamespace::BaseNetworkPlayerModel::get_partyManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_partyManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPlayerModel, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_isConnectedOrConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isConnectedOrConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_discoveryEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::set_discoveryEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "set_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_hasNetworkingFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_hasNetworkingFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::BaseNetworkPlayerModel::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::BaseNetworkPlayerModel::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::BaseNetworkPlayerModel::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::add_partySizeChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::remove_partySizeChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BaseNetworkPlayerModel::remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::INetworkPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::BaseNetworkPlayerModel::get_partyPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_partyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::BaseNetworkPlayerModel::INetworkPlayerModel_get_otherPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "INetworkPlayerModel.get_otherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_localPlayerIsPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::BaseNetworkPlayerModel::get_isClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "get_isClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::BaseNetworkPlayerModel::GetPartyPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "GetPartyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GlobalNamespace::BaseNetworkPlayerModel::GetOtherPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "GetOtherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "ConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 void GlobalNamespace::BaseNetworkPlayerModel::PlayerConnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "PlayerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::BaseNetworkPlayerModel::PlayerDisconnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "PlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::BaseNetworkPlayerModel::PlayerStateChanged(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "PlayerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::BaseNetworkPlayerModel::ConnectedPlayerManagerChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "ConnectedPlayerManagerChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::PlayerOrderChanged(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "PlayerOrderChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::BaseNetworkPlayerModel::PartySizeChanged(int32_t currentPartySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "PartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentPartySize);
}
 void GlobalNamespace::BaseNetworkPlayerModel::Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::Disconnected(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "Disconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
template<typename T>
 bool GlobalNamespace::BaseNetworkPlayerModel::CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> createConfig)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                        "CreatePartyConnection",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, createConfig);
}
 void GlobalNamespace::BaseNetworkPlayerModel::DestroyPartyConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "DestroyPartyConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BaseNetworkPlayerModel::DestroyConnectedPlayerManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "DestroyConnectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 bool GlobalNamespace::BaseNetworkPlayerModel::CreateConnectedPlayerManager(GlobalNamespace::IConnectionInitParams_1<T> initParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                        "CreateConnectedPlayerManager",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionInitParams_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
 void GlobalNamespace::BaseNetworkPlayerModel::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
// Ctor Parameters []
 GlobalNamespace::BaseNetworkPlayerModel::BaseNetworkPlayerModel()  : GlobalNamespace::StandaloneMonobehavior(THROW_UNLESS(::il2cpp_utils::New<BaseNetworkPlayerModel>())) {}
 void GlobalNamespace::BaseNetworkPlayerModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseNetworkPlayerModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
