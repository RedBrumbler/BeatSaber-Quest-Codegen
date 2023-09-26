#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat::GraphicsFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Experimental::Rendering::GraphicsFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Experimental::Rendering::GraphicsFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::None{0};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8_SRGB{1};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8_SRGB{2};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8_SRGB{3};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8A8_SRGB{4};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8_UNorm{5};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8_UNorm{6};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8_UNorm{7};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8A8_UNorm{8};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8_SNorm{9};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8_SNorm{10};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8_SNorm{11};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8A8_SNorm{12};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8_UInt{13};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8_UInt{14};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8_UInt{15};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8A8_UInt{16};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8_SInt{17};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8_SInt{18};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8_SInt{19};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R8G8B8A8_SInt{20};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16_UNorm{21};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16_UNorm{22};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16_UNorm{23};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16A16_UNorm{24};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16_SNorm{25};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16_SNorm{26};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16_SNorm{27};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16A16_SNorm{28};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16_UInt{29};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16_UInt{30};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16_UInt{31};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16A16_UInt{32};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16_SInt{33};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16_SInt{34};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16_SInt{35};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16A16_SInt{36};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32_UInt{37};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32_UInt{38};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32B32_UInt{39};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32B32A32_UInt{40};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32_SInt{41};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32_SInt{42};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32B32_SInt{43};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32B32A32_SInt{44};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16_SFloat{45};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16_SFloat{46};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16_SFloat{47};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R16G16B16A16_SFloat{48};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32_SFloat{49};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32_SFloat{50};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32B32_SFloat{51};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R32G32B32A32_SFloat{52};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8_SRGB{56};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8A8_SRGB{57};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8_UNorm{58};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8A8_UNorm{59};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8_SNorm{60};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8A8_SNorm{61};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8_UInt{62};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8A8_UInt{63};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8_SInt{64};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B8G8R8A8_SInt{65};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R4G4B4A4_UNormPack16{66};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B4G4R4A4_UNormPack16{67};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R5G6B5_UNormPack16{68};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B5G6R5_UNormPack16{69};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R5G5B5A1_UNormPack16{70};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B5G5R5A1_UNormPack16{71};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A1R5G5B5_UNormPack16{72};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::E5B9G9R9_UFloatPack32{73};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::B10G11R11_UFloatPack32{74};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2B10G10R10_UNormPack32{75};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2B10G10R10_UIntPack32{76};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2B10G10R10_SIntPack32{77};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2R10G10B10_UNormPack32{78};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2R10G10B10_UIntPack32{79};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2R10G10B10_SIntPack32{80};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2R10G10B10_XRSRGBPack32{81};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A2R10G10B10_XRUNormPack32{82};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R10G10B10_XRSRGBPack32{83};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R10G10B10_XRUNormPack32{84};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A10R10G10B10_XRSRGBPack32{85};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::A10R10G10B10_XRUNormPack32{86};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::D16_UNorm{90};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::D24_UNorm{91};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::D24_UNorm_S8_UInt{92};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::D32_SFloat{93};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::D32_SFloat_S8_UInt{94};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::S8_UInt{95};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_DXT1_SRGB{96};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_DXT1_SRGB{96};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_DXT1_UNorm{97};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_DXT1_UNorm{97};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_DXT3_SRGB{98};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_DXT3_UNorm{99};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_DXT5_SRGB{100};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_DXT5_UNorm{101};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R_BC4_UNorm{102};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R_BC4_SNorm{103};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RG_BC5_UNorm{104};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RG_BC5_SNorm{105};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_BC6H_UFloat{106};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_BC6H_SFloat{107};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_BC7_SRGB{108};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_BC7_UNorm{109};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_PVRTC_2Bpp_SRGB{110};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_PVRTC_2Bpp_UNorm{111};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_PVRTC_4Bpp_SRGB{112};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_PVRTC_4Bpp_UNorm{113};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_PVRTC_2Bpp_SRGB{114};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_PVRTC_2Bpp_UNorm{115};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_PVRTC_4Bpp_SRGB{116};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_PVRTC_4Bpp_UNorm{117};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_ETC_UNorm{118};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_ETC2_SRGB{119};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_ETC2_UNorm{120};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_A1_ETC2_SRGB{121};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGB_A1_ETC2_UNorm{122};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ETC2_SRGB{123};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ETC2_UNorm{124};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R_EAC_UNorm{125};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::R_EAC_SNorm{126};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RG_EAC_UNorm{127};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RG_EAC_SNorm{128};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC4X4_SRGB{129};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC4X4_UNorm{130};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC5X5_SRGB{131};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC5X5_UNorm{132};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC6X6_SRGB{133};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC6X6_UNorm{134};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC8X8_SRGB{135};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC8X8_UNorm{136};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC10X10_SRGB{137};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC10X10_UNorm{138};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC12X12_SRGB{139};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC12X12_UNorm{140};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::YUV2{141};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::DepthAuto{142};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::ShadowAuto{143};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::VideoAuto{144};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC4X4_UFloat{145};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC5X5_UFloat{146};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC6X6_UFloat{147};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC8X8_UFloat{148};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC10X10_UFloat{149};
constexpr UnityEngine::Experimental::Rendering::GraphicsFormat  UnityEngine::Experimental::Rendering::GraphicsFormat::RGBA_ASTC12X12_UFloat{150};
