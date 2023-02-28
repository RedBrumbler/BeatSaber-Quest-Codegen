// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: EyeFov because it is already included!
  // Skipping declaration: EyeRenderDesc because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRDisplay
  class OVRDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay*, "", "OVRDisplay");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRDisplay : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRDisplay::EyeFov
    struct EyeFov;
    // Nested type: ::GlobalNamespace::OVRDisplay::EyeRenderDesc
    struct EyeRenderDesc;
    // Nested type: ::GlobalNamespace::OVRDisplay::LatencyData
    struct LatencyData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRDisplay/EyeFov
    // [TokenAttribute] Offset: FFFFFFFF
    struct EyeFov/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single UpFov
      // Size: 0x4
      // Offset: 0x0
      float UpFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single DownFov
      // Size: 0x4
      // Offset: 0x4
      float DownFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single LeftFov
      // Size: 0x4
      // Offset: 0x8
      float LeftFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single RightFov
      // Size: 0x4
      // Offset: 0xC
      float RightFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: EyeFov
      constexpr EyeFov(float UpFov_ = {}, float DownFov_ = {}, float LeftFov_ = {}, float RightFov_ = {}) noexcept : UpFov{UpFov_}, DownFov{DownFov_}, LeftFov{LeftFov_}, RightFov{RightFov_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single UpFov
      [[deprecated("Use field access instead!")]] float& dyn_UpFov();
      // Get instance field reference: public System.Single DownFov
      [[deprecated("Use field access instead!")]] float& dyn_DownFov();
      // Get instance field reference: public System.Single LeftFov
      [[deprecated("Use field access instead!")]] float& dyn_LeftFov();
      // Get instance field reference: public System.Single RightFov
      [[deprecated("Use field access instead!")]] float& dyn_RightFov();
    }; // OVRDisplay/EyeFov
    #pragma pack(pop)
    static check_size<sizeof(OVRDisplay::EyeFov), 12 + sizeof(float)> __GlobalNamespace_OVRDisplay_EyeFovSizeCheck;
    static_assert(sizeof(OVRDisplay::EyeFov) == 0x10);
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRDisplay/EyeRenderDesc
    // [TokenAttribute] Offset: FFFFFFFF
    struct EyeRenderDesc/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Vector2 resolution
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Vector2 resolution;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      // public UnityEngine.Vector2 fov
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Vector2 fov;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      // public OVRDisplay/EyeFov fullFov
      // Size: 0x10
      // Offset: 0x10
      ::GlobalNamespace::OVRDisplay::EyeFov fullFov;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OVRDisplay::EyeFov) == 0x10);
      public:
      // Creating value type constructor for type: EyeRenderDesc
      constexpr EyeRenderDesc(::UnityEngine::Vector2 resolution_ = {}, ::UnityEngine::Vector2 fov_ = {}, ::GlobalNamespace::OVRDisplay::EyeFov fullFov_ = {}) noexcept : resolution{resolution_}, fov{fov_}, fullFov{fullFov_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Vector2 resolution
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_resolution();
      // Get instance field reference: public UnityEngine.Vector2 fov
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_fov();
      // Get instance field reference: public OVRDisplay/EyeFov fullFov
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRDisplay::EyeFov& dyn_fullFov();
    }; // OVRDisplay/EyeRenderDesc
    #pragma pack(pop)
    static check_size<sizeof(OVRDisplay::EyeRenderDesc), 16 + sizeof(::GlobalNamespace::OVRDisplay::EyeFov)> __GlobalNamespace_OVRDisplay_EyeRenderDescSizeCheck;
    static_assert(sizeof(OVRDisplay::EyeRenderDesc) == 0x20);
    public:
    // private System.Boolean needsConfigureTexture
    // Size: 0x1
    // Offset: 0x10
    bool needsConfigureTexture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: needsConfigureTexture and: eyeDescs
    char __padding0[0x7] = {};
    // private OVRDisplay/EyeRenderDesc[] eyeDescs
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::OVRDisplay::EyeRenderDesc> eyeDescs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRDisplay::EyeRenderDesc>) == 0x8);
    // private System.Boolean recenterRequested
    // Size: 0x1
    // Offset: 0x20
    bool recenterRequested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recenterRequested and: recenterRequestedFrameCount
    char __padding2[0x3] = {};
    // private System.Int32 recenterRequestedFrameCount
    // Size: 0x4
    // Offset: 0x24
    int recenterRequestedFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 localTrackingSpaceRecenterCount
    // Size: 0x4
    // Offset: 0x28
    int localTrackingSpaceRecenterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: localTrackingSpaceRecenterCount and: RecenteredPose
    char __padding4[0x4] = {};
    // private System.Action RecenteredPose
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* RecenteredPose;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean needsConfigureTexture
    [[deprecated("Use field access instead!")]] bool& dyn_needsConfigureTexture();
    // Get instance field reference: private OVRDisplay/EyeRenderDesc[] eyeDescs
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRDisplay::EyeRenderDesc>& dyn_eyeDescs();
    // Get instance field reference: private System.Boolean recenterRequested
    [[deprecated("Use field access instead!")]] bool& dyn_recenterRequested();
    // Get instance field reference: private System.Int32 recenterRequestedFrameCount
    [[deprecated("Use field access instead!")]] int& dyn_recenterRequestedFrameCount();
    // Get instance field reference: private System.Int32 localTrackingSpaceRecenterCount
    [[deprecated("Use field access instead!")]] int& dyn_localTrackingSpaceRecenterCount();
    // Get instance field reference: private System.Action RecenteredPose
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_RecenteredPose();
    // public UnityEngine.Vector3 get_acceleration()
    // Offset: 0x16C2ABC
    ::UnityEngine::Vector3 get_acceleration();
    // public UnityEngine.Vector3 get_angularAcceleration()
    // Offset: 0x16C2BE8
    ::UnityEngine::Vector3 get_angularAcceleration();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x16C2D14
    ::UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x16C2E40
    ::UnityEngine::Vector3 get_angularVelocity();
    // public OVRDisplay/LatencyData get_latency()
    // Offset: 0x16C2F6C
    ::GlobalNamespace::OVRDisplay::LatencyData get_latency();
    // public System.Single get_appFramerate()
    // Offset: 0x16C3138
    float get_appFramerate();
    // public System.Int32 get_recommendedMSAALevel()
    // Offset: 0x16C31D4
    int get_recommendedMSAALevel();
    // public System.Single[] get_displayFrequenciesAvailable()
    // Offset: 0x16C3240
    ::ArrayW<float> get_displayFrequenciesAvailable();
    // public System.Single get_displayFrequency()
    // Offset: 0x16C32A0
    float get_displayFrequency();
    // public System.Void set_displayFrequency(System.Single value)
    // Offset: 0x16C3300
    void set_displayFrequency(float value);
    // public System.Void add_RecenteredPose(System.Action value)
    // Offset: 0x16C28F8
    void add_RecenteredPose(::System::Action* value);
    // public System.Void remove_RecenteredPose(System.Action value)
    // Offset: 0x16C299C
    void remove_RecenteredPose(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x16C26B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRDisplay*, creationType>()));
    }
    // public System.Void Update()
    // Offset: 0x16C2764
    void Update();
    // public System.Void RecenterPose()
    // Offset: 0x16C2A40
    void RecenterPose();
    // public OVRDisplay/EyeRenderDesc GetEyeRenderDesc(UnityEngine.XR.XRNode eye)
    // Offset: 0x16C265C
    ::GlobalNamespace::OVRDisplay::EyeRenderDesc GetEyeRenderDesc(::UnityEngine::XR::XRNode eye);
    // private System.Void UpdateTextures()
    // Offset: 0x16C2738
    void UpdateTextures();
    // private System.Void ConfigureEyeDesc(UnityEngine.XR.XRNode eye)
    // Offset: 0x16C3370
    void ConfigureEyeDesc(::UnityEngine::XR::XRNode eye);
  }; // OVRDisplay
  #pragma pack(pop)
  static check_size<sizeof(OVRDisplay), 48 + sizeof(::System::Action*)> __GlobalNamespace_OVRDisplaySizeCheck;
  static_assert(sizeof(OVRDisplay) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay::EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay::EyeFov, "", "OVRDisplay/EyeFov");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_acceleration
// Il2CppName: get_acceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_acceleration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_acceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_angularAcceleration
// Il2CppName: get_angularAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_angularAcceleration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_angularAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_angularVelocity
// Il2CppName: get_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_angularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_latency
// Il2CppName: get_latency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRDisplay::LatencyData (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_latency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_latency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_appFramerate
// Il2CppName: get_appFramerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_appFramerate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_appFramerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_recommendedMSAALevel
// Il2CppName: get_recommendedMSAALevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_recommendedMSAALevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_recommendedMSAALevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable
// Il2CppName: get_displayFrequenciesAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_displayFrequenciesAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_displayFrequency
// Il2CppName: get_displayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_displayFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_displayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::set_displayFrequency
// Il2CppName: set_displayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(float)>(&GlobalNamespace::OVRDisplay::set_displayFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "set_displayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::add_RecenteredPose
// Il2CppName: add_RecenteredPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(::System::Action*)>(&GlobalNamespace::OVRDisplay::add_RecenteredPose)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "add_RecenteredPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::remove_RecenteredPose
// Il2CppName: remove_RecenteredPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(::System::Action*)>(&GlobalNamespace::OVRDisplay::remove_RecenteredPose)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "remove_RecenteredPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::RecenterPose
// Il2CppName: RecenterPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::RecenterPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "RecenterPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::GetEyeRenderDesc
// Il2CppName: GetEyeRenderDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRDisplay::EyeRenderDesc (GlobalNamespace::OVRDisplay::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRDisplay::GetEyeRenderDesc)> {
  static const MethodInfo* get() {
    static auto* eye = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "GetEyeRenderDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eye});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::UpdateTextures
// Il2CppName: UpdateTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::UpdateTextures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "UpdateTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::ConfigureEyeDesc
// Il2CppName: ConfigureEyeDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRDisplay::ConfigureEyeDesc)> {
  static const MethodInfo* get() {
    static auto* eye = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "ConfigureEyeDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eye});
  }
};
