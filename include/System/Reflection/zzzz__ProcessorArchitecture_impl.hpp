#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__ProcessorArchitecture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::ProcessorArchitecture::ProcessorArchitecture(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::ProcessorArchitecture::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ProcessorArchitecture::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::None{0};
constexpr System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::MSIL{1};
constexpr System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::X86{2};
constexpr System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::IA64{3};
constexpr System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::Amd64{4};
constexpr System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::Arm{5};
