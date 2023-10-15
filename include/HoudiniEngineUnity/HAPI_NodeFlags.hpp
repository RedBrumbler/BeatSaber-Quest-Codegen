// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_NodeFlags
  struct HAPI_NodeFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeFlags, "HoudiniEngineUnity", "HAPI_NodeFlags");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_NodeFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct HAPI_NodeFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_NodeFlags
    constexpr HAPI_NodeFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_ANY
    static constexpr const int HAPI_NODEFLAGS_ANY = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_ANY
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_ANY();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_ANY
    static void _set_HAPI_NODEFLAGS_ANY(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NONE
    static constexpr const int HAPI_NODEFLAGS_NONE = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NONE
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_NONE();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NONE
    static void _set_HAPI_NODEFLAGS_NONE(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_DISPLAY
    static constexpr const int HAPI_NODEFLAGS_DISPLAY = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_DISPLAY
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_DISPLAY();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_DISPLAY
    static void _set_HAPI_NODEFLAGS_DISPLAY(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_RENDER
    static constexpr const int HAPI_NODEFLAGS_RENDER = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_RENDER
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_RENDER();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_RENDER
    static void _set_HAPI_NODEFLAGS_RENDER(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_TEMPLATED
    static constexpr const int HAPI_NODEFLAGS_TEMPLATED = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_TEMPLATED
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_TEMPLATED();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_TEMPLATED
    static void _set_HAPI_NODEFLAGS_TEMPLATED(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_LOCKED
    static constexpr const int HAPI_NODEFLAGS_LOCKED = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_LOCKED
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_LOCKED();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_LOCKED
    static void _set_HAPI_NODEFLAGS_LOCKED(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_EDITABLE
    static constexpr const int HAPI_NODEFLAGS_EDITABLE = 16;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_EDITABLE
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_EDITABLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_EDITABLE
    static void _set_HAPI_NODEFLAGS_EDITABLE(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_BYPASS
    static constexpr const int HAPI_NODEFLAGS_BYPASS = 32;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_BYPASS
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_BYPASS();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_BYPASS
    static void _set_HAPI_NODEFLAGS_BYPASS(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NETWORK
    static constexpr const int HAPI_NODEFLAGS_NETWORK = 64;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NETWORK
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_NETWORK();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NETWORK
    static void _set_HAPI_NODEFLAGS_NETWORK(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_GEOMETRY
    static constexpr const int HAPI_NODEFLAGS_OBJ_GEOMETRY = 128;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_GEOMETRY
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_OBJ_GEOMETRY();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_GEOMETRY
    static void _set_HAPI_NODEFLAGS_OBJ_GEOMETRY(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_CAMERA
    static constexpr const int HAPI_NODEFLAGS_OBJ_CAMERA = 256;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_CAMERA
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_OBJ_CAMERA();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_CAMERA
    static void _set_HAPI_NODEFLAGS_OBJ_CAMERA(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_LIGHT
    static constexpr const int HAPI_NODEFLAGS_OBJ_LIGHT = 512;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_LIGHT
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_OBJ_LIGHT();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_LIGHT
    static void _set_HAPI_NODEFLAGS_OBJ_LIGHT(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_SUBNET
    static constexpr const int HAPI_NODEFLAGS_OBJ_SUBNET = 1024;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_SUBNET
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_OBJ_SUBNET();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_OBJ_SUBNET
    static void _set_HAPI_NODEFLAGS_OBJ_SUBNET(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_SOP_CURVE
    static constexpr const int HAPI_NODEFLAGS_SOP_CURVE = 2048;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_SOP_CURVE
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_SOP_CURVE();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_SOP_CURVE
    static void _set_HAPI_NODEFLAGS_SOP_CURVE(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_SOP_GUIDE
    static constexpr const int HAPI_NODEFLAGS_SOP_GUIDE = 4096;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_SOP_GUIDE
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_SOP_GUIDE();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_SOP_GUIDE
    static void _set_HAPI_NODEFLAGS_SOP_GUIDE(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_TOP_NONSCHEDULER
    static constexpr const int HAPI_NODEFLAGS_TOP_NONSCHEDULER = 8192;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_TOP_NONSCHEDULER
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_TOP_NONSCHEDULER();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_TOP_NONSCHEDULER
    static void _set_HAPI_NODEFLAGS_TOP_NONSCHEDULER(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // static field const value: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NON_BYPASS
    static constexpr const int HAPI_NODEFLAGS_NON_BYPASS = 16384;
    // Get static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NON_BYPASS
    static ::HoudiniEngineUnity::HAPI_NodeFlags _get_HAPI_NODEFLAGS_NON_BYPASS();
    // Set static field: static public HoudiniEngineUnity.HAPI_NodeFlags HAPI_NODEFLAGS_NON_BYPASS
    static void _set_HAPI_NODEFLAGS_NON_BYPASS(::HoudiniEngineUnity::HAPI_NodeFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_NodeFlags
  #pragma pack(pop)
  static check_size<sizeof(HAPI_NodeFlags), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_NodeFlagsSizeCheck;
  static_assert(sizeof(HAPI_NodeFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"