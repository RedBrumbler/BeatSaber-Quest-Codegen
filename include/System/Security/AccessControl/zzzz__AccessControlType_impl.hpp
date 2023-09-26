#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::AccessControl::AccessControlType::AccessControlType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::AccessControl::AccessControlType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::AccessControl::AccessControlType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::AccessControl::AccessControlType  System::Security::AccessControl::AccessControlType::Allow{0};
constexpr System::Security::AccessControl::AccessControlType  System::Security::AccessControl::AccessControlType::Deny{1};
