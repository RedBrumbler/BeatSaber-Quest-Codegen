// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LayerMasks
  class LayerMasks : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LayerMasks
    LayerMasks() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF543C
    // Get static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static UnityEngine::LayerMask _get_saberLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static void _set_saberLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF544C
    // Get static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static UnityEngine::LayerMask _get_noteLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static void _set_noteLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF545C
    // Get static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static UnityEngine::LayerMask _get_noteDebrisLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static void _set_noteDebrisLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF546C
    // Get static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static UnityEngine::LayerMask _get_cutEffectParticlesLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static void _set_cutEffectParticlesLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF547C
    // Get static field: static public readonly System.Int32 noteDebrisLayer
    static int _get_noteDebrisLayer();
    // Set static field: static public readonly System.Int32 noteDebrisLayer
    static void _set_noteDebrisLayer(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF548C
    // Get static field: static public readonly System.Int32 cutEffectParticlesLayer
    static int _get_cutEffectParticlesLayer();
    // Set static field: static public readonly System.Int32 cutEffectParticlesLayer
    static void _set_cutEffectParticlesLayer(int value);
    // static private UnityEngine.LayerMask GetLayerMask(System.String layerName)
    // Offset: 0x23F5098
    static UnityEngine::LayerMask GetLayerMask(::Il2CppString* layerName);
    // static private UnityEngine.LayerMask GetLayerMask(System.Int32 layerNum)
    // Offset: 0x23F50D4
    static UnityEngine::LayerMask GetLayerMask(int layerNum);
    // static private System.Int32 GetLayer(System.String layerName)
    // Offset: 0x23F5108
    static int GetLayer(::Il2CppString* layerName);
    // static private System.Void .cctor()
    // Offset: 0x23F5118
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x23F5110
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayerMasks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LayerMasks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayerMasks*, creationType>()));
    }
  }; // LayerMasks
  #pragma pack(pop)
  // Writing MetadataGetter for method: LayerMasks::GetLayerMask
  // Il2CppName: GetLayerMask
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (*)(::Il2CppString*)>(&LayerMasks::GetLayerMask)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMasks*), "GetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: LayerMasks::GetLayerMask
  // Il2CppName: GetLayerMask
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (*)(int)>(&LayerMasks::GetLayerMask)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMasks*), "GetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: LayerMasks::GetLayer
  // Il2CppName: GetLayer
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&LayerMasks::GetLayer)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMasks*), "GetLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: LayerMasks::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LayerMasks::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMasks*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LayerMasks::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LayerMasks::*)()>(&LayerMasks::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMasks*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LayerMasks::*)()>(&LayerMasks::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMasks*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LayerMasks*, "", "LayerMasks");
