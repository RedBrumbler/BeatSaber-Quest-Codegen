#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SelectionModifierBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::SelectionModifierBehavior::SelectionModifierBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::SelectionModifierBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::SelectionModifierBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::SelectionModifierBehavior  UnityEngine::ProBuilder::SelectionModifierBehavior::Add{0};
constexpr UnityEngine::ProBuilder::SelectionModifierBehavior  UnityEngine::ProBuilder::SelectionModifierBehavior::Subtract{1};
constexpr UnityEngine::ProBuilder::SelectionModifierBehavior  UnityEngine::ProBuilder::SelectionModifierBehavior::Difference{2};
