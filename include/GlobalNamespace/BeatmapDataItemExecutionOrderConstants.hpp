// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItemExecutionOrderConstants
  class BeatmapDataItemExecutionOrderConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*, "", "BeatmapDataItemExecutionOrderConstants");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataItemExecutionOrderConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataItemExecutionOrderConstants : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 kBPMChangeBeatmapEventExecutionOrder
    static constexpr const int kBPMChangeBeatmapEventExecutionOrder = -1001;
    // Get static field: static public System.Int32 kBPMChangeBeatmapEventExecutionOrder
    static int _get_kBPMChangeBeatmapEventExecutionOrder();
    // Set static field: static public System.Int32 kBPMChangeBeatmapEventExecutionOrder
    static void _set_kBPMChangeBeatmapEventExecutionOrder(int value);
    // static field const value: static public System.Int32 kEarlySpawnRotationBeatmapEventExecutionOrder
    static constexpr const int kEarlySpawnRotationBeatmapEventExecutionOrder = -1000;
    // Get static field: static public System.Int32 kEarlySpawnRotationBeatmapEventExecutionOrder
    static int _get_kEarlySpawnRotationBeatmapEventExecutionOrder();
    // Set static field: static public System.Int32 kEarlySpawnRotationBeatmapEventExecutionOrder
    static void _set_kEarlySpawnRotationBeatmapEventExecutionOrder(int value);
    // static field const value: static public System.Int32 kCommonBeatmapEventExecutionOrder
    static constexpr const int kCommonBeatmapEventExecutionOrder = -100;
    // Get static field: static public System.Int32 kCommonBeatmapEventExecutionOrder
    static int _get_kCommonBeatmapEventExecutionOrder();
    // Set static field: static public System.Int32 kCommonBeatmapEventExecutionOrder
    static void _set_kCommonBeatmapEventExecutionOrder(int value);
    // static field const value: static public System.Int32 kCommonBeatmapObjectDataExecutionOrder
    static constexpr const int kCommonBeatmapObjectDataExecutionOrder = 100;
    // Get static field: static public System.Int32 kCommonBeatmapObjectDataExecutionOrder
    static int _get_kCommonBeatmapObjectDataExecutionOrder();
    // Set static field: static public System.Int32 kCommonBeatmapObjectDataExecutionOrder
    static void _set_kCommonBeatmapObjectDataExecutionOrder(int value);
    // static field const value: static public System.Int32 kLateSpawnRotationBeatmapEventExecutionOrder
    static constexpr const int kLateSpawnRotationBeatmapEventExecutionOrder = 1000;
    // Get static field: static public System.Int32 kLateSpawnRotationBeatmapEventExecutionOrder
    static int _get_kLateSpawnRotationBeatmapEventExecutionOrder();
    // Set static field: static public System.Int32 kLateSpawnRotationBeatmapEventExecutionOrder
    static void _set_kLateSpawnRotationBeatmapEventExecutionOrder(int value);
    // public System.Void .ctor()
    // Offset: 0x26FC9EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataItemExecutionOrderConstants* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataItemExecutionOrderConstants*, creationType>()));
    }
  }; // BeatmapDataItemExecutionOrderConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataItemExecutionOrderConstants::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
