#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__Handles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Handles::Handles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Handles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Handles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Handles  System::Handles::STD_INPUT{-10};
constexpr System::Handles  System::Handles::STD_OUTPUT{-11};
constexpr System::Handles  System::Handles::STD_ERROR{-12};
