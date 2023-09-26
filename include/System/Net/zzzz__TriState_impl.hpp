#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__TriState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::TriState::TriState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::TriState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::TriState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::TriState  System::Net::TriState::Unspecified{-1};
constexpr System::Net::TriState  System::Net::TriState::False{0};
constexpr System::Net::TriState  System::Net::TriState::True{1};
