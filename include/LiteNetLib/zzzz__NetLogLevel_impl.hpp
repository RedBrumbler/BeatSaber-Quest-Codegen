#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::NetLogLevel::NetLogLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::NetLogLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetLogLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::NetLogLevel  LiteNetLib::NetLogLevel::Warning{0};
constexpr LiteNetLib::NetLogLevel  LiteNetLib::NetLogLevel::Error{1};
constexpr LiteNetLib::NetLogLevel  LiteNetLib::NetLogLevel::Trace{2};
constexpr LiteNetLib::NetLogLevel  LiteNetLib::NetLogLevel::Info{3};
