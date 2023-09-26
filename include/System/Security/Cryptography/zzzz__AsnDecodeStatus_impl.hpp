#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::AsnDecodeStatus::AsnDecodeStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::AsnDecodeStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::AsnDecodeStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::NotDecoded{-1};
constexpr System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::Ok{0};
constexpr System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadAsn{1};
constexpr System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadTag{2};
constexpr System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadLength{3};
constexpr System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::InformationNotAvailable{4};
