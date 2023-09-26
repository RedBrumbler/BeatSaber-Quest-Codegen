#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Yoga/zzzz__YogaFlexDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Yoga::YogaFlexDirection::YogaFlexDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Yoga::YogaFlexDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Yoga::YogaFlexDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Yoga::YogaFlexDirection  UnityEngine::Yoga::YogaFlexDirection::Column{0};
constexpr UnityEngine::Yoga::YogaFlexDirection  UnityEngine::Yoga::YogaFlexDirection::ColumnReverse{1};
constexpr UnityEngine::Yoga::YogaFlexDirection  UnityEngine::Yoga::YogaFlexDirection::Row{2};
constexpr UnityEngine::Yoga::YogaFlexDirection  UnityEngine::Yoga::YogaFlexDirection::RowReverse{3};
