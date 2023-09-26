#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__PS4ApplicationCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::PS4ApplicationCategory::PS4ApplicationCategory(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::PS4ApplicationCategory::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::PS4ApplicationCategory::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::PS4ApplicationCategory  GlobalNamespace::PS4ApplicationCategory::Application{0};
constexpr GlobalNamespace::PS4ApplicationCategory  GlobalNamespace::PS4ApplicationCategory::Patch{1};
constexpr GlobalNamespace::PS4ApplicationCategory  GlobalNamespace::PS4ApplicationCategory::Remaster{2};
