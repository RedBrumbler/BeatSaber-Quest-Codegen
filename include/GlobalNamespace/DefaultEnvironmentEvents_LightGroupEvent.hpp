// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DefaultEnvironmentEvents
#include "GlobalNamespace/DefaultEnvironmentEvents.hpp"
// Including type: EnvironmentColorType
#include "GlobalNamespace/EnvironmentColorType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*, "", "DefaultEnvironmentEvents/LightGroupEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: DefaultEnvironmentEvents/LightGroupEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultEnvironmentEvents::LightGroupEvent : public ::Il2CppObject {
    public:
    public:
    // private LightGroupSO _lightGroup
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::LightGroupSO* lightGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightGroupSO*) == 0x8);
    // [HeaderAttribute] Offset: 0x11355DC
    // private EnvironmentColorType _environmentColorType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::EnvironmentColorType environmentColorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentColorType) == 0x4);
    // private System.Single _brightness
    // Size: 0x4
    // Offset: 0x1C
    float brightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private DefaultEnvironmentEvents/LightGroupDistribution _brightnessDistribution
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* brightnessDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupFiltering _brightnessFiltering
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* brightnessFiltering;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*) == 0x8);
    // [HeaderAttribute] Offset: 0x1135658
    // private System.Single _rotationX
    // Size: 0x4
    // Offset: 0x30
    float rotationX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationY
    // Size: 0x4
    // Offset: 0x34
    float rotationY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationZ
    // Size: 0x4
    // Offset: 0x38
    float rotationZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rotationZ and: rotationXDistribution
    char __padding7[0x4] = {};
    // private DefaultEnvironmentEvents/LightGroupDistribution _rotationXDistribution
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* rotationXDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupDistribution _rotationYDistribution
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* rotationYDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupDistribution _rotationZDistribution
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* rotationZDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupFiltering _rotationFiltering
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* rotationFiltering;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*) == 0x8);
    // [HeaderAttribute] Offset: 0x1135704
    // private System.Single _translationX
    // Size: 0x4
    // Offset: 0x60
    float translationX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _translationY
    // Size: 0x4
    // Offset: 0x64
    float translationY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _translationZ
    // Size: 0x4
    // Offset: 0x68
    float translationZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: translationZ and: translationXDistribution
    char __padding14[0x4] = {};
    // private DefaultEnvironmentEvents/LightGroupDistribution _translationXDistribution
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* translationXDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupDistribution _translationYDistribution
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* translationYDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupDistribution _translationZDistribution
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* translationZDistribution;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*) == 0x8);
    // private DefaultEnvironmentEvents/LightGroupFiltering _translationFiltering
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* translationFiltering;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*) == 0x8);
    public:
    // Get instance field reference: private LightGroupSO _lightGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightGroupSO*& dyn__lightGroup();
    // Get instance field reference: private EnvironmentColorType _environmentColorType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentColorType& dyn__environmentColorType();
    // Get instance field reference: private System.Single _brightness
    [[deprecated("Use field access instead!")]] float& dyn__brightness();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _brightnessDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__brightnessDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupFiltering _brightnessFiltering
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*& dyn__brightnessFiltering();
    // Get instance field reference: private System.Single _rotationX
    [[deprecated("Use field access instead!")]] float& dyn__rotationX();
    // Get instance field reference: private System.Single _rotationY
    [[deprecated("Use field access instead!")]] float& dyn__rotationY();
    // Get instance field reference: private System.Single _rotationZ
    [[deprecated("Use field access instead!")]] float& dyn__rotationZ();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _rotationXDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__rotationXDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _rotationYDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__rotationYDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _rotationZDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__rotationZDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupFiltering _rotationFiltering
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*& dyn__rotationFiltering();
    // Get instance field reference: private System.Single _translationX
    [[deprecated("Use field access instead!")]] float& dyn__translationX();
    // Get instance field reference: private System.Single _translationY
    [[deprecated("Use field access instead!")]] float& dyn__translationY();
    // Get instance field reference: private System.Single _translationZ
    [[deprecated("Use field access instead!")]] float& dyn__translationZ();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _translationXDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__translationXDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _translationYDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__translationYDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupDistribution _translationZDistribution
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution*& dyn__translationZDistribution();
    // Get instance field reference: private DefaultEnvironmentEvents/LightGroupFiltering _translationFiltering
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*& dyn__translationFiltering();
    // public LightGroupSO get_lightGroup()
    // Offset: 0x144E23C
    ::GlobalNamespace::LightGroupSO* get_lightGroup();
    // public EnvironmentColorType get_environmentColorType()
    // Offset: 0x144E244
    ::GlobalNamespace::EnvironmentColorType get_environmentColorType();
    // public System.Single get_brightness()
    // Offset: 0x144E24C
    float get_brightness();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_brightnessDistribution()
    // Offset: 0x144E254
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_brightnessDistribution();
    // public DefaultEnvironmentEvents/LightGroupFiltering get_brightnessFiltering()
    // Offset: 0x144E25C
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* get_brightnessFiltering();
    // public System.Single get_rotationX()
    // Offset: 0x144E264
    float get_rotationX();
    // public System.Single get_rotationY()
    // Offset: 0x144E26C
    float get_rotationY();
    // public System.Single get_rotationZ()
    // Offset: 0x144E274
    float get_rotationZ();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_rotationXDistribution()
    // Offset: 0x144E27C
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_rotationXDistribution();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_rotationYDistribution()
    // Offset: 0x144E284
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_rotationYDistribution();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_rotationZDistribution()
    // Offset: 0x144E28C
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_rotationZDistribution();
    // public DefaultEnvironmentEvents/LightGroupFiltering get_rotationFiltering()
    // Offset: 0x144E294
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* get_rotationFiltering();
    // public System.Single get_translationX()
    // Offset: 0x144E29C
    float get_translationX();
    // public System.Single get_translationY()
    // Offset: 0x144E2A4
    float get_translationY();
    // public System.Single get_translationZ()
    // Offset: 0x144E2AC
    float get_translationZ();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_translationXDistribution()
    // Offset: 0x144E2B4
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_translationXDistribution();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_translationYDistribution()
    // Offset: 0x144E2BC
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_translationYDistribution();
    // public DefaultEnvironmentEvents/LightGroupDistribution get_translationZDistribution()
    // Offset: 0x144E2C4
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* get_translationZDistribution();
    // public DefaultEnvironmentEvents/LightGroupFiltering get_translationFiltering()
    // Offset: 0x144E2CC
    ::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* get_translationFiltering();
    // public System.Void .ctor()
    // Offset: 0x144E2D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultEnvironmentEvents::LightGroupEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultEnvironmentEvents::LightGroupEvent*, creationType>()));
    }
  }; // DefaultEnvironmentEvents/LightGroupEvent
  #pragma pack(pop)
  static check_size<sizeof(DefaultEnvironmentEvents::LightGroupEvent), 136 + sizeof(::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering*)> __GlobalNamespace_DefaultEnvironmentEvents_LightGroupEventSizeCheck;
  static_assert(sizeof(DefaultEnvironmentEvents::LightGroupEvent) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_lightGroup
// Il2CppName: get_lightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_lightGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_lightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_environmentColorType
// Il2CppName: get_environmentColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_environmentColorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_environmentColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_brightness
// Il2CppName: get_brightness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_brightness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_brightness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_brightnessDistribution
// Il2CppName: get_brightnessDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_brightnessDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_brightnessDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_brightnessFiltering
// Il2CppName: get_brightnessFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_brightnessFiltering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_brightnessFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationX
// Il2CppName: get_rotationX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationY
// Il2CppName: get_rotationY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationZ
// Il2CppName: get_rotationZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationXDistribution
// Il2CppName: get_rotationXDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationXDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationXDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationYDistribution
// Il2CppName: get_rotationYDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationYDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationYDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationZDistribution
// Il2CppName: get_rotationZDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationZDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationZDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationFiltering
// Il2CppName: get_rotationFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_rotationFiltering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_rotationFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationX
// Il2CppName: get_translationX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationY
// Il2CppName: get_translationY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationZ
// Il2CppName: get_translationZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationXDistribution
// Il2CppName: get_translationXDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationXDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationXDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationYDistribution
// Il2CppName: get_translationYDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationYDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationYDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationZDistribution
// Il2CppName: get_translationZDistribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupDistribution* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationZDistribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationZDistribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationFiltering
// Il2CppName: get_translationFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents::LightGroupFiltering* (GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::get_translationFiltering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent*), "get_translationFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::LightGroupEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
