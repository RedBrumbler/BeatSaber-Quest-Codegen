// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: TrackClipTypeAttribute
  class TrackClipTypeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TrackClipTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackClipTypeAttribute*, "UnityEngine.Timeline", "TrackClipTypeAttribute");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackClipTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10DEEE0
  class TrackClipTypeAttribute : public ::System::Attribute {
    public:
    public:
    // public readonly System.Type inspectedType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* inspectedType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Boolean allowAutoCreate
    // Size: 0x1
    // Offset: 0x18
    bool allowAutoCreate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Type inspectedType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_inspectedType();
    // Get instance field reference: public readonly System.Boolean allowAutoCreate
    [[deprecated("Use field access instead!")]] bool& dyn_allowAutoCreate();
    // public System.Void .ctor(System.Type clipClass)
    // Offset: 0x2AE27E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackClipTypeAttribute* New_ctor(::System::Type* clipClass) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TrackClipTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackClipTypeAttribute*, creationType>(clipClass)));
    }
    // public System.Void .ctor(System.Type clipClass, System.Boolean allowAutoCreate)
    // Offset: 0x2AE2814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackClipTypeAttribute* New_ctor(::System::Type* clipClass, bool allowAutoCreate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TrackClipTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackClipTypeAttribute*, creationType>(clipClass, allowAutoCreate)));
    }
  }; // UnityEngine.Timeline.TrackClipTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(TrackClipTypeAttribute), 24 + sizeof(bool)> __UnityEngine_Timeline_TrackClipTypeAttributeSizeCheck;
  static_assert(sizeof(TrackClipTypeAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackClipTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackClipTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
