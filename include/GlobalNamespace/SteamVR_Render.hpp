// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_ExternalCamera
  class SteamVR_ExternalCamera;
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForEndOfFrame
  class WaitForEndOfFrame;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Render
  class SteamVR_Render : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_Render::$RenderLoop$d__29
    class $RenderLoop$d__29;
    // public System.Boolean pauseGameWhenDashboardIsVisible
    // Size: 0x1
    // Offset: 0x18
    bool pauseGameWhenDashboardIsVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean lockPhysicsUpdateRateToRenderFrequency
    // Size: 0x1
    // Offset: 0x19
    bool lockPhysicsUpdateRateToRenderFrequency;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lockPhysicsUpdateRateToRenderFrequency and: externalCamera
    char __padding1[0x6] = {};
    // public SteamVR_ExternalCamera externalCamera
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SteamVR_ExternalCamera* externalCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_ExternalCamera*) == 0x8);
    // public System.String externalCameraConfigPath
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* externalCameraConfigPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Valve.VR.ETrackingUniverseOrigin trackingSpace
    // Size: 0x4
    // Offset: 0x30
    Valve::VR::ETrackingUniverseOrigin trackingSpace;
    // Field size check
    static_assert(sizeof(Valve::VR::ETrackingUniverseOrigin) == 0x4);
    // Padding between fields: trackingSpace and: cameras
    char __padding4[0x4] = {};
    // private SteamVR_Camera[] cameras
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::SteamVR_Camera*>* cameras;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SteamVR_Camera*>*) == 0x8);
    // public Valve.VR.TrackedDevicePose_t[] poses
    // Size: 0x8
    // Offset: 0x40
    ::Array<Valve::VR::TrackedDevicePose_t>* poses;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::TrackedDevicePose_t>*) == 0x8);
    // public Valve.VR.TrackedDevicePose_t[] gamePoses
    // Size: 0x8
    // Offset: 0x48
    ::Array<Valve::VR::TrackedDevicePose_t>* gamePoses;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::TrackedDevicePose_t>*) == 0x8);
    // private UnityEngine.WaitForEndOfFrame waitForEndOfFrame
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::WaitForEndOfFrame* waitForEndOfFrame;
    // Field size check
    static_assert(sizeof(UnityEngine::WaitForEndOfFrame*) == 0x8);
    // private System.Single sceneResolutionScale
    // Size: 0x4
    // Offset: 0x58
    float sceneResolutionScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single timeScale
    // Size: 0x4
    // Offset: 0x5C
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SteamVR_Render
    SteamVR_Render(bool pauseGameWhenDashboardIsVisible_ = {}, bool lockPhysicsUpdateRateToRenderFrequency_ = {}, GlobalNamespace::SteamVR_ExternalCamera* externalCamera_ = {}, ::Il2CppString* externalCameraConfigPath_ = {}, Valve::VR::ETrackingUniverseOrigin trackingSpace_ = {}, ::Array<GlobalNamespace::SteamVR_Camera*>* cameras_ = {}, ::Array<Valve::VR::TrackedDevicePose_t>* poses_ = {}, ::Array<Valve::VR::TrackedDevicePose_t>* gamePoses_ = {}, UnityEngine::WaitForEndOfFrame* waitForEndOfFrame_ = {}, float sceneResolutionScale_ = {}, float timeScale_ = {}) noexcept : pauseGameWhenDashboardIsVisible{pauseGameWhenDashboardIsVisible_}, lockPhysicsUpdateRateToRenderFrequency{lockPhysicsUpdateRateToRenderFrequency_}, externalCamera{externalCamera_}, externalCameraConfigPath{externalCameraConfigPath_}, trackingSpace{trackingSpace_}, cameras{cameras_}, poses{poses_}, gamePoses{gamePoses_}, waitForEndOfFrame{waitForEndOfFrame_}, sceneResolutionScale{sceneResolutionScale_}, timeScale{timeScale_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [CompilerGeneratedAttribute] Offset: 0xDD4B94
    // Get static field: static private Valve.VR.EVREye <eye>k__BackingField
    static Valve::VR::EVREye _get_$eye$k__BackingField();
    // Set static field: static private Valve.VR.EVREye <eye>k__BackingField
    static void _set_$eye$k__BackingField(Valve::VR::EVREye value);
    // Get static field: static private SteamVR_Render _instance
    static GlobalNamespace::SteamVR_Render* _get__instance();
    // Set static field: static private SteamVR_Render _instance
    static void _set__instance(GlobalNamespace::SteamVR_Render* value);
    // Get static field: static private System.Boolean isQuitting
    static bool _get_isQuitting();
    // Set static field: static private System.Boolean isQuitting
    static void _set_isQuitting(bool value);
    // Get static field: static private System.Boolean _pauseRendering
    static bool _get__pauseRendering();
    // Set static field: static private System.Boolean _pauseRendering
    static void _set__pauseRendering(bool value);
    // static public Valve.VR.EVREye get_eye()
    // Offset: 0x13D8DB8
    static Valve::VR::EVREye get_eye();
    // static private System.Void set_eye(Valve.VR.EVREye value)
    // Offset: 0x13D8E08
    static void set_eye(Valve::VR::EVREye value);
    // static public SteamVR_Render get_instance()
    // Offset: 0x13CBF84
    static GlobalNamespace::SteamVR_Render* get_instance();
    // private System.Void OnDestroy()
    // Offset: 0x13D8E5C
    void OnDestroy();
    // private System.Void OnApplicationQuit()
    // Offset: 0x13D8EAC
    void OnApplicationQuit();
    // static public System.Void Add(SteamVR_Camera vrcam)
    // Offset: 0x13CA940
    static void Add(GlobalNamespace::SteamVR_Camera* vrcam);
    // static public System.Void Remove(SteamVR_Camera vrcam)
    // Offset: 0x13C9E10
    static void Remove(GlobalNamespace::SteamVR_Camera* vrcam);
    // static public SteamVR_Camera Top()
    // Offset: 0x13D3A78
    static GlobalNamespace::SteamVR_Camera* Top();
    // private System.Void AddInternal(SteamVR_Camera vrcam)
    // Offset: 0x13D8F20
    void AddInternal(GlobalNamespace::SteamVR_Camera* vrcam);
    // private System.Void RemoveInternal(SteamVR_Camera vrcam)
    // Offset: 0x13D9124
    void RemoveInternal(GlobalNamespace::SteamVR_Camera* vrcam);
    // private SteamVR_Camera TopInternal()
    // Offset: 0x13D92D8
    GlobalNamespace::SteamVR_Camera* TopInternal();
    // static public System.Boolean get_pauseRendering()
    // Offset: 0x13D9324
    static bool get_pauseRendering();
    // static public System.Void set_pauseRendering(System.Boolean value)
    // Offset: 0x13D4CA0
    static void set_pauseRendering(bool value);
    // private System.Collections.IEnumerator RenderLoop()
    // Offset: 0x13D9374
    System::Collections::IEnumerator* RenderLoop();
    // private System.Void RenderExternalCamera()
    // Offset: 0x13D9410
    void RenderExternalCamera();
    // private System.Void OnInputFocus(System.Boolean hasFocus)
    // Offset: 0x13D954C
    void OnInputFocus(bool hasFocus);
    // private System.Void OnQuit(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x13D95BC
    void OnQuit(Valve::VR::VREvent_t vrEvent);
    // private System.String GetScreenshotFilename(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames screenshotPropertyFilename)
    // Offset: 0x13D95C4
    ::Il2CppString* GetScreenshotFilename(uint screenshotHandle, Valve::VR::EVRScreenshotPropertyFilenames screenshotPropertyFilename);
    // private System.Void OnRequestScreenshot(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x13D9710
    void OnRequestScreenshot(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnEnable()
    // Offset: 0x13D98F0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13D9B6C
    void OnDisable();
    // private System.Void Awake()
    // Offset: 0x13D9D24
    void Awake();
    // public System.Void UpdatePoses()
    // Offset: 0x13D9E88
    void UpdatePoses();
    // private System.Void OnBeforeRender()
    // Offset: 0x13D9F68
    void OnBeforeRender();
    // private System.Void Update()
    // Offset: 0x13D9F6C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13DA370
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Render* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Render::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Render*, creationType>()));
    }
  }; // SteamVR_Render
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Render), 92 + sizeof(float)> __GlobalNamespace_SteamVR_RenderSizeCheck;
  static_assert(sizeof(SteamVR_Render) == 0x60);
  // Writing MetadataGetter for method: SteamVR_Render::get_eye
  // Il2CppName: get_eye
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVREye (*)()>(&SteamVR_Render::get_eye)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "get_eye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::set_eye
  // Il2CppName: set_eye
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Valve::VR::EVREye)>(&SteamVR_Render::set_eye)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "set_eye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::EVREye>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::get_instance
  // Il2CppName: get_instance
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Render* (*)()>(&SteamVR_Render::get_instance)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnDestroy
  // Il2CppName: OnDestroy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::OnDestroy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnApplicationQuit
  // Il2CppName: OnApplicationQuit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::OnApplicationQuit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::Add
  // Il2CppName: Add
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::SteamVR_Camera*)>(&SteamVR_Render::Add)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SteamVR_Camera*>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::Remove
  // Il2CppName: Remove
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::SteamVR_Camera*)>(&SteamVR_Render::Remove)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SteamVR_Camera*>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::Top
  // Il2CppName: Top
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Camera* (*)()>(&SteamVR_Render::Top)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::AddInternal
  // Il2CppName: AddInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)(GlobalNamespace::SteamVR_Camera*)>(&SteamVR_Render::AddInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "AddInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SteamVR_Camera*>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::RemoveInternal
  // Il2CppName: RemoveInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)(GlobalNamespace::SteamVR_Camera*)>(&SteamVR_Render::RemoveInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "RemoveInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SteamVR_Camera*>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::TopInternal
  // Il2CppName: TopInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Camera* (SteamVR_Render::*)()>(&SteamVR_Render::TopInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "TopInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::get_pauseRendering
  // Il2CppName: get_pauseRendering
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&SteamVR_Render::get_pauseRendering)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "get_pauseRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::set_pauseRendering
  // Il2CppName: set_pauseRendering
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&SteamVR_Render::set_pauseRendering)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "set_pauseRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::RenderLoop
  // Il2CppName: RenderLoop
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (SteamVR_Render::*)()>(&SteamVR_Render::RenderLoop)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "RenderLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::RenderExternalCamera
  // Il2CppName: RenderExternalCamera
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::RenderExternalCamera)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "RenderExternalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnInputFocus
  // Il2CppName: OnInputFocus
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)(bool)>(&SteamVR_Render::OnInputFocus)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnQuit
  // Il2CppName: OnQuit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)(Valve::VR::VREvent_t)>(&SteamVR_Render::OnQuit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::VREvent_t>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::GetScreenshotFilename
  // Il2CppName: GetScreenshotFilename
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (SteamVR_Render::*)(uint, Valve::VR::EVRScreenshotPropertyFilenames)>(&SteamVR_Render::GetScreenshotFilename)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "GetScreenshotFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRScreenshotPropertyFilenames>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnRequestScreenshot
  // Il2CppName: OnRequestScreenshot
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)(Valve::VR::VREvent_t)>(&SteamVR_Render::OnRequestScreenshot)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnRequestScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::VREvent_t>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnEnable
  // Il2CppName: OnEnable
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::OnEnable)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnDisable
  // Il2CppName: OnDisable
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::OnDisable)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::Awake
  // Il2CppName: Awake
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::Awake)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::UpdatePoses
  // Il2CppName: UpdatePoses
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::UpdatePoses)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "UpdatePoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::OnBeforeRender
  // Il2CppName: OnBeforeRender
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::OnBeforeRender)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "OnBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::Update
  // Il2CppName: Update
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::Update)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SteamVR_Render::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_Render::*)()>(&SteamVR_Render::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_Render*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Render*, "", "SteamVR_Render");
