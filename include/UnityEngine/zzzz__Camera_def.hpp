#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__Camera__MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct UnityEngine__Camera__RenderRequestMode;
}
namespace UnityEngine {
struct UnityEngine__Camera__RenderRequestOutputSpace;
}
namespace UnityEngine {
struct UnityEngine__Camera__StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class UnityEngine__Camera__CameraCallback;
}
namespace UnityEngine {
struct UnityEngine__Camera__RenderRequest;
}
// Type: ::StereoscopicEye
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10112))
// CS Name: UnityEngine.Camera::StereoscopicEye
struct CORDL_TYPE UnityEngine__Camera__StereoscopicEye : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Camera__StereoscopicEye(int32_t value__) noexcept;


                    constexpr UnityEngine__Camera__StereoscopicEye(UnityEngine__Camera__StereoscopicEye const&) = default;
                    constexpr UnityEngine__Camera__StereoscopicEye(UnityEngine__Camera__StereoscopicEye&&) = default;
                    constexpr UnityEngine__Camera__StereoscopicEye& operator=(UnityEngine__Camera__StereoscopicEye const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Camera__StereoscopicEye& operator=(UnityEngine__Camera__StereoscopicEye&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Camera__StereoscopicEye(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Camera__StereoscopicEye_Unwrapped : int32_t {
__Left = 0,
__Right = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Camera__StereoscopicEye_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Camera__StereoscopicEye_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static UnityEngine::UnityEngine__Camera__StereoscopicEye const Left;

/// @brief Field Right offset 0
static UnityEngine::UnityEngine__Camera__StereoscopicEye const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::MonoOrStereoscopicEye
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10113))
// CS Name: UnityEngine.Camera::MonoOrStereoscopicEye
struct CORDL_TYPE UnityEngine__Camera__MonoOrStereoscopicEye : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Camera__MonoOrStereoscopicEye(int32_t value__) noexcept;


                    constexpr UnityEngine__Camera__MonoOrStereoscopicEye(UnityEngine__Camera__MonoOrStereoscopicEye const&) = default;
                    constexpr UnityEngine__Camera__MonoOrStereoscopicEye(UnityEngine__Camera__MonoOrStereoscopicEye&&) = default;
                    constexpr UnityEngine__Camera__MonoOrStereoscopicEye& operator=(UnityEngine__Camera__MonoOrStereoscopicEye const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Camera__MonoOrStereoscopicEye& operator=(UnityEngine__Camera__MonoOrStereoscopicEye&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Camera__MonoOrStereoscopicEye(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Camera__MonoOrStereoscopicEye_Unwrapped : int32_t {
__Left = 0,
__Right = 1,
__Mono = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Camera__MonoOrStereoscopicEye_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Camera__MonoOrStereoscopicEye_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye const Left;

/// @brief Field Right offset 0
static UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye const Right;

/// @brief Field Mono offset 0
static UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye const Mono;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::RenderRequestMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10114))
// CS Name: UnityEngine.Camera::RenderRequestMode
struct CORDL_TYPE UnityEngine__Camera__RenderRequestMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Camera__RenderRequestMode(int32_t value__) noexcept;


                    constexpr UnityEngine__Camera__RenderRequestMode(UnityEngine__Camera__RenderRequestMode const&) = default;
                    constexpr UnityEngine__Camera__RenderRequestMode(UnityEngine__Camera__RenderRequestMode&&) = default;
                    constexpr UnityEngine__Camera__RenderRequestMode& operator=(UnityEngine__Camera__RenderRequestMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Camera__RenderRequestMode& operator=(UnityEngine__Camera__RenderRequestMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Camera__RenderRequestMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Camera__RenderRequestMode_Unwrapped : int32_t {
__None = 0,
__ObjectId = 1,
__Depth = 2,
__VertexNormal = 3,
__WorldPosition = 4,
__EntityId = 5,
__BaseColor = 6,
__SpecularColor = 7,
__Metallic = 8,
__Emission = 9,
__Normal = 10,
__Smoothness = 11,
__Occlusion = 12,
__DiffuseColor = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Camera__RenderRequestMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Camera__RenderRequestMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const None;

/// @brief Field ObjectId offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const ObjectId;

/// @brief Field Depth offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const Depth;

/// @brief Field VertexNormal offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const VertexNormal;

/// @brief Field WorldPosition offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const WorldPosition;

/// @brief Field EntityId offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const EntityId;

/// @brief Field BaseColor offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const BaseColor;

/// @brief Field SpecularColor offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const SpecularColor;

/// @brief Field Metallic offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const Metallic;

/// @brief Field Emission offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const Emission;

/// @brief Field Normal offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const Normal;

/// @brief Field Smoothness offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const Smoothness;

/// @brief Field Occlusion offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const Occlusion;

/// @brief Field DiffuseColor offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestMode const DiffuseColor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::RenderRequestOutputSpace
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10115))
// CS Name: UnityEngine.Camera::RenderRequestOutputSpace
struct CORDL_TYPE UnityEngine__Camera__RenderRequestOutputSpace : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Camera__RenderRequestOutputSpace(int32_t value__) noexcept;


                    constexpr UnityEngine__Camera__RenderRequestOutputSpace(UnityEngine__Camera__RenderRequestOutputSpace const&) = default;
                    constexpr UnityEngine__Camera__RenderRequestOutputSpace(UnityEngine__Camera__RenderRequestOutputSpace&&) = default;
                    constexpr UnityEngine__Camera__RenderRequestOutputSpace& operator=(UnityEngine__Camera__RenderRequestOutputSpace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Camera__RenderRequestOutputSpace& operator=(UnityEngine__Camera__RenderRequestOutputSpace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Camera__RenderRequestOutputSpace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Camera__RenderRequestOutputSpace_Unwrapped : int32_t {
__ScreenSpace = -1,
__UV0 = 0,
__UV1 = 1,
__UV2 = 2,
__UV3 = 3,
__UV4 = 4,
__UV5 = 5,
__UV6 = 6,
__UV7 = 7,
__UV8 = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Camera__RenderRequestOutputSpace_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Camera__RenderRequestOutputSpace_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ScreenSpace offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const ScreenSpace;

/// @brief Field UV0 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV0;

/// @brief Field UV1 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV1;

/// @brief Field UV2 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV2;

/// @brief Field UV3 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV3;

/// @brief Field UV4 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV4;

/// @brief Field UV5 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV5;

/// @brief Field UV6 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV6;

/// @brief Field UV7 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV7;

/// @brief Field UV8 offset 0
static UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace const UV8;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::RenderRequest
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10116))
// CS Name: UnityEngine.Camera::RenderRequest
struct CORDL_TYPE UnityEngine__Camera__RenderRequest : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_CameraRenderMode", ty: "UnityEngine::UnityEngine__Camera__RenderRequestMode", modifiers: "", def_value: None }, CppParam { name: "m_ResultRT", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: None }, CppParam { name: "m_OutputSpace", ty: "UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace", modifiers: "", def_value: None }]
constexpr UnityEngine__Camera__RenderRequest(UnityEngine::UnityEngine__Camera__RenderRequestMode m_CameraRenderMode, UnityEngine::RenderTexture m_ResultRT, UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace m_OutputSpace) noexcept;


                    constexpr UnityEngine__Camera__RenderRequest(UnityEngine__Camera__RenderRequest const&) = default;
                    constexpr UnityEngine__Camera__RenderRequest(UnityEngine__Camera__RenderRequest&&) = default;
                    constexpr UnityEngine__Camera__RenderRequest& operator=(UnityEngine__Camera__RenderRequest const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Camera__RenderRequest& operator=(UnityEngine__Camera__RenderRequest&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Camera__RenderRequest(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UnityEngine__Camera__RenderRequestMode __declspec(property(get=__get_m_CameraRenderMode, put=__set_m_CameraRenderMode))  m_CameraRenderMode;

constexpr void __set_m_CameraRenderMode(UnityEngine::UnityEngine__Camera__RenderRequestMode value) ;

constexpr UnityEngine::UnityEngine__Camera__RenderRequestMode __get_m_CameraRenderMode() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_m_ResultRT, put=__set_m_ResultRT))  m_ResultRT;

constexpr void __set_m_ResultRT(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_m_ResultRT() const;

 UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace __declspec(property(get=__get_m_OutputSpace, put=__set_m_OutputSpace))  m_OutputSpace;

constexpr void __set_m_OutputSpace(UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace value) ;

constexpr UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace __get_m_OutputSpace() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::CameraCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10117))
// CS Name: UnityEngine.Camera::CameraCallback
class CORDL_TYPE UnityEngine__Camera__CameraCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Camera__CameraCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Camera__CameraCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Camera__CameraCallback(UnityEngine__Camera__CameraCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Camera__CameraCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Camera__CameraCallback(UnityEngine__Camera__CameraCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Camera__CameraCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Camera__CameraCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Camera__CameraCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Camera__CameraCallback& operator=(UnityEngine__Camera__CameraCallback&& o) noexcept = default;
  constexpr UnityEngine__Camera__CameraCallback& operator=(UnityEngine__Camera__CameraCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__Camera__CameraCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b834f0 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b835c4 size 0x14 virtual true final false
 void Invoke(UnityEngine::Camera cam) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Camera
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10118))
// CS Name: UnityEngine.Camera
class CORDL_TYPE Camera : public UnityEngine::Behaviour {
public:
// Declarations
using CameraCallback = UnityEngine::UnityEngine__Camera__CameraCallback;

using RenderRequest = UnityEngine::UnityEngine__Camera__RenderRequest;

using RenderRequestOutputSpace = UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace;

using RenderRequestMode = UnityEngine::UnityEngine__Camera__RenderRequestMode;

using MonoOrStereoscopicEye = UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye;

using StereoscopicEye = UnityEngine::UnityEngine__Camera__StereoscopicEye;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Camera() = default;

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: " const&", def_value: None }]
constexpr Camera(Camera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None }]
constexpr Camera(Camera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Camera(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr Camera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Camera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Camera& operator=(Camera&& o) noexcept = default;
  constexpr Camera& operator=(Camera const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__Camera__CameraCallback __declspec(property(get=__get_onPreCull, put=__set_onPreCull))  onPreCull;

static void __set_onPreCull(UnityEngine::UnityEngine__Camera__CameraCallback value) ;

static UnityEngine::UnityEngine__Camera__CameraCallback __get_onPreCull() ;

static UnityEngine::UnityEngine__Camera__CameraCallback __declspec(property(get=__get_onPreRender, put=__set_onPreRender))  onPreRender;

static void __set_onPreRender(UnityEngine::UnityEngine__Camera__CameraCallback value) ;

static UnityEngine::UnityEngine__Camera__CameraCallback __get_onPreRender() ;

static UnityEngine::UnityEngine__Camera__CameraCallback __declspec(property(get=__get_onPostRender, put=__set_onPostRender))  onPostRender;

static void __set_onPostRender(UnityEngine::UnityEngine__Camera__CameraCallback value) ;

static UnityEngine::UnityEngine__Camera__CameraCallback __get_onPostRender() ;


// Properties

 float_t __declspec(property(get=get_nearClipPlane, put=set_nearClipPlane))  nearClipPlane;

 float_t __declspec(property(get=get_farClipPlane, put=set_farClipPlane))  farClipPlane;

 float_t __declspec(property(get=get_fieldOfView, put=set_fieldOfView))  fieldOfView;

 UnityEngine::RenderingPath __declspec(property(put=set_renderingPath))  renderingPath;

 UnityEngine::RenderingPath __declspec(property(get=get_actualRenderingPath))  actualRenderingPath;

 bool __declspec(property(put=set_allowHDR))  allowHDR;

 bool __declspec(property(put=set_allowMSAA))  allowMSAA;

 bool __declspec(property(put=set_forceIntoRenderTexture))  forceIntoRenderTexture;

 float_t __declspec(property(put=set_orthographicSize))  orthographicSize;

 bool __declspec(property(get=get_orthographic, put=set_orthographic))  orthographic;

 float_t __declspec(property(get=get_depth, put=set_depth))  depth;

 float_t __declspec(property(get=get_aspect, put=set_aspect))  aspect;

 int32_t __declspec(property(get=get_cullingMask, put=set_cullingMask))  cullingMask;

 int32_t __declspec(property(get=get_eventMask))  eventMask;

 bool __declspec(property(put=set_useOcclusionCulling))  useOcclusionCulling;

 UnityEngine::Color __declspec(property(get=get_backgroundColor, put=set_backgroundColor))  backgroundColor;

 UnityEngine::CameraClearFlags __declspec(property(get=get_clearFlags, put=set_clearFlags))  clearFlags;

 UnityEngine::DepthTextureMode __declspec(property(get=get_depthTextureMode, put=set_depthTextureMode))  depthTextureMode;

 UnityEngine::Rect __declspec(property(put=set_rect))  rect;

 UnityEngine::Rect __declspec(property(get=get_pixelRect))  pixelRect;

 int32_t __declspec(property(get=get_pixelWidth))  pixelWidth;

 int32_t __declspec(property(get=get_pixelHeight))  pixelHeight;

 UnityEngine::RenderTexture __declspec(property(get=get_targetTexture, put=set_targetTexture))  targetTexture;

 int32_t __declspec(property(get=get_targetDisplay, put=set_targetDisplay))  targetDisplay;

 UnityEngine::Matrix4x4 __declspec(property(get=get_worldToCameraMatrix, put=set_worldToCameraMatrix))  worldToCameraMatrix;

 UnityEngine::Matrix4x4 __declspec(property(get=get_projectionMatrix, put=set_projectionMatrix))  projectionMatrix;

static UnityEngine::Camera __declspec(property(get=get_main))  main;

static UnityEngine::Camera __declspec(property(get=get_current))  current;

 bool __declspec(property(get=get_stereoEnabled))  stereoEnabled;

 UnityEngine::StereoTargetEyeMask __declspec(property(get=get_stereoTargetEye, put=set_stereoTargetEye))  stereoTargetEye;

static int32_t __declspec(property(get=get_allCamerasCount))  allCamerasCount;


// Methods

// Ctor Parameters []
explicit Camera() ;

/// @brief Method .ctor addr 0x2b81928 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method get_nearClipPlane addr 0x2b81930 size 0x3c virtual false final false
 float_t get_nearClipPlane() ;

/// @brief Method set_nearClipPlane addr 0x2b8196c size 0x4c virtual false final false
 void set_nearClipPlane(float_t value) ;

/// @brief Method get_farClipPlane addr 0x2b819b8 size 0x3c virtual false final false
 float_t get_farClipPlane() ;

/// @brief Method set_farClipPlane addr 0x2b819f4 size 0x4c virtual false final false
 void set_farClipPlane(float_t value) ;

/// @brief Method get_fieldOfView addr 0x2b81a40 size 0x3c virtual false final false
 float_t get_fieldOfView() ;

/// @brief Method set_fieldOfView addr 0x2b81a7c size 0x4c virtual false final false
 void set_fieldOfView(float_t value) ;

/// @brief Method set_renderingPath addr 0x2b81ac8 size 0x44 virtual false final false
 void set_renderingPath(UnityEngine::RenderingPath value) ;

/// @brief Method get_actualRenderingPath addr 0x2b81b0c size 0x3c virtual false final false
 UnityEngine::RenderingPath get_actualRenderingPath() ;

/// @brief Method set_allowHDR addr 0x2b81b48 size 0x44 virtual false final false
 void set_allowHDR(bool value) ;

/// @brief Method set_allowMSAA addr 0x2b81b8c size 0x44 virtual false final false
 void set_allowMSAA(bool value) ;

/// @brief Method set_forceIntoRenderTexture addr 0x2b81bd0 size 0x44 virtual false final false
 void set_forceIntoRenderTexture(bool value) ;

/// @brief Method set_orthographicSize addr 0x2b81c14 size 0x4c virtual false final false
 void set_orthographicSize(float_t value) ;

/// @brief Method get_orthographic addr 0x2b81c60 size 0x3c virtual false final false
 bool get_orthographic() ;

/// @brief Method set_orthographic addr 0x2b81c9c size 0x44 virtual false final false
 void set_orthographic(bool value) ;

/// @brief Method get_depth addr 0x2b81ce0 size 0x3c virtual false final false
 float_t get_depth() ;

/// @brief Method set_depth addr 0x2b81d1c size 0x4c virtual false final false
 void set_depth(float_t value) ;

/// @brief Method get_aspect addr 0x2b81d68 size 0x3c virtual false final false
 float_t get_aspect() ;

/// @brief Method set_aspect addr 0x2b81da4 size 0x4c virtual false final false
 void set_aspect(float_t value) ;

/// @brief Method get_cullingMask addr 0x2b81df0 size 0x3c virtual false final false
 int32_t get_cullingMask() ;

/// @brief Method set_cullingMask addr 0x2b81e2c size 0x44 virtual false final false
 void set_cullingMask(int32_t value) ;

/// @brief Method get_eventMask addr 0x2b81e70 size 0x3c virtual false final false
 int32_t get_eventMask() ;

/// @brief Method set_useOcclusionCulling addr 0x2b81eac size 0x44 virtual false final false
 void set_useOcclusionCulling(bool value) ;

/// @brief Method get_backgroundColor addr 0x2b81ef0 size 0x58 virtual false final false
 UnityEngine::Color get_backgroundColor() ;

/// @brief Method set_backgroundColor addr 0x2b81f8c size 0x54 virtual false final false
 void set_backgroundColor(UnityEngine::Color value) ;

/// @brief Method get_clearFlags addr 0x2b82024 size 0x3c virtual false final false
 UnityEngine::CameraClearFlags get_clearFlags() ;

/// @brief Method set_clearFlags addr 0x2b82060 size 0x44 virtual false final false
 void set_clearFlags(UnityEngine::CameraClearFlags value) ;

/// @brief Method get_depthTextureMode addr 0x2b820a4 size 0x3c virtual false final false
 UnityEngine::DepthTextureMode get_depthTextureMode() ;

/// @brief Method set_depthTextureMode addr 0x2b820e0 size 0x44 virtual false final false
 void set_depthTextureMode(UnityEngine::DepthTextureMode value) ;

/// @brief Method set_rect addr 0x2b82124 size 0x54 virtual false final false
 void set_rect(UnityEngine::Rect value) ;

/// @brief Method get_pixelRect addr 0x2b821bc size 0x58 virtual false final false
 UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelWidth addr 0x2b82258 size 0x3c virtual false final false
 int32_t get_pixelWidth() ;

/// @brief Method get_pixelHeight addr 0x2b82294 size 0x3c virtual false final false
 int32_t get_pixelHeight() ;

/// @brief Method get_targetTexture addr 0x2b822d0 size 0x3c virtual false final false
 UnityEngine::RenderTexture get_targetTexture() ;

/// @brief Method set_targetTexture addr 0x2b8230c size 0x44 virtual false final false
 void set_targetTexture(UnityEngine::RenderTexture value) ;

/// @brief Method get_targetDisplay addr 0x2b82350 size 0x3c virtual false final false
 int32_t get_targetDisplay() ;

/// @brief Method set_targetDisplay addr 0x2b8238c size 0x44 virtual false final false
 void set_targetDisplay(int32_t value) ;

/// @brief Method get_worldToCameraMatrix addr 0x2b823d0 size 0x6c virtual false final false
 UnityEngine::Matrix4x4 get_worldToCameraMatrix() ;

/// @brief Method set_worldToCameraMatrix addr 0x2b82480 size 0x44 virtual false final false
 void set_worldToCameraMatrix(UnityEngine::Matrix4x4 value) ;

/// @brief Method get_projectionMatrix addr 0x2b82508 size 0x6c virtual false final false
 UnityEngine::Matrix4x4 get_projectionMatrix() ;

/// @brief Method set_projectionMatrix addr 0x2b825b8 size 0x44 virtual false final false
 void set_projectionMatrix(UnityEngine::Matrix4x4 value) ;

/// @brief Method ResetWorldToCameraMatrix addr 0x2b82640 size 0x3c virtual false final false
 void ResetWorldToCameraMatrix() ;

/// @brief Method CalculateObliqueMatrix addr 0x2b8267c size 0x78 virtual false final false
 UnityEngine::Matrix4x4 CalculateObliqueMatrix(UnityEngine::Vector4 clipPlane) ;

/// @brief Method WorldToScreenPoint addr 0x2b82748 size 0x70 virtual false final false
 UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye) ;

/// @brief Method WorldToViewportPoint addr 0x2b82814 size 0x70 virtual false final false
 UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye) ;

/// @brief Method ViewportToWorldPoint addr 0x2b828e0 size 0x70 virtual false final false
 UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine::Vector3 position, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye) ;

/// @brief Method WorldToScreenPoint addr 0x2b829ac size 0x8 virtual false final false
 UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position) ;

/// @brief Method WorldToViewportPoint addr 0x2b829b4 size 0x8 virtual false final false
 UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position) ;

/// @brief Method ScreenToViewportPoint addr 0x2b829bc size 0x68 virtual false final false
 UnityEngine::Vector3 ScreenToViewportPoint(UnityEngine::Vector3 position) ;

/// @brief Method ScreenPointToRay addr 0x2b82a78 size 0x78 virtual false final false
 UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector2 pos, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye) ;

/// @brief Method ScreenPointToRay addr 0x2b82b4c size 0x38 virtual false final false
 UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye) ;

/// @brief Method ScreenPointToRay addr 0x2b82b84 size 0x4c virtual false final false
 UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos) ;

/// @brief Method get_main addr 0x2b82bd0 size 0x28 virtual false final false
static UnityEngine::Camera get_main() ;

/// @brief Method get_current addr 0x2b82bf8 size 0x28 virtual false final false
static UnityEngine::Camera get_current() ;

/// @brief Method get_stereoEnabled addr 0x2b82c20 size 0x3c virtual false final false
 bool get_stereoEnabled() ;

/// @brief Method get_stereoTargetEye addr 0x2b82c5c size 0x3c virtual false final false
 UnityEngine::StereoTargetEyeMask get_stereoTargetEye() ;

/// @brief Method set_stereoTargetEye addr 0x2b82c98 size 0x44 virtual false final false
 void set_stereoTargetEye(UnityEngine::StereoTargetEyeMask value) ;

/// @brief Method GetStereoProjectionMatrix addr 0x2b82cdc size 0x7c virtual false final false
 UnityEngine::Matrix4x4 GetStereoProjectionMatrix(UnityEngine::UnityEngine__Camera__StereoscopicEye eye) ;

/// @brief Method GetAllCamerasCount addr 0x2b82dac size 0x28 virtual false final false
static int32_t GetAllCamerasCount() ;

/// @brief Method GetAllCamerasImpl addr 0x2b82dd4 size 0x3c virtual false final false
static int32_t GetAllCamerasImpl(ByRef<::ArrayW<UnityEngine::Camera>> cam) ;

/// @brief Method get_allCamerasCount addr 0x2b82e10 size 0x28 virtual false final false
static int32_t get_allCamerasCount() ;

/// @brief Method GetAllCameras addr 0x2b82e38 size 0xe4 virtual false final false
static int32_t GetAllCameras(::ArrayW<UnityEngine::Camera> cameras) ;

/// @brief Method RenderToCubemapImpl addr 0x2b82f1c size 0x54 virtual false final false
 bool RenderToCubemapImpl(UnityEngine::Texture tex, int32_t faceMask) ;

/// @brief Method RenderToCubemap addr 0x2b82f70 size 0x48 virtual false final false
 bool RenderToCubemap(UnityEngine::RenderTexture cubemap) ;

/// @brief Method Render addr 0x2b82fb8 size 0x3c virtual false final false
 void Render() ;

/// @brief Method RenderWithShader addr 0x2b82ff4 size 0x54 virtual false final false
 void RenderWithShader(UnityEngine::Shader shader, ::StringW replacementTag) ;

/// @brief Method CopyFrom addr 0x2b83048 size 0x44 virtual false final false
 void CopyFrom(UnityEngine::Camera other) ;

/// @brief Method AddCommandBufferImpl addr 0x2b8308c size 0x54 virtual false final false
 void AddCommandBufferImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer buffer) ;

/// @brief Method RemoveCommandBufferImpl addr 0x2b830e0 size 0x54 virtual false final false
 void RemoveCommandBufferImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer buffer) ;

/// @brief Method AddCommandBuffer addr 0x2b83134 size 0x13c virtual false final false
 void AddCommandBuffer(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer buffer) ;

/// @brief Method RemoveCommandBuffer addr 0x2b83270 size 0x13c virtual false final false
 void RemoveCommandBuffer(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer buffer) ;

/// @brief Method FireOnPreCull addr 0x2b833ac size 0x6c virtual false final false
static void FireOnPreCull(UnityEngine::Camera cam) ;

/// @brief Method FireOnPreRender addr 0x2b83418 size 0x6c virtual false final false
static void FireOnPreRender(UnityEngine::Camera cam) ;

/// @brief Method FireOnPostRender addr 0x2b83484 size 0x6c virtual false final false
static void FireOnPostRender(UnityEngine::Camera cam) ;

/// @brief Method get_backgroundColor_Injected addr 0x2b81f48 size 0x44 virtual false final false
 void get_backgroundColor_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method set_backgroundColor_Injected addr 0x2b81fe0 size 0x44 virtual false final false
 void set_backgroundColor_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method set_rect_Injected addr 0x2b82178 size 0x44 virtual false final false
 void set_rect_Injected(ByRef<UnityEngine::Rect> value) ;

/// @brief Method get_pixelRect_Injected addr 0x2b82214 size 0x44 virtual false final false
 void get_pixelRect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method get_worldToCameraMatrix_Injected addr 0x2b8243c size 0x44 virtual false final false
 void get_worldToCameraMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method set_worldToCameraMatrix_Injected addr 0x2b824c4 size 0x44 virtual false final false
 void set_worldToCameraMatrix_Injected(ByRef<UnityEngine::Matrix4x4> value) ;

/// @brief Method get_projectionMatrix_Injected addr 0x2b82574 size 0x44 virtual false final false
 void get_projectionMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method set_projectionMatrix_Injected addr 0x2b825fc size 0x44 virtual false final false
 void set_projectionMatrix_Injected(ByRef<UnityEngine::Matrix4x4> value) ;

/// @brief Method CalculateObliqueMatrix_Injected addr 0x2b826f4 size 0x54 virtual false final false
 void CalculateObliqueMatrix_Injected(ByRef<UnityEngine::Vector4> clipPlane, ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method WorldToScreenPoint_Injected addr 0x2b827b8 size 0x5c virtual false final false
 void WorldToScreenPoint_Injected(ByRef<UnityEngine::Vector3> position, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method WorldToViewportPoint_Injected addr 0x2b82884 size 0x5c virtual false final false
 void WorldToViewportPoint_Injected(ByRef<UnityEngine::Vector3> position, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method ViewportToWorldPoint_Injected addr 0x2b82950 size 0x5c virtual false final false
 void ViewportToWorldPoint_Injected(ByRef<UnityEngine::Vector3> position, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method ScreenToViewportPoint_Injected addr 0x2b82a24 size 0x54 virtual false final false
 void ScreenToViewportPoint_Injected(ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method ScreenPointToRay_Injected addr 0x2b82af0 size 0x5c virtual false final false
 void ScreenPointToRay_Injected(ByRef<UnityEngine::Vector2> pos, UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye eye, ByRef<UnityEngine::Ray> ret) ;

/// @brief Method GetStereoProjectionMatrix_Injected addr 0x2b82d58 size 0x54 virtual false final false
 void GetStereoProjectionMatrix_Injected(UnityEngine::UnityEngine__Camera__StereoscopicEye eye, ByRef<UnityEngine::Matrix4x4> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Camera__MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Camera__RenderRequestMode, "UnityEngine", "Camera/RenderRequestMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Camera__RenderRequestOutputSpace, "UnityEngine", "Camera/RenderRequestOutputSpace");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Camera__StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
NEED_NO_BOX(UnityEngine::Camera);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Camera, "UnityEngine", "Camera");
NEED_NO_BOX(UnityEngine::UnityEngine__Camera__CameraCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Camera__CameraCallback, "UnityEngine", "Camera/CameraCallback");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Camera__RenderRequest, "UnityEngine", "Camera/RenderRequest");
