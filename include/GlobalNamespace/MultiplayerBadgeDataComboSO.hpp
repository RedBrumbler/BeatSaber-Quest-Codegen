// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerBadgeDataMinMaxIntSO
#include "GlobalNamespace/MultiplayerBadgeDataMinMaxIntSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBadgeDataComboSO
  class MultiplayerBadgeDataComboSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataComboSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataComboSO*, "", "MultiplayerBadgeDataComboSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataComboSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBadgeDataComboSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
    public:
    // public System.Void .ctor()
    // Offset: 0x14C6834
    // Implemented from: MultiplayerBadgeDataMinMaxIntSO
    // Base method: System.Void MultiplayerBadgeDataMinMaxIntSO::.ctor()
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataComboSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerBadgeDataComboSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataComboSO*, creationType>()));
    }
    // protected override System.Int32 GetValue(MultiplayerPlayerResultsData result)
    // Offset: 0x14C6808
    // Implemented from: MultiplayerBadgeDataMinMaxIntSO
    // Base method: System.Int32 MultiplayerBadgeDataMinMaxIntSO::GetValue(MultiplayerPlayerResultsData result)
    int GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);
  }; // MultiplayerBadgeDataComboSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataComboSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataComboSO::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerBadgeDataComboSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(&GlobalNamespace::MultiplayerBadgeDataComboSO::GetValue)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataComboSO*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
