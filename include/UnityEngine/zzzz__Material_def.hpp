#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine {
class Material;
}
// Type: UnityEngine::Material
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10058))
// CS Name: UnityEngine.Material
class CORDL_TYPE Material : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Material() = default;

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: " const&", def_value: None }]
constexpr Material(Material const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None }]
constexpr Material(Material&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Material(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Material& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Material& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Material& operator=(Material&& o) noexcept = default;
  constexpr Material& operator=(Material const& o) noexcept = default;
                


// Properties

 UnityEngine::Shader __declspec(property(get=get_shader, put=set_shader))  shader;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 UnityEngine::Texture __declspec(property(get=get_mainTexture, put=set_mainTexture))  mainTexture;

 UnityEngine::Vector2 __declspec(property(get=get_mainTextureOffset, put=set_mainTextureOffset))  mainTextureOffset;

 UnityEngine::Vector2 __declspec(property(get=get_mainTextureScale, put=set_mainTextureScale))  mainTextureScale;

 int32_t __declspec(property(get=get_renderQueue, put=set_renderQueue))  renderQueue;

 int32_t __declspec(property(get=get_rawRenderQueue))  rawRenderQueue;

 ::ArrayW<UnityEngine::Rendering::LocalKeyword> __declspec(property(get=get_enabledKeywords, put=set_enabledKeywords))  enabledKeywords;

 UnityEngine::MaterialGlobalIlluminationFlags __declspec(property(get=get_globalIlluminationFlags, put=set_globalIlluminationFlags))  globalIlluminationFlags;

 bool __declspec(property(get=get_doubleSidedGI, put=set_doubleSidedGI))  doubleSidedGI;

 bool __declspec(property(get=get_enableInstancing, put=set_enableInstancing))  enableInstancing;

 int32_t __declspec(property(get=get_passCount))  passCount;

 ::ArrayW<::StringW> __declspec(property(get=get_shaderKeywords, put=set_shaderKeywords))  shaderKeywords;


// Methods

/// @brief Method Create addr 0x2b78200 size 0x58 virtual false final false
static UnityEngine::Material Create(::StringW scriptContents) ;

/// @brief Method CreateWithShader addr 0x2b782d8 size 0x44 virtual false final false
static void CreateWithShader(UnityEngine::Material self, UnityEngine::Shader shader) ;

/// @brief Method CreateWithMaterial addr 0x2b7831c size 0x44 virtual false final false
static void CreateWithMaterial(UnityEngine::Material self, UnityEngine::Material source) ;

/// @brief Method CreateWithString addr 0x2b78360 size 0x3c virtual false final false
static void CreateWithString(UnityEngine::Material self) ;

// Ctor Parameters [CppParam { name: "shader", ty: "UnityEngine::Shader", modifiers: "", def_value: None }]
explicit Material(UnityEngine::Shader shader) ;

/// @brief Method .ctor addr 0x2b7839c size 0x90 virtual false final false
 void _ctor(UnityEngine::Shader shader) ;

// Ctor Parameters [CppParam { name: "source", ty: "UnityEngine::Material", modifiers: "", def_value: None }]
explicit Material(UnityEngine::Material source) ;

/// @brief Method .ctor addr 0x2b7842c size 0x90 virtual false final false
 void _ctor(UnityEngine::Material source) ;

// Ctor Parameters [CppParam { name: "contents", ty: "::StringW", modifiers: "", def_value: None }]
explicit Material(::StringW contents) ;

/// @brief Method .ctor addr 0x2b78258 size 0x80 virtual false final false
 void _ctor(::StringW contents) ;

/// @brief Method GetDefaultMaterial addr 0x2b784bc size 0x28 virtual false final false
static UnityEngine::Material GetDefaultMaterial() ;

/// @brief Method GetDefaultParticleMaterial addr 0x2b784e4 size 0x28 virtual false final false
static UnityEngine::Material GetDefaultParticleMaterial() ;

/// @brief Method GetDefaultLineMaterial addr 0x2b7850c size 0x28 virtual false final false
static UnityEngine::Material GetDefaultLineMaterial() ;

/// @brief Method get_shader addr 0x2b78534 size 0x3c virtual false final false
 UnityEngine::Shader get_shader() ;

/// @brief Method set_shader addr 0x2b78570 size 0x44 virtual false final false
 void set_shader(UnityEngine::Shader value) ;

/// @brief Method get_color addr 0x2b785b4 size 0x8c virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2b786d4 size 0xd4 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_mainTexture addr 0x2b78828 size 0xb0 virtual false final false
 UnityEngine::Texture get_mainTexture() ;

/// @brief Method set_mainTexture addr 0x2b7898c size 0xc8 virtual false final false
 void set_mainTexture(UnityEngine::Texture value) ;

/// @brief Method get_mainTextureOffset addr 0x2b78b28 size 0x94 virtual false final false
 UnityEngine::Vector2 get_mainTextureOffset() ;

/// @brief Method set_mainTextureOffset addr 0x2b78c2c size 0xb0 virtual false final false
 void set_mainTextureOffset(UnityEngine::Vector2 value) ;

/// @brief Method get_mainTextureScale addr 0x2b78d44 size 0x8c virtual false final false
 UnityEngine::Vector2 get_mainTextureScale() ;

/// @brief Method set_mainTextureScale addr 0x2b78e20 size 0xb0 virtual false final false
 void set_mainTextureScale(UnityEngine::Vector2 value) ;

/// @brief Method GetFirstPropertyNameIdByAttribute addr 0x2b78640 size 0x44 virtual false final false
 int32_t GetFirstPropertyNameIdByAttribute(UnityEngine::Rendering::ShaderPropertyFlags attributeFlag) ;

/// @brief Method HasProperty addr 0x2b78f38 size 0x44 virtual false final false
 bool HasProperty(int32_t nameID) ;

/// @brief Method HasProperty addr 0x2b78f7c size 0x70 virtual false final false
 bool HasProperty(::StringW name) ;

/// @brief Method HasFloatImpl addr 0x2b78fec size 0x44 virtual false final false
 bool HasFloatImpl(int32_t name) ;

/// @brief Method HasFloat addr 0x2b79030 size 0x70 virtual false final false
 bool HasFloat(::StringW name) ;

/// @brief Method HasFloat addr 0x2b790a0 size 0x44 virtual false final false
 bool HasFloat(int32_t nameID) ;

/// @brief Method HasInt addr 0x2b790e4 size 0x70 virtual false final false
 bool HasInt(::StringW name) ;

/// @brief Method HasInt addr 0x2b79154 size 0x44 virtual false final false
 bool HasInt(int32_t nameID) ;

/// @brief Method HasIntImpl addr 0x2b79198 size 0x44 virtual false final false
 bool HasIntImpl(int32_t name) ;

/// @brief Method HasInteger addr 0x2b791dc size 0x70 virtual false final false
 bool HasInteger(::StringW name) ;

/// @brief Method HasInteger addr 0x2b7924c size 0x44 virtual false final false
 bool HasInteger(int32_t nameID) ;

/// @brief Method HasTextureImpl addr 0x2b79290 size 0x44 virtual false final false
 bool HasTextureImpl(int32_t name) ;

/// @brief Method HasTexture addr 0x2b792d4 size 0x70 virtual false final false
 bool HasTexture(::StringW name) ;

/// @brief Method HasTexture addr 0x2b79344 size 0x44 virtual false final false
 bool HasTexture(int32_t nameID) ;

/// @brief Method HasMatrixImpl addr 0x2b79388 size 0x44 virtual false final false
 bool HasMatrixImpl(int32_t name) ;

/// @brief Method HasMatrix addr 0x2b793cc size 0x70 virtual false final false
 bool HasMatrix(::StringW name) ;

/// @brief Method HasMatrix addr 0x2b7943c size 0x44 virtual false final false
 bool HasMatrix(int32_t nameID) ;

/// @brief Method HasVectorImpl addr 0x2b79480 size 0x44 virtual false final false
 bool HasVectorImpl(int32_t name) ;

/// @brief Method HasVector addr 0x2b794c4 size 0x70 virtual false final false
 bool HasVector(::StringW name) ;

/// @brief Method HasVector addr 0x2b79534 size 0x44 virtual false final false
 bool HasVector(int32_t nameID) ;

/// @brief Method HasColor addr 0x2b79578 size 0x70 virtual false final false
 bool HasColor(::StringW name) ;

/// @brief Method HasColor addr 0x2b795e8 size 0x44 virtual false final false
 bool HasColor(int32_t nameID) ;

/// @brief Method HasBufferImpl addr 0x2b7962c size 0x44 virtual false final false
 bool HasBufferImpl(int32_t name) ;

/// @brief Method HasBuffer addr 0x2b79670 size 0x70 virtual false final false
 bool HasBuffer(::StringW name) ;

/// @brief Method HasBuffer addr 0x2b796e0 size 0x44 virtual false final false
 bool HasBuffer(int32_t nameID) ;

/// @brief Method HasConstantBufferImpl addr 0x2b79724 size 0x44 virtual false final false
 bool HasConstantBufferImpl(int32_t name) ;

/// @brief Method HasConstantBuffer addr 0x2b79768 size 0x70 virtual false final false
 bool HasConstantBuffer(::StringW name) ;

/// @brief Method HasConstantBuffer addr 0x2b797d8 size 0x44 virtual false final false
 bool HasConstantBuffer(int32_t nameID) ;

/// @brief Method get_renderQueue addr 0x2b7981c size 0x3c virtual false final false
 int32_t get_renderQueue() ;

/// @brief Method set_renderQueue addr 0x2b79858 size 0x44 virtual false final false
 void set_renderQueue(int32_t value) ;

/// @brief Method get_rawRenderQueue addr 0x2b7989c size 0x3c virtual false final false
 int32_t get_rawRenderQueue() ;

/// @brief Method EnableKeyword addr 0x2b798d8 size 0x44 virtual false final false
 void EnableKeyword(::StringW keyword) ;

/// @brief Method DisableKeyword addr 0x2b7991c size 0x44 virtual false final false
 void DisableKeyword(::StringW keyword) ;

/// @brief Method IsKeywordEnabled addr 0x2b79960 size 0x44 virtual false final false
 bool IsKeywordEnabled(::StringW keyword) ;

/// @brief Method EnableLocalKeyword addr 0x2b799a4 size 0x44 virtual false final false
 void EnableLocalKeyword(UnityEngine::Rendering::LocalKeyword keyword) ;

/// @brief Method DisableLocalKeyword addr 0x2b79a2c size 0x44 virtual false final false
 void DisableLocalKeyword(UnityEngine::Rendering::LocalKeyword keyword) ;

/// @brief Method SetLocalKeyword addr 0x2b79ab4 size 0x54 virtual false final false
 void SetLocalKeyword(UnityEngine::Rendering::LocalKeyword keyword, bool value) ;

/// @brief Method IsLocalKeywordEnabled addr 0x2b79b5c size 0x44 virtual false final false
 bool IsLocalKeywordEnabled(UnityEngine::Rendering::LocalKeyword keyword) ;

/// @brief Method EnableKeyword addr 0x2b79be4 size 0x5c virtual false final false
 void EnableKeyword(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method DisableKeyword addr 0x2b79c40 size 0x5c virtual false final false
 void DisableKeyword(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method SetKeyword addr 0x2b79c9c size 0x64 virtual false final false
 void SetKeyword(ByRef<UnityEngine::Rendering::LocalKeyword> keyword, bool value) ;

/// @brief Method IsKeywordEnabled addr 0x2b79d00 size 0x60 virtual false final false
 bool IsKeywordEnabled(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method GetEnabledKeywords addr 0x2b79d60 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords() ;

/// @brief Method SetEnabledKeywords addr 0x2b79d9c size 0x44 virtual false final false
 void SetEnabledKeywords(::ArrayW<UnityEngine::Rendering::LocalKeyword> keywords) ;

/// @brief Method get_enabledKeywords addr 0x2b79de0 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Rendering::LocalKeyword> get_enabledKeywords() ;

/// @brief Method set_enabledKeywords addr 0x2b79e1c size 0x44 virtual false final false
 void set_enabledKeywords(::ArrayW<UnityEngine::Rendering::LocalKeyword> value) ;

/// @brief Method get_globalIlluminationFlags addr 0x2b79e60 size 0x3c virtual false final false
 UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags() ;

/// @brief Method set_globalIlluminationFlags addr 0x2b79e9c size 0x44 virtual false final false
 void set_globalIlluminationFlags(UnityEngine::MaterialGlobalIlluminationFlags value) ;

/// @brief Method get_doubleSidedGI addr 0x2b79ee0 size 0x3c virtual false final false
 bool get_doubleSidedGI() ;

/// @brief Method set_doubleSidedGI addr 0x2b79f1c size 0x44 virtual false final false
 void set_doubleSidedGI(bool value) ;

/// @brief Method get_enableInstancing addr 0x2b71ce0 size 0x3c virtual false final false
 bool get_enableInstancing() ;

/// @brief Method set_enableInstancing addr 0x2b79f60 size 0x44 virtual false final false
 void set_enableInstancing(bool value) ;

/// @brief Method get_passCount addr 0x2b79fa4 size 0x3c virtual false final false
 int32_t get_passCount() ;

/// @brief Method SetShaderPassEnabled addr 0x2b79fe0 size 0x54 virtual false final false
 void SetShaderPassEnabled(::StringW passName, bool enabled) ;

/// @brief Method GetShaderPassEnabled addr 0x2b7a034 size 0x44 virtual false final false
 bool GetShaderPassEnabled(::StringW passName) ;

/// @brief Method GetPassName addr 0x2b7a078 size 0x44 virtual false final false
 ::StringW GetPassName(int32_t pass) ;

/// @brief Method FindPass addr 0x2b7a0bc size 0x44 virtual false final false
 int32_t FindPass(::StringW passName) ;

/// @brief Method SetOverrideTag addr 0x2b7a100 size 0x54 virtual false final false
 void SetOverrideTag(::StringW tag, ::StringW val) ;

/// @brief Method GetTagImpl addr 0x2b7a154 size 0x5c virtual false final false
 ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue) ;

/// @brief Method GetTag addr 0x2b7a1b0 size 0x5c virtual false final false
 ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue) ;

/// @brief Method GetTag addr 0x2b7a20c size 0x88 virtual false final false
 ::StringW GetTag(::StringW tag, bool searchFallbacks) ;

/// @brief Method Lerp addr 0x2b7a294 size 0x64 virtual false final false
 void Lerp(UnityEngine::Material start, UnityEngine::Material end, float_t t) ;

/// @brief Method SetPass addr 0x2b7a2f8 size 0x44 virtual false final false
 bool SetPass(int32_t pass) ;

/// @brief Method CopyPropertiesFromMaterial addr 0x2b7a33c size 0x44 virtual false final false
 void CopyPropertiesFromMaterial(UnityEngine::Material mat) ;

/// @brief Method GetShaderKeywords addr 0x2b7a380 size 0x3c virtual false final false
 ::ArrayW<::StringW> GetShaderKeywords() ;

/// @brief Method SetShaderKeywords addr 0x2b7a3bc size 0x44 virtual false final false
 void SetShaderKeywords(::ArrayW<::StringW> names) ;

/// @brief Method get_shaderKeywords addr 0x2b7a400 size 0x3c virtual false final false
 ::ArrayW<::StringW> get_shaderKeywords() ;

/// @brief Method set_shaderKeywords addr 0x2b7a43c size 0x44 virtual false final false
 void set_shaderKeywords(::ArrayW<::StringW> value) ;

/// @brief Method ComputeCRC addr 0x2b7a480 size 0x3c virtual false final false
 int32_t ComputeCRC() ;

/// @brief Method GetTexturePropertyNames addr 0x2b7a4bc size 0x3c virtual false final false
 ::ArrayW<::StringW> GetTexturePropertyNames() ;

/// @brief Method GetTexturePropertyNameIDs addr 0x2b7a4f8 size 0x3c virtual false final false
 ::ArrayW<int32_t> GetTexturePropertyNameIDs() ;

/// @brief Method GetTexturePropertyNamesInternal addr 0x2b7a534 size 0x44 virtual false final false
 void GetTexturePropertyNamesInternal(::bs_hook::Il2CppWrapperType outNames) ;

/// @brief Method GetTexturePropertyNameIDsInternal addr 0x2b7a578 size 0x44 virtual false final false
 void GetTexturePropertyNameIDsInternal(::bs_hook::Il2CppWrapperType outNames) ;

/// @brief Method GetTexturePropertyNames addr 0x2b7a5bc size 0x94 virtual false final false
 void GetTexturePropertyNames(System::Collections::Generic::List_1<::StringW> outNames) ;

/// @brief Method GetTexturePropertyNameIDs addr 0x2b7a650 size 0x94 virtual false final false
 void GetTexturePropertyNameIDs(System::Collections::Generic::List_1<int32_t> outNames) ;

/// @brief Method SetIntImpl addr 0x2b7a6e4 size 0x54 virtual false final false
 void SetIntImpl(int32_t name, int32_t value) ;

/// @brief Method SetFloatImpl addr 0x2b7a738 size 0x54 virtual false final false
 void SetFloatImpl(int32_t name, float_t value) ;

/// @brief Method SetColorImpl addr 0x2b7a78c size 0x5c virtual false final false
 void SetColorImpl(int32_t name, UnityEngine::Color value) ;

/// @brief Method SetMatrixImpl addr 0x2b7a83c size 0x54 virtual false final false
 void SetMatrixImpl(int32_t name, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetTextureImpl addr 0x2b7a8e4 size 0x54 virtual false final false
 void SetTextureImpl(int32_t name, UnityEngine::Texture value) ;

/// @brief Method SetRenderTextureImpl addr 0x2b7a938 size 0x5c virtual false final false
 void SetRenderTextureImpl(int32_t name, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetBufferImpl addr 0x2b7a994 size 0x54 virtual false final false
 void SetBufferImpl(int32_t name, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetGraphicsBufferImpl addr 0x2b7a9e8 size 0x54 virtual false final false
 void SetGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetConstantBufferImpl addr 0x2b7aa3c size 0x6c virtual false final false
 void SetConstantBufferImpl(int32_t name, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantGraphicsBufferImpl addr 0x2b7aaa8 size 0x6c virtual false final false
 void SetConstantGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method GetIntImpl addr 0x2b7ab14 size 0x44 virtual false final false
 int32_t GetIntImpl(int32_t name) ;

/// @brief Method GetFloatImpl addr 0x2b7ab58 size 0x44 virtual false final false
 float_t GetFloatImpl(int32_t name) ;

/// @brief Method GetColorImpl addr 0x2b7ab9c size 0x60 virtual false final false
 UnityEngine::Color GetColorImpl(int32_t name) ;

/// @brief Method GetMatrixImpl addr 0x2b7ac50 size 0x7c virtual false final false
 UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name) ;

/// @brief Method GetTextureImpl addr 0x2b7ad20 size 0x44 virtual false final false
 UnityEngine::Texture GetTextureImpl(int32_t name) ;

/// @brief Method SetFloatArrayImpl addr 0x2b7ad64 size 0x5c virtual false final false
 void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetVectorArrayImpl addr 0x2b7adc0 size 0x5c virtual false final false
 void SetVectorArrayImpl(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetColorArrayImpl addr 0x2b7ae1c size 0x5c virtual false final false
 void SetColorArrayImpl(int32_t name, ::ArrayW<UnityEngine::Color> values, int32_t count) ;

/// @brief Method SetMatrixArrayImpl addr 0x2b7ae78 size 0x5c virtual false final false
 void SetMatrixArrayImpl(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method GetFloatArrayImpl addr 0x2b7aed4 size 0x44 virtual false final false
 ::ArrayW<float_t> GetFloatArrayImpl(int32_t name) ;

/// @brief Method GetVectorArrayImpl addr 0x2b7af18 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetVectorArrayImpl(int32_t name) ;

/// @brief Method GetColorArrayImpl addr 0x2b7af5c size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Color> GetColorArrayImpl(int32_t name) ;

/// @brief Method GetMatrixArrayImpl addr 0x2b7afa0 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetMatrixArrayImpl(int32_t name) ;

/// @brief Method GetFloatArrayCountImpl addr 0x2b7afe4 size 0x44 virtual false final false
 int32_t GetFloatArrayCountImpl(int32_t name) ;

/// @brief Method GetVectorArrayCountImpl addr 0x2b7b028 size 0x44 virtual false final false
 int32_t GetVectorArrayCountImpl(int32_t name) ;

/// @brief Method GetColorArrayCountImpl addr 0x2b7b06c size 0x44 virtual false final false
 int32_t GetColorArrayCountImpl(int32_t name) ;

/// @brief Method GetMatrixArrayCountImpl addr 0x2b7b0b0 size 0x44 virtual false final false
 int32_t GetMatrixArrayCountImpl(int32_t name) ;

/// @brief Method ExtractFloatArrayImpl addr 0x2b7b0f4 size 0x54 virtual false final false
 void ExtractFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t>> val) ;

/// @brief Method ExtractVectorArrayImpl addr 0x2b7b148 size 0x54 virtual false final false
 void ExtractVectorArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Vector4>> val) ;

/// @brief Method ExtractColorArrayImpl addr 0x2b7b19c size 0x54 virtual false final false
 void ExtractColorArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Color>> val) ;

/// @brief Method ExtractMatrixArrayImpl addr 0x2b7b1f0 size 0x54 virtual false final false
 void ExtractMatrixArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Matrix4x4>> val) ;

/// @brief Method GetTextureScaleAndOffsetImpl addr 0x2b7b244 size 0x60 virtual false final false
 UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name) ;

/// @brief Method SetTextureOffsetImpl addr 0x2b7b2f8 size 0x58 virtual false final false
 void SetTextureOffsetImpl(int32_t name, UnityEngine::Vector2 offset) ;

/// @brief Method SetTextureScaleImpl addr 0x2b7b3a4 size 0x58 virtual false final false
 void SetTextureScaleImpl(int32_t name, UnityEngine::Vector2 scale) ;

/// @brief Method SetFloatArray addr 0x2b7b450 size 0x118 virtual false final false
 void SetFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetVectorArray addr 0x2b7b568 size 0x118 virtual false final false
 void SetVectorArray(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetColorArray addr 0x2b7b680 size 0x118 virtual false final false
 void SetColorArray(int32_t name, ::ArrayW<UnityEngine::Color> values, int32_t count) ;

/// @brief Method SetMatrixArray addr 0x2b7b798 size 0x118 virtual false final false
 void SetMatrixArray(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method ExtractFloatArray addr 0x2b7b8b0 size 0x184 virtual false final false
 void ExtractFloatArray(int32_t name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method ExtractVectorArray addr 0x2b7ba34 size 0x184 virtual false final false
 void ExtractVectorArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method ExtractColorArray addr 0x2b7bbb8 size 0x184 virtual false final false
 void ExtractColorArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method ExtractMatrixArray addr 0x2b7bd3c size 0x184 virtual false final false
 void ExtractMatrixArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetInt addr 0x2b7bec0 size 0x8c virtual false final false
 void SetInt(::StringW name, int32_t value) ;

/// @brief Method SetInt addr 0x2b7bf4c size 0x54 virtual false final false
 void SetInt(int32_t nameID, int32_t value) ;

/// @brief Method SetFloat addr 0x2b7bfa0 size 0x80 virtual false final false
 void SetFloat(::StringW name, float_t value) ;

/// @brief Method SetFloat addr 0x2b7c020 size 0x54 virtual false final false
 void SetFloat(int32_t nameID, float_t value) ;

/// @brief Method SetInteger addr 0x2b7c074 size 0x80 virtual false final false
 void SetInteger(::StringW name, int32_t value) ;

/// @brief Method SetInteger addr 0x2b7c0f4 size 0x54 virtual false final false
 void SetInteger(int32_t nameID, int32_t value) ;

/// @brief Method SetColor addr 0x2b787ac size 0x7c virtual false final false
 void SetColor(::StringW name, UnityEngine::Color value) ;

/// @brief Method SetColor addr 0x2b787a8 size 0x4 virtual false final false
 void SetColor(int32_t nameID, UnityEngine::Color value) ;

/// @brief Method SetVector addr 0x2b7c148 size 0x7c virtual false final false
 void SetVector(::StringW name, UnityEngine::Vector4 value) ;

/// @brief Method SetVector addr 0x2b7c1c4 size 0x4 virtual false final false
 void SetVector(int32_t nameID, UnityEngine::Vector4 value) ;

/// @brief Method SetMatrix addr 0x2b7c1c8 size 0x9c virtual false final false
 void SetMatrix(::StringW name, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetMatrix addr 0x2b7c264 size 0x64 virtual false final false
 void SetMatrix(int32_t nameID, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetTexture addr 0x2b78aa8 size 0x80 virtual false final false
 void SetTexture(::StringW name, UnityEngine::Texture value) ;

/// @brief Method SetTexture addr 0x2b78a54 size 0x54 virtual false final false
 void SetTexture(int32_t nameID, UnityEngine::Texture value) ;

/// @brief Method SetTexture addr 0x2b7c2c8 size 0x88 virtual false final false
 void SetTexture(::StringW name, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetTexture addr 0x2b7c350 size 0x5c virtual false final false
 void SetTexture(int32_t nameID, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetBuffer addr 0x2b7c3ac size 0x80 virtual false final false
 void SetBuffer(::StringW name, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetBuffer addr 0x2b7c42c size 0x54 virtual false final false
 void SetBuffer(int32_t nameID, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetBuffer addr 0x2b7c480 size 0x80 virtual false final false
 void SetBuffer(::StringW name, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetBuffer addr 0x2b7c500 size 0x54 virtual false final false
 void SetBuffer(int32_t nameID, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetConstantBuffer addr 0x2b7c554 size 0x98 virtual false final false
 void SetConstantBuffer(::StringW name, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantBuffer addr 0x2b7c5ec size 0x6c virtual false final false
 void SetConstantBuffer(int32_t nameID, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantBuffer addr 0x2b7c658 size 0x98 virtual false final false
 void SetConstantBuffer(::StringW name, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantBuffer addr 0x2b7c6f0 size 0x6c virtual false final false
 void SetConstantBuffer(int32_t nameID, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetFloatArray addr 0x2b7c75c size 0xac virtual false final false
 void SetFloatArray(::StringW name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b7c808 size 0x80 virtual false final false
 void SetFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b7c888 size 0x68 virtual false final false
 void SetFloatArray(::StringW name, ::ArrayW<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b7c8f0 size 0x18 virtual false final false
 void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values) ;

/// @brief Method SetColorArray addr 0x2b7c908 size 0xac virtual false final false
 void SetColorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method SetColorArray addr 0x2b7c9b4 size 0x80 virtual false final false
 void SetColorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method SetColorArray addr 0x2b7ca34 size 0x68 virtual false final false
 void SetColorArray(::StringW name, ::ArrayW<UnityEngine::Color> values) ;

/// @brief Method SetColorArray addr 0x2b7ca9c size 0x18 virtual false final false
 void SetColorArray(int32_t nameID, ::ArrayW<UnityEngine::Color> values) ;

/// @brief Method SetVectorArray addr 0x2b7cab4 size 0xac virtual false final false
 void SetVectorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method SetVectorArray addr 0x2b7cb60 size 0x80 virtual false final false
 void SetVectorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method SetVectorArray addr 0x2b7cbe0 size 0x68 virtual false final false
 void SetVectorArray(::StringW name, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetVectorArray addr 0x2b7cc48 size 0x18 virtual false final false
 void SetVectorArray(int32_t nameID, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetMatrixArray addr 0x2b7cc60 size 0xac virtual false final false
 void SetMatrixArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetMatrixArray addr 0x2b7cd0c size 0x80 virtual false final false
 void SetMatrixArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetMatrixArray addr 0x2b7cd8c size 0x68 virtual false final false
 void SetMatrixArray(::StringW name, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetMatrixArray addr 0x2b7cdf4 size 0x18 virtual false final false
 void SetMatrixArray(int32_t nameID, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetInt addr 0x2b7ce0c size 0x8c virtual false final false
 int32_t GetInt(::StringW name) ;

/// @brief Method GetInt addr 0x2b7ce98 size 0x60 virtual false final false
 int32_t GetInt(int32_t nameID) ;

/// @brief Method GetFloat addr 0x2b7cef8 size 0x70 virtual false final false
 float_t GetFloat(::StringW name) ;

/// @brief Method GetFloat addr 0x2b7cf68 size 0x44 virtual false final false
 float_t GetFloat(int32_t nameID) ;

/// @brief Method GetInteger addr 0x2b7cfac size 0x70 virtual false final false
 int32_t GetInteger(::StringW name) ;

/// @brief Method GetInteger addr 0x2b7d01c size 0x44 virtual false final false
 int32_t GetInteger(int32_t nameID) ;

/// @brief Method GetColor addr 0x2b78688 size 0x4c virtual false final false
 UnityEngine::Color GetColor(::StringW name) ;

/// @brief Method GetColor addr 0x2b78684 size 0x4 virtual false final false
 UnityEngine::Color GetColor(int32_t nameID) ;

/// @brief Method GetVector addr 0x2b7d060 size 0x4c virtual false final false
 UnityEngine::Vector4 GetVector(::StringW name) ;

/// @brief Method GetVector addr 0x2b7d0ac size 0x4 virtual false final false
 UnityEngine::Vector4 GetVector(int32_t nameID) ;

/// @brief Method GetMatrix addr 0x2b7d0b0 size 0xbc virtual false final false
 UnityEngine::Matrix4x4 GetMatrix(::StringW name) ;

/// @brief Method GetMatrix addr 0x2b7d16c size 0x8c virtual false final false
 UnityEngine::Matrix4x4 GetMatrix(int32_t nameID) ;

/// @brief Method GetTexture addr 0x2b7891c size 0x70 virtual false final false
 UnityEngine::Texture GetTexture(::StringW name) ;

/// @brief Method GetTexture addr 0x2b788d8 size 0x44 virtual false final false
 UnityEngine::Texture GetTexture(int32_t nameID) ;

/// @brief Method GetFloatArray addr 0x2b7d1f8 size 0x4c virtual false final false
 ::ArrayW<float_t> GetFloatArray(::StringW name) ;

/// @brief Method GetFloatArray addr 0x2b7d244 size 0x84 virtual false final false
 ::ArrayW<float_t> GetFloatArray(int32_t nameID) ;

/// @brief Method GetColorArray addr 0x2b7d2c8 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Color> GetColorArray(::StringW name) ;

/// @brief Method GetColorArray addr 0x2b7d314 size 0x84 virtual false final false
 ::ArrayW<UnityEngine::Color> GetColorArray(int32_t nameID) ;

/// @brief Method GetVectorArray addr 0x2b7d398 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetVectorArray(::StringW name) ;

/// @brief Method GetVectorArray addr 0x2b7d3e4 size 0x84 virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetVectorArray(int32_t nameID) ;

/// @brief Method GetMatrixArray addr 0x2b7d468 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetMatrixArray(::StringW name) ;

/// @brief Method GetMatrixArray addr 0x2b7d4b4 size 0x84 virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetMatrixArray(int32_t nameID) ;

/// @brief Method GetFloatArray addr 0x2b7d538 size 0x5c virtual false final false
 void GetFloatArray(::StringW name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method GetFloatArray addr 0x2b7d594 size 0x4 virtual false final false
 void GetFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method GetColorArray addr 0x2b7d598 size 0x5c virtual false final false
 void GetColorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method GetColorArray addr 0x2b7d5f4 size 0x4 virtual false final false
 void GetColorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method GetVectorArray addr 0x2b7d5f8 size 0x5c virtual false final false
 void GetVectorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method GetVectorArray addr 0x2b7d654 size 0x4 virtual false final false
 void GetVectorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method GetMatrixArray addr 0x2b7d658 size 0x5c virtual false final false
 void GetMatrixArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetMatrixArray addr 0x2b7d6b4 size 0x4 virtual false final false
 void GetMatrixArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetTextureOffset addr 0x2b78ce0 size 0x64 virtual false final false
 void SetTextureOffset(::StringW name, UnityEngine::Vector2 value) ;

/// @brief Method SetTextureOffset addr 0x2b78cdc size 0x4 virtual false final false
 void SetTextureOffset(int32_t nameID, UnityEngine::Vector2 value) ;

/// @brief Method SetTextureScale addr 0x2b78ed4 size 0x64 virtual false final false
 void SetTextureScale(::StringW name, UnityEngine::Vector2 value) ;

/// @brief Method SetTextureScale addr 0x2b78ed0 size 0x4 virtual false final false
 void SetTextureScale(int32_t nameID, UnityEngine::Vector2 value) ;

/// @brief Method GetTextureOffset addr 0x2b78bd4 size 0x58 virtual false final false
 UnityEngine::Vector2 GetTextureOffset(::StringW name) ;

/// @brief Method GetTextureOffset addr 0x2b78bbc size 0x18 virtual false final false
 UnityEngine::Vector2 GetTextureOffset(int32_t nameID) ;

/// @brief Method GetTextureScale addr 0x2b78dd4 size 0x4c virtual false final false
 UnityEngine::Vector2 GetTextureScale(::StringW name) ;

/// @brief Method GetTextureScale addr 0x2b78dd0 size 0x4 virtual false final false
 UnityEngine::Vector2 GetTextureScale(int32_t nameID) ;

/// @brief Method EnableLocalKeyword_Injected addr 0x2b799e8 size 0x44 virtual false final false
 void EnableLocalKeyword_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method DisableLocalKeyword_Injected addr 0x2b79a70 size 0x44 virtual false final false
 void DisableLocalKeyword_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method SetLocalKeyword_Injected addr 0x2b79b08 size 0x54 virtual false final false
 void SetLocalKeyword_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword, bool value) ;

/// @brief Method IsLocalKeywordEnabled_Injected addr 0x2b79ba0 size 0x44 virtual false final false
 bool IsLocalKeywordEnabled_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method SetColorImpl_Injected addr 0x2b7a7e8 size 0x54 virtual false final false
 void SetColorImpl_Injected(int32_t name, ByRef<UnityEngine::Color> value) ;

/// @brief Method SetMatrixImpl_Injected addr 0x2b7a890 size 0x54 virtual false final false
 void SetMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> value) ;

/// @brief Method GetColorImpl_Injected addr 0x2b7abfc size 0x54 virtual false final false
 void GetColorImpl_Injected(int32_t name, ByRef<UnityEngine::Color> ret) ;

/// @brief Method GetMatrixImpl_Injected addr 0x2b7accc size 0x54 virtual false final false
 void GetMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method GetTextureScaleAndOffsetImpl_Injected addr 0x2b7b2a4 size 0x54 virtual false final false
 void GetTextureScaleAndOffsetImpl_Injected(int32_t name, ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method SetTextureOffsetImpl_Injected addr 0x2b7b350 size 0x54 virtual false final false
 void SetTextureOffsetImpl_Injected(int32_t name, ByRef<UnityEngine::Vector2> offset) ;

/// @brief Method SetTextureScaleImpl_Injected addr 0x2b7b3fc size 0x54 virtual false final false
 void SetTextureScaleImpl_Injected(int32_t name, ByRef<UnityEngine::Vector2> scale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Material);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Material, "UnityEngine", "Material");
