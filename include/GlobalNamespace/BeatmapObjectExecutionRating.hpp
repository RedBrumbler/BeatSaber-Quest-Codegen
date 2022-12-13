// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRating
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectExecutionRating : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return time;
    }
    // Get instance field reference: private readonly System.Single <time>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$time$k__BackingField();
    // public System.Single get_time()
    // Offset: 0x15786E8
    float get_time();
    // protected System.Void .ctor(System.Single time)
    // Offset: 0x15786F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRating* New_ctor(float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRating*, creationType>(time)));
    }
  }; // BeatmapObjectExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRating), 16 + sizeof(float)> __GlobalNamespace_BeatmapObjectExecutionRatingSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRating) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectExecutionRating::*)()>(&GlobalNamespace::BeatmapObjectExecutionRating::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRating*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRating::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
