// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLocalActivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory*, "", "MultiplayerLocalActivePlayerFacade/Factory");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerLocalActivePlayerFacade/Factory
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerFacade::Factory : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState, ::GlobalNamespace::MultiplayerLocalActivePlayerFacade*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13E5EB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerFacade::Factory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade::Factory*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerFacade/Factory
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
