#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData.get_SonyLeaderboardId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::*)()>(&GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_SonyLeaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2255418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>::get(),
                            "get_SonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData.get_leaderboardId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::*)()>(&GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_leaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2255420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>::get(),
                            "get_leaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::*)(uint32_t, ::StringW)>(&GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2255428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::__set__sonyLeaderboardId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::__get__sonyLeaderboardId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::__set__leaderboardId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::__get__leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_SonyLeaderboardId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>::get(),
                            "get_SonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_leaderboardId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>::get(),
                            "get_leaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "sonyLeaderboardId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "leaderboardId", ty: "::StringW", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData(uint32_t sonyLeaderboardId, ::StringW leaderboardId)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>(sonyLeaderboardId, leaderboardId))) {}
 void GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData::_ctor(uint32_t sonyLeaderboardId, ::StringW leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sonyLeaderboardId, leaderboardId);
}
//  Writing Method size for method: GlobalNamespace::SonyLeaderboardIdsModelSO.get_leaderboardIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> (GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&GlobalNamespace::SonyLeaderboardIdsModelSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22551e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            "get_leaderboardIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyLeaderboardIdsModelSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&GlobalNamespace::SonyLeaderboardIdsModelSO::OnEnable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22551ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SonyLeaderboardIdsModelSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyLeaderboardIdsModelSO.GetSonyLeaderboardId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SonyLeaderboardIdsModelSO::*)(GlobalNamespace::IDifficultyBeatmap, ByRef<uint32_t>)>(&GlobalNamespace::SonyLeaderboardIdsModelSO::GetSonyLeaderboardId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x225539c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            "GetSonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyLeaderboardIdsModelSO.DoesSupport360
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&GlobalNamespace::SonyLeaderboardIdsModelSO::DoesSupport360)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SonyLeaderboardIdsModelSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SonyLeaderboardIdsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&GlobalNamespace::SonyLeaderboardIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2253c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SonyLeaderboardIdsModelSO::__set__leaderboardIds(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> GlobalNamespace::SonyLeaderboardIdsModelSO::__get__leaderboardIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SonyLeaderboardIdsModelSO::__set__leaderboardIdToSonyId(System::Collections::Generic::Dictionary_2<::StringW,uint32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,uint32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,uint32_t> GlobalNamespace::SonyLeaderboardIdsModelSO::__get__leaderboardIdToSonyId() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> GlobalNamespace::SonyLeaderboardIdsModelSO::get_leaderboardIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            "get_leaderboardIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SonyLeaderboardIdsModelSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::SonyLeaderboardIdsModelSO::GetSonyLeaderboardId(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ByRef<uint32_t> sonyLeaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            "GetSonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, sonyLeaderboardId);
}
 bool GlobalNamespace::SonyLeaderboardIdsModelSO::DoesSupport360()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            "DoesSupport360",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::SonyLeaderboardIdsModelSO::SonyLeaderboardIdsModelSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<SonyLeaderboardIdsModelSO>())) {}
 void GlobalNamespace::SonyLeaderboardIdsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyLeaderboardIdsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
