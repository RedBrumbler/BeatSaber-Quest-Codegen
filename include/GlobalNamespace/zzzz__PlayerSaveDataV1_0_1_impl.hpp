#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::All{0};
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::FullHeightOnly{1};
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::None{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::Bar{0};
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::Battery{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::Faster{1};
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::Slower{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22598c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_energyType(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_energyType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_noFail(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_noFail() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_instaFail(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_instaFail() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_failOnSaberClash(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_failOnSaberClash() const {
return ::cordl_internals::getInstanceField<bool, 0x16>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_enabledObstacleType(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_enabledObstacleType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_fastNotes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_fastNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_strictAngles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_strictAngles() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_disappearingArrows(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_noBombs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_noBombs() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__set_songSpeed(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::__get_songSpeed() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22598c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_staticLights(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_staticLights() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_leftHanded(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_leftHanded() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_swapColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_swapColors() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_playerHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_playerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_disableSFX(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_disableSFX() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_reduceDebris(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_reduceDebris() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_advancedHud(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_advancedHud() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_noTextsAndHuds(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_noTextsAndHuds() const {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22598d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::*)(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData)>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x225997c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__set_campaignOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_campaignOverallStatsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__set_soloFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_soloFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__set_partyFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_partyFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "campaignOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "soloFreePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "partyFreePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData partyFreePlayOverallStatsData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData))) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData partyFreePlayOverallStatsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2259974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::*)(int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22599b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_goodCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_badCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_missedCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_missedCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_totalScore(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_totalScore() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_playedLevelsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_playedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_cleardLevelsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_cleardLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_failedLevelsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_failedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_fullComboCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_fullComboCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_timePlayed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_timePlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_handDistanceTravelled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_handDistanceTravelled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_cummulativeCutScoreWithoutMultiplier(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_cummulativeCutScoreWithoutMultiplier() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalScore", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "playedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cleardLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "failedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullComboCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "handDistanceTravelled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cummulativeCutScoreWithoutMultiplier", ty: "int64_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier))) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2259a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_difficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_difficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_highScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_highScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_maxCombo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_fullCombo(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_maxRank(GlobalNamespace::GlobalNamespace__RankModel__Rank value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RankModel__Rank, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RankModel__Rank>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RankModel__Rank GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_maxRank() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RankModel__Rank, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_validScore(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_validScore() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_playCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_playCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2259a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__set_missionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__get_missionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__set_cleared(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__get_cleared() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2259a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::__set_unlockedAchievements(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::__get_unlockedAchievements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::__set_unlockedAchievementsToUpload(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::__get_unlockedAchievementsToUpload() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2259a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_shouldShowTutorialPrompt(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_shouldShowTutorialPrompt() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_gameplayModifiers(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerSpecificSettings(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerAllOverallStatsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_levelsStatsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData> GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_levelsStatsData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_missionsStatsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData> GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_missionsStatsData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_showedMissionHelpIds(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_showedMissionHelpIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__set_achievementsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::__get_achievementsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::*)()>(&GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2259a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::__set_playerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::__set_playerSpecificSettings(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer>())) {}
 void GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::PlayerSaveDataV1_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSaveDataV1_0_1::*)()>(&GlobalNamespace::PlayerSaveDataV1_0_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22598b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSaveDataV1_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr GlobalNamespace::BeatmapDifficulty  GlobalNamespace::PlayerSaveDataV1_0_1::kDefaulLastSelectedBeatmapDifficulty{1};
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::PlayerSaveDataV1_0_1::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_localPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer> GlobalNamespace::PlayerSaveDataV1_0_1::__get_localPlayers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_guestPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer> GlobalNamespace::PlayerSaveDataV1_0_1::__get_guestPlayers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_lastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::PlayerSaveDataV1_0_1::__get_lastSelectedBeatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSaveDataV1_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlayerSaveDataV1_0_1>())) {}
 void GlobalNamespace::PlayerSaveDataV1_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSaveDataV1_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
