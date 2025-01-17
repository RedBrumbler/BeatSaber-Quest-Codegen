// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomFogSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogSO*, "", "BloomFogSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomFogSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private System.Boolean _bloomFogEnabled
    // Size: 0x1
    // Offset: 0x18
    bool bloomFogEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bloomFogEnabled and: transition
    char __padding0[0x3] = {};
    // private System.Single _transition
    // Size: 0x4
    // Offset: 0x1C
    float transition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _autoExposureLimit
    // Size: 0x4
    // Offset: 0x20
    float autoExposureLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteSpawnIntensity
    // Size: 0x4
    // Offset: 0x24
    float noteSpawnIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BloomFogEnvironmentParams _defaultFogParams
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BloomFogEnvironmentParams* defaultFogParams;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // private BloomFogEnvironmentParams _transitionFogParams
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BloomFogEnvironmentParams* transitionFogParams;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kBloomFogEnabledKeyword
    static constexpr const char* kBloomFogEnabledKeyword = "ENABLE_BLOOM_FOG";
    // Get static field: static private System.String kBloomFogEnabledKeyword
    static ::StringW _get_kBloomFogEnabledKeyword();
    // Set static field: static private System.String kBloomFogEnabledKeyword
    static void _set_kBloomFogEnabledKeyword(::StringW value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1109D4C
    // Get static field: static private readonly System.Int32 _customFogAttenuationID
    static int _get__customFogAttenuationID();
    // Set static field: static private readonly System.Int32 _customFogAttenuationID
    static void _set__customFogAttenuationID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1109D5C
    // Get static field: static private readonly System.Int32 _customFogOffsetID
    static int _get__customFogOffsetID();
    // Set static field: static private readonly System.Int32 _customFogOffsetID
    static void _set__customFogOffsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1109D6C
    // Get static field: static private readonly System.Int32 _customFogHeightFogStartYID
    static int _get__customFogHeightFogStartYID();
    // Set static field: static private readonly System.Int32 _customFogHeightFogStartYID
    static void _set__customFogHeightFogStartYID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1109D7C
    // Get static field: static private readonly System.Int32 _customFogHeightFogHeightID
    static int _get__customFogHeightFogHeightID();
    // Set static field: static private readonly System.Int32 _customFogHeightFogHeightID
    static void _set__customFogHeightFogHeightID(int value);
    // Get instance field reference: private System.Boolean _bloomFogEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__bloomFogEnabled();
    // Get instance field reference: private System.Single _transition
    [[deprecated("Use field access instead!")]] float& dyn__transition();
    // Get instance field reference: private System.Single _autoExposureLimit
    [[deprecated("Use field access instead!")]] float& dyn__autoExposureLimit();
    // Get instance field reference: private System.Single _noteSpawnIntensity
    [[deprecated("Use field access instead!")]] float& dyn__noteSpawnIntensity();
    // Get instance field reference: private BloomFogEnvironmentParams _defaultFogParams
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomFogEnvironmentParams*& dyn__defaultFogParams();
    // Get instance field reference: private BloomFogEnvironmentParams _transitionFogParams
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomFogEnvironmentParams*& dyn__transitionFogParams();
    // public System.Single get_transition()
    // Offset: 0x1CDFF98
    float get_transition();
    // public System.Void set_transition(System.Single value)
    // Offset: 0x1CDF768
    void set_transition(float value);
    // public BloomFogEnvironmentParams get_defaultForParams()
    // Offset: 0x1CDFFA0
    ::GlobalNamespace::BloomFogEnvironmentParams* get_defaultForParams();
    // public System.Void set_defaultForParams(BloomFogEnvironmentParams value)
    // Offset: 0x1CDFD8C
    void set_defaultForParams(::GlobalNamespace::BloomFogEnvironmentParams* value);
    // public BloomFogEnvironmentParams get_transitionFogParams()
    // Offset: 0x1CDFFA8
    ::GlobalNamespace::BloomFogEnvironmentParams* get_transitionFogParams();
    // public System.Void set_transitionFogParams(BloomFogEnvironmentParams value)
    // Offset: 0x1CDFBAC
    void set_transitionFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);
    // public System.Boolean get_bloomFogEnabled()
    // Offset: 0x1CDFFB0
    bool get_bloomFogEnabled();
    // public System.Void set_bloomFogEnabled(System.Boolean value)
    // Offset: 0x1CDF7E8
    void set_bloomFogEnabled(bool value);
    // public System.Single get_autoExposureLimit()
    // Offset: 0x1CDFFB8
    float get_autoExposureLimit();
    // public System.Single get_noteSpawnIntensity()
    // Offset: 0x1CDFFC0
    float get_noteSpawnIntensity();
    // public System.Void .ctor()
    // Offset: 0x1CE00E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomFogSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CE00F4
    static void _cctor();
    // public System.Void Setup(BloomFogEnvironmentParams defaultFogParams)
    // Offset: 0x1CDF780
    void Setup(::GlobalNamespace::BloomFogEnvironmentParams* defaultFogParams);
    // public System.Void UpdateShaderParams()
    // Offset: 0x1CDF870
    void UpdateShaderParams();
    // private System.Void SetParams(System.Single attenuation, System.Single offset, System.Single heightFogStartY, System.Single heightFogHeight, System.Single autoExposureLimit, System.Single noteSpawnIntensity)
    // Offset: 0x1CDFFF0
    void SetParams(float attenuation, float offset, float heightFogStartY, float heightFogHeight, float autoExposureLimit, float noteSpawnIntensity);
    // protected override System.Void OnEnable()
    // Offset: 0x1CDFFC8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // BloomFogSO
  #pragma pack(pop)
  static check_size<sizeof(BloomFogSO), 48 + sizeof(::GlobalNamespace::BloomFogEnvironmentParams*)> __GlobalNamespace_BloomFogSOSizeCheck;
  static_assert(sizeof(BloomFogSO) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::get_transition
// Il2CppName: get_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::get_transition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "get_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::set_transition
// Il2CppName: set_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)(float)>(&GlobalNamespace::BloomFogSO::set_transition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "set_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::get_defaultForParams
// Il2CppName: get_defaultForParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomFogEnvironmentParams* (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::get_defaultForParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "get_defaultForParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::set_defaultForParams
// Il2CppName: set_defaultForParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(&GlobalNamespace::BloomFogSO::set_defaultForParams)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "set_defaultForParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::get_transitionFogParams
// Il2CppName: get_transitionFogParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomFogEnvironmentParams* (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::get_transitionFogParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "get_transitionFogParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::set_transitionFogParams
// Il2CppName: set_transitionFogParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(&GlobalNamespace::BloomFogSO::set_transitionFogParams)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "set_transitionFogParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::get_bloomFogEnabled
// Il2CppName: get_bloomFogEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::get_bloomFogEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "get_bloomFogEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::set_bloomFogEnabled
// Il2CppName: set_bloomFogEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)(bool)>(&GlobalNamespace::BloomFogSO::set_bloomFogEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "set_bloomFogEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::get_autoExposureLimit
// Il2CppName: get_autoExposureLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::get_autoExposureLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "get_autoExposureLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::get_noteSpawnIntensity
// Il2CppName: get_noteSpawnIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::get_noteSpawnIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "get_noteSpawnIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomFogSO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(&GlobalNamespace::BloomFogSO::Setup)> {
  static const MethodInfo* get() {
    static auto* defaultFogParams = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultFogParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::UpdateShaderParams
// Il2CppName: UpdateShaderParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::UpdateShaderParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "UpdateShaderParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::SetParams
// Il2CppName: SetParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)(float, float, float, float, float, float)>(&GlobalNamespace::BloomFogSO::SetParams)> {
  static const MethodInfo* get() {
    static auto* attenuation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightFogStartY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightFogHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* autoExposureLimit = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteSpawnIntensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "SetParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attenuation, offset, heightFogStartY, heightFogHeight, autoExposureLimit, noteSpawnIntensity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogSO::*)()>(&GlobalNamespace::BloomFogSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
