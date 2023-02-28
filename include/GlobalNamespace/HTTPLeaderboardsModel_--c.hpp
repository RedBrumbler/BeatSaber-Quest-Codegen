// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
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
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HTTPLeaderboardsModel::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HTTPLeaderboardsModel::$$c*, "", "HTTPLeaderboardsModel/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HTTPLeaderboardsModel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HTTPLeaderboardsModel::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static ::GlobalNamespace::HTTPLeaderboardsModel::$$c* _get_$$9();
    // Set static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static void _set_$$9(::GlobalNamespace::HTTPLeaderboardsModel::$$c* value);
    // Get static field: static public System.Func`2<BeatSaberAPI.DataTransferObjects.LeaderboardEntry,System.String> <>9__10_0
    static ::System::Func_2<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::StringW>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<BeatSaberAPI.DataTransferObjects.LeaderboardEntry,System.String> <>9__10_0
    static void _set_$$9__10_0(::System::Func_2<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x13AAE78
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13AAEDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HTTPLeaderboardsModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsModel::$$c*, creationType>()));
    }
    // System.String <GetLeaderboardEntriesAsync>b__10_0(BeatSaberAPI.DataTransferObjects.LeaderboardEntry x)
    // Offset: 0x13AAEE4
    ::StringW $GetLeaderboardEntriesAsync$b__10_0(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry* x);
  }; // HTTPLeaderboardsModel/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::HTTPLeaderboardsModel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$$c::$GetLeaderboardEntriesAsync$b__10_0
// Il2CppName: <GetLeaderboardEntriesAsync>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::HTTPLeaderboardsModel::$$c::*)(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*)>(&GlobalNamespace::HTTPLeaderboardsModel::$$c::$GetLeaderboardEntriesAsync$b__10_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "LeaderboardEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel::$$c*), "<GetLeaderboardEntriesAsync>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
