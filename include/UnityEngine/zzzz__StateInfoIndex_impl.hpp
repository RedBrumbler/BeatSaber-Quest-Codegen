#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__StateInfoIndex_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::StateInfoIndex::StateInfoIndex(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::StateInfoIndex::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::StateInfoIndex::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::StateInfoIndex  UnityEngine::StateInfoIndex::CurrentState{0};
constexpr UnityEngine::StateInfoIndex  UnityEngine::StateInfoIndex::NextState{1};
constexpr UnityEngine::StateInfoIndex  UnityEngine::StateInfoIndex::ExitState{2};
constexpr UnityEngine::StateInfoIndex  UnityEngine::StateInfoIndex::InterruptedState{3};
