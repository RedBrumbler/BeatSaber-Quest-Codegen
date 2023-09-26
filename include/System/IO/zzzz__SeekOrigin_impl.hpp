#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::SeekOrigin::SeekOrigin(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::IO::SeekOrigin::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::SeekOrigin::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::IO::SeekOrigin  System::IO::SeekOrigin::Begin{0};
constexpr System::IO::SeekOrigin  System::IO::SeekOrigin::Current{1};
constexpr System::IO::SeekOrigin  System::IO::SeekOrigin::End{2};
