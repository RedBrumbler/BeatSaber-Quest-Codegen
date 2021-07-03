// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: UseEditMode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeFieldAttribute
  class TimeFieldAttribute : public UnityEngine::PropertyAttribute {
    public:
    // Nested type: UnityEngine::Timeline::TimeFieldAttribute::UseEditMode
    struct UseEditMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
    struct UseEditMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: UseEditMode
      constexpr UseEditMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode None
      static UnityEngine::Timeline::TimeFieldAttribute::UseEditMode _get_None();
      // Set static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode None
      static void _set_None(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode value);
      // static field const value: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode ApplyEditMode
      static constexpr const int ApplyEditMode = 1;
      // Get static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode ApplyEditMode
      static UnityEngine::Timeline::TimeFieldAttribute::UseEditMode _get_ApplyEditMode();
      // Set static field: static public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode ApplyEditMode
      static void _set_ApplyEditMode(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode value);
    }; // UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
    #pragma pack(pop)
    static check_size<sizeof(TimeFieldAttribute::UseEditMode), 0 + sizeof(int)> __UnityEngine_Timeline_TimeFieldAttribute_UseEditModeSizeCheck;
    static_assert(sizeof(TimeFieldAttribute::UseEditMode) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD877C
    // private readonly UnityEngine.Timeline.TimeFieldAttribute/UseEditMode <useEditMode>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::Timeline::TimeFieldAttribute::UseEditMode useEditMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode) == 0x4);
    // Creating value type constructor for type: TimeFieldAttribute
    TimeFieldAttribute(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode useEditMode_ = {}) noexcept : useEditMode{useEditMode_} {}
    // Creating conversion operator: operator UnityEngine::Timeline::TimeFieldAttribute::UseEditMode
    constexpr operator UnityEngine::Timeline::TimeFieldAttribute::UseEditMode() const noexcept {
      return useEditMode;
    }
    // public UnityEngine.Timeline.TimeFieldAttribute/UseEditMode get_useEditMode()
    // Offset: 0x17E7264
    UnityEngine::Timeline::TimeFieldAttribute::UseEditMode get_useEditMode();
    // public System.Void .ctor(UnityEngine.Timeline.TimeFieldAttribute/UseEditMode useEditMode)
    // Offset: 0x17E726C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeFieldAttribute* New_ctor(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode useEditMode) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimeFieldAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeFieldAttribute*, creationType>(useEditMode)));
    }
  }; // UnityEngine.Timeline.TimeFieldAttribute
  #pragma pack(pop)
  static check_size<sizeof(TimeFieldAttribute), 16 + sizeof(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode)> __UnityEngine_Timeline_TimeFieldAttributeSizeCheck;
  static_assert(sizeof(TimeFieldAttribute) == 0x14);
  // Writing MetadataGetter for method: TimeFieldAttribute::get_useEditMode
  // Il2CppName: get_useEditMode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TimeFieldAttribute::UseEditMode (TimeFieldAttribute::*)()>(&TimeFieldAttribute::get_useEditMode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TimeFieldAttribute*), "get_useEditMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: TimeFieldAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TimeFieldAttribute::*)(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode)>(&TimeFieldAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TimeFieldAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimeFieldAttribute::UseEditMode>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TimeFieldAttribute::*)(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode)>(&TimeFieldAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TimeFieldAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimeFieldAttribute::UseEditMode>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeFieldAttribute*, "UnityEngine.Timeline", "TimeFieldAttribute");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeFieldAttribute::UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
