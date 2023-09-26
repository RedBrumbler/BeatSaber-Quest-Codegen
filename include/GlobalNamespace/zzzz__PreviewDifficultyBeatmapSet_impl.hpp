#pragma once
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::PreviewDifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO (GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22253f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PreviewDifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PreviewDifficultyBeatmapSet.get_beatmapDifficulties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::BeatmapDifficulty> (GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22253fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PreviewDifficultyBeatmapSet>::get(),
                            "get_beatmapDifficulties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PreviewDifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewDifficultyBeatmapSet::*)(GlobalNamespace::BeatmapCharacteristicSO, ::ArrayW<GlobalNamespace::BeatmapDifficulty>)>(&GlobalNamespace::PreviewDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2225404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PreviewDifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::BeatmapDifficulty>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PreviewDifficultyBeatmapSet::__set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::PreviewDifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PreviewDifficultyBeatmapSet::__set__beatmapDifficulties(::ArrayW<GlobalNamespace::BeatmapDifficulty> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::BeatmapDifficulty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::BeatmapDifficulty>>(value));
}
constexpr ::ArrayW<GlobalNamespace::BeatmapDifficulty> GlobalNamespace::PreviewDifficultyBeatmapSet::__get__beatmapDifficulties() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::BeatmapDifficulty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PreviewDifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<GlobalNamespace::BeatmapDifficulty> GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PreviewDifficultyBeatmapSet>::get(),
                            "get_beatmapDifficulties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::BeatmapDifficulty>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulties", ty: "::ArrayW<GlobalNamespace::BeatmapDifficulty>", modifiers: "", def_value: None }]
 GlobalNamespace::PreviewDifficultyBeatmapSet::PreviewDifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<GlobalNamespace::BeatmapDifficulty> beatmapDifficulties)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PreviewDifficultyBeatmapSet>(beatmapCharacteristic, beatmapDifficulties))) {}
 void GlobalNamespace::PreviewDifficultyBeatmapSet::_ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<GlobalNamespace::BeatmapDifficulty> beatmapDifficulties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PreviewDifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::BeatmapDifficulty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapCharacteristic, beatmapDifficulties);
}
