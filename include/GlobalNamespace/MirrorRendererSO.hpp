// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectSO
  class BloomPrePassEffectSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MirrorRendererSO
  class MirrorRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MirrorRendererSO::CameraTransformData
    struct CameraTransformData;
    // Autogenerated type: MirrorRendererSO/CameraTransformData
    struct CameraTransformData : public System::ValueType {
      public:
      // public readonly UnityEngine.Vector3 position
      // Offset: 0x0
      UnityEngine::Vector3 position;
      // public readonly UnityEngine.Quaternion rotation
      // Offset: 0xC
      UnityEngine::Quaternion rotation;
      // public readonly System.Single fov
      // Offset: 0x1C
      float fov;
      // public readonly System.Boolean stereoEnabled
      // Offset: 0x20
      bool stereoEnabled;
      // Creating value type constructor for type: CameraTransformData
      CameraTransformData(UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}, float fov_ = {}, bool stereoEnabled_ = {}) : position{position_}, rotation{rotation_}, fov{fov_}, stereoEnabled{stereoEnabled_} {}
      // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Single fov, System.Boolean stereoEnabled)
      // Offset: 0xA598E4
      static MirrorRendererSO::CameraTransformData* New_ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, float fov, bool stereoEnabled);
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0xA59900
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
      // public override System.Int32 GetHashCode()
      // Offset: 0xA59908
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
    }; // MirrorRendererSO/CameraTransformData
    // private UnityEngine.LayerMask _reflectLayers
    // Offset: 0x18
    UnityEngine::LayerMask reflectLayers;
    // private System.Int32 _stereoTextureWidth
    // Offset: 0x1C
    int stereoTextureWidth;
    // private System.Int32 _stereoTextureHeight
    // Offset: 0x20
    int stereoTextureHeight;
    // private System.Int32 _monoTextureWidth
    // Offset: 0x24
    int monoTextureWidth;
    // private System.Int32 _monoTextureHeight
    // Offset: 0x28
    int monoTextureHeight;
    // private System.Int32 _maxAntiAliasing
    // Offset: 0x2C
    int maxAntiAliasing;
    // private System.Boolean _disableDepthTexture
    // Offset: 0x30
    bool disableDepthTexture;
    // private System.Boolean _enableBloomPrePass
    // Offset: 0x31
    bool enableBloomPrePass;
    // private BloomPrePassRendererSO _bloomPrePassRenderer
    // Offset: 0x38
    GlobalNamespace::BloomPrePassRendererSO* bloomPrePassRenderer;
    // private BloomPrePassEffectSO _bloomPrePassEffect
    // Offset: 0x40
    GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect;
    // private UnityEngine.Shader _clearDepthShader
    // Offset: 0x48
    UnityEngine::Shader* clearDepthShader;
    // private UnityEngine.RenderTexture _bloomPrePassRenderTexture
    // Offset: 0x50
    UnityEngine::RenderTexture* bloomPrePassRenderTexture;
    // private UnityEngine.Camera _mirrorCamera
    // Offset: 0x58
    UnityEngine::Camera* mirrorCamera;
    // private System.Int32 _antialiasing
    // Offset: 0x60
    int antialiasing;
    // private System.Collections.Generic.Dictionary`2<MirrorRendererSO/CameraTransformData,UnityEngine.RenderTexture> _renderTextures
    // Offset: 0x68
    System::Collections::Generic::Dictionary_2<GlobalNamespace::MirrorRendererSO::CameraTransformData, UnityEngine::RenderTexture*>* renderTextures;
    // private readonly UnityEngine.Rect kLeftRect
    // Offset: 0x70
    UnityEngine::Rect kLeftRect;
    // private readonly UnityEngine.Rect kRightRect
    // Offset: 0x80
    UnityEngine::Rect kRightRect;
    // private readonly UnityEngine.Rect kFullRect
    // Offset: 0x90
    UnityEngine::Rect kFullRect;
    // static field const value: static private System.Int32 kWaterLayer
    static constexpr const int kWaterLayer = 4;
    // Get static field: static private System.Int32 kWaterLayer
    static int _get_kWaterLayer();
    // Set static field: static private System.Int32 kWaterLayer
    static void _set_kWaterLayer(int value);
    // private System.Void OnValidate()
    // Offset: 0x18F8FA4
    void OnValidate();
    // protected System.Void Awake()
    // Offset: 0x18F9084
    void Awake();
    // private System.Void ValidateParams()
    // Offset: 0x18F8FA8
    void ValidateParams();
    // public System.Void Init(UnityEngine.LayerMask reflectLayers, System.Int32 stereoTextureWidth, System.Int32 stereoTextureHeight, System.Int32 monoTextureWidth, System.Int32 monoTextureHeight, System.Int32 maxAntiAliasing, System.Boolean enableBloomPrePass)
    // Offset: 0x18F9088
    void Init(UnityEngine::LayerMask reflectLayers, int stereoTextureWidth, int stereoTextureHeight, int monoTextureWidth, int monoTextureHeight, int maxAntiAliasing, bool enableBloomPrePass);
    // public System.Void PrepareForNextFrame()
    // Offset: 0x18F8350
    void PrepareForNextFrame();
    // public UnityEngine.Texture GetMirrorTexture(UnityEngine.Vector3 reflectionPlanePos, UnityEngine.Vector3 reflectionPlaneNormal)
    // Offset: 0x18F86FC
    UnityEngine::Texture* GetMirrorTexture(UnityEngine::Vector3 reflectionPlanePos, UnityEngine::Vector3 reflectionPlaneNormal);
    // private System.Void RenderMirror(UnityEngine.Vector3 camPosition, UnityEngine.Quaternion camRotation, UnityEngine.Matrix4x4 camProjectionMatrix, UnityEngine.Rect screenRect, UnityEngine.Vector3 reclectionPlanePos, UnityEngine.Vector3 reflectionPlaneNormal)
    // Offset: 0x18F9778
    void RenderMirror(UnityEngine::Vector3 camPosition, UnityEngine::Quaternion camRotation, UnityEngine::Matrix4x4 camProjectionMatrix, UnityEngine::Rect screenRect, UnityEngine::Vector3 reclectionPlanePos, UnityEngine::Vector3 reflectionPlaneNormal);
    // protected System.Void OnDisable()
    // Offset: 0x18F9AA0
    void OnDisable();
    // private System.Void CreateOrUpdateMirrorCamera(UnityEngine.Camera currentCamera, UnityEngine.RenderTexture renderTexture)
    // Offset: 0x18F90BC
    void CreateOrUpdateMirrorCamera(UnityEngine::Camera* currentCamera, UnityEngine::RenderTexture* renderTexture);
    // static private UnityEngine.Vector4 Plane(UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x18F9380
    static UnityEngine::Vector4 Plane(UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // static private UnityEngine.Vector4 CameraSpacePlane(UnityEngine.Matrix4x4 worldToCameraMatrix, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x18F99FC
    static UnityEngine::Vector4 CameraSpacePlane(UnityEngine::Matrix4x4 worldToCameraMatrix, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // static private UnityEngine.Matrix4x4 CalculateReflectionMatrix(UnityEngine.Vector4 plane)
    // Offset: 0x18F945C
    static UnityEngine::Matrix4x4 CalculateReflectionMatrix(UnityEngine::Vector4 plane);
    // public System.Void .ctor()
    // Offset: 0x18F9C78
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MirrorRendererSO* New_ctor();
  }; // MirrorRendererSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererSO*, "", "MirrorRendererSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererSO::CameraTransformData, "", "MirrorRendererSO/CameraTransformData");
#pragma pack(pop)