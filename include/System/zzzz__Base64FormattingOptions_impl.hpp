#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__Base64FormattingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Base64FormattingOptions::Base64FormattingOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Base64FormattingOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Base64FormattingOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Base64FormattingOptions  System::Base64FormattingOptions::None{0};
constexpr System::Base64FormattingOptions  System::Base64FormattingOptions::InsertLineBreaks{1};
