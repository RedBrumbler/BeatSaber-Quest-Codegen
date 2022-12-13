// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayersModel
  class MockPlayersModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AppInitScenesTransitionSetupDataSO
  class AppInitScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO*, "", "AppInitScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AppInitScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AppInitScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Nested type: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType
    struct AppInitOverrideStartType;
    // Nested type: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData
    class AppInitSceneSetupData;
    // public System.Void .ctor()
    // Offset: 0x15443E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppInitScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AppInitScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppInitScenesTransitionSetupDataSO*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x1544278
    void Init();
    // public System.Void InitAsAppStart()
    // Offset: 0x15442EC
    void InitAsAppStart();
    // public System.Void __Init(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType appInitOverrideStartType, MockPlayersModel mockPlayersModel)
    // Offset: 0x1544360
    void __Init(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType, ::GlobalNamespace::MockPlayersModel* mockPlayersModel);
  }; // AppInitScenesTransitionSetupDataSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart
// Il2CppName: InitAsAppStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*), "InitAsAppStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init
// Il2CppName: __Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType, ::GlobalNamespace::MockPlayersModel*)>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init)> {
  static const MethodInfo* get() {
    static auto* appInitOverrideStartType = &::il2cpp_utils::GetClassFromName("", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType")->byval_arg;
    static auto* mockPlayersModel = &::il2cpp_utils::GetClassFromName("", "MockPlayersModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*), "__Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appInitOverrideStartType, mockPlayersModel});
  }
};
