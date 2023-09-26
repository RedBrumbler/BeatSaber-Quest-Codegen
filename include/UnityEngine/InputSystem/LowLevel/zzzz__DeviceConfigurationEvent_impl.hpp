#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeviceConfigurationEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(&UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2987334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.ToEventPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputEventPtr (UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(&UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2987354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent (*)(int32_t, double_t)>(&UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2987358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::operator UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::DeviceConfigurationEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseEvent = baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEvent UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create(int32_t deviceId, double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent, false>(nullptr, ___internal_method, deviceId, time);
}
