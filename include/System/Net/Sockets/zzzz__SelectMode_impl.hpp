#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__SelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::SelectMode::SelectMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::SelectMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SelectMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::SelectMode  System::Net::Sockets::SelectMode::SelectRead{0};
constexpr System::Net::Sockets::SelectMode  System::Net::Sockets::SelectMode::SelectWrite{1};
constexpr System::Net::Sockets::SelectMode  System::Net::Sockets::SelectMode::SelectError{2};
