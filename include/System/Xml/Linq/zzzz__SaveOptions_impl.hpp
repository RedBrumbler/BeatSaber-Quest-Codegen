#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Linq/zzzz__SaveOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Linq::SaveOptions::SaveOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Linq::SaveOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Linq::SaveOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Linq::SaveOptions  System::Xml::Linq::SaveOptions::None{0};
constexpr System::Xml::Linq::SaveOptions  System::Xml::Linq::SaveOptions::DisableFormatting{1};
constexpr System::Xml::Linq::SaveOptions  System::Xml::Linq::SaveOptions::OmitDuplicateNamespaces{2};
