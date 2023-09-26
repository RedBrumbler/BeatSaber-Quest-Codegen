#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::Completed{0};
constexpr GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::ReturnToMenu{1};
constexpr GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::Restart{2};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220a570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2209a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO.get_playerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettings (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220b6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO.set_playerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(GlobalNamespace::PlayerSpecificSettings)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::set_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220b6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "set_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(GlobalNamespace::PlayerSpecificSettings)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x220758c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x220b6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220b718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__tutorialSceneInfo(GlobalNamespace::SceneInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneInfo>(value));
}
constexpr GlobalNamespace::SceneInfo GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__tutorialSceneInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneInfo>(value));
}
constexpr GlobalNamespace::SceneInfo GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__gameCoreSceneInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>>(value));
}
constexpr System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__playerSpecificSettings_k__BackingField(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__playerSpecificSettings_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::PlayerSpecificSettings GlobalNamespace::TutorialScenesTransitionSetupDataSO::get_playerSpecificSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerSpecificSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialScenesTransitionSetupDataSO::set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "set_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init(GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerSpecificSettings);
}
 void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish(GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endState);
}
// Ctor Parameters []
 GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialScenesTransitionSetupDataSO()  : GlobalNamespace::ScenesTransitionSetupDataSO(THROW_UNLESS(::il2cpp_utils::New<TutorialScenesTransitionSetupDataSO>())) {}
 void GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
