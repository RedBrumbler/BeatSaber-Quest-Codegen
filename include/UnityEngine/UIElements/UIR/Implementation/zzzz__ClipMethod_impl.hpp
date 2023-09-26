#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod::ClipMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UIR::Implementation::ClipMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::Implementation::ClipMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod  UnityEngine::UIElements::UIR::Implementation::ClipMethod::Undetermined{0};
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod  UnityEngine::UIElements::UIR::Implementation::ClipMethod::NotClipped{1};
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod  UnityEngine::UIElements::UIR::Implementation::ClipMethod::Scissor{2};
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod  UnityEngine::UIElements::UIR::Implementation::ClipMethod::ShaderDiscard{3};
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod  UnityEngine::UIElements::UIR::Implementation::ClipMethod::Stencil{4};
