// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassAfterLightsPass
#include "GlobalNamespace/BloomPrePassAfterLightsPass.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassBackgroundGradient
  class BloomPrePassBackgroundGradient : public GlobalNamespace::BloomPrePassAfterLightsPass {
    public:
    // private UnityEngine.Color _skyColor
    // Offset: 0x18
    UnityEngine::Color skyColor;
    // private UnityEngine.Color _equatorColor
    // Offset: 0x28
    UnityEngine::Color equatorColor;
    // private UnityEngine.Color _groundColor
    // Offset: 0x38
    UnityEngine::Color groundColor;
    // private UnityEngine.Shader _shader
    // Offset: 0x48
    UnityEngine::Shader* shader;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 _skyColorID
    static int _get__skyColorID();
    // Set static field: static private readonly System.Int32 _skyColorID
    static void _set__skyColorID(int value);
    // Get static field: static private readonly System.Int32 _equatorColorID
    static int _get__equatorColorID();
    // Set static field: static private readonly System.Int32 _equatorColorID
    static void _set__equatorColorID(int value);
    // Get static field: static private readonly System.Int32 _groundColorID
    static int _get__groundColorID();
    // Set static field: static private readonly System.Int32 _groundColorID
    static void _set__groundColorID(int value);
    // Get static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static int _get__inverseProjectionMatrixID();
    // Set static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static void _set__inverseProjectionMatrixID(int value);
    // Get static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static int _get__cameraToWorldMatrixID();
    // Set static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static void _set__cameraToWorldMatrixID(int value);
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // Get static field: static private System.Boolean _initialized
    static bool _get__initialized();
    // Set static field: static private System.Boolean _initialized
    static void _set__initialized(bool value);
    // private System.Void InitIfNeeded()
    // Offset: 0x1CF9498
    void InitIfNeeded();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1CF95F4
    // Implemented from: BloomPrePassAfterLightsPass
    // Base method: System.Void BloomPrePassAfterLightsPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // public System.Void .ctor()
    // Offset: 0x1CF97C8
    // Implemented from: BloomPrePassAfterLightsPass
    // Base method: System.Void BloomPrePassAfterLightsPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassBackgroundGradient* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1CF9830
    // Implemented from: BloomPrePassAfterLightsPass
    // Base method: System.Void BloomPrePassAfterLightsPass::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBackgroundGradient
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundGradient*, "", "BloomPrePassBackgroundGradient");
#pragma pack(pop)