#pragma once
#include "UnityEngine/InputSystem/zzzz__LightSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidLightSensor_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::AndroidLightSensor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::AndroidLightSensor::*)()>(&UnityEngine::InputSystem::Android::AndroidLightSensor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x298320c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidLightSensor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::InputSystem::Android::AndroidLightSensor::AndroidLightSensor()  : UnityEngine::InputSystem::LightSensor(THROW_UNLESS(::il2cpp_utils::New<AndroidLightSensor>())) {}
 void UnityEngine::InputSystem::Android::AndroidLightSensor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidLightSensor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
