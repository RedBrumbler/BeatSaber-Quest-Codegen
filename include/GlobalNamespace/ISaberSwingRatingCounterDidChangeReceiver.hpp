// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ISaberSwingRatingCounterDidChangeReceiver
  class ISaberSwingRatingCounterDidChangeReceiver {
    public:
    // Creating value type constructor for type: ISaberSwingRatingCounterDidChangeReceiver
    ISaberSwingRatingCounterDidChangeReceiver() noexcept {}
    // public System.Void HandleSaberSwingRatingCounterDidChange(ISaberSwingRatingCounter saberSwingRatingCounter, System.Single rating)
    // Offset: 0xFFFFFFFF
    void HandleSaberSwingRatingCounterDidChange(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter, float rating);
  }; // ISaberSwingRatingCounterDidChangeReceiver
  #pragma pack(pop)
  // Writing MetadataGetter for method: ISaberSwingRatingCounterDidChangeReceiver::HandleSaberSwingRatingCounterDidChange
  // Il2CppName: HandleSaberSwingRatingCounterDidChange
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ISaberSwingRatingCounterDidChangeReceiver::*)(GlobalNamespace::ISaberSwingRatingCounter*, float)>(&ISaberSwingRatingCounterDidChangeReceiver::HandleSaberSwingRatingCounterDidChange)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ISaberSwingRatingCounterDidChangeReceiver*), "HandleSaberSwingRatingCounterDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ISaberSwingRatingCounter*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*, "", "ISaberSwingRatingCounterDidChangeReceiver");
