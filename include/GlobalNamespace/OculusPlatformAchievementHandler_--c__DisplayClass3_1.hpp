// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgress
  class AchievementProgress;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_1");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass3_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformAchievementHandler::$$c__DisplayClass3_1 : public ::Il2CppObject {
    public:
    public:
    // public Oculus.Platform.Models.AchievementProgress achievement
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::AchievementProgress* achievement;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::AchievementProgress*) == 0x8);
    public:
    // Creating conversion operator: operator ::Oculus::Platform::Models::AchievementProgress*
    constexpr operator ::Oculus::Platform::Models::AchievementProgress*() const noexcept {
      return achievement;
    }
    // Get instance field reference: public Oculus.Platform.Models.AchievementProgress achievement
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::AchievementProgress*& dyn_achievement();
    // public System.Void .ctor()
    // Offset: 0x1562A94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAchievementHandler::$$c__DisplayClass3_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAchievementHandler::$$c__DisplayClass3_1*, creationType>()));
    }
    // System.Boolean <GetUnlockedAchievements>b__1(AchievementSO x)
    // Offset: 0x1562A9C
    bool $GetUnlockedAchievements$b__1(::GlobalNamespace::AchievementSO* x);
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass3_1
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass3_1), 16 + sizeof(::Oculus::Platform::Models::AchievementProgress*)> __GlobalNamespace_OculusPlatformAchievementHandler_$$c__DisplayClass3_1SizeCheck;
  static_assert(sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass3_1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1::$GetUnlockedAchievements$b__1
// Il2CppName: <GetUnlockedAchievements>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1::*)(::GlobalNamespace::AchievementSO*)>(&GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1::$GetUnlockedAchievements$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "AchievementSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1*), "<GetUnlockedAchievements>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
