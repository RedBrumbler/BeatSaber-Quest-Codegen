// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Curve
#include "HoudiniEngineUnity/HEU_Curve.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: CurveNodeData
  class CurveNodeData;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.<>c__DisplayClass48_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_Curve::$$c__DisplayClass48_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> points
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass48_0
    $$c__DisplayClass48_0(System::Collections::Generic::List_1<UnityEngine::Vector3>* points_ = {}) noexcept : points{points_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::Vector3>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::Vector3>*() const noexcept {
      return points;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> points
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn_points();
    // System.Void <GetAllPoints>b__0(HoudiniEngineUnity.CurveNodeData transform)
    // Offset: 0x1497234
    void $GetAllPoints$b__0(HoudiniEngineUnity::CurveNodeData* transform);
    // public System.Void .ctor()
    // Offset: 0x149722C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Curve::$$c__DisplayClass48_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Curve::$$c__DisplayClass48_0*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.<>c__DisplayClass48_0
  #pragma pack(pop)
  static check_size<sizeof(HEU_Curve::$$c__DisplayClass48_0), 16 + sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*)> __HoudiniEngineUnity_HEU_Curve_$$c__DisplayClass48_0SizeCheck;
  static_assert(sizeof(HEU_Curve::$$c__DisplayClass48_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0*, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass48_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0::$GetAllPoints$b__0
// Il2CppName: <GetAllPoints>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0::*)(HoudiniEngineUnity::CurveNodeData*)>(&HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0::$GetAllPoints$b__0)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "CurveNodeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0*), "<GetAllPoints>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Curve::$$c__DisplayClass48_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!