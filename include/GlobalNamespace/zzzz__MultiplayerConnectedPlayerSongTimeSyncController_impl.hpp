#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::*)(float_t, float_t, float_t)>(&GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21186f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__set_startSongTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__set_songTimeOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__set_timeScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "startSongTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songTimeOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeScale", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData(float_t startSongTime, float_t songTimeOffset, float_t timeScale)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData>(startSongTime, songTimeOffset, timeScale))) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData::_ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startSongTime, songTimeOffset, timeScale);
}
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2118ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2118cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "set_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_lastFrameDeltaSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2118cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_lastFrameDeltaSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2118cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "set_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2118cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_songEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2118cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_songLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_isReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2118ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2118ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2118cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StartSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2116e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.SetConnectedPlayerSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t, float_t)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2118e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "SetConnectedPlayerSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StopSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21170a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2118e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IAudioTimeSource
constexpr  GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::operator GlobalNamespace::IAudioTimeSource() const noexcept {
return GlobalNamespace::IAudioTimeSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__audioSyncLerpSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__audioSyncLerpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__forcedSyncDeltaTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__forcedSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__startSyncDeltaTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__startSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__stopSyncDeltaTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__stopSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__audioLatency(GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FloatSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FloatSO>(value));
}
constexpr GlobalNamespace::FloatSO GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__audioLatency() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FloatSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__initData(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__connectedPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__songTime_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__songTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__lastFrameDeltaSongTime_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__lastFrameDeltaSongTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__timeScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__startSongSyncTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__startSongSyncTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__fixingAudioSyncError(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__fixingAudioSyncError() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__isReady(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__isReady() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "set_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "set_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_songEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_songLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong(float_t songStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songStartSyncTime);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime(float_t syncTime, float_t songTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "SetConnectedPlayerSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, syncTime, songTime);
}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::MultiplayerConnectedPlayerSongTimeSyncController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerConnectedPlayerSongTimeSyncController>())) {}
 void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
