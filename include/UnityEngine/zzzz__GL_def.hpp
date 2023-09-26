#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class GL;
}
// Type: UnityEngine::GL
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10092))
// CS Name: UnityEngine.GL
class CORDL_TYPE GL : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GL() = default;

// Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: " const&", def_value: None }]
constexpr GL(GL const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "&&", def_value: None }]
constexpr GL(GL&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GL(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GL& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GL& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GL& operator=(GL&& o) noexcept = default;
  constexpr GL& operator=(GL const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_sRGBWrite, put=set_sRGBWrite))  sRGBWrite;

static bool __declspec(property(get=get_invertCulling, put=set_invertCulling))  invertCulling;

static UnityEngine::Matrix4x4 __declspec(property(put=set_modelview))  modelview;


// Methods

/// @brief Method Vertex3 addr 0x2b7e928 size 0x50 virtual false final false
static void Vertex3(float_t x, float_t y, float_t z) ;

/// @brief Method TexCoord3 addr 0x2b7e978 size 0x50 virtual false final false
static void TexCoord3(float_t x, float_t y, float_t z) ;

/// @brief Method TexCoord addr 0x2b7e9c8 size 0x50 virtual false final false
static void TexCoord(UnityEngine::Vector3 v) ;

/// @brief Method TexCoord2 addr 0x2b7ea18 size 0x44 virtual false final false
static void TexCoord2(float_t x, float_t y) ;

/// @brief Method ImmediateColor addr 0x2b7ea5c size 0x58 virtual false final false
static void ImmediateColor(float_t r, float_t g, float_t b, float_t a) ;

/// @brief Method Color addr 0x2b7eab4 size 0x58 virtual false final false
static void Color(UnityEngine::Color c) ;

/// @brief Method get_sRGBWrite addr 0x2b7eb0c size 0x28 virtual false final false
static bool get_sRGBWrite() ;

/// @brief Method set_sRGBWrite addr 0x2b7eb34 size 0x3c virtual false final false
static void set_sRGBWrite(bool value) ;

/// @brief Method get_invertCulling addr 0x2b7eb70 size 0x28 virtual false final false
static bool get_invertCulling() ;

/// @brief Method set_invertCulling addr 0x2b7eb98 size 0x3c virtual false final false
static void set_invertCulling(bool value) ;

/// @brief Method Flush addr 0x2b7ebd4 size 0x28 virtual false final false
static void Flush() ;

/// @brief Method SetViewMatrix addr 0x2b7ebfc size 0x3c virtual false final false
static void SetViewMatrix(UnityEngine::Matrix4x4 m) ;

/// @brief Method set_modelview addr 0x2b7ec74 size 0x4c virtual false final false
static void set_modelview(UnityEngine::Matrix4x4 value) ;

/// @brief Method PushMatrix addr 0x2b7ecc0 size 0x28 virtual false final false
static void PushMatrix() ;

/// @brief Method PopMatrix addr 0x2b7ece8 size 0x28 virtual false final false
static void PopMatrix() ;

/// @brief Method LoadOrtho addr 0x2b7ed10 size 0x28 virtual false final false
static void LoadOrtho() ;

/// @brief Method LoadProjectionMatrix addr 0x2b7ed38 size 0x3c virtual false final false
static void LoadProjectionMatrix(UnityEngine::Matrix4x4 mat) ;

/// @brief Method GLLoadPixelMatrixScript addr 0x2b7edb0 size 0x58 virtual false final false
static void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top) ;

/// @brief Method LoadPixelMatrix addr 0x2b7ee08 size 0x58 virtual false final false
static void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top) ;

/// @brief Method GLIssuePluginEvent addr 0x2b7ee60 size 0x44 virtual false final false
static void GLIssuePluginEvent(::cordl_internals::intptr_t callback, int32_t eventID) ;

/// @brief Method IssuePluginEvent addr 0x2b7eea4 size 0xf0 virtual false final false
static void IssuePluginEvent(::cordl_internals::intptr_t callback, int32_t eventID) ;

/// @brief Method Begin addr 0x2b7ef94 size 0x3c virtual false final false
static void Begin(int32_t mode) ;

/// @brief Method End addr 0x2b7efd0 size 0x28 virtual false final false
static void End() ;

/// @brief Method GLClear addr 0x2b7eff8 size 0x6c virtual false final false
static void GLClear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor, float_t depth) ;

/// @brief Method Clear addr 0x2b7f0c8 size 0xc virtual false final false
static void Clear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor, float_t depth) ;

/// @brief Method Clear addr 0x2b7f0d4 size 0x10 virtual false final false
static void Clear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor) ;

/// @brief Method Viewport addr 0x2b7f0e4 size 0x44 virtual false final false
static void Viewport(UnityEngine::Rect pixelRect) ;

/// @brief Method SetViewMatrix_Injected addr 0x2b7ec38 size 0x3c virtual false final false
static void SetViewMatrix_Injected(ByRef<UnityEngine::Matrix4x4> m) ;

/// @brief Method LoadProjectionMatrix_Injected addr 0x2b7ed74 size 0x3c virtual false final false
static void LoadProjectionMatrix_Injected(ByRef<UnityEngine::Matrix4x4> mat) ;

/// @brief Method GLClear_Injected addr 0x2b7f064 size 0x64 virtual false final false
static void GLClear_Injected(bool clearDepth, bool clearColor, ByRef<UnityEngine::Color> backgroundColor, float_t depth) ;

/// @brief Method Viewport_Injected addr 0x2b7f128 size 0x3c virtual false final false
static void Viewport_Injected(ByRef<UnityEngine::Rect> pixelRect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GL);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GL, "UnityEngine", "GL");
