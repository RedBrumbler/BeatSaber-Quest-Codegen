// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LayerMask
  // [NativeHeaderAttribute] Offset: D90318
  // [RequiredByNativeCodeAttribute] Offset: D90318
  // [NativeHeaderAttribute] Offset: D90318
  // [NativeClassAttribute] Offset: D90318
  struct LayerMask/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xD93BE4
    // private System.Int32 m_Mask
    // Size: 0x4
    // Offset: 0x0
    int m_Mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LayerMask
    constexpr LayerMask(int m_Mask_ = {}) noexcept : m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Mask;
    }
    // public System.Int32 get_value()
    // Offset: 0xF08030
    int get_value();
    // public System.Void set_value(System.Int32 value)
    // Offset: 0xF08038
    void set_value(int value);
    // static public System.String LayerToName(System.Int32 layer)
    // Offset: 0x1C0A294
    static ::Il2CppString* LayerToName(int layer);
    // static public System.Int32 NameToLayer(System.String layerName)
    // Offset: 0x1C0A2D4
    static int NameToLayer(::Il2CppString* layerName);
  }; // UnityEngine.LayerMask
  #pragma pack(pop)
  static check_size<sizeof(LayerMask), 0 + sizeof(int)> __UnityEngine_LayerMaskSizeCheck;
  static_assert(sizeof(LayerMask) == 0x4);
  // Writing MetadataGetter for method: LayerMask::get_value
  // Il2CppName: get_value
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LayerMask::*)()>(&LayerMask::get_value)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMask), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LayerMask::set_value
  // Il2CppName: set_value
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LayerMask::*)(int)>(&LayerMask::set_value)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMask), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: LayerMask::LayerToName
  // Il2CppName: LayerToName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&LayerMask::LayerToName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMask), "LayerToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: LayerMask::NameToLayer
  // Il2CppName: NameToLayer
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&LayerMask::NameToLayer)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LayerMask), "NameToLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LayerMask, "UnityEngine", "LayerMask");
