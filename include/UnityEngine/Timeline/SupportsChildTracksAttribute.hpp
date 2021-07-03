// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SupportsChildTracksAttribute
  // [AttributeUsageAttribute] Offset: DD77F0
  class SupportsChildTracksAttribute : public System::Attribute {
    public:
    // public readonly System.Type childType
    // Size: 0x8
    // Offset: 0x10
    System::Type* childType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly System.Int32 levels
    // Size: 0x4
    // Offset: 0x18
    int levels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SupportsChildTracksAttribute
    SupportsChildTracksAttribute(System::Type* childType_ = {}, int levels_ = {}) noexcept : childType{childType_}, levels{levels_} {}
    // public System.Void .ctor(System.Type childType, System.Int32 levels)
    // Offset: 0x17E6F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportsChildTracksAttribute* New_ctor(System::Type* childType, int levels) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SupportsChildTracksAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportsChildTracksAttribute*, creationType>(childType, levels)));
    }
  }; // UnityEngine.Timeline.SupportsChildTracksAttribute
  #pragma pack(pop)
  static check_size<sizeof(SupportsChildTracksAttribute), 24 + sizeof(int)> __UnityEngine_Timeline_SupportsChildTracksAttributeSizeCheck;
  static_assert(sizeof(SupportsChildTracksAttribute) == 0x1C);
  // Writing MetadataGetter for method: SupportsChildTracksAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SupportsChildTracksAttribute::*)(System::Type*, int)>(&SupportsChildTracksAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SupportsChildTracksAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SupportsChildTracksAttribute::*)(System::Type*, int)>(&SupportsChildTracksAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SupportsChildTracksAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SupportsChildTracksAttribute*, "UnityEngine.Timeline", "SupportsChildTracksAttribute");
