// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectsInTimeRowProcessor
#include "GlobalNamespace/BeatmapObjectsInTimeRowProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SliderData
  class SliderData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0*, "", "BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Single currentTimeSliceTime
    // Size: 0x4
    // Offset: 0x10
    float currentTimeSliceTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return currentTimeSliceTime;
    }
    // Get instance field reference: public System.Single currentTimeSliceTime
    [[deprecated("Use field access instead!")]] float& dyn_currentTimeSliceTime();
    // public System.Void .ctor()
    // Offset: 0x26ECB60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0*, creationType>()));
    }
    // System.Boolean <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1(SliderData tail)
    // Offset: 0x26ED02C
    bool $HandleCurrentTimeSliceColorNotesDidFinishTimeSlice$b__1(::GlobalNamespace::SliderData* tail);
  }; // BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0), 16 + sizeof(float)> __GlobalNamespace_BeatmapObjectsInTimeRowProcessor_$$c__DisplayClass17_0SizeCheck;
  static_assert(sizeof(BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0::$HandleCurrentTimeSliceColorNotesDidFinishTimeSlice$b__1
// Il2CppName: <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0::*)(::GlobalNamespace::SliderData*)>(&GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0::$HandleCurrentTimeSliceColorNotesDidFinishTimeSlice$b__1)> {
  static const MethodInfo* get() {
    static auto* tail = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor::$$c__DisplayClass17_0*), "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tail});
  }
};
