#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType::GlobalNamespace__NoteData__GameplayType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__NoteData__GameplayType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NoteData__GameplayType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType  GlobalNamespace::GlobalNamespace__NoteData__GameplayType::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType  GlobalNamespace::GlobalNamespace__NoteData__GameplayType::Bomb{1};
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType  GlobalNamespace::GlobalNamespace__NoteData__GameplayType::BurstSliderHead{2};
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType  GlobalNamespace::GlobalNamespace__NoteData__GameplayType::BurstSliderElement{3};
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType  GlobalNamespace::GlobalNamespace__NoteData__GameplayType::BurstSliderElementFill{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType::GlobalNamespace__NoteData__ScoringType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__NoteData__ScoringType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NoteData__ScoringType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::Ignore{-1};
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::NoScore{0};
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::Normal{1};
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::SliderHead{2};
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::SliderTail{3};
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::BurstSliderHead{4};
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType  GlobalNamespace::GlobalNamespace__NoteData__ScoringType::BurstSliderElement{5};
//  Writing Method size for method: GlobalNamespace::NoteData.get_subtypeGroupIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2dcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_gameplayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__NoteData__GameplayType (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_gameplayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::GlobalNamespace__NoteData__GameplayType)>(&GlobalNamespace::NoteData::set_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_scoringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__NoteData__ScoringType (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_scoringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_scoringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_scoringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::GlobalNamespace__NoteData__ScoringType)>(&GlobalNamespace::NoteData::set_scoringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_scoringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_colorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_colorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::ColorType)>(&GlobalNamespace::NoteData::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_cutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_cutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteData::set_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_timeToNextColorNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_timeToNextColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_timeToNextColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_timeToNextColorNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t)>(&GlobalNamespace::NoteData::set_timeToNextColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_timeToNextColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_timeToPrevColorNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_timeToPrevColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_timeToPrevColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_timeToPrevColorNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t)>(&GlobalNamespace::NoteData::set_timeToPrevColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_timeToPrevColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(int32_t)>(&GlobalNamespace::NoteData::set_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_noteLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_noteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_noteLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::NoteData::set_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_noteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_beforeJumpNoteLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_beforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_beforeJumpNoteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_beforeJumpNoteLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::NoteData::set_beforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_beforeJumpNoteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_flipLineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_flipLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_flipLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_flipLineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(int32_t)>(&GlobalNamespace::NoteData::set_flipLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_flipLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_flipYSide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_flipYSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_flipYSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_flipYSide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t)>(&GlobalNamespace::NoteData::set_flipYSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_flipYSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_cutDirectionAngleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_cutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_cutDirectionAngleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_cutDirectionAngleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t)>(&GlobalNamespace::NoteData::set_cutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_cutDirectionAngleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.get_cutSfxVolumeMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::get_cutSfxVolumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_cutSfxVolumeMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.set_cutSfxVolumeMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t)>(&GlobalNamespace::NoteData::set_cutSfxVolumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda2e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_cutSfxVolumeMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDataItem (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::GetCopy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xda2ea4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t, int32_t, GlobalNamespace::NoteLineLayer, GlobalNamespace::NoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType, GlobalNamespace::ColorType, GlobalNamespace::NoteCutDirection, float_t, float_t, int32_t, float_t, float_t, float_t)>(&GlobalNamespace::NoteData::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xda2f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.CreateBombNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (*)(float_t, int32_t, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::NoteData::CreateBombNoteData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xda3028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CreateBombNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.CreateBasicNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (*)(float_t, int32_t, GlobalNamespace::NoteLineLayer, GlobalNamespace::ColorType, GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteData::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xda30dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CreateBasicNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.CreateBurstSliderNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (*)(float_t, int32_t, GlobalNamespace::NoteLineLayer, GlobalNamespace::NoteLineLayer, GlobalNamespace::ColorType, GlobalNamespace::NoteCutDirection, float_t)>(&GlobalNamespace::NoteData::CreateBurstSliderNoteData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xda319c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CreateBurstSliderNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.CopyWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (GlobalNamespace::NoteData::*)(System::Nullable_1<float_t>, System::Nullable_1<int32_t>, System::Nullable_1<GlobalNamespace::NoteLineLayer>, System::Nullable_1<GlobalNamespace::NoteLineLayer>, System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>, System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>, System::Nullable_1<GlobalNamespace::ColorType>, System::Nullable_1<GlobalNamespace::NoteCutDirection>, System::Nullable_1<float_t>, System::Nullable_1<float_t>, System::Nullable_1<int32_t>, System::Nullable_1<float_t>, System::Nullable_1<float_t>, System::Nullable_1<float_t>)>(&GlobalNamespace::NoteData::CopyWith)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xda3268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::NoteLineLayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::NoteLineLayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::ColorType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::NoteCutDirection>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.SetBeforeJumpNoteLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::NoteData::SetBeforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetBeforeJumpNoteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.ChangeToBurstSliderHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::ChangeToBurstSliderHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xda353c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToBurstSliderHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.ChangeToGameNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::ChangeToGameNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xda354c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToGameNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.ChangeToSliderHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::ChangeToSliderHead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToSliderHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.ChangeToSliderTail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::ChangeToSliderTail)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda3568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToSliderTail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.SetNoteFlipToNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::NoteData)>(&GlobalNamespace::NoteData::SetNoteFlipToNote)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xda3574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetNoteFlipToNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.SetCutDirectionAngleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(float_t)>(&GlobalNamespace::NoteData::SetCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda35e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetCutDirectionAngleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.ResetNoteFlip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::ResetNoteFlip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda35e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ResetNoteFlip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.Mirror
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(int32_t)>(&GlobalNamespace::NoteData::Mirror)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xda35f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.SetNoteToAnyCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::SetNoteToAnyCutDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xda3658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetNoteToAnyCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.ChangeNoteCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)(GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::NoteData::ChangeNoteCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda3664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeNoteCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.TransformNoteAOrBToRandomType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteData::*)()>(&GlobalNamespace::NoteData::TransformNoteAOrBToRandomType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xda366c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "TransformNoteAOrBToRandomType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteData.SubtypeIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(GlobalNamespace::ColorType)>(&GlobalNamespace::NoteData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xda3024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SubtypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteData::__set__gameplayType_k__BackingField(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType GlobalNamespace::NoteData::__get__gameplayType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__scoringType_k__BackingField(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType GlobalNamespace::NoteData::__get__scoringType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__colorType_k__BackingField(GlobalNamespace::ColorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorType>(value));
}
constexpr GlobalNamespace::ColorType GlobalNamespace::NoteData::__get__colorType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__cutDirection_k__BackingField(GlobalNamespace::NoteCutDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutDirection, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutDirection>(value));
}
constexpr GlobalNamespace::NoteCutDirection GlobalNamespace::NoteData::__get__cutDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutDirection, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__timeToNextColorNote_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteData::__get__timeToNextColorNote_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__timeToPrevColorNote_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteData::__get__timeToPrevColorNote_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__lineIndex_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteData::__get__lineIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__noteLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::__get__noteLineLayer_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__beforeJumpNoteLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::__get__beforeJumpNoteLineLayer_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__flipLineIndex_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteData::__get__flipLineIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__flipYSide_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteData::__get__flipYSide_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__cutDirectionAngleOffset_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteData::__get__cutDirectionAngleOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteData::__set__cutSfxVolumeMultiplier_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteData::__get__cutSfxVolumeMultiplier_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::NoteData::get_subtypeGroupIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_subtypeGroupIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__NoteData__GameplayType GlobalNamespace::NoteData::get_gameplayType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__NoteData__ScoringType GlobalNamespace::NoteData::get_scoringType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_scoringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_scoringType(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_scoringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::ColorType GlobalNamespace::NoteData::get_colorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ColorType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_colorType(GlobalNamespace::ColorType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::NoteCutDirection GlobalNamespace::NoteData::get_cutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutDirection, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_cutDirection(GlobalNamespace::NoteCutDirection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::NoteData::get_timeToNextColorNote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_timeToNextColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_timeToNextColorNote(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_timeToNextColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::NoteData::get_timeToPrevColorNote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_timeToPrevColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_timeToPrevColorNote(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_timeToPrevColorNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::NoteData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_lineIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_noteLineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_noteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteLineLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_noteLineLayer(GlobalNamespace::NoteLineLayer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_noteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_beforeJumpNoteLineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_beforeJumpNoteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteLineLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_beforeJumpNoteLineLayer(GlobalNamespace::NoteLineLayer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_beforeJumpNoteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::NoteData::get_flipLineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_flipLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_flipLineIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_flipLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::NoteData::get_flipYSide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_flipYSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_flipYSide(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_flipYSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::NoteData::get_cutDirectionAngleOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_cutDirectionAngleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_cutDirectionAngleOffset(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_cutDirectionAngleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::NoteData::get_cutSfxVolumeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "get_cutSfxVolumeMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::set_cutSfxVolumeMultiplier(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "set_cutSfxVolumeMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::BeatmapDataItem GlobalNamespace::NoteData::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapDataItem, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "beforeJumpNoteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "gameplayType", ty: "GlobalNamespace::GlobalNamespace__NoteData__GameplayType", modifiers: "", def_value: None }, CppParam { name: "scoringType", ty: "GlobalNamespace::GlobalNamespace__NoteData__ScoringType", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "GlobalNamespace::ColorType", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "timeToNextColorNote", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeToPrevColorNote", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flipLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flipYSide", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutDirectionAngleOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cutSfxVolumeMultiplier", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::NoteData::NoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier)  : GlobalNamespace::BeatmapObjectData(THROW_UNLESS(::il2cpp_utils::New<NoteData>(time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier))) {}
 void GlobalNamespace::NoteData::_ctor(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
 GlobalNamespace::NoteData GlobalNamespace::NoteData::CreateBombNoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CreateBombNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(nullptr, ___internal_method, time, lineIndex, noteLineLayer);
}
 GlobalNamespace::NoteData GlobalNamespace::NoteData::CreateBasicNoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CreateBasicNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(nullptr, ___internal_method, time, lineIndex, noteLineLayer, colorType, cutDirection);
}
 GlobalNamespace::NoteData GlobalNamespace::NoteData::CreateBurstSliderNoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t cutSfxVolumeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CreateBurstSliderNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(nullptr, ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, colorType, cutDirection, cutSfxVolumeMultiplier);
}
/// @param time: System::Nullable_1<float_t> (default: {})
/// @param lineIndex: System::Nullable_1<int32_t> (default: {})
/// @param noteLineLayer: System::Nullable_1<GlobalNamespace::NoteLineLayer> (default: {})
/// @param beforeJumpNoteLineLayer: System::Nullable_1<GlobalNamespace::NoteLineLayer> (default: {})
/// @param gameplayType: System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__GameplayType> (default: {})
/// @param scoringType: System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> (default: {})
/// @param colorType: System::Nullable_1<GlobalNamespace::ColorType> (default: {})
/// @param cutDirection: System::Nullable_1<GlobalNamespace::NoteCutDirection> (default: {})
/// @param timeToNextColorNote: System::Nullable_1<float_t> (default: {})
/// @param timeToPrevColorNote: System::Nullable_1<float_t> (default: {})
/// @param flipLineIndex: System::Nullable_1<int32_t> (default: {})
/// @param flipYSide: System::Nullable_1<float_t> (default: {})
/// @param cutDirectionAngleOffset: System::Nullable_1<float_t> (default: {})
/// @param cutSfxVolumeMultiplier: System::Nullable_1<float_t> (default: {})
 GlobalNamespace::NoteData GlobalNamespace::NoteData::CopyWith(System::Nullable_1<float_t> time, System::Nullable_1<int32_t> lineIndex, System::Nullable_1<GlobalNamespace::NoteLineLayer> noteLineLayer, System::Nullable_1<GlobalNamespace::NoteLineLayer> beforeJumpNoteLineLayer, System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__GameplayType> gameplayType, System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> scoringType, System::Nullable_1<GlobalNamespace::ColorType> colorType, System::Nullable_1<GlobalNamespace::NoteCutDirection> cutDirection, System::Nullable_1<float_t> timeToNextColorNote, System::Nullable_1<float_t> timeToPrevColorNote, System::Nullable_1<int32_t> flipLineIndex, System::Nullable_1<float_t> flipYSide, System::Nullable_1<float_t> cutDirectionAngleOffset, System::Nullable_1<float_t> cutSfxVolumeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::NoteLineLayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::NoteLineLayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::ColorType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::NoteCutDirection>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(const_cast<void*>(instance), ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
 void GlobalNamespace::NoteData::SetBeforeJumpNoteLineLayer(GlobalNamespace::NoteLineLayer lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetBeforeJumpNoteLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lineLayer);
}
 void GlobalNamespace::NoteData::ChangeToBurstSliderHead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToBurstSliderHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::ChangeToGameNote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToGameNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::ChangeToSliderHead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToSliderHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::ChangeToSliderTail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeToSliderTail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::SetNoteFlipToNote(GlobalNamespace::NoteData targetNote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetNoteFlipToNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetNote);
}
 void GlobalNamespace::NoteData::SetCutDirectionAngleOffset(float_t cutDirectionAngleOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetCutDirectionAngleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutDirectionAngleOffset);
}
 void GlobalNamespace::NoteData::ResetNoteFlip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ResetNoteFlip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::Mirror(int32_t lineCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "Mirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lineCount);
}
 void GlobalNamespace::NoteData::SetNoteToAnyCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SetNoteToAnyCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteData::ChangeNoteCutDirection(GlobalNamespace::NoteCutDirection newCutDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "ChangeNoteCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newCutDirection);
}
 void GlobalNamespace::NoteData::TransformNoteAOrBToRandomType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "TransformNoteAOrBToRandomType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::NoteData::SubtypeIdentifier(GlobalNamespace::ColorType colorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteData>::get(),
                            "SubtypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, colorType);
}
