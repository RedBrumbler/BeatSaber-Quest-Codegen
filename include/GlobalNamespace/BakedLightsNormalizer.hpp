// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: LightConstants/BakeId
#include "GlobalNamespace/LightConstants_BakeId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightmapLightWithIds
  class LightmapLightWithIds;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BakedLightsNormalizer
  class BakedLightsNormalizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BakedLightsNormalizer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightsNormalizer*, "", "BakedLightsNormalizer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: BakedLightsNormalizer
  // [TokenAttribute] Offset: FFFFFFFF
  class BakedLightsNormalizer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _maxTotalIntensity
    // Size: 0x4
    // Offset: 0x18
    float maxTotalIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxTotalIntensity and: lightmapLightDict
    char __padding0[0x4] = {};
    // private readonly System.Collections.Generic.Dictionary`2<LightConstants/BakeId,LightmapLightWithIds> _lightmapLightDict
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants::BakeId, ::GlobalNamespace::LightmapLightWithIds*>* lightmapLightDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants::BakeId, ::GlobalNamespace::LightmapLightWithIds*>*) == 0x8);
    // private LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    // private System.Boolean _lightmapDictInitialized
    // Size: 0x1
    // Offset: 0x30
    bool lightmapDictInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightmapDictInitialized and: prevMaxTotalIntensity
    char __padding3[0x3] = {};
    // private System.Single _prevMaxTotalIntensity
    // Size: 0x4
    // Offset: 0x34
    float prevMaxTotalIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _grayscaleTotal
    // Size: 0x4
    // Offset: 0x38
    float grayscaleTotal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lastCalculatedOnFrame
    // Size: 0x4
    // Offset: 0x3C
    int lastCalculatedOnFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _grayscaleCalculatedOnce
    // Size: 0x1
    // Offset: 0x40
    bool grayscaleCalculatedOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _newUpdates
    // Size: 0x1
    // Offset: 0x41
    bool newUpdates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxFramesWithoutUpdate
    static constexpr const int kMaxFramesWithoutUpdate = 5;
    // Get static field: static private System.Int32 kMaxFramesWithoutUpdate
    static int _get_kMaxFramesWithoutUpdate();
    // Set static field: static private System.Int32 kMaxFramesWithoutUpdate
    static void _set_kMaxFramesWithoutUpdate(int value);
    // Get instance field reference: private System.Single _maxTotalIntensity
    [[deprecated("Use field access instead!")]] float& dyn__maxTotalIntensity();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<LightConstants/BakeId,LightmapLightWithIds> _lightmapLightDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants::BakeId, ::GlobalNamespace::LightmapLightWithIds*>*& dyn__lightmapLightDict();
    // Get instance field reference: private LightWithIdManager _lightManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private System.Boolean _lightmapDictInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__lightmapDictInitialized();
    // Get instance field reference: private System.Single _prevMaxTotalIntensity
    [[deprecated("Use field access instead!")]] float& dyn__prevMaxTotalIntensity();
    // Get instance field reference: private System.Single _grayscaleTotal
    [[deprecated("Use field access instead!")]] float& dyn__grayscaleTotal();
    // Get instance field reference: private System.Int32 _lastCalculatedOnFrame
    [[deprecated("Use field access instead!")]] int& dyn__lastCalculatedOnFrame();
    // Get instance field reference: private System.Boolean _grayscaleCalculatedOnce
    [[deprecated("Use field access instead!")]] bool& dyn__grayscaleCalculatedOnce();
    // Get instance field reference: private System.Boolean _newUpdates
    [[deprecated("Use field access instead!")]] bool& dyn__newUpdates();
    // public System.Collections.Generic.Dictionary`2<LightConstants/BakeId,LightmapLightWithIds> get_lightmapLightDict()
    // Offset: 0x1CCDB24
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants::BakeId, ::GlobalNamespace::LightmapLightWithIds*>* get_lightmapLightDict();
    // public System.Single get_maxTotalIntensity()
    // Offset: 0x1CCDB2C
    float get_maxTotalIntensity();
    // public System.Void .ctor()
    // Offset: 0x1CCDEC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakedLightsNormalizer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BakedLightsNormalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakedLightsNormalizer*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x1CCDB34
    void LateUpdate();
    // private System.Void GetLightmapLights()
    // Offset: 0x1CCDD1C
    void GetLightmapLights();
    // private System.Void UpdateGrayscaleTotal()
    // Offset: 0x1CCDB7C
    void UpdateGrayscaleTotal();
    // public System.Single GetNormalizationMultiplier()
    // Offset: 0x1CCDE1C
    float GetNormalizationMultiplier();
  }; // BakedLightsNormalizer
  #pragma pack(pop)
  static check_size<sizeof(BakedLightsNormalizer), 65 + sizeof(bool)> __GlobalNamespace_BakedLightsNormalizerSizeCheck;
  static_assert(sizeof(BakedLightsNormalizer) == 0x42);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::get_lightmapLightDict
// Il2CppName: get_lightmapLightDict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LightConstants::BakeId, ::GlobalNamespace::LightmapLightWithIds*>* (GlobalNamespace::BakedLightsNormalizer::*)()>(&GlobalNamespace::BakedLightsNormalizer::get_lightmapLightDict)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightsNormalizer*), "get_lightmapLightDict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::get_maxTotalIntensity
// Il2CppName: get_maxTotalIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BakedLightsNormalizer::*)()>(&GlobalNamespace::BakedLightsNormalizer::get_maxTotalIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightsNormalizer*), "get_maxTotalIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedLightsNormalizer::*)()>(&GlobalNamespace::BakedLightsNormalizer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightsNormalizer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::GetLightmapLights
// Il2CppName: GetLightmapLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedLightsNormalizer::*)()>(&GlobalNamespace::BakedLightsNormalizer::GetLightmapLights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightsNormalizer*), "GetLightmapLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::UpdateGrayscaleTotal
// Il2CppName: UpdateGrayscaleTotal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedLightsNormalizer::*)()>(&GlobalNamespace::BakedLightsNormalizer::UpdateGrayscaleTotal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightsNormalizer*), "UpdateGrayscaleTotal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightsNormalizer::GetNormalizationMultiplier
// Il2CppName: GetNormalizationMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BakedLightsNormalizer::*)()>(&GlobalNamespace::BakedLightsNormalizer::GetNormalizationMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightsNormalizer*), "GetNormalizationMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
