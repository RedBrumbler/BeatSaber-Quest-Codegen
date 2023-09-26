#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRTextureWithPoseAndDepth_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureDepthInfo_t_def.hpp"
// Ctor Parameters [CppParam { name: "depth", ty: "OVR::OpenVR::VRTextureDepthInfo_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRTextureWithPoseAndDepth_t::VRTextureWithPoseAndDepth_t(OVR::OpenVR::VRTextureDepthInfo_t depth) noexcept : ::bs_hook::ValueTypeWrapper() {this->depth = depth;
}
constexpr void OVR::OpenVR::VRTextureWithPoseAndDepth_t::__set_depth(OVR::OpenVR::VRTextureDepthInfo_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VRTextureDepthInfo_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VRTextureDepthInfo_t>(value));
}
constexpr OVR::OpenVR::VRTextureDepthInfo_t OVR::OpenVR::VRTextureWithPoseAndDepth_t::__get_depth() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VRTextureDepthInfo_t, 0x0>(this->__instance);
}
