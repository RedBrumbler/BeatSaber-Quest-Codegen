// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformLeaderboardsHandler
#include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c*, "", "OculusPlatformLeaderboardsHandler/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformLeaderboardsHandler/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformLeaderboardsHandler::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OculusPlatformLeaderboardsHandler/<>c <>9
    static ::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c* _get_$$9();
    // Set static field: static public readonly OculusPlatformLeaderboardsHandler/<>c <>9
    static void _set_$$9(::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c* value);
    // Get static field: static public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.LeaderboardEntryList> <>9__3_0
    static typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>::Callback* _get_$$9__3_0();
    // Set static field: static public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.LeaderboardEntryList> <>9__3_0
    static void _set_$$9__3_0(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>::Callback* value);
    // static private System.Void .cctor()
    // Offset: 0x1383400
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1383464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__3_0(Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList> message)
    // Offset: 0x138346C
    void $_ctor$b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message);
  }; // OculusPlatformLeaderboardsHandler/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::$_ctor$b__3_0
// Il2CppName: <.ctor>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c::$_ctor$b__3_0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntryList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c*), "<.ctor>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
