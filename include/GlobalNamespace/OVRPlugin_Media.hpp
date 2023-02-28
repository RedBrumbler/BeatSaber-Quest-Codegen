// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::Media);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Media*, "", "OVRPlugin/Media");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Media
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::Media : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRPlugin::Media::MrcActivationMode
    struct MrcActivationMode;
    // Nested type: ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode
    struct PlatformCameraMode;
    // Nested type: ::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType
    struct InputVideoBufferType;
    // Get static field: static private UnityEngine.Texture2D cachedTexture
    static ::UnityEngine::Texture2D* _get_cachedTexture();
    // Set static field: static private UnityEngine.Texture2D cachedTexture
    static void _set_cachedTexture(::UnityEngine::Texture2D* value);
    // public System.Void .ctor()
    // Offset: 0x1B967A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlugin::Media* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRPlugin::Media::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlugin::Media*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1B967AC
    static void _cctor();
    // static public System.Boolean Initialize()
    // Offset: 0x1B9363C
    static bool Initialize();
    // static public System.Boolean Shutdown()
    // Offset: 0x1B937B0
    static bool Shutdown();
    // static public System.Boolean GetInitialized()
    // Offset: 0x1B93924
    static bool GetInitialized();
    // static public System.Boolean Update()
    // Offset: 0x1B93AB8
    static bool Update();
    // static public OVRPlugin/Media/MrcActivationMode GetMrcActivationMode()
    // Offset: 0x1B93C2C
    static ::GlobalNamespace::OVRPlugin::Media::MrcActivationMode GetMrcActivationMode();
    // static public System.Boolean SetMrcActivationMode(OVRPlugin/Media/MrcActivationMode mode)
    // Offset: 0x1B93DB8
    static bool SetMrcActivationMode(::GlobalNamespace::OVRPlugin::Media::MrcActivationMode mode);
    // static public System.Boolean SetPlatformInitialized()
    // Offset: 0x1B93F40
    static bool SetPlatformInitialized();
    // static public OVRPlugin/Media/PlatformCameraMode GetPlatformCameraMode()
    // Offset: 0x1B940B4
    static ::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode GetPlatformCameraMode();
    // static public System.Boolean SetPlatformCameraMode(OVRPlugin/Media/PlatformCameraMode mode)
    // Offset: 0x1B94240
    static bool SetPlatformCameraMode(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode mode);
    // static public System.Boolean IsMrcEnabled()
    // Offset: 0x1B943C8
    static bool IsMrcEnabled();
    // static public System.Boolean IsMrcActivated()
    // Offset: 0x1B94558
    static bool IsMrcActivated();
    // static public System.Boolean UseMrcDebugCamera()
    // Offset: 0x1B946E8
    static bool UseMrcDebugCamera();
    // static public System.Boolean SetMrcInputVideoBufferType(OVRPlugin/Media/InputVideoBufferType videoBufferType)
    // Offset: 0x1B94878
    static bool SetMrcInputVideoBufferType(::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType videoBufferType);
    // static public OVRPlugin/Media/InputVideoBufferType GetMrcInputVideoBufferType()
    // Offset: 0x1B94A00
    static ::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType GetMrcInputVideoBufferType();
    // static public System.Boolean SetMrcFrameSize(System.Int32 frameWidth, System.Int32 frameHeight)
    // Offset: 0x1B94B88
    static bool SetMrcFrameSize(int frameWidth, int frameHeight);
    // static public System.Void GetMrcFrameSize(out System.Int32 frameWidth, out System.Int32 frameHeight)
    // Offset: 0x1B94D30
    static void GetMrcFrameSize(ByRef<int> frameWidth, ByRef<int> frameHeight);
    // static public System.Boolean SetMrcAudioSampleRate(System.Int32 sampleRate)
    // Offset: 0x1B94EE4
    static bool SetMrcAudioSampleRate(int sampleRate);
    // static public System.Int32 GetMrcAudioSampleRate()
    // Offset: 0x1B9506C
    static int GetMrcAudioSampleRate();
    // static public System.Boolean SetMrcFrameImageFlipped(System.Boolean imageFlipped)
    // Offset: 0x1B951F0
    static bool SetMrcFrameImageFlipped(bool imageFlipped);
    // static public System.Boolean GetMrcFrameImageFlipped()
    // Offset: 0x1B9537C
    static bool GetMrcFrameImageFlipped();
    // static public System.Boolean EncodeMrcFrame(System.IntPtr textureHandle, System.IntPtr fgTextureHandle, System.Single[] audioData, System.Int32 audioFrames, System.Int32 audioChannels, System.Double timestamp, System.Double poseTime, ref System.Int32 outSyncId)
    // Offset: 0x1B95508
    static bool EncodeMrcFrame(::System::IntPtr textureHandle, ::System::IntPtr fgTextureHandle, ::ArrayW<float> audioData, int audioFrames, int audioChannels, double timestamp, double poseTime, ByRef<int> outSyncId);
    // static public System.Boolean EncodeMrcFrame(UnityEngine.RenderTexture frame, System.Single[] audioData, System.Int32 audioFrames, System.Int32 audioChannels, System.Double timestamp, System.Double poseTime, ref System.Int32 outSyncId)
    // Offset: 0x1B95C5C
    static bool EncodeMrcFrame(::UnityEngine::RenderTexture* frame, ::ArrayW<float> audioData, int audioFrames, int audioChannels, double timestamp, double poseTime, ByRef<int> outSyncId);
    // static public System.Boolean SyncMrcFrame(System.Int32 syncId)
    // Offset: 0x1B96238
    static bool SyncMrcFrame(int syncId);
    // static public System.Boolean SetAvailableQueueIndexVulkan(System.UInt32 queueIndexVk)
    // Offset: 0x1B963C0
    static bool SetAvailableQueueIndexVulkan(uint queueIndexVk);
    // static public System.Boolean SetMrcHeadsetControllerPose(OVRPlugin/Posef headsetPose, OVRPlugin/Posef leftControllerPose, OVRPlugin/Posef rightControllerPose)
    // Offset: 0x1B96548
    static bool SetMrcHeadsetControllerPose(::GlobalNamespace::OVRPlugin::Posef headsetPose, ::GlobalNamespace::OVRPlugin::Posef leftControllerPose, ::GlobalNamespace::OVRPlugin::Posef rightControllerPose);
  }; // OVRPlugin/Media
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::Media::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::Shutdown
// Il2CppName: Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::Shutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetInitialized
// Il2CppName: GetInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::GetInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetMrcActivationMode
// Il2CppName: GetMrcActivationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Media::MrcActivationMode (*)()>(&GlobalNamespace::OVRPlugin::Media::GetMrcActivationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetMrcActivationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetMrcActivationMode
// Il2CppName: SetMrcActivationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin::Media::MrcActivationMode)>(&GlobalNamespace::OVRPlugin::Media::SetMrcActivationMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/MrcActivationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetMrcActivationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetPlatformInitialized
// Il2CppName: SetPlatformInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::SetPlatformInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetPlatformInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetPlatformCameraMode
// Il2CppName: GetPlatformCameraMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode (*)()>(&GlobalNamespace::OVRPlugin::Media::GetPlatformCameraMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetPlatformCameraMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetPlatformCameraMode
// Il2CppName: SetPlatformCameraMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin::Media::PlatformCameraMode)>(&GlobalNamespace::OVRPlugin::Media::SetPlatformCameraMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/PlatformCameraMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetPlatformCameraMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::IsMrcEnabled
// Il2CppName: IsMrcEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::IsMrcEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "IsMrcEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::IsMrcActivated
// Il2CppName: IsMrcActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::IsMrcActivated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "IsMrcActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::UseMrcDebugCamera
// Il2CppName: UseMrcDebugCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::UseMrcDebugCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "UseMrcDebugCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetMrcInputVideoBufferType
// Il2CppName: SetMrcInputVideoBufferType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType)>(&GlobalNamespace::OVRPlugin::Media::SetMrcInputVideoBufferType)> {
  static const MethodInfo* get() {
    static auto* videoBufferType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/InputVideoBufferType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetMrcInputVideoBufferType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{videoBufferType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetMrcInputVideoBufferType
// Il2CppName: GetMrcInputVideoBufferType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType (*)()>(&GlobalNamespace::OVRPlugin::Media::GetMrcInputVideoBufferType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetMrcInputVideoBufferType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetMrcFrameSize
// Il2CppName: SetMrcFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int)>(&GlobalNamespace::OVRPlugin::Media::SetMrcFrameSize)> {
  static const MethodInfo* get() {
    static auto* frameWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetMrcFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameWidth, frameHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetMrcFrameSize
// Il2CppName: GetMrcFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::OVRPlugin::Media::GetMrcFrameSize)> {
  static const MethodInfo* get() {
    static auto* frameWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* frameHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetMrcFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameWidth, frameHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetMrcAudioSampleRate
// Il2CppName: SetMrcAudioSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::OVRPlugin::Media::SetMrcAudioSampleRate)> {
  static const MethodInfo* get() {
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetMrcAudioSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleRate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetMrcAudioSampleRate
// Il2CppName: GetMrcAudioSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::OVRPlugin::Media::GetMrcAudioSampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetMrcAudioSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetMrcFrameImageFlipped
// Il2CppName: SetMrcFrameImageFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&GlobalNamespace::OVRPlugin::Media::SetMrcFrameImageFlipped)> {
  static const MethodInfo* get() {
    static auto* imageFlipped = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetMrcFrameImageFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imageFlipped});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::GetMrcFrameImageFlipped
// Il2CppName: GetMrcFrameImageFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlugin::Media::GetMrcFrameImageFlipped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "GetMrcFrameImageFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::EncodeMrcFrame
// Il2CppName: EncodeMrcFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<float>, int, int, double, double, ByRef<int>)>(&GlobalNamespace::OVRPlugin::Media::EncodeMrcFrame)> {
  static const MethodInfo* get() {
    static auto* textureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fgTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* audioFrames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* audioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* poseTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* outSyncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "EncodeMrcFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureHandle, fgTextureHandle, audioData, audioFrames, audioChannels, timestamp, poseTime, outSyncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::EncodeMrcFrame
// Il2CppName: EncodeMrcFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RenderTexture*, ::ArrayW<float>, int, int, double, double, ByRef<int>)>(&GlobalNamespace::OVRPlugin::Media::EncodeMrcFrame)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* audioData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* audioFrames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* audioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* poseTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* outSyncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "EncodeMrcFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, audioData, audioFrames, audioChannels, timestamp, poseTime, outSyncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SyncMrcFrame
// Il2CppName: SyncMrcFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::OVRPlugin::Media::SyncMrcFrame)> {
  static const MethodInfo* get() {
    static auto* syncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SyncMrcFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetAvailableQueueIndexVulkan
// Il2CppName: SetAvailableQueueIndexVulkan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint)>(&GlobalNamespace::OVRPlugin::Media::SetAvailableQueueIndexVulkan)> {
  static const MethodInfo* get() {
    static auto* queueIndexVk = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetAvailableQueueIndexVulkan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{queueIndexVk});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Media::SetMrcHeadsetControllerPose
// Il2CppName: SetMrcHeadsetControllerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin::Posef, ::GlobalNamespace::OVRPlugin::Posef, ::GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRPlugin::Media::SetMrcHeadsetControllerPose)> {
  static const MethodInfo* get() {
    static auto* headsetPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    static auto* leftControllerPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    static auto* rightControllerPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Media*), "SetMrcHeadsetControllerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headsetPose, leftControllerPose, rightControllerPose});
  }
};
