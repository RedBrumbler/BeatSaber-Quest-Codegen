#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::VertexAttributeFormat::VertexAttributeFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::VertexAttributeFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::VertexAttributeFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::Float32{0};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::Float16{1};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::UNorm8{2};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::SNorm8{3};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::UNorm16{4};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::SNorm16{5};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::UInt8{6};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::SInt8{7};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::UInt16{8};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::SInt16{9};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::UInt32{10};
constexpr UnityEngine::Rendering::VertexAttributeFormat  UnityEngine::Rendering::VertexAttributeFormat::SInt32{11};
