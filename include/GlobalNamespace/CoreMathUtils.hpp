// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CoreMathUtils
  class CoreMathUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CoreMathUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreMathUtils*, "", "CoreMathUtils");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CoreMathUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class CoreMathUtils : public ::Il2CppObject {
    public:
    // static field const value: static private System.Single kHalfJumpDistanceEpsilon
    static constexpr const float kHalfJumpDistanceEpsilon = 0.001;
    // Get static field: static private System.Single kHalfJumpDistanceEpsilon
    static float _get_kHalfJumpDistanceEpsilon();
    // Set static field: static private System.Single kHalfJumpDistanceEpsilon
    static void _set_kHalfJumpDistanceEpsilon(float value);
    // public System.Void .ctor()
    // Offset: 0x2BB6028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoreMathUtils* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CoreMathUtils::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoreMathUtils*, creationType>()));
    }
    // static public System.Single CalculateHalfJumpDurationInBeats(System.Single startHalfJumpDurationInBeats, System.Single maxHalfJumpDistance, System.Single noteJumpMovementSpeed, System.Single oneBeatDuration, System.Single noteJumpStartBeatOffset)
    // Offset: 0x2BB5F68
    static float CalculateHalfJumpDurationInBeats(float startHalfJumpDurationInBeats, float maxHalfJumpDistance, float noteJumpMovementSpeed, float oneBeatDuration, float noteJumpStartBeatOffset);
    // static public System.Single __CalculateHalfJumpDurationInBeatsV2(System.Single startHalfJumpDurationInBeats, System.Single maxHalfJumpDistance, System.Single noteJumpMovementSpeed, System.Single oneBeatDuration, System.Single noteJumpStartBeatOffset)
    // Offset: 0x2BB5FA8
    static float __CalculateHalfJumpDurationInBeatsV2(float startHalfJumpDurationInBeats, float maxHalfJumpDistance, float noteJumpMovementSpeed, float oneBeatDuration, float noteJumpStartBeatOffset);
    // static public System.Int32 __CalculateHalfJumpDurationInBeatsV1(System.Single startHalfJumpDurationInBeats, System.Single maxHalfJumpDistance, System.Single noteJumpMovementSpeed, System.Single oneBeatDuration, System.Single minHalfJumpDistance)
    // Offset: 0x2BB5FDC
    static int __CalculateHalfJumpDurationInBeatsV1(float startHalfJumpDurationInBeats, float maxHalfJumpDistance, float noteJumpMovementSpeed, float oneBeatDuration, float minHalfJumpDistance);
  }; // CoreMathUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CoreMathUtils::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CoreMathUtils::CalculateHalfJumpDurationInBeats
// Il2CppName: CalculateHalfJumpDurationInBeats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float, float)>(&GlobalNamespace::CoreMathUtils::CalculateHalfJumpDurationInBeats)> {
  static const MethodInfo* get() {
    static auto* startHalfJumpDurationInBeats = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxHalfJumpDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteJumpMovementSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* oneBeatDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteJumpStartBeatOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreMathUtils*), "CalculateHalfJumpDurationInBeats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration, noteJumpStartBeatOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV2
// Il2CppName: __CalculateHalfJumpDurationInBeatsV2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float, float)>(&GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV2)> {
  static const MethodInfo* get() {
    static auto* startHalfJumpDurationInBeats = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxHalfJumpDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteJumpMovementSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* oneBeatDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteJumpStartBeatOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreMathUtils*), "__CalculateHalfJumpDurationInBeatsV2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration, noteJumpStartBeatOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV1
// Il2CppName: __CalculateHalfJumpDurationInBeatsV1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float, float, float, float, float)>(&GlobalNamespace::CoreMathUtils::__CalculateHalfJumpDurationInBeatsV1)> {
  static const MethodInfo* get() {
    static auto* startHalfJumpDurationInBeats = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxHalfJumpDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteJumpMovementSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* oneBeatDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* minHalfJumpDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreMathUtils*), "__CalculateHalfJumpDurationInBeatsV1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration, minHalfJumpDistance});
  }
};
