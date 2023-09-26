#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__Texture2D__EXRFlags;
}
namespace UnityEngine {
class Texture2D;
}
// Type: ::EXRFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10033))
// CS Name: UnityEngine.Texture2D::EXRFlags
struct CORDL_TYPE UnityEngine__Texture2D__EXRFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Texture2D__EXRFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__Texture2D__EXRFlags(UnityEngine__Texture2D__EXRFlags const&) = default;
                    constexpr UnityEngine__Texture2D__EXRFlags(UnityEngine__Texture2D__EXRFlags&&) = default;
                    constexpr UnityEngine__Texture2D__EXRFlags& operator=(UnityEngine__Texture2D__EXRFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Texture2D__EXRFlags& operator=(UnityEngine__Texture2D__EXRFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Texture2D__EXRFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Texture2D__EXRFlags_Unwrapped : int32_t {
__None = 0,
__OutputAsFloat = 1,
__CompressZIP = 2,
__CompressRLE = 4,
__CompressPIZ = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Texture2D__EXRFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Texture2D__EXRFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UnityEngine__Texture2D__EXRFlags const None;

/// @brief Field OutputAsFloat offset 0
static UnityEngine::UnityEngine__Texture2D__EXRFlags const OutputAsFloat;

/// @brief Field CompressZIP offset 0
static UnityEngine::UnityEngine__Texture2D__EXRFlags const CompressZIP;

/// @brief Field CompressRLE offset 0
static UnityEngine::UnityEngine__Texture2D__EXRFlags const CompressRLE;

/// @brief Field CompressPIZ offset 0
static UnityEngine::UnityEngine__Texture2D__EXRFlags const CompressPIZ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Texture2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10034))
// CS Name: UnityEngine.Texture2D
class CORDL_TYPE Texture2D : public UnityEngine::Texture {
public:
// Declarations
using EXRFlags = UnityEngine::UnityEngine__Texture2D__EXRFlags;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Texture2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: " const&", def_value: None }]
constexpr Texture2D(Texture2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None }]
constexpr Texture2D(Texture2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Texture2D(void* ptr) noexcept : UnityEngine::Texture(ptr) {
}


  constexpr Texture2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Texture2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Texture2D& operator=(Texture2D&& o) noexcept = default;
  constexpr Texture2D& operator=(Texture2D const& o) noexcept = default;
                


// Fields

/// @brief Field streamingMipmapsPriorityMin offset 0
static constexpr int32_t  streamingMipmapsPriorityMin{-128};

/// @brief Field streamingMipmapsPriorityMax offset 0
static constexpr int32_t  streamingMipmapsPriorityMax{127};


// Properties

 UnityEngine::TextureFormat __declspec(property(get=get_format))  format;

 bool __declspec(property(get=get_ignoreMipmapLimit, put=set_ignoreMipmapLimit))  ignoreMipmapLimit;

static UnityEngine::Texture2D __declspec(property(get=get_whiteTexture))  whiteTexture;

static UnityEngine::Texture2D __declspec(property(get=get_blackTexture))  blackTexture;

static UnityEngine::Texture2D __declspec(property(get=get_redTexture))  redTexture;

static UnityEngine::Texture2D __declspec(property(get=get_grayTexture))  grayTexture;

static UnityEngine::Texture2D __declspec(property(get=get_linearGrayTexture))  linearGrayTexture;

static UnityEngine::Texture2D __declspec(property(get=get_normalTexture))  normalTexture;

 bool __declspec(property(get=get_isReadable))  isReadable;

 bool __declspec(property(get=get_vtOnly))  vtOnly;

 bool __declspec(property(get=get_isPreProcessed))  isPreProcessed;

 bool __declspec(property(get=get_streamingMipmaps))  streamingMipmaps;

 int32_t __declspec(property(get=get_streamingMipmapsPriority))  streamingMipmapsPriority;

 int32_t __declspec(property(get=get_requestedMipmapLevel, put=set_requestedMipmapLevel))  requestedMipmapLevel;

 int32_t __declspec(property(get=get_minimumMipmapLevel, put=set_minimumMipmapLevel))  minimumMipmapLevel;

 bool __declspec(property(get=get_loadAllMips, put=set_loadAllMips))  loadAllMips;

 int32_t __declspec(property(get=get_calculatedMipmapLevel))  calculatedMipmapLevel;

 int32_t __declspec(property(get=get_desiredMipmapLevel))  desiredMipmapLevel;

 int32_t __declspec(property(get=get_loadingMipmapLevel))  loadingMipmapLevel;

 int32_t __declspec(property(get=get_loadedMipmapLevel))  loadedMipmapLevel;


// Methods

/// @brief Method get_format addr 0x2b69f80 size 0x3c virtual false final false
 UnityEngine::TextureFormat get_format() ;

/// @brief Method get_ignoreMipmapLimit addr 0x2b69fbc size 0x3c virtual false final false
 bool get_ignoreMipmapLimit() ;

/// @brief Method set_ignoreMipmapLimit addr 0x2b69ff8 size 0x44 virtual false final false
 void set_ignoreMipmapLimit(bool value) ;

/// @brief Method get_whiteTexture addr 0x2b6a03c size 0x28 virtual false final false
static UnityEngine::Texture2D get_whiteTexture() ;

/// @brief Method get_blackTexture addr 0x2b6a064 size 0x28 virtual false final false
static UnityEngine::Texture2D get_blackTexture() ;

/// @brief Method get_redTexture addr 0x2b6a08c size 0x28 virtual false final false
static UnityEngine::Texture2D get_redTexture() ;

/// @brief Method get_grayTexture addr 0x2b6a0b4 size 0x28 virtual false final false
static UnityEngine::Texture2D get_grayTexture() ;

/// @brief Method get_linearGrayTexture addr 0x2b6a0dc size 0x28 virtual false final false
static UnityEngine::Texture2D get_linearGrayTexture() ;

/// @brief Method get_normalTexture addr 0x2b6a104 size 0x28 virtual false final false
static UnityEngine::Texture2D get_normalTexture() ;

/// @brief Method Compress addr 0x2b6a12c size 0x44 virtual false final false
 void Compress(bool highQuality) ;

/// @brief Method Internal_CreateImpl addr 0x2b6a170 size 0x84 virtual false final false
static bool Internal_CreateImpl(UnityEngine::Texture2D mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method Internal_Create addr 0x2b6a1f4 size 0xd8 virtual false final false
static void Internal_Create(UnityEngine::Texture2D mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method get_isReadable addr 0x2b6a2cc size 0x3c virtual true final false
 bool get_isReadable() ;

/// @brief Method get_vtOnly addr 0x2b6a308 size 0x3c virtual false final false
 bool get_vtOnly() ;

/// @brief Method ApplyImpl addr 0x2b6a344 size 0x54 virtual false final false
 void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) ;

/// @brief Method ReinitializeImpl addr 0x2b6a398 size 0x54 virtual false final false
 bool ReinitializeImpl(int32_t width, int32_t height) ;

/// @brief Method SetPixelImpl addr 0x2b6a3ec size 0x84 virtual false final false
 void SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, UnityEngine::Color color) ;

/// @brief Method GetPixelImpl addr 0x2b6a4e4 size 0x88 virtual false final false
 UnityEngine::Color GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y) ;

/// @brief Method GetPixelBilinearImpl addr 0x2b6a5e0 size 0x88 virtual false final false
 UnityEngine::Color GetPixelBilinearImpl(int32_t image, int32_t mip, float_t u, float_t v) ;

/// @brief Method ReinitializeWithFormatImpl addr 0x2b6a6dc size 0x6c virtual false final false
 bool ReinitializeWithFormatImpl(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) ;

/// @brief Method ReadPixelsImpl addr 0x2b6a748 size 0x74 virtual false final false
 void ReadPixelsImpl(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) ;

/// @brief Method SetPixelsImpl addr 0x2b6a828 size 0x8c virtual false final false
 void SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, ::ArrayW<UnityEngine::Color> pixel, int32_t miplevel, int32_t frame) ;

/// @brief Method LoadRawTextureDataImpl addr 0x2b6a8b4 size 0x54 virtual false final false
 bool LoadRawTextureDataImpl(::cordl_internals::intptr_t data, uint64_t size) ;

/// @brief Method LoadRawTextureDataImplArray addr 0x2b6a908 size 0x44 virtual false final false
 bool LoadRawTextureDataImplArray(::ArrayW<uint8_t> data) ;

/// @brief Method SetPixelDataImplArray addr 0x2b6a94c size 0x74 virtual false final false
 bool SetPixelDataImplArray(System::Array data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl addr 0x2b6a9c0 size 0x74 virtual false final false
 bool SetPixelDataImpl(::cordl_internals::intptr_t data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) ;

/// @brief Method GetWritableImageData addr 0x2b6aa34 size 0x44 virtual false final false
 ::cordl_internals::intptr_t GetWritableImageData(int32_t frame) ;

/// @brief Method GetRawImageDataSize addr 0x2b6aa78 size 0x3c virtual false final false
 uint64_t GetRawImageDataSize() ;

/// @brief Method GenerateAtlasImpl addr 0x2b6aab4 size 0x5c virtual false final false
static void GenerateAtlasImpl(::ArrayW<UnityEngine::Vector2> sizes, int32_t padding, int32_t atlasSize, ByRef<::ArrayW<UnityEngine::Rect>> rect) ;

/// @brief Method get_isPreProcessed addr 0x2b6ab10 size 0x3c virtual false final false
 bool get_isPreProcessed() ;

/// @brief Method get_streamingMipmaps addr 0x2b6ab4c size 0x3c virtual false final false
 bool get_streamingMipmaps() ;

/// @brief Method get_streamingMipmapsPriority addr 0x2b6ab88 size 0x3c virtual false final false
 int32_t get_streamingMipmapsPriority() ;

/// @brief Method get_requestedMipmapLevel addr 0x2b6abc4 size 0x3c virtual false final false
 int32_t get_requestedMipmapLevel() ;

/// @brief Method set_requestedMipmapLevel addr 0x2b6ac00 size 0x44 virtual false final false
 void set_requestedMipmapLevel(int32_t value) ;

/// @brief Method get_minimumMipmapLevel addr 0x2b6ac44 size 0x3c virtual false final false
 int32_t get_minimumMipmapLevel() ;

/// @brief Method set_minimumMipmapLevel addr 0x2b6ac80 size 0x44 virtual false final false
 void set_minimumMipmapLevel(int32_t value) ;

/// @brief Method get_loadAllMips addr 0x2b6acc4 size 0x3c virtual false final false
 bool get_loadAllMips() ;

/// @brief Method set_loadAllMips addr 0x2b6ad00 size 0x44 virtual false final false
 void set_loadAllMips(bool value) ;

/// @brief Method get_calculatedMipmapLevel addr 0x2b6ad44 size 0x3c virtual false final false
 int32_t get_calculatedMipmapLevel() ;

/// @brief Method get_desiredMipmapLevel addr 0x2b6ad80 size 0x3c virtual false final false
 int32_t get_desiredMipmapLevel() ;

/// @brief Method get_loadingMipmapLevel addr 0x2b6adbc size 0x3c virtual false final false
 int32_t get_loadingMipmapLevel() ;

/// @brief Method get_loadedMipmapLevel addr 0x2b6adf8 size 0x3c virtual false final false
 int32_t get_loadedMipmapLevel() ;

/// @brief Method ClearRequestedMipmapLevel addr 0x2b6ae34 size 0x3c virtual false final false
 void ClearRequestedMipmapLevel() ;

/// @brief Method IsRequestedMipmapLevelLoaded addr 0x2b6ae70 size 0x3c virtual false final false
 bool IsRequestedMipmapLevelLoaded() ;

/// @brief Method ClearMinimumMipmapLevel addr 0x2b6aeac size 0x3c virtual false final false
 void ClearMinimumMipmapLevel() ;

/// @brief Method UpdateExternalTexture addr 0x2b6aee8 size 0x44 virtual false final false
 void UpdateExternalTexture(::cordl_internals::intptr_t nativeTex) ;

/// @brief Method SetAllPixels32 addr 0x2b6af2c size 0x54 virtual false final false
 void SetAllPixels32(::ArrayW<UnityEngine::Color32> colors, int32_t miplevel) ;

/// @brief Method SetBlockOfPixels32 addr 0x2b6af80 size 0x84 virtual false final false
 void SetBlockOfPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<UnityEngine::Color32> colors, int32_t miplevel) ;

/// @brief Method GetRawTextureData addr 0x2b6b004 size 0x3c virtual false final false
 ::ArrayW<uint8_t> GetRawTextureData() ;

/// @brief Method GetPixels addr 0x2b6b040 size 0x74 virtual false final false
 ::ArrayW<UnityEngine::Color> GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel) ;

/// @brief Method GetPixels addr 0x2b6b0b4 size 0x70 virtual false final false
 ::ArrayW<UnityEngine::Color> GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight) ;

/// @brief Method GetPixels32 addr 0x2b6b124 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Color32> GetPixels32(int32_t miplevel) ;

/// @brief Method GetPixels32 addr 0x2b6b168 size 0x40 virtual false final false
 ::ArrayW<UnityEngine::Color32> GetPixels32() ;

/// @brief Method PackTextures addr 0x2b6b1a8 size 0x6c virtual false final false
 ::ArrayW<UnityEngine::Rect> PackTextures(::ArrayW<UnityEngine::Texture2D> textures, int32_t padding, int32_t maximumAtlasSize, bool makeNoLongerReadable) ;

/// @brief Method PackTextures addr 0x2b6b214 size 0x60 virtual false final false
 ::ArrayW<UnityEngine::Rect> PackTextures(::ArrayW<UnityEngine::Texture2D> textures, int32_t padding, int32_t maximumAtlasSize) ;

/// @brief Method PackTextures addr 0x2b6b274 size 0x5c virtual false final false
 ::ArrayW<UnityEngine::Rect> PackTextures(::ArrayW<UnityEngine::Texture2D> textures, int32_t padding) ;

/// @brief Method ValidateFormat addr 0x2b6b2d0 size 0xe8 virtual false final false
 bool ValidateFormat(UnityEngine::TextureFormat format, int32_t width, int32_t height) ;

/// @brief Method ValidateFormat addr 0x2b6b3b8 size 0x134 virtual false final false
 bool ValidateFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nativeTex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method .ctor addr 0x2b6b4ec size 0xd4 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, ::cordl_internals::intptr_t nativeTex) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::DefaultFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6b5c0 size 0x4c virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6b60c size 0xb0 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6b6bc size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nativeTex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method .ctor addr 0x2b6b74c size 0x13c virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, ::cordl_internals::intptr_t nativeTex) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) ;

/// @brief Method .ctor addr 0x2b6b888 size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) ;

/// @brief Method .ctor addr 0x2b6b918 size 0x98 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method .ctor addr 0x2b6b9b0 size 0x8c virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
explicit Texture2D(int32_t width, int32_t height) ;

/// @brief Method .ctor addr 0x2b6ba3c size 0xa0 virtual false final false
 void _ctor(int32_t width, int32_t height) ;

/// @brief Method CreateExternalTexture addr 0x2b6badc size 0x124 virtual false final false
static UnityEngine::Texture2D CreateExternalTexture(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool mipChain, bool linear, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method SetPixel addr 0x2b6bc00 size 0x9c virtual false final false
 void SetPixel(int32_t x, int32_t y, UnityEngine::Color color) ;

/// @brief Method SetPixel addr 0x2b6bc9c size 0xa8 virtual false final false
 void SetPixel(int32_t x, int32_t y, UnityEngine::Color color, int32_t mipLevel) ;

/// @brief Method SetPixels addr 0x2b6bd44 size 0xc0 virtual false final false
 void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<UnityEngine::Color> colors, int32_t miplevel) ;

/// @brief Method SetPixels addr 0x2b6be04 size 0x8 virtual false final false
 void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<UnityEngine::Color> colors) ;

/// @brief Method SetPixels addr 0x2b6be0c size 0x78 virtual false final false
 void SetPixels(::ArrayW<UnityEngine::Color> colors, int32_t miplevel) ;

/// @brief Method SetPixels addr 0x2b6be84 size 0x5c virtual false final false
 void SetPixels(::ArrayW<UnityEngine::Color> colors) ;

/// @brief Method GetPixel addr 0x2b6bee0 size 0x6c virtual false final false
 UnityEngine::Color GetPixel(int32_t x, int32_t y) ;

/// @brief Method GetPixel addr 0x2b6bf4c size 0x78 virtual false final false
 UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t mipLevel) ;

/// @brief Method GetPixelBilinear addr 0x2b6bfc4 size 0x68 virtual false final false
 UnityEngine::Color GetPixelBilinear(float_t u, float_t v) ;

/// @brief Method GetPixelBilinear addr 0x2b6c02c size 0x74 virtual false final false
 UnityEngine::Color GetPixelBilinear(float_t u, float_t v, int32_t mipLevel) ;

/// @brief Method LoadRawTextureData addr 0x2b6c0a0 size 0x168 virtual false final false
 void LoadRawTextureData(::cordl_internals::intptr_t data, int32_t size) ;

/// @brief Method LoadRawTextureData addr 0x2b6c208 size 0x128 virtual false final false
 void LoadRawTextureData(::ArrayW<uint8_t> data) ;

/// @brief Method LoadRawTextureData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void LoadRawTextureData(Unity::Collections::NativeArray_1<T> data) ;

/// @brief Method SetPixelData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetPixelData(::ArrayW<T> data, int32_t mipLevel, int32_t sourceDataStartIndex) ;

/// @brief Method SetPixelData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetPixelData(Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, int32_t sourceDataStartIndex) ;

/// @brief Method GetPixelData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel) ;

/// @brief Method GetRawTextureData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Unity::Collections::NativeArray_1<T> GetRawTextureData() ;

/// @brief Method Apply addr 0x2b6c330 size 0x8c virtual false final false
 void Apply(bool updateMipmaps, bool makeNoLongerReadable) ;

/// @brief Method Apply addr 0x2b6c3bc size 0xc virtual false final false
 void Apply(bool updateMipmaps) ;

/// @brief Method Apply addr 0x2b6c3c8 size 0xc virtual false final false
 void Apply() ;

/// @brief Method Reinitialize addr 0x2b6c3d4 size 0x8c virtual false final false
 bool Reinitialize(int32_t width, int32_t height) ;

/// @brief Method Reinitialize addr 0x2b6c460 size 0xec virtual false final false
 bool Reinitialize(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool hasMipMap) ;

/// @brief Method Reinitialize addr 0x2b6c54c size 0xa4 virtual false final false
 bool Reinitialize(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) ;

/// @brief Method Resize addr 0x2b6c5f0 size 0x4 virtual false final false
 bool Resize(int32_t width, int32_t height) ;

/// @brief Method Resize addr 0x2b6c5f4 size 0x8 virtual false final false
 bool Resize(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool hasMipMap) ;

/// @brief Method Resize addr 0x2b6c5fc size 0x8 virtual false final false
 bool Resize(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap) ;

/// @brief Method ReadPixels addr 0x2b6c604 size 0xa0 virtual false final false
 void ReadPixels(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps) ;

/// @brief Method ReadPixels addr 0x2b6c6a4 size 0x8 virtual false final false
 void ReadPixels(UnityEngine::Rect source, int32_t destX, int32_t destY) ;

/// @brief Method GenerateAtlas addr 0x2b6c6ac size 0x1cc virtual false final false
static bool GenerateAtlas(::ArrayW<UnityEngine::Vector2> sizes, int32_t padding, int32_t atlasSize, System::Collections::Generic::List_1<UnityEngine::Rect> results) ;

/// @brief Method SetPixels32 addr 0x2b6c878 size 0x54 virtual false final false
 void SetPixels32(::ArrayW<UnityEngine::Color32> colors, int32_t miplevel) ;

/// @brief Method SetPixels32 addr 0x2b6c8cc size 0x48 virtual false final false
 void SetPixels32(::ArrayW<UnityEngine::Color32> colors) ;

/// @brief Method SetPixels32 addr 0x2b6c914 size 0x84 virtual false final false
 void SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<UnityEngine::Color32> colors, int32_t miplevel) ;

/// @brief Method SetPixels32 addr 0x2b6c998 size 0x78 virtual false final false
 void SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<UnityEngine::Color32> colors) ;

/// @brief Method GetPixels addr 0x2b6ca10 size 0x94 virtual false final false
 ::ArrayW<UnityEngine::Color> GetPixels(int32_t miplevel) ;

/// @brief Method GetPixels addr 0x2b6caa4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Color> GetPixels() ;

/// @brief Method SetPixelImpl_Injected addr 0x2b6a470 size 0x74 virtual false final false
 void SetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<UnityEngine::Color> color) ;

/// @brief Method GetPixelImpl_Injected addr 0x2b6a56c size 0x74 virtual false final false
 void GetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<UnityEngine::Color> ret) ;

/// @brief Method GetPixelBilinearImpl_Injected addr 0x2b6a668 size 0x74 virtual false final false
 void GetPixelBilinearImpl_Injected(int32_t image, int32_t mip, float_t u, float_t v, ByRef<UnityEngine::Color> ret) ;

/// @brief Method ReadPixelsImpl_Injected addr 0x2b6a7bc size 0x6c virtual false final false
 void ReadPixelsImpl_Injected(ByRef<UnityEngine::Rect> source, int32_t destX, int32_t destY, bool recalculateMipMaps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Texture2D__EXRFlags, "UnityEngine", "Texture2D/EXRFlags");
NEED_NO_BOX(UnityEngine::Texture2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture2D, "UnityEngine", "Texture2D");
