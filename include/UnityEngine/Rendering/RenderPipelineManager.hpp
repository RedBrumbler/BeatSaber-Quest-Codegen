// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Rendering.ScriptableRenderContext
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineAsset
  class RenderPipelineAsset;
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipelineManager
  class RenderPipelineManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RenderPipelineManager
    RenderPipelineManager() noexcept {}
    // Get static field: static UnityEngine.Rendering.RenderPipelineAsset s_CurrentPipelineAsset
    static UnityEngine::Rendering::RenderPipelineAsset* _get_s_CurrentPipelineAsset();
    // Set static field: static UnityEngine.Rendering.RenderPipelineAsset s_CurrentPipelineAsset
    static void _set_s_CurrentPipelineAsset(UnityEngine::Rendering::RenderPipelineAsset* value);
    // Get static field: static private UnityEngine.Camera[] s_Cameras
    static ::Array<UnityEngine::Camera*>* _get_s_Cameras();
    // Set static field: static private UnityEngine.Camera[] s_Cameras
    static void _set_s_Cameras(::Array<UnityEngine::Camera*>* value);
    // Get static field: static private System.Int32 s_CameraCapacity
    static int _get_s_CameraCapacity();
    // Set static field: static private System.Int32 s_CameraCapacity
    static void _set_s_CameraCapacity(int value);
    // [DebuggerBrowsableAttribute] Offset: 0xD94B64
    // [CompilerGeneratedAttribute] Offset: 0xD94B64
    // Get static field: static private UnityEngine.Rendering.RenderPipeline <currentPipeline>k__BackingField
    static UnityEngine::Rendering::RenderPipeline* _get_$currentPipeline$k__BackingField();
    // Set static field: static private UnityEngine.Rendering.RenderPipeline <currentPipeline>k__BackingField
    static void _set_$currentPipeline$k__BackingField(UnityEngine::Rendering::RenderPipeline* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD94BA0
    // [CompilerGeneratedAttribute] Offset: 0xD94BA0
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> beginFrameRendering
    static System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* _get_beginFrameRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> beginFrameRendering
    static void _set_beginFrameRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* value);
    // [CompilerGeneratedAttribute] Offset: 0xD94BDC
    // [DebuggerBrowsableAttribute] Offset: 0xD94BDC
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> beginCameraRendering
    static System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, UnityEngine::Camera*>* _get_beginCameraRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> beginCameraRendering
    static void _set_beginCameraRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, UnityEngine::Camera*>* value);
    // static public UnityEngine.Rendering.RenderPipeline get_currentPipeline()
    // Offset: 0x1B2F8CC
    static UnityEngine::Rendering::RenderPipeline* get_currentPipeline();
    // static private System.Void set_currentPipeline(UnityEngine.Rendering.RenderPipeline value)
    // Offset: 0x1B2F934
    static void set_currentPipeline(UnityEngine::Rendering::RenderPipeline* value);
    // static public System.Void add_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> value)
    // Offset: 0x1B2F9A0
    static void add_beginFrameRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* value);
    // static public System.Void remove_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> value)
    // Offset: 0x1B2FA90
    static void remove_beginFrameRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>* value);
    // static public System.Void add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> value)
    // Offset: 0x1B2FB80
    static void add_beginCameraRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, UnityEngine::Camera*>* value);
    // static public System.Void remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> value)
    // Offset: 0x1B2FC70
    static void remove_beginCameraRendering(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, UnityEngine::Camera*>* value);
    // static System.Void CleanupRenderPipeline()
    // Offset: 0x1B2F364
    static void CleanupRenderPipeline();
    // static private System.Void GetCameras(UnityEngine.Rendering.ScriptableRenderContext context)
    // Offset: 0x1B2FE08
    static void GetCameras(UnityEngine::Rendering::ScriptableRenderContext context);
    // static private System.Void DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset pipe, System.IntPtr loopPtr)
    // Offset: 0x1B30060
    static void DoRenderLoop_Internal(UnityEngine::Rendering::RenderPipelineAsset* pipe, System::IntPtr loopPtr);
    // static System.Void PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset pipelineAsset)
    // Offset: 0x1B2F5A0
    static void PrepareRenderPipeline(UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);
    // static private System.Void .cctor()
    // Offset: 0x1B301E8
    static void _cctor();
  }; // UnityEngine.Rendering.RenderPipelineManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline
// Il2CppName: get_currentPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::RenderPipeline* (*)()>(&UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "get_currentPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline
// Il2CppName: set_currentPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::RenderPipeline*)>(&UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipeline")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "set_currentPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::add_beginFrameRendering
// Il2CppName: add_beginFrameRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>*)>(&UnityEngine::Rendering::RenderPipelineManager::add_beginFrameRendering)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Camera"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "add_beginFrameRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::remove_beginFrameRendering
// Il2CppName: remove_beginFrameRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*>*)>(&UnityEngine::Rendering::RenderPipelineManager::remove_beginFrameRendering)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Camera"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "remove_beginFrameRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering
// Il2CppName: add_beginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "add_beginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering
// Il2CppName: remove_beginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_2<UnityEngine::Rendering::ScriptableRenderContext, UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "remove_beginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline
// Il2CppName: CleanupRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "CleanupRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::GetCameras
// Il2CppName: GetCameras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::ScriptableRenderContext)>(&UnityEngine::Rendering::RenderPipelineManager::GetCameras)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "GetCameras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal
// Il2CppName: DoRenderLoop_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::RenderPipelineAsset*, System::IntPtr)>(&UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal)> {
  const MethodInfo* get() {
    static auto* pipe = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipelineAsset")->byval_arg;
    static auto* loopPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "DoRenderLoop_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipe, loopPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline
// Il2CppName: PrepareRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::RenderPipelineAsset*)>(&UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline)> {
  const MethodInfo* get() {
    static auto* pipelineAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipelineAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "PrepareRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipelineAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RenderPipelineManager::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
