#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "activeEventSystem", ty: "UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sendEvents", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig(UnityEngine::EventSystems::EventSystem activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) noexcept : ::bs_hook::ValueTypeWrapper() {this->activeEventSystem = activeEventSystem;
this->sendEvents = sendEvents;
this->createPanelGameObjectsOnStart = createPanelGameObjectsOnStart;
}
constexpr void UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::__set_activeEventSystem(UnityEngine::EventSystems::EventSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::EventSystem, 0x0>(this->__instance, std::forward<UnityEngine::EventSystems::EventSystem>(value));
}
constexpr UnityEngine::EventSystems::EventSystem UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::__get_activeEventSystem() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::EventSystem, 0x0>(this->__instance);
}
constexpr void UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::__set_sendEvents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::__get_sendEvents() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::__set_createPanelGameObjectsOnStart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig::__get_createPanelGameObjectsOnStart() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->__instance);
}
//  Writing Method size for method: UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::*)()>(&UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0._CreateUIToolkitPanelGameObject_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::*)()>(&UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::_CreateUIToolkitPanelGameObject_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c51630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0>::get(),
                            "<CreateUIToolkitPanelGameObject>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::__set_go(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::__get_go() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0>())) {}
 void UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0::_CreateUIToolkitPanelGameObject_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0>::get(),
                            "<CreateUIToolkitPanelGameObject>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::EventSystem (*)()>(&UnityEngine::EventSystems::EventSystem::get_current)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2c4f8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.set_current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::EventSystems::EventSystem)>(&UnityEngine::EventSystems::EventSystem::set_current)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2c4f97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_sendNavigationEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_sendNavigationEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.set_sendNavigationEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(bool)>(&UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c4fb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_sendNavigationEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_pixelDragThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_pixelDragThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.set_pixelDragThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(int32_t)>(&UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_pixelDragThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_currentInputModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::BaseInputModule (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_currentInputModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_currentInputModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_firstSelectedGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_firstSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.set_firstSelectedGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::GameObject)>(&UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_firstSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_currentSelectedGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_currentSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_lastSelectedGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_lastSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_isFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c4fb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.UpdateModules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::UpdateModules)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2c4fbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "UpdateModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_alreadySelecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_alreadySelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_alreadySelecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.SetSelectedGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::GameObject, UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2c4e47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "SetSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_baseEventDataCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::BaseEventData (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_baseEventDataCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c4fd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_baseEventDataCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.SetSelectedGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::GameObject)>(&UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c4b9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "SetSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.RaycastComparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::EventSystems::RaycastResult, UnityEngine::EventSystems::RaycastResult)>(&UnityEngine::EventSystems::EventSystem::RaycastComparer)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2c4fdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "RaycastComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::RaycastResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::RaycastResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.RaycastAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::EventSystems::PointerEventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>)>(&UnityEngine::EventSystems::EventSystem::RaycastAll)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2c501c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "RaycastAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.IsPointerOverGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c503b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "IsPointerOverGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.IsPointerOverGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)(int32_t)>(&UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c503c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "IsPointerOverGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_isUIToolkitActiveEventSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_isUIToolkitActiveEventSystem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2c50464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_isUIToolkitActiveEventSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_sendUIToolkitEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_sendUIToolkitEvents)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c50554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_sendUIToolkitEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.get_createUIToolkitPanelGameObjectsOnStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_createUIToolkitPanelGameObjectsOnStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c505c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_createUIToolkitPanelGameObjectsOnStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.SetUITookitEventSystemOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::EventSystems::EventSystem, bool, bool)>(&UnityEngine::EventSystems::EventSystem::SetUITookitEventSystemOverride)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2c5063c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "SetUITookitEventSystemOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventSystem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.CreateUIToolkitPanelGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::UIElements::BaseRuntimePanel)>(&UnityEngine::EventSystems::EventSystem::CreateUIToolkitPanelGameObject)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2c507d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "CreateUIToolkitPanelGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseRuntimePanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::Start)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2c50a7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c50cbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c50d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2c50e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.TickModules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::TickModules)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2c50f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "TickModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(bool)>(&UnityEngine::EventSystems::EventSystem::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c5107c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::Update)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2c51090;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.ChangeEventModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::EventSystems::BaseInputModule)>(&UnityEngine::EventSystems::EventSystem::ChangeEventModule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c512f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "ChangeEventModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseInputModule>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventSystem.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::ToString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2c513e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_SystemInputModules(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule> UnityEngine::EventSystems::EventSystem::__get_m_SystemInputModules() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_CurrentInputModule(UnityEngine::EventSystems::BaseInputModule value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::BaseInputModule, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::BaseInputModule>(value));
}
constexpr UnityEngine::EventSystems::BaseInputModule UnityEngine::EventSystems::EventSystem::__get_m_CurrentInputModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::BaseInputModule, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::EventSystems::EventSystem::__set_m_EventSystems(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem>, "m_EventSystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem> UnityEngine::EventSystems::EventSystem::__get_m_EventSystems()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem>, "m_EventSystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get>();
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_FirstSelected(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject UnityEngine::EventSystems::EventSystem::__get_m_FirstSelected() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_sendNavigationEvents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::EventSystems::EventSystem::__get_m_sendNavigationEvents() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_DragThreshold(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventSystems::EventSystem::__get_m_DragThreshold() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_CurrentSelected(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject UnityEngine::EventSystems::EventSystem::__get_m_CurrentSelected() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_HasFocus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::EventSystems::EventSystem::__get_m_HasFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_SelectionGuard(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::EventSystems::EventSystem::__get_m_SelectionGuard() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventSystem::__set_m_DummyData(UnityEngine::EventSystems::BaseEventData value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::BaseEventData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::BaseEventData>(value));
}
constexpr UnityEngine::EventSystems::BaseEventData UnityEngine::EventSystems::EventSystem::__get_m_DummyData() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::BaseEventData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::EventSystems::EventSystem::__set_s_RaycastComparer(System::Comparison_1<UnityEngine::EventSystems::RaycastResult> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::EventSystems::RaycastResult>, "s_RaycastComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get>(std::forward<System::Comparison_1<UnityEngine::EventSystems::RaycastResult>>(value));
}
 System::Comparison_1<UnityEngine::EventSystems::RaycastResult> UnityEngine::EventSystems::EventSystem::__get_s_RaycastComparer()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::EventSystems::RaycastResult>, "s_RaycastComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get>();
}
 void UnityEngine::EventSystems::EventSystem::__set_s_UIToolkitOverride(UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig value)  {
::cordl_internals::setStaticField<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig, "s_UIToolkitOverride", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get>(std::forward<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig>(value));
}
 UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig UnityEngine::EventSystems::EventSystem::__get_s_UIToolkitOverride()  {
return ::cordl_internals::getStaticField<UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig, "s_UIToolkitOverride", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get>();
}
 UnityEngine::EventSystems::EventSystem UnityEngine::EventSystems::EventSystem::get_current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::EventSystems::EventSystem, false>(nullptr, ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::set_current(UnityEngine::EventSystems::EventSystem value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_sendNavigationEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_sendNavigationEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_pixelDragThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_pixelDragThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::EventSystems::BaseInputModule UnityEngine::EventSystems::EventSystem::get_currentInputModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_currentInputModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::EventSystems::BaseInputModule, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_firstSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject(UnityEngine::GameObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "set_firstSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::GameObject UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_currentSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_lastSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::EventSystems::EventSystem::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::EventSystems::EventSystem::EventSystem()  : UnityEngine::EventSystems::UIBehaviour(THROW_UNLESS(::il2cpp_utils::New<EventSystem>())) {}
 void UnityEngine::EventSystems::EventSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::UpdateModules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "UpdateModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::EventSystems::EventSystem::get_alreadySelecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_alreadySelecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::SetSelectedGameObject(UnityEngine::GameObject selected, UnityEngine::EventSystems::BaseEventData pointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "SetSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selected, pointer);
}
 UnityEngine::EventSystems::BaseEventData UnityEngine::EventSystems::EventSystem::get_baseEventDataCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_baseEventDataCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::EventSystems::BaseEventData, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::SetSelectedGameObject(UnityEngine::GameObject selected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "SetSelectedGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selected);
}
 int32_t UnityEngine::EventSystems::EventSystem::RaycastComparer(UnityEngine::EventSystems::RaycastResult lhs, UnityEngine::EventSystems::RaycastResult rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "RaycastComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::RaycastResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::RaycastResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lhs, rhs);
}
 void UnityEngine::EventSystems::EventSystem::RaycastAll(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> raycastResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "RaycastAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, raycastResults);
}
 bool UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "IsPointerOverGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject(int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "IsPointerOverGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pointerId);
}
 bool UnityEngine::EventSystems::EventSystem::get_isUIToolkitActiveEventSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_isUIToolkitActiveEventSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::EventSystems::EventSystem::get_sendUIToolkitEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_sendUIToolkitEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::EventSystems::EventSystem::get_createUIToolkitPanelGameObjectsOnStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "get_createUIToolkitPanelGameObjectsOnStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param sendEvents: bool (default: true)
/// @param createPanelGameObjectsOnStart: bool (default: true)
 void UnityEngine::EventSystems::EventSystem::SetUITookitEventSystemOverride(UnityEngine::EventSystems::EventSystem activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "SetUITookitEventSystemOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventSystem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, activeEventSystem, sendEvents, createPanelGameObjectsOnStart);
}
 void UnityEngine::EventSystems::EventSystem::CreateUIToolkitPanelGameObject(UnityEngine::UIElements::BaseRuntimePanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "CreateUIToolkitPanelGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseRuntimePanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
 void UnityEngine::EventSystems::EventSystem::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::TickModules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "TickModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::OnApplicationFocus(bool hasFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hasFocus);
}
 void UnityEngine::EventSystems::EventSystem::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventSystem::ChangeEventModule(UnityEngine::EventSystems::BaseInputModule module)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "ChangeEventModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseInputModule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, module);
}
 ::StringW UnityEngine::EventSystems::EventSystem::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventSystem>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
