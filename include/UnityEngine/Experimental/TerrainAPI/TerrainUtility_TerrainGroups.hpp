// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainGroups");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainGroups
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainUtility::TerrainGroups : public ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B60044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::TerrainGroups* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::TerrainGroups*, creationType>()));
    }
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainGroups
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
