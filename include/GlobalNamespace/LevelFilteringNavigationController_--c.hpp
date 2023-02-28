// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelFilteringNavigationController
#include "GlobalNamespace/LevelFilteringNavigationController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController::$$c*, "", "LevelFilteringNavigationController/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LevelFilteringNavigationController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LevelFilteringNavigationController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LevelFilteringNavigationController/<>c <>9
    static ::GlobalNamespace::LevelFilteringNavigationController::$$c* _get_$$9();
    // Set static field: static public readonly LevelFilteringNavigationController/<>c <>9
    static void _set_$$9(::GlobalNamespace::LevelFilteringNavigationController::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__53_0
    static ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__53_0
    static void _set_$$9__53_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x154A844
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x154A8A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelFilteringNavigationController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelFilteringNavigationController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelFilteringNavigationController::$$c*, creationType>()));
    }
    // System.String <SelectAnnotatedBeatmapLevelCollection>b__53_0(IBeatmapLevelPack pack)
    // Offset: 0x154A8B0
    ::StringW $SelectAnnotatedBeatmapLevelCollection$b__53_0(::GlobalNamespace::IBeatmapLevelPack* pack);
  }; // LevelFilteringNavigationController/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelFilteringNavigationController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LevelFilteringNavigationController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelFilteringNavigationController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelFilteringNavigationController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelFilteringNavigationController::$$c::$SelectAnnotatedBeatmapLevelCollection$b__53_0
// Il2CppName: <SelectAnnotatedBeatmapLevelCollection>b__53_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LevelFilteringNavigationController::$$c::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&GlobalNamespace::LevelFilteringNavigationController::$$c::$SelectAnnotatedBeatmapLevelCollection$b__53_0)> {
  static const MethodInfo* get() {
    static auto* pack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelFilteringNavigationController::$$c*), "<SelectAnnotatedBeatmapLevelCollection>b__53_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pack});
  }
};
