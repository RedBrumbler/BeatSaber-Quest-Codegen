// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamNetworkPlayerModel
  class SteamNetworkPlayerModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamNetworkPlayerModel*, "", "SteamNetworkPlayerModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: SteamNetworkPlayerModel
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
    public:
    // public System.Void .ctor()
    // Offset: 0x139891C
    // Implemented from: PlatformNetworkPlayerModel
    // Base method: System.Void PlatformNetworkPlayerModel::.ctor()
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamNetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamNetworkPlayerModel*, creationType>()));
    }
  }; // SteamNetworkPlayerModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamNetworkPlayerModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
