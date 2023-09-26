#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::CryptoStreamMode::CryptoStreamMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::CryptoStreamMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::CryptoStreamMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::CryptoStreamMode  System::Security::Cryptography::CryptoStreamMode::Read{0};
constexpr System::Security::Cryptography::CryptoStreamMode  System::Security::Cryptography::CryptoStreamMode::Write{1};
